#include<iostream>
#include<vector>

using namespace std;
int binary_search(int k,vector<int>& arr, int h, int l){
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid]<k) l=mid+1;
        else h=mid-1;
    }
    return -1;
}
int main(){
    int key;
    vector<int> arr={10,20,30,40,50,60};
    int l,h,mid;
    cout<<"Enter Key to be Searched:";
    cin>>key;
    l=0;
    h=arr.size()-1;
    int res=binary_search(key, arr,h,l);
    if(res!=-1) cout<<"Element found at: "<<res;
    else cout<<"Element not Found!";
}