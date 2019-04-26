#include<iostream>
using namespace std;
int HowMany(int n){
    if(n==1){
        return 3;
    }
    return 2*HowMany(n-1)+1;
}
int main(){
    int n,T;
    cout<<"enter count:"<<endl;
    cin>>T;
    
    while(T--){
        cout<<"enter num:";
        cin>>n;
        cout<<"result: "<<HowMany(n)<<endl;
    }
    getchar();
    getchar();
}