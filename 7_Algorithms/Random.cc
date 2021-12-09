#include <algorithm>
#include <iostream>
#include <random>
#include <string>
#include <vector>

int main()
{
    std::vector<int> my_vector(10, 0);

    std::random_device seed_generator;
    //std::mt19937 random_generator(seed_generator());
    std::mt19937 random_generator(42);
    std::uniform_int_distribution<int> random_distribution(-10, 10);

    for (std::size_t i = 0; i < 10; ++i)
    {
        my_vector[i] = random_distribution(random_generator);
    }

    // ....

    for (std::size_t i = 0; i < 10; ++i)
    {
        std::cout << my_vector[i] << std::endl;
    }

    return 0;
}
