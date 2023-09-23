#include "iostream"
#pragma once

class food
{
    public:
        int calories;
        float protein;
        float carbs;
        float fat;
        void eatFood(int _cals, float _carbs, float _fat, float _protein);

        food(int x, float y, float z, float a);
};