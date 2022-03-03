#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,7,5};
    int S = 12; 
    int n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++){
        int sum =a[i];
        for(int j=i+1;j<n;j++ ){
            sum=sum+a[j];
            if(sum==S){
            cout<<"index are "<<i<<" "<<j<<endl;
            }
        }
        
    }
}