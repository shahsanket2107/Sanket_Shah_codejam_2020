#include<bits/stdc++.h>
#define int long long int
#define rdj ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

signed main()
{
    rdj
    int t;
	cin>>t;
	string s;
	cin>>s;
	while(t--){
		char c;
		string res="";
		for(int j=0;j<10;j++)
        {
			res+="0";
		}
		for(int i=1;i<=10;i++)
        {
			cout<<i<<endl;
			cout.flush();
			cin>>c;
			res[i-1]=c;
		}
		cout<<res<<endl;
		cout.flush();
		char f;
		cin>>f;
		if(f=='Y')continue;
		else return 0;
	}
	return 0;
}

