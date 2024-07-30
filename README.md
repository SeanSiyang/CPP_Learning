# CPP_Learning

# CPP11&14

## 第三章
为了避免窄化转换引起的错误，使用C++的**列表记号**来进行初始化

```c++
double x {2.7}; // correct
int y {x}; // error: double --> int

int a {1000}; // correct
char b {a} // error: int --> char
```

当认为转换会导致错误，使用```{}```进行初始化，从而避免意外

列表记号也被称为**通用统一初始化**



> 以下内容来自第三版

四种初始化方式：
```c++
int x0 = 7.8;
int x1 {7.8};
int x2 = {7.8};
int x3 (7.8);
```

