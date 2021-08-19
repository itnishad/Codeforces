#include<bits/stdc++.h>
using namespace std;
 
int arr[100];
 
int main()
{
    int n;
    int abb[100],siz=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                arr[j]=0;
            }
        }
   }
   for(int i=0;i<n;i++){
    if(arr[i]!=0){
        abb[siz]=arr[i];
        siz++;
    }
   }
   printf("%d\n",siz);
   for(int i=0;i<siz;i++){
        printf("%d ",abb[i]);
   }
   
    return 0;
}