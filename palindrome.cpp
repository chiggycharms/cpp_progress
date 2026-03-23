#include<iostream>
#include<string>
using namespace std;
//working function
/*bool palindrome(string a){
    int i=0;
    int len=a.length();
    int j=len-1;
    while (i<j){
        if (a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
    
}
int main(){
    if (palindrome("madam")){
        cout<<"Is Palindrome";
    }
    
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}
*/
void palindrome(string a){
    int len,i,count=0;
    len=a.length();
    int j=len-1;
    for(i=1;i<len+1;i++){
        if(a[i-1]==a[j]){
            count++;
            j--;
        }
    }
    if(count==len){
        cout<<"Is Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

};
int main(){
    palindrome("lal");
    return 0;
};
