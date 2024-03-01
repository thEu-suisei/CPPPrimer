#include <iostream>
#include "Chapter6.h"

using namespace std;

void mySWAP(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

int main()
{
    int a =5,b=10;
    int*r=&a,*s=&b;
    cout<<a<<"\t"<<b<<endl;
    mySWAP(r,s);
    cout<<a<<"\t"<<b<<endl;
    system("pause");
    return 0;
}

//分离式编译
// 编译 fact.cc：
// 首先，使用编译器编译 fact.cc，生成目标文件（Object File），这里假设使用的编译器是 GCC：

// g++ -c fact.cc -o fact.o
// 这条命令将会编译 fact.cc 并生成名为 fact.o 的目标文件。

// 编译 factMain.cc：
// 然后，使用编译器编译 factMain.cc，同样生成目标文件：

// g++ -c factMain.cc -o factMain.o
// 这条命令将会编译 factMain.cc 并生成名为 factMain.o 的目标文件。

// 链接目标文件：
// 最后，使用编译器将 fact.o 和 factMain.o 进行链接，生成可执行文件：

// g++ fact.o factMain.o -o factMain.exe