#include<iostream>
using namespace std;
void mergetwosortedarrays(int arr1[],int n,int arr2[],int m){
    int i=0;
    int j=0;
    int k=0;
    int mergedarr[10000];
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            mergedarr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            mergedarr[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        mergedarr[k]=arr2[j];
        j++;
        i++;
        k++;
    }
    while(j<n){
        mergedarr[k]=arr1[i];
        i++;
        j++;
        k++;
    }
    for(int a=0;a<n+m;a++){
        cout<<mergedarr[a];
    }
}
int main(){
    int n;
    cin>>n;
    int arr1[1000];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[1000];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    mergetwosortedarrays(arr1,n,arr2,m);
}