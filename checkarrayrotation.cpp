#include<iostream>
using namespace std;
int checkarrayrotation(int input[],int n){
    for(int i=1;i<n;i++){
        if(input[0]>input[i]){
            return i;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int input[1000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<checkarrayrotation(input,n)<<endl;
}