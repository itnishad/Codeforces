#include<bits/stdc++.h>
using namespace std;

int main(){
    int f;
    cin>>f;
    getchar();
    string s;
    cin>>s;
    string st[10000];
    int sz=0,brr[10000];
    int n=s.length()-1;
    for(int i=0;i<n;i++){
        st[sz]=s.substr(i,2);sz++;
    }

    for(int i=0;i<sz-1;i++){
            brr[i]=0;
        for(int j=i+1;j<sz;j++){
            if(st[i]==st[j]){
                brr[i]++;
            }
        }
    }

    int x=0;
    for(int i=0;i<sz;i++){
        if(brr[x]<brr[i]){
            x=i;
        }
    }
    cout<<st[x]<<"\n";
    return 0;
}