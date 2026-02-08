#include <iostream>
using namespace std;

int main(){
    int k;
    cout<<"enter the number:";
    cin>>k;
    int arr[6]={2,4,-1,7,8,9};
    int n=6;
    
    while(k>0){
    int temp=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    k--;
}

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}