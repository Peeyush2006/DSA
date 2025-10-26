#include<iostream>
using namespace std;
int main(){
    int a[5]={1,3,4,5};
    int size=4,pos=1,value=2;
    for(int i=size;i>pos;i--){
        a[i]=a[i-1];   
    }
    a[pos]=value;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
