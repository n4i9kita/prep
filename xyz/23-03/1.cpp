#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fo(i,l,h) for(int i=l;i<h;i++)
#define pfo(l,h,arr) for(int i=l;i<h;i++) {cout<<arr[i]<<" ";} cout<<'\n';
# define m 1000000007

void solve(){
	int n; cin>>n;
	string name; int roll;
	map<int,string>mp;
	fo(i,0,n){
		cin>>name>>roll;
		mp.insert({roll,name});
	}

	// below functionality available in C++17 only
	for(const auto& [key,value] : mp){
		cout<<value<<" "<<key<<endl;
	}
  
// c++14 alternative for the loop ?
//   for(auto x:mp){
//     cout<<x.second<<" "<<x.first<<endl;
//   }
}

signed main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		solve();
	}

}
