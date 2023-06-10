#include<iostream>
using namespace std;
int main(){

int i=1, j=1;
while(i<4){
    while(j<4){
    cout<<i<<" "<<j<<endl;
    j++;
    }
    j=0;
    i++;
}
}