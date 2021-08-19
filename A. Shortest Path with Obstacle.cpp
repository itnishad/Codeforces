#include<bits/stdc++.h>
using namespace std;

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int ax,ay,bx,by,fx,fy;
        cin>>ax>>ay>>bx>>by>>fx>>fy;
        int ans;

        if(ax == bx && bx==fx){
            if(min(ay,by)<fy && fy <max(ay,by)){
                ans = abs(ax-bx) + abs(ay-by)+2;
            }else{
                ans = abs(ax-bx) + abs(ay-by);
            }

        }
        else if(ay == by && by == fy){
            if(min(ax,bx)<fx && fx <max(ax,bx)){
                ans = abs(ax-bx) + abs(ay-by)+2;
            }else{
                ans = abs(ax-bx) + abs(ay-by);
            }
        }
        else{
            ans = abs(ax-bx) + abs(ay-by);
        }


        cout<<ans<<"\n";


    }

    return 0;
}
