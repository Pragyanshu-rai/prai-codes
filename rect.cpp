#include<iostream>
using namespace std;

class rect
{
    public:
        float length, breadth;
    rect(float length, float breadth)
    {
        this->length = length;
        this->breadth = breadth;    
    }
    float area()
    {
        return (this->length)*(this->breadth);    
    }
    float peri()
    {
        return (2*(this->length + this->breadth));    
    }
};

int main()
{
    float length, breadth;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    rect r1(length, breadth);
    cout << "area : "<<r1.area()<<endl;
    cout << "peri : "<<r1.peri()<<endl;
    return 0;
}
