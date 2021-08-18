#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin>>tt;
    while(tt--){

    int k;
    cin>>k;

    int arr[100000];

    int z=1;
    for(int i=1;i<=2000;i++){
        if(i%3==0 || (i%10)==3){
            continue;
        }else{
            arr[z]=i;
            z++;
        }
    }
    cout<<arr[k]<<"\n";

    }

    return 0;
}
