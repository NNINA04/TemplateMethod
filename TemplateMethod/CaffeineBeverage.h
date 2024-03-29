#pragma once

class CaffeineBeverage
{
public:
    void PrepareRecipe()
    {
        BoilWater();
        Brew();
        PourInCup();
        if (this->CustomerWantsCondiments())
            AddCondiments();
    }

    void BoilWater()
    {
        cout << "Boiling water" << endl;
    }

    virtual void Brew() = 0;

    virtual void PourInCup()
    {
        cout << "Pouring in a cup" << endl;
    }

    virtual void AddCondiments() = 0;

    // This is a hood that used for restrictions/conditions
    virtual bool CustomerWantsCondiments()
    {
        return true;
    }
};
