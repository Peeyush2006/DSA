/* QI - Given two vectors arrl[] and arr2[] of size m and n sorted in increasing order. Merge the
two arrays into a single sorted array of size m+n.*/
#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,3,5};
    int arr2[]={2,4,6,8};
    int i=0,j=0,k=0;
    int m=3,n=4;
    int result[m+n];
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            i++;
            k++;
        }else{
            result[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        result[k]=arr1[i];
        i++;
        k++;
    }
     while(j<n){
        result[k]=arr2[j];
        j++;
        k++;
    }

for(int i=0;i<(m+n);i++){
    cout<<result[i]<<"  ";
}
}