#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int k, n;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int d=0;
        for(int i=0; i<n; i++){
            if(a[i]<=k) d++;
        }
        int cnt=0; 
        for(int i=0; i<d; i++){
        	if(a[i]<=k) cnt++;
		}
		int ans=cnt;
		for(int i=d; i<n; i++){
			if(a[i-d]<=k) --cnt;
			if(a[i]<=k) cnt++;
			ans=max(ans, cnt);
		}
		cout << d-ans << endl;
    }
}
