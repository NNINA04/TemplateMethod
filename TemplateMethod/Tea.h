#pragma once

class Tea
    : public CaffeineBeverage
{
public:
    virtual void Brew()
    {
        cout << "Brew tea in hot water" << endl;
    }

    virtual void AddCondiments()
    {
        cout << "Add lemon" << endl;
    }
};