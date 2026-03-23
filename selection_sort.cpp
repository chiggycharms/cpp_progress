#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,8,5,3,9,4};
    for(int i=0;i<5;i++){
        int low=i;
        for(int j=i+1;j<6;j++){
            if(arr[j]<arr[low])
            low=j;
        }
        swap(arr[i],arr[low]);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<'\t';
    }
}