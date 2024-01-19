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
    static void test1(){
        cout << "test" << endl;
    }
    static void test1(int ){
        cout << "testint" << endl;
    }
};

class test: public counter
{
private:
    /* data */
public:
    test(/* args */);
    ~test();
    static void test1(int ){
        cout << "testint11" << endl;
    }
};

test::test(/* args */)
{
}

test::~test()
{
}



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
    int t = value;
    if (3 == value)
         value = 0;
    else
        value += 1;
    return t;
}

int main()
{
    test b;
    b.test1(); //error
    return 0;
}