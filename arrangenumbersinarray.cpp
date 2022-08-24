#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int input[10000];
    int j=1;
    for(int i=0;i<=(n-1)/2;i++){
        input[i]=j;
        j=j+2;
    }
    int k=n;
    for(int i=((n-1)/2)+1;i<n;i++){
        if(k%2==0){
            input[i]=k;
            k=k-2;
        }
        else{
            input[i]=k-1;
            k=k-2;
        }
    }
    for(int l=0;l<n;l++){
        cout<<input[l]<<endl;
    }
}