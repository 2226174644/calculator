#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <process.h>
#include <math.h>
#include <fstream>
#include <windows.h>
#include <string>
#include <QString>
#define MAX  100

using namespace std;



class ParseException {};
class  polynomial
{
public:
    double Coefficient;
    int    index;
    int    Rauk;
    polynomial *next;
};

class calculator{

public:
    calculator();
    double Realization(char *str);  //确定系数及其正负
    void push(polynomial *head,double Coefficient,int index) ;//新项加入单链表
    QString Build(QString a, int mp);//构建多项式
    void xue(polynomial *head);//多项式合并同幂项
    void del(polynomial *DLList1,double Coefficient,int index);//删除
    void sort(polynomial *DLList1);//降幂排序
    void Inverselist(polynomial *DLList1);//逆置
    QString algorithm(int CD);//加/减计算
    QString  Formattedoutput(polynomial *abc);//格式化输出
    void quick(polynomial *Ac);//清除指定多项式
    void clear();//清除所有多项式
    bool check(QString strr);//检查字符串合法性

private:
    polynomial *Aa=new polynomial;
    polynomial *Bb=new polynomial;
    polynomial *Cc=new polynomial;
};

#endif // CALCULATOR_H
