#include<iostream>
using namespace std;
int f(int n){
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return (n-1)*f(n-1)+(n-1)*f(n-2);
}
int main(){
    int n;
    cout<<"enter num:";
    while(cin>>n){
    cout<<"result: "<<f(n)<<endl;
    cout<<"enter num:";
   }
    getchar();
    getchar();
}