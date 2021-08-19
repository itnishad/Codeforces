#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b;
        int x=1;
        string s;
       while(x<=n){
 
            c=b;
            for(int i=1;i<=a&&x<=n;i++){
                if(c!=0){
                    s+=96+c;
                    c--;
                }else{
                    s+=96+c+1;
                }
                x++;
            }
       }
       cout<<s<<"\n";
    }
    return 0;
}