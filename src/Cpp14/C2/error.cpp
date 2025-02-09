// 习题：六种常见的错误

// 第一种，忘记include
//#include "../../../include/std_lib_facilities.h"

// int main() 
// {
//     std::cout << "Hello World\n";
//     keep_window_open();

//     return 0;
// }

/*
报错：E:\Code\Github\CPP_Learning\src\Cpp14\C2\error.cpp:9:5: error: 'keep_window_open' was not declared in this scope
    9 |     keep_window_open();
      |     ^~~~~~~~~~~~~~~~

Build finished with error(s).
 */

// 第二种，拼写错误头文件名
// #include "../../../include/std_facilities.h"

// int main() 
// {
//     std::cout << "Hello World\n";
//     keep_window_open();

//     return 0;
// }

/*
fatal error: ../../../include/std_facilities.h: No such file or directory
   23 | #include "../../../include/std_facilities.h"
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
 */

// 第三种，字符串缺少双引号
// #include "../../../include/std_lib_facilities.h"

// int main() 
// {
//     std::cout << "Hello World\n;
//     // keep_window_open();

//     return 0;
// }

/*报错
error: missing terminating " character
   45 |     std::cout << "Hello World\n;
      |                  ^~~~~~~~~~~~~~~
*/

// 第四种，关键字错误
// #include "../../../include/std_lib_facilities.h"

// integer main() 
// {
//     std::cout << "Hello World\n";
//     keep_window_open();

//     return 0;
// }

/**
 * 报错：error: 'integer' does not name a type
   60 | integer main()
      | ^~~~~~~
 * 
 */

// 第五种，将输出运算符写成小于运算符
// #include "../../../include/std_lib_facilities.h"

// int main() 
// {
//     std::cout < "Hello World\n";
//     //keep_window_open();

//     return 0;
// }

// 第六种，将双引号使用成单引号

// #include "../../../include/std_lib_facilities.h"

// int main() 
// {
//     std::cout << 'Hello World\n';
//     //keep_window_open();

//     return 0;
// }

/**
 * 报错：warning: character constant too long for its type
   92 |     std::cout << 'Hello World\n';
      |                  ^~~~~~~~~~~~~~~
 */