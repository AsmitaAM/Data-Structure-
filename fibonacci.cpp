#include<iostream>
using namespace std;
int fib(int p){
    if(p<2){
        return 1;
    }
    else
    return fib(p-1)+fib(p-2);
}
int main(){
    int n;
    cout<<"enter n\n";
    cin>>n;
    cout<<"in fibonacci sequence element at n position is "<<fib(n);
}