#include<iostream>
using namespace std;
void bubblesort(int input[],int n){
    for(int i=0;i<n-1;i++){
        int temp=input[i];
        if(input[i]>input[i+1]){
            input[i]=input[i+1];
            input[i+1]=temp;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int input[1000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    bubblesort(input,n);
    for(int i=0;i<n;i++){
        cout<<input[i];
    }
}