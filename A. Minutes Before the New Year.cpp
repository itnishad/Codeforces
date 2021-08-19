#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int ans=((23-h)*60)+(60-m);
        printf("%d\n",ans);
    }
    return 0;
}