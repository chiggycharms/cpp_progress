#include "bits\stdc++.h"
using namespace std;\
int count_prime(int num){
    int fac=0,count=0;
    for(int j=1;j<=num;j++){

        if(j>10){
            for(int i=1;i<=sqrt(j);i++){
                if(j%i==0){
                    fac=fac+1;
                    if(j/i!=i)fac=fac+1;
                }
            }
        }
        else if(j<=10){
            for(int i=1;i<=j;i++){
                if(j%i==0) fac=fac+1;
            }
        }
        if(fac==2) count=count+1;
        fac=0;
    }
    return count;
}
int main(){
    int x;
    cin>>x;
    cout<<"No. of Prime upto (number): "<<count_prime(x);
    return 0;

}