/*Q3 - Given a vector arr[] sorted in increasing order. Return an array of squares of each
number sorted in increasing order. Whose Size of vector l<size<101..*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,6,9};
    int n=5;
    int result[n];
    int i=0,j=n-1,k=n-1;
    while(i<=j && k>=0){
        if(abs(arr[i]>arr[j])){
            result[k]=arr[i]*arr[i];
            i++;
            k--;
        }else{
            result[k]=arr[j]*arr[j];
            j--;
            k--;

        }
    }

for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
}
}