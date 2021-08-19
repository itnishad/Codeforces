#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        long long x=max(a,b);
        long long mx;
        if(x>c){
            mx=x;
        }else{
            mx=c;
        }
        long long p,q,r;
        p=mx-a;q=mx-b;r=mx-c;
        long long sum=p+q+r;
        if(sum<=n){
            n-=sum;
            if(n%3==0){
                cout<<"Yes\n";
            }else
                cout<<"No\n";
        }else{
            cout<<"No\n";
        }
    }
}