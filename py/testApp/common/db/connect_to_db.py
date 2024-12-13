from mysql.connector import connection
from mysql.connector.cursor import MySQLCursorPrepared
from mysql.connector import Error

import configparser, datetime
from os.path import expanduser

def test():
    print('asdf')

def read_config(configFile='.config.ini',section='default'):
    parser = configparser.ConfigParser()
    configFile = f"/home/pi/{configFile}"
    parser.read(configFile,encoding = "utf-8")
    data = {}
    try:
        if parser.has_section(section):
            items = parser.items(section)
            # convert list of tuples into dictionary
            # [('keyone','valueone'),('keytwo','valuetwo')]
            data = dict(items)
            #data = {item[0]: item[1] for item in items}
            #data = dict((key, value) for key, value in items)
            
        else:
            raise Exception(f"{section} not found in {configFile}")
    except Exception as e:
        print(f"Error:{e}")
    return data

class dbConnection():
    def __init__(self):
        self.db_config = read_config()
        self.conn = connection.MySQLConnection(**self.db_config)
        self.curr = self.conn.cursor(cursor_class=MySQLCursorPrepared)

    def select_query(self,query):
        self.curr.execute(query)
        
        return self.curr

    def disconnect(self):
        try:
            self.conn.close()
            print("you have been disconnected")
        except Exception as e:
            print(f"DB Closing Error:{e}")
            return
        return "Closed"
