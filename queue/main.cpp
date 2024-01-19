#include<iostream>
#include<vector>
using namespace std;


class Queue{
public:
    Queue(int capacity): capacity(capacity){
        data = vector<int>(capacity);
        size = head = end = 0;
    }
    bool push(int a){
        if(size != capacity){
            data[end] = a;
            end = (end + 1) % capacity;
            ++size;
            return true;
        }
        return false;
    }
    int pop(){
        if(size > 0){
            int temp = data[head];
            head = (head + 1) % capacity;
            --size;
            return temp;
        }
        return -1;
    }
    int count(){
        return size;
    }
    int size;
    int capacity;
    int head;
    int end;
    vector<int> data;
};



int main(){
    Queue a(10);
    for(int i = 0; i < 10; ++i){
        a.push(i);
    }
    cout << a.pop() << endl;
    a.push(101);
    cout << a.data[0] << endl << endl;
    cout << a.data[1] << endl << endl;
    for(int i = 0; i < 10; ++i){
        cout << a.pop() << endl;
    }
}