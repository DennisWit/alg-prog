#include <numeric>

std::tuple<int, int> reduce(int number1, int number2) {
    int z = std::gcd(number1, number2);
    return std::make_tuple(number1 / z, number2 / z);
}

std::tuple<int, int, int> find_lcm(int number1, int number2) {
    int z = std::lcm(number1, number2);
    return std::make_tuple(z, z / number1, z / number2);
}