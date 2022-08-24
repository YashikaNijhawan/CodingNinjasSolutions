#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int input[1000000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<"array:";
    for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+input[i];
    }
    cout<<"sum"<<sum<<endl;
}