#include <iostream>
#include <string>
using namespace std;

class test
{
private:
    /* data */
    int a;
public:
    static  test*  instance();
private:
    test(/* args */);
    ~test();
};
test* test::instance()
{

}
test::test(/* args */): a(0)
{
}

test::~test()
{
    cout << "private_destructor!" << endl;
}


int main(){
    test a;
    test b;
    return 0;
}