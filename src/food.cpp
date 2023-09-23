#include <iostream>
#include "food.h"

food::food(int x, float y, float z, float a){
    calories = x;
    protein = y;
    carbs = z;
    fat = a;
}

void food::eatFood(int _cals, float _carbs, float _fat, float _protein){
    _cals += calories;
    _carbs += carbs;
    _fat += fat;
    _protein += protein;   
}