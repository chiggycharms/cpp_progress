#include <iostream>
#include<vector>
using namespace std;
int linear_search(int k){
    vector<int> arr={10,20,30,40,50,60};
    for(int i=0;i<arr.size();i++){
        if(k==arr[i]) return i;
    }
    return -1;
}
int main(){
    int key;
    cout<<"Enter Key to be Searched:";
    cin>>key;
    int res=linear_search(key);
    if(res!=-1) cout<<"Element found at: "<<res;
    else cout<<"Element not Found!";
}