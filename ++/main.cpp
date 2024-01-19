#include <iostream>
using namespace std;

class counter{
private:
    int value;
public: 
    counter():value(0) {}
    counter& operator++();  
    int operator++(int);    
    void reset()
    {
        value = 0;
    }
    operator int() const  
    {
        return value;
    }    
};

counter& counter::operator++()    
{     
    if (3 == value)
          value = 0;
    else
        value += 1;
    return *this;
}

int counter::operator++(int) 
{        
    cout << "!" << endl;
    int t = value;
    if (3 == value)
         value = 0;
    else
        value += 1;
    return t;
}

int main()
{
    counter a;   
    while (++a)  
         cout << "***\n";
    cout << a << endl;
    while (a++)  
         cout << "***\n";
    cout << a << endl;
    return 0;
}