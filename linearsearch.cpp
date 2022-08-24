#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int input[100000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<"array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
    }
    int t;
    cout<<"enter t:";
    cin>>t;
    for(int j=0;j<t;j++){
        int x;
        cout<<"enter x:";
        cin>>x;
        for(int i=0;i<n;i++){
            if(input[i]==x){
                cout<<"index:"<<i<<endl;
                break;
            }
        }
    }
}