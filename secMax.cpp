#include <iostream>
#include <climits>
using namespace std;
int main(){
    int Max=INT_MIN;
    int secMax=INT_MIN;
    
    int arr[6]={1,2,3,4,5,6};
    int i=0;
    while(i<6){
        Max= max(Max,arr[i]);
        i++;
    }

    int j=0;
    while(j<6){
        if(arr[j]!=Max){
            secMax=max(arr[j],secMax);
        }
        j++;
    }
    cout<<secMax;

}