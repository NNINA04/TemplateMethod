#pragma once

class Coffee
    : public CaffeineBeverage
{
public:
    virtual void Brew()
    {
        cout << "Brew coffee in hot water" << endl;
    }

    virtual void AddCondiments()
    {
        cout << "Add sugar and milk" << endl;
    }
};