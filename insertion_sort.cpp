#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,5,6,2,1,3,13};
    for(int i =1;i<7;i++){
        int cur=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>cur){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=cur;
        
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<"\t";
    }
}