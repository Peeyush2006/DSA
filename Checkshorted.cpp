#include<iostream>
using namespace std;

bool isShorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
       
    }
   return true;
}
int main(){
    int arr[]={1,2,3,5,5};
    int n=5;
    cout<<(isShorted(arr,n)?"true":"false");
    
}