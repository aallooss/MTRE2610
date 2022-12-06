#include<iostream>
#include<string>
#include <iomanip>
#include "Produce.h"

using namespace std;
class Fruit : public Produce
{
private:
    double sugarContent;
public:
    //constructor
    Fruit(string name, string country, double cost,
        double sugarContent) :Produce(name, country, cost)
    {
        this->sugarContent = sugarContent;
    }

    string getName()
    {
        return name;
    }
    //Calculate getTotalSugars method
    double getTotalSugars(double pounds)
    {
        return sugarContent * pounds;
    }
    //display method
    void display()
    {
        Produce::display();
        cout << "The per unit sugar content is " << sugarContent << " grams.\n";
    }
};