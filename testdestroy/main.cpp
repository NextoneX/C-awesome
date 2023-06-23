#include<iostream>
using namespace std;
class TEST
{ 
    int num; 
public:
    TEST( int num=0); 
    TEST& increment( ) ;
    ~TEST( );
}; 
TEST::TEST(int num) : num(num)
{
    cout << num  << endl; 
} 
TEST& TEST::increment() 
{
    num++;
    return *this;
}
TEST::~TEST( )
{
    cout << num  << endl;
} 
int main( ) 
{
    TEST array[2]; 
    array[0].increment();
    array[1].increment().increment();
    return 0;
}