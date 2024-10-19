//
// Created by lianyikai on 2024/10/19.
//

#include "常量.h"
#include "iostream"

using namespace std;
/**
 *常量：记录程序中不能改变的数据
 * 定义常量的方法
 * 1.#define 宏常量 ： #define 常量命 常量值
 *   通常在文件的上方定义
 * 2.const 定义常量：  const 数据类型 常量名称 = 常量值
 *   通常在变量定义前加常量关键字修饰符，标识该变量不能修改的常量
 * */

//定义宏常量
#define day 7

int main(){

    const int hour = 24;

    cout << "一周有"<< day << "天"<< endl;

    cout << "一天有"<< hour << "小时"<<endl;


    return 0;
}