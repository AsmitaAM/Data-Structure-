#include<iostream>
using namespace std;
void display(int z[],int s){
    cout<<"Array is : \t";
    for(int i=0;i<s;i++){
        cout<<z[i]<<" ";
    }
    cout<<endl;
}
int* reverse(int a[],int s){
    static int b[10];
    int i=s-1,j=0;
    while(i>=0 && j<s){
        b[j]=a[i];
        i--;
        j++;
    }

    return b;
}
int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    int a[size];
    cout<<"enter array element : ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    display(a,size);
    int* c=reverse(a,size);
    
    cout<<"Reversed Array is : ";
    for(int i=0;i<size;i++){
        cout<<*(c+i)<<" ";
    }

}