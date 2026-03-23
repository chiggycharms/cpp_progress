#include <iostream>
#include <vector>
using namespace std;
/* int sumOfallElements(vector <int> arr){
    int sum=0;
    for(int x:arr){
        sum+=x;
    }
    return sum;
}
int main(){
    vector <int> ar(3,5);
    cout<<"sum of all elements: "<<sumOfallElements(ar);
} */
int main()
{
    vector<int> arr;
    int x;
    cout << "enter -1 to stop" << endl;
    while (true)
    {
        cin >> x;
        if (x == -1)
            break;
        arr.push_back(x);
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
    vector<int> arr;
    cout << "0.size: " << arr.size() << endl;
    for (int i = 0; i < 10; i++)
        arr.push_back(i);
    cout << "10.size: " << arr.size() << endl;
    for (int i : arr)
        cout << arr[i] << endl;
    for (int i = 0; i < 10; i++)
        arr.pop_back();
    cout << "0.size: " << arr.size();

    return 0;
}
