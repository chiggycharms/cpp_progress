#include "bits/stdc++.h"
using namespace std;
int main()
{
    vector<int> arr;
    arr.emplace_back(10);
    arr.emplace_back(20);
    arr.emplace_back(30);
    arr.emplace_back(40);
    arr.emplace_back(50);
    cout<<"size: "<<arr.size()<<endl;
    cout<<"front: "<<arr.front()<<endl;
    cout<<"back: "<<arr.back()<<endl;
    for(int i:arr){
        cout<<i<<' ';
    }
    cout<<endl;
    cout<<(2<<6)<<endl;
}