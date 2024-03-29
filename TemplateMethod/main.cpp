#include <iostream>

using namespace std;

#include "CaffeineBeverage.h"
#include "Tea.h"
#include "Coffee.h"

int main() 
{
    CaffeineBeverage* beverage1 = new Tea();
    CaffeineBeverage* beverage2 = new Coffee();

    beverage1->PrepareRecipe();
    //beverage2->PrepareRecipe();
}