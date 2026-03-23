#include<iostream>
using namespace std;
bool powerrrr(int n){
    if(n==1){
        return true;
    }
    else if(n<=0||n%2!=0){
        return false;
    }
    return powerrrr(n/2);
}
int main(){
    int res;
    res=powerrrr(10);
    if(res==true){
        cout<<"the number is the power of 2"<<endl;
    }
    else{
        cout<<"not power of 2";
    }
    
}
