#include<iostream>
using namespace std;
/* bool powerrrr(int n){
    if(n==1){
        return true;
    }
    else if(n<=0||n%2!=0){
        return false;
    }
    return powerrrr(n/2);
} */
void printNtimes(int x){
    if(x==0) return;
    cout<<x<<endl;
    printNtimes(--x);
}
int main(){
    int n;
    cin>>n;
    printNtimes(n);
    
    
}
