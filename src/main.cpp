#include "iostream"
#include "string.h"
#include "food.h"

int calories;
float carbohydrates;
float protein;
float fat;

food burger = food(418, 25.4, 30, 20.9);

int main(int argc, const char** argv) {
    std::cout << "What food would you like to eat?\n b = burger\n nb = not burger";

    return 0;
}