#include <iostream>
#include <vector>
template<typename T>
class MyClass {
public:
    MyClass& operator<<(const T& value) {
        a.push_back(value);
        return *this;
    }
    MyClass& operator,(const T& value) {
        a.push_back(value);
        return *this;
    }
    void print() const {
        for( int i = 0; i<a.size(); i++){
            std::cout << a[i] << " ";
        }
    }
private:
    std::vector<T> a;
};

int main() {
    MyClass<int> a;
    a << 1, 2, 3;
    a.print(); // 输出：a = 1, b = 2, c = 3
    return 0;
}
