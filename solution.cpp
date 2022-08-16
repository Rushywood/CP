#include <bits/stdc++.h>  
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> p;
typedef vector<ll> v;
typedef vector<vector<ll> > v4;
typedef vector<p> vp;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
const ll MOD=1e9+7;
const ll prime = 37;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

ll n;
cin >> n;
 ll a[n];
 for(int i=0;i<n;i++)
{
 cin>>a[i];
}
ll ans=a[0];
sort(a+1,a+n);
if(a[0]>a[n-1])
{
 cout<<0<<endl;
}
else
{
while(a[0]<=a[n-1])
 {
   a[n-1]--;
   a[0]++;
   sort(a+1,a+n);
 }
 cout<<abs(ans-a[0])<<endl;
}
return 0;
}