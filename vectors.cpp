#include "bits/stdc++.h"
using namespace std;
void vector_print(vector<int>& arr){
/*     for(vector<int>::iterator i=arr.begin();i!=arr.end();i++){
        cout<<(*i)<<' ';
    } */
       for(auto i=arr.begin();i!=arr.end();i++){
        cout<<(*i)<<' ';
    }
}
int main(){
    vector<int> arr;
    cout<<"Enter the elements to be pushed (-1 to exit): ";
    while(true){
        int x;
        cin>>x;
        if(x==-1)break;
        arr.push_back(x);
    }
    vector_print(arr);
    return 0;

}