#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int i=0 ,j=5;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    for(int s=0;s<6;s++){
        cout<<arr[s];
    }
    

    
    




    return 0;
}