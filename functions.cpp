#include<iostream>
using namespace std;
int power(int num, int pow){
    int ans=1;
    for(int i=1;i<=pow;i++){
        ans=ans*num;
    }
    return ans;
}
void checkevenodd(int num){
    if(num%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
        }
}
int main(){
    /*int base, exp;
    cin>>base>>exp;

    cout<<power(base, exp);*/
    
    /*int N;
    cin>>N;
    checkevenodd(N);*/

    

}
