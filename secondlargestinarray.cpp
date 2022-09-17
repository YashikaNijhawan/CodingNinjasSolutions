#include<iostream>
#include<climits>
using namespace std;
int secondlargestinarray(int input[],int n){
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=1;i<n;i++){
        if(input[i]>max1){
            max2=max1;
            max1=input[i];
        }
    }
    return max2;
}
int main(){
    int n;
    cin>>n;
    int input[1000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<secondlargestinarray(input,n);
}