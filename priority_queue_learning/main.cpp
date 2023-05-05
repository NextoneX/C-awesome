#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>> q;
    q.emplace(1,3);
    q.emplace(1,4);
    q.emplace(2,2);
    q.emplace(3,1);
    q.emplace(2,3);
    while(!q.empty()){
        cout << q.top().first << " " << q.top().second  << endl;
        q.pop();
    }
    cout << endl;
    return 0;
}
