#include <iostream>
using namespace std;
int main(){
    int target=8;
    
    int arr[6];
    cout<<"enter the array:"<<endl;
    for(int i=0;i<6;i++)
    cin>>arr[i];
    

    for(int i=0;i<6;i++){
        if(arr[i]==target){
            cout<<"at index "<<i;
            return 0;
        }
    }
    cout<<-1;
}