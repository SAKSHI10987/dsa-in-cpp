#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int i=0 ,j=4;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    for(int s=0;s<5;s++){
        cout<<arr[s];
    }
    

    
    




    return 0;
}