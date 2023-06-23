#include<iostream>
#include<string>
using namespace std;
// 递归结束
template<typename T>
void showOne(T t)
{
	cout << t << endl;
}

template<typename T, typename...Ts>
void showOne(T t, Ts... ts) 
{
	cout << t << ", ";
	showOne(ts...);
}

template<typename... T>
void show(T... ts)
{
	showOne(ts...);
}

int main()
{
	string s("dddd");
	show("int", 2, 2.32, s); 
}
// https://blog.csdn.net/Nick_Zhang_CSDN/article/details/100810749

