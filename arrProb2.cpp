/*Q2 - Given a vector arr[] sorted in increasing order of n Sizo and an integer x, find if there exists
a pair in the array whose sum is exactly x.*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,6,8,5};
    int n=5 ,c=0;
    int target=7;
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            c++;
            break;


        }else if(arr[i]<target){
            i++;
        }else{
            j++;
        }

        }
        if(c>0){
            cout<<"yes exist"<<endl;
        }else{
            cout<<"not found";
        }
    }

