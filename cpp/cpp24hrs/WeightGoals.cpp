#include <iostream>

int main()
{
    float current_weight, target_weight;

    float goal[4] = {.9,.75,.5,.25};
    const int size_of_goal_array = sizeof(goal)/sizeof(goal[0]);

    /*
    float goal[4];
    goal[0] = 0.9;
    goal[1] = .75;
    goal[2] = .5;
    goal[3] = .25;
    */
    std::cout << "What is your current weight: ";
    std::cin >> current_weight;

    std::cout << "What is your target weight: ";
    std::cin >> target_weight;

    for(int goal_count = 0; goal_count < size_of_goal_array; goal_count++)
    {
        float loss = (current_weight - target_weight) * goal[goal_count];
        std::cout << "Goal "<< goal_count << ": ";
        std::cout << target_weight + loss << std::endl;
    }

    return 0;
}
