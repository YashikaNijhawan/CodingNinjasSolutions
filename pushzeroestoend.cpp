#include<iostream>
using namespace std;
void pushzeroestoend(int input[],int n){
    for(int i=0;i<n;i++){
        if(input[i]==0){
            for(int j=i+1;j<n;j++){
                if(input[j]!=0){
                    input[i]=input[j];
                    input[j]=0;
                    break;
                }
            }
        }
    }
}
/*void pushzeroestoend(int input[],int n){
    int k=0;
    for(int i=0;i<n;i++){
        if(input[i]!=0){
            input[k]=input[i];
            k++;
        }
        else{
            continue;
        }
    }
    for(int j=k;j<n;j++){
        input[j]=0;
    }
}*/
int main(){
    int n;
    cin>>n;
    int input[1000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    pushzeroestoend(input,n);
    for(int i=0;i<n;i++){
        cout<<input[i];
    }
}