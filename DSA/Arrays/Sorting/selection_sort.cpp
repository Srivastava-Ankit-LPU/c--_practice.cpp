
#include<iostream>
using namespace std;
void selection(int arr[], int n)  
{   
      
    for (int i = 0; i < n-1; i++)    // One by one move boundary of unsorted subarray  
    {
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        int temp = arr[minindex];  
        arr[minindex] = arr[i];  
        arr[i] = temp;  

    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}  