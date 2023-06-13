#include<iostream>
using namespace std;
void isthere(int a[], int size, int key){
    for(int i=0;i<size;i++){
        if(a[i]==key){
            cout<<"present at index "<<i<<endl;
        }
        else if(i==size-1){
            cout<<"not present"<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int value;
    cin>>value;

    isthere(arr,n, value);
    
    }