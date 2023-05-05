#include <iostream>
#include <string>
using namespace std;

int main(){
    // //! 自动判断是否读取到末尾
    // int a;
    // cin >> a;
    // while(!cin.fail()){
    //     cout << a << endl;
    //     cin >> a;
    // }
    //! cin.getline()超尾报错
    char a[30] = {0};
    cin.getline(a, 10);
    for( int i=0; i<10; i++ )
        cout << a[i] << " ";
    cout << endl;
    if(cin.eof())
        cout << "eof!" << endl;
    if(cin.fail())
        cout << "fail!" << endl; //超尾报fail
    if(cin.bad())
        cout << "bad!" << endl;
    cin.clear();
    char b[30] = {0};
    cin.getline(b,10);  //clear完会继续读入，没有丢弃的字符
    for( int i=0; i<10; i++ )
        cout << b[i] << " ";
    if(cin.eof())
        cout << "eof!" << endl;
    if(cin.fail())
        cout << "fail!" << endl;
    if(cin.bad())
        cout << "bad!" << endl;
    return 0;
}