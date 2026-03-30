#include "bits\stdc++.h"
using namespace std;\
bool is_prime(int num){
    int fac=1;
    if(num>10){
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0) fac=fac+1;
            else if(num/i==i) continue;
        }
    }
    else if(num<=10){
        for(int i=2;i<=num;i++){
            if(num%i==0) fac=fac+1;
        }
    }
    if(fac>2) return false;
    else return true;
}
int main(){
    int x;
    cin>>x;
    if(is_prime(x))cout<<"Is a Prime No.: ";
    else cout<<"Not a Prime No.: ";
    return 0;

}