#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
    for(int i = 1; i <n; i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];

            }
            else{
                break;
            }

        }
        arr[j+1]=temp;
            
    }

}

int main(){
    int arr[6] = {1,7,6,10,10,14};

    insertionsort(arr, 6);

    for(int i = 0; i < 6; i++){
        cout <<arr[i] << " ";
    }

}