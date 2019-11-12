#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mp make_pair
#define pb push_back
#define F first
#define S second
const int N=1000001;
#define M 1000000007
#define double long double
#define BINF 1000000000000001
#define init(arr,val) memset(arr,val,sizeof(arr))
#define MAXN 15000001
const int LG = 22;
int phi[N];

#undef int
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#define int long long int
	
  
  for (int i=1; i<N; i++) 
        phi[i] = i;

    for (int p=2; p<N; p++) { 

        if (phi[p] == p)  { 
            phi[p] = p-1; 
            for (int i = 2*p; i<N; i += p)  { 
               phi[i] = (phi[i]/p) * (p-1); 
            } 
        } 
    } 
   

  for(int i=2;i<N;i++)
    phi[i]= (phi[i] + phi[i-1])%M;
	
  for(int i=1;i<N;i++){
  	phi[i] = (phi[i] * phi[i])%M;
  }
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    
    cout<< phi[n] << "\n";

  }

return 0;
}