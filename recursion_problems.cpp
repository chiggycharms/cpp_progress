#include "bits/stdc++.h"
using namespace std;
void printName(int i,int j){
    if(i>j)return;
    cout<<"Sukhvir"<<endl;
    printName(i+1,j);
}
int main(){
    int n;
    cin>>n;
    printName(1,n);
}