#include<iostream>
using namespace std;

int fnum=0;
int fib_num(int n)
{
    fnum++;
    if(n<0) return 0;
    if(n==1 || n==0) return 1;
    return fib_num(n-1)+fib_num(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Fibonacci value :"<<fib_num(n)<<"\n";
    cout<<"Steps required using recursion :"<<fnum<<"\n";
    return 0;
}
