#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[]={2,1,7,6};
    int n=4;
    sort(a,a+n);
    for(int i =0;i<n;i++){
    cout<<a[i]<<" ";
    }
}