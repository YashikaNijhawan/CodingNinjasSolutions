#include<iostream>
using namespace std;
void swapalternate(int input[],int n){
    int i=0;
    while(i<n-1){
        int temp=input[i];
        input[i]=input[i+1];
        input[i+1]=temp;
        i=i+2;
    }
}
void printArray(int input[],int n){
   for(int i=0;i<n;i++){
      cout<<input[i];
   }
}
int main(){
    int n;
    cin>>n;
    int input[10000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    printArray(input,n);
    swapalternate(input,n);
    cout<<"swap alternate array:";
    printArray(input,n);
}