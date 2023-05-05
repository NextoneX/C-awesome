#include <iostream>
using namespace std;
int main() {
    //const test
    //非指针非引用类型
    const int n1 = 0;
    auto n2 = 10;
    n2 = 99;  //赋值不报错
    decltype(n1) n3 = 20;
    // n3 = 5;  //赋值报错
    //指针类型
    const int *p1 = &n1;
    auto p2 = p1;
    // *p2 = 66;  //赋值报错
    decltype(p1) p3 = p1;
    // *p3 = 19;  //赋值报错

    // & test
    int n = 10;
    int &r1 = n;
    //auto推导
    auto r2 = r1;
    r2 = 20;
    cout << n << ", " << r1 << ", " << r2 << endl;
    auto & r0 = r1;
    r0 = 0;
    cout << n << ", " << r0 << ", " << r1 << endl;
    //decltype推导
    decltype(r1) r3 = n;
    r3 = 99;
    cout << n << ", " << r1 << ", " << r3 << endl;
    cout << endl;

    // const * and * const
    //常量指针
    const char *a = "abcd";
    ++a;
    char const *b = a; //b和a一样
    ++b;
    //指针常量
    char * p = new char[3];
    p[0] = 'a'; p[1] = 'b'; p[2] = '\0';
    char * const c = p;
    // ++c; //修改常量报错
    *c = 'm';
    cout << a << " " << b << " " << c << endl;
    //引用的本质是指针常量
    
    delete [] p;

    //无法将 int * 转化为 const int *
    int i = 42, *pi = &i;
    int* const & tmp2 = pi;//ture
    // const int *& tmp1 = pi; //err
    
    return 0;
}