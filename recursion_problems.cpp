#include "bits/stdc++.h"
using namespace std;
/* void printName(int i,int j){
    if(i>j)return;
    cout<<"Sukhvir"<<endl;
    printName(i+1,j);
} */
/* void printNum(int x){
    if(x==0)return;
    cout<<x<<endl;
    printNum(--x);
} */
/* void printNum(int i,int x){
    if(i==x+1)return;
    cout<<i<<endl;
    printNum(i+1,x);
} */
/* int sumNum(int i, int x){
    if(x==0)return i;
    i=i+x;
    sumNum(i,x-1);

} */
int sumNum(int x){
    if(x==0) return 0;
    return x+sumNum(x-1);
}
int facNum(int x){
    if(x==1)return 1;
    return x*facNum(x-1);
}
void reverseArray(int l,int n,int arr[]){
    if(l>=n/2) return;
    swap(arr[l],arr[n-l-1]);
    reverseArray(l+1,n,arr);
}
/* void reverseString(int l,int n,string& str){
    if(l>=n/2) return;
    swap(str[l],str[n-l-1]);
    reverseString(l+1,n,str);
} */
bool isStringPalindrome(int l,string s){
    if(l>=s.size()/2)return true;
    if(s[l]!=s[s.size()-l-1])return false;
    return isStringPalindrome(l+1,s);
}
/* void fibonacci(int l,int n,vector<int> arr){
    if(l>n)return;
    arr.emplace_back(arr[l]+arr[l+1]);
    return fibonacci(l+1,n,arr);
} */
int fibonacci(int n){
    if(n<=1)return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cin>>n;
    //int arr[5]={1,2,3,4,5};
    //printName(1,n);
    //printNum(1,n);
    //cout<<sumNum(0,n);
    //cout<<facNum(n);
    //cout<<sumNum(n);
    /* reverseArray(0,5,arr);
    for(int i=0;i<5;i++) cout<<arr[i]<<' '; */
    /* string s,k;
    cin>>s;
    k=s; */
    //reverseString(0,s.size(),s);
    /* if(isStringPalindrome(0,s))cout<<"Is Palindrome."<<endl;
    else cout<<"Not Palindrome."<<endl; */
    /* vector<int>arr={0,1};
    fibonacci(0,n,arr);
    for(int i=0;i<arr.size();i++)cout<<arr[i]<<' '; */
    cout<<fibonacci(n);

}