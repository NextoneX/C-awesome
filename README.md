# Cpp-awesome
Record some awesome code in my C++ learning

## Item

### Initby','

​	An attempt to initialize a variable(vector) using ',' and '<<', which is inspired by `Eigen`. Now in `Myclass`, the variable can be initialize by:

 ```c++
 Myclass<int> a;
 a << 1, 2, 3;
 a.print(); // 1 2 3
 ```

