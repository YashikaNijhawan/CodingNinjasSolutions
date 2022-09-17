#include<iostream>
using namespace std;
int binarysearch(int input[],int n,int x){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(input[mid]==x){
            return mid;
        }
        else if(x<input[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int input[10000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int x;
    cin>>x;
    cout<<binarysearch(input,n,x);
}