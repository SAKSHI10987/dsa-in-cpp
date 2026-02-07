#include <iostream>
using namespace std;
int main(){
    int n=8;
    int arr[]={1,2,3,6,5,7,8};
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(i==arr[j]){
                flag=1;
                break;
            }
        }

        if(flag==0){
            cout<<"missing number is "<<i;
        }
    }

}