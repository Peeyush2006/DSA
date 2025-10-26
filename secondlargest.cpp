#include<iostream>
using namespace std;
int main(){
    int arr[]={12, 35, 1, 10, 34, 1};
     int n=sizeof(arr)/sizeof(arr[0]);
     int max1=INT32_MIN, max2=INT32_MIN;
     for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
         
    if (arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
     }
     if(max2==INT32_MIN){
         cout<<"No second largest element"<<endl;
     }else{
         cout<<"The second largest element is: "<<max2<<endl;
     }
     return 0;

}