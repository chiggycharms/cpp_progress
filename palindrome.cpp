#include <iostream>
#include <string>
using namespace std;
// working function
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
/* void palindrome(string a)
{
    int len, i, count = 0;
    len = a.length();
    int j = len - 1;
    for (i = 1; i < len + 1; i++)
    {
        if (a[i - 1] == a[j])
        {
            count++;
            j--;
        }
    }
    if (count == len)
    {
        cout << "Is Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
} */
bool palindrome(int a)
{
    int rev = 0,last;
    while(a!=0){
        last=a%10;
        if(rev>INT_MAX/10||rev<INT_MIN/10) return false;
        rev=(rev*10)+last;
        a=a/10;
    }
    if(a==rev)return true;
    else return false;
}

int main()
{
    cout<<palindrome(111);
    return 0;
};
