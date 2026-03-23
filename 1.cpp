#include <iostream>
using namespace std;
/*If marks are less than 25, it prints "Grade: F."
If marks are between 25 and 44 (inclusive), it prints "Grade: E."
If marks are between 45 and 49 (inclusive), it prints "Grade: D."
If marks are between 50 and 59 (inclusive), it prints "Grade: C."
If marks are between 60 and 69 (inclusive), it prints "Grade: B."
If marks are 70 or higher, it prints "Grade: A."
If marks are outside the valid range, it prints "Invalid marks entered."
int main(){
    int marks;
    cout<<"Enter your marks!\n";
    cin>>marks;
    if(marks<25){
        cout<<"Grade: F.";
    }else if(marks<=44 && marks>=25){
        cout<<"Grade: E.";
    }else if(marks>=50 && marks<=59){
        cout<<"Grade: D.";
    }else if(marks>=60 && marks<=69){
        cout<<"Grade: C.";
    }else if(marks>=70){
        cout<<"Grade: A.";
    }else{
        cout<<"Invalid marks entered.";
    }
    return 0;
}*/
/*int main(){
    cout<<"Enter a number (1-7)";
    int n;
    cin>>n;
    switch(n){
        case 1:
        cout<<"Sunday!";
        break;
        case 2:
        cout<<"Monday!";
        break;
        case 3:
        cout<<"Tuesday!";
        break;
        case 4:
        cout<<"Wednesday!";
        break;
        case 5:
        cout<<"Thursday!";
        break;
        case 6:
        cout<<"Friday!";
        break;
        case 7:
        cout<<"Saturday!";
        break;
        default:
        cout<<"Invalid Input!";
    }
        return 0;
}*/
/* int main()
{
    char x;
    cout << "Enter yout Grade:\t";
    cin >> x;
    switch (x)
    {
    case 'A':
        cout << "Excellent!";
        break;
    case 'B':
        cout << "Good!";
        break;
    default:
        cout << "Poor!";
        break;
    }
} */
/* int main(){
/*     int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"Length: "<<len;
    return 0;
    string s="sukhvir";
    //int len=sizeof(s)/sizeof(s[0]);
    int i=0,len=0;
    while(s[i]!='\0'){
        len++;
        i++;
    }
    cout<<"Length: "<<s.length();
} */
/* class str
{
    string s;

public:
    int findStringLength(string s)
    {
        // cout<<"Length: "<<s.length();
        return s.length();
    }
};
int main()
{
    str obj;
    string s;
    cin >> s;
    cout << "Length: " << obj.findStringLength(s);
} */
/* int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"i: "<<i<<",j: "<<j<<endl;
        }
    }
} */
/* int main()
{
    int factorial=1,n;
    cin>>n;
    while(n>0){
        factorial*=n;
        n--;
    }
    cout<<"Factorial of "<<n<<" is "<<factorial;
    return 0;
}
 */
/* int sum(int &a){
    return a=a+10;
}
int main(){
    int x;
    cin>>x;
    cout<<"sum: "<<sum(x);
} */
/* int main(){
    for(int i=0;i<5;i++){
        cout<<"*****"<<endl;
    }
} */
/* double power(double base, int exp)
{
    if (exp == 0)
    return 1;
    if (exp == 1)
    return base;
    double half = power(base, exp / 2);
    if (exp % 2 == 0)
    {
        return half * half;
    }
    else{
        return half * half * base;
    }
}
int main(){
    double base;
    int exp;
    cout<<"Enter Base: ";
    cin>>base;
    cout<<"Enter Power: ";
    cin>>exp;
    cout<<power(base,exp);
} */

/* int main()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << k;
            }
            cout << endl;
        }
    }
} */
int main(){
/*     1
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
   2
   for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }*/
  /*3
  for(int i=0;i<5;i++){
    for (int j=0;j<=i;j++){
        cout<<j+1;
    }
    cout<<endl;
  }*/
/*     4
   int count=1;
   for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
        cout<<count;
    }
    count++;
    cout<<endl;
   } */
  /*5
  for(int i=0;i<5;i++){
    for(int j=4;j>=i;j--){
        cout<<"*";
    }
    cout<<endl;
  }*/
 /*6
 int count=1;
  for(int i=0;i<5;i++){
    for(int j=4;j>=i;j--){
        cout<<count;
        count++;
    }
    count=1;
    cout<<endl;
  }*/
 
}