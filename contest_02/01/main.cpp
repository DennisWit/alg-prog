#include <cmath>

bool is_prime(int number) {
    int upper = std::sqrt(number);
    for (int i = 2; i <= upper; i++) {
        if (number % i == 0) return false;
    }
    return true;
}