#include<bits/stdc++.h>


using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair <int,int> pii;
typedef pair <ll,ll> pll;

///#define ff              first
///#define ss              second
///#define pb              push_back
///#define all(v)          v.begin(),v.end()

///#define D(x)            cerr << #x " = " << x << '\n'
///#define DBG             cerr << "Hi!" << '\n'

///#define CLR(a)          memset(a,0,sizeof(a))
///#define SET(a)          memset(a,-1,sizeof(a))
///#define nn              "\n"
///#define gcd(a,b)        __gcd(a,b)
///#define lcm(a,b)        (a*b)/gcd(a,b)
///#define	pi             acos(-1.0)
///#define inf             2e9+10

///const double pi = acos(-1.0);
///const double eps = 1e-8;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    //freopen("in.txt", "r", stdin);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str,s1,s2,s3,s4,s5,s6,s7,s8;
        cin>>str;

        s1 = str.substr(0,4);
        s2 = str.substr(n-4,4);
        s3 = str.substr(0,1);
        s4 = str.substr(n-3,3);
        s5 = str.substr(0,2);
        s6 = str.substr(n-2,2);
        s7 = str.substr(0,3);
        s8 = str.substr(n-1,1);

        if(s1=="2020"||s2=="2020"){
            cout<<"Yes"<<"\n";
        }else if(s3=="2"&& s4=="020"){
            cout<<"Yes"<<"\n";
        }else if(s5=="20"&& s6=="20"){
            cout<<"Yes"<<"\n";
        }else if(s7=="202"&& s8=="0"){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }

    }

    return 0;
}
