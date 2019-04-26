#include<iostream>
using namespace std;
int tiles(int n){
    if(n==1)
        return 1;
    if(n==2)
        return 3;
    return tiles(n-1)+2*tiles(n-2);
}

int main(){
    int n,T;
    cout<<"enter count:"<<endl;
    cin>>T;
    
    while(T--){
        cout<<"enter num:";
        cin>>n;
        cout<<"result: "<<tiles(n)<<endl;
    }
    getchar();
    getchar();
}