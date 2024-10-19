//
// Created by lianyikai on 2024/10/19.
//

#include "Sizeof关键字.h"

/**
 * sizeof 可以统计数据类型所占内存大小
 * 语法 sizeof （数据类型/变量）
 * */
#include "iostream"

using namespace std;

int main(){
    //定义一个变量 a
    int a = 10;
    int aSize=sizeof a;

    short b = 11;
    int bSize=sizeof b;

    long c = 12;
    int cSize=sizeof c;

    long long d = 13;
    int dSize=sizeof d;

    int eSize=sizeof (long) ;

    cout << "a="<<a<<endl;
    cout << "b="<<b<<endl;
    cout << "c="<<c<<endl;
    cout << "d="<<d<<endl;
    cout << "a的内存大小是："<<aSize<<endl;
    cout << "b的内存大小是："<<bSize<<endl;
    cout << "c的内存大小是："<<cSize<<endl;
    cout << "d的内存大小是："<<dSize<<endl;
    cout << "e的内存大小是："<<eSize<<endl;
    return 0;
}
