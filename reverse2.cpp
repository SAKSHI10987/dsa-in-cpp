#include <iostream>
using namespace std;

int main(){
    int i=5,j=0;
    int arr[]={1,2,3,4,5,6};
    int temp[6];
    while(i>=0){
        temp[j]=arr[i];
        i--;
        j++;
    }
    
    int t=0;
    while(t<6){
        arr[t]=temp[t];
        t++;
    }

    for(int s=0;s<6;s++){
        cout<<arr[s];
    }



}