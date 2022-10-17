#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX
int main(int argc,char const * argv[]){
    ll n;
    cin>>n;
    ll a[n];
    loop(i,0,n-1){
        cin>>a[i];
    }
    sort(a,a+n);
    vector<ll> v;
    
        for(int i=0;i<n;i+=2){
            v.push_back(a[i]);
        }
        if(n%2==0){
        for(int i=n-1;i>=0;i-=2){
            v.push_back(a[i]);
        }
        }
        else{
            for(int i=n-2;i>=0;i-=2){
                v.push_back(a[i]);
            }
        }
        loop(i,0,n-1){
            cout<<v[i] <<" ";
        }
    
    return 0;
}