#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

      string s;
      cin>>s;
      int l,h;
      int assci = 98;
      bool flag = false;

      for(int i=0; i<s.length(); i++){
            if(s[i] == 'a'){
                flag= true;
                l=i;
                h=i;
            }
      }

      if(flag){
            bool temp=true;

            for(int i=0;i<s.size()-1;i++){
                if(s[l-1] == assci){
                    l--;
                }else if(s[h+1] == assci){
                    h++;
                }else{
                    flag=false;
                }
                assci++;
            }

            if(flag){
                cout<<"Yes\n";
            }else{
               cout<<"No\n";
            }


      }else{
        cout<<"No\n";
      }

    }



    return 0;
}
