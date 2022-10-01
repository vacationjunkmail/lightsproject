#include <iostream>
#include <cstdlib>

int main()
{
    int one = 5;
    int two = 6;
    //int box[one][two] = {8,6,7,5,3,0,9,2,1,7,8,9,0,5,2}; //pre set the multidimensional array. Changed array value in loop with random.
    /*
    int box[one][two] = {
    {8,6,7},
    {5,3,0},
    {9,2,1},
    {7,8,9},
    {0,5,2}
    };
    */
    //xterm -T $TITLE -e
    int box[one][two];
    int max = 100;

    srand(time(0));

    for(int i = 0; i < one; i++)
    {
        for(int j = 0; j < two; j++)
        {

            box[i][j]= rand()%max;
            std::cout << "box["<<i<<"]["<<j<<"] = ";
            std::cout << box[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
