    #include<iostream>
    using namespace std;
    int merge(int arr[], int low,int mid, int high){
        int i=low,j=mid+1;
        while(i<=mid&&j<=high){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
                i++;
            }
            else if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        if(i>mid){
            
        }
    }
    int mergeSort(int arr[], int low, int high){
        if(low<high){
            int mid=low+(high-low)/2;
            mergeSort(arr,low,mid);
            mergeSort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
    }
    int binarySearch(int arr[],int l, int h){
        int key;
        cout<<"enter the element to search for\t";
        cin>>key;
        while(l<=h){
            int mid=l+(h-l)/2;//possible - (l+h)/2;
            if(arr[mid]==key) return mid;
            else if(key>arr[mid]){
                l=mid+1;
            }
            else if(arr[mid]>key){
                h=mid-1;
            }
        }
        return -1;
    }
    int main(){
        int arr[10]={1,3,15,2,3,532,55,67,56,34};
        int len=sizeof(arr)/sizeof(arr[0]);
        int sorted=mergeSort(arr,0,len-1);
        int result=binarySearch(arr,0,len-1);
        if(result==-1)cout<<"element not found";
        else cout<<result;
        return 0;

    }