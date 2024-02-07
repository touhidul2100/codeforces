#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll, ll>

using namespace std;

int main()
{
    ll in;
    cin>>in;
    while(in--){
        ll n, m;
        cin>>n>>m;
        vector<string> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];
        vector<vector<char>> left(n, vector<char> (m, '.'));
        vector<vector<char>> up(n, vector<char> (m, '.'));
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(v[i][j] == 'L'){
                    left[i][j] = 'L';
                    left[i][j + 1] = 'R'; 
                }
                if(v[i][j] == 'U') up[i][j] = 'U';
                if(v[i][j] == 'D') up[i][j] = 'D';
                
            }
        }
        
        
        bool ans = false;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < m; j++){
                if(v[i][j] != '.') cnt++;
            }
            if(cnt % 2 == 1) ans = true;
        }
        for(int j = 0; j < m; j++){
            int cnt = 0;
            for(int i = 0; i < n; i++){
                if(v[i][j] != '.') cnt++;
            }
            if(cnt % 2 == 1) ans = true;
        }
        
        if(ans){
            cout<<-1<<endl;
            continue;
        }
        
        bool white = true;
        for(int j = 0; j < m; j++){
            
            for(int i = 0; i < n; i++){
                if(left[i][j] == 'L'){
                    if(white){
                        left[i][j] = 'W';
                        left[i][j + 1] = 'B';
                    }else{
                        left[i][j] = 'B';
                        left[i][j + 1] = 'W';
                    }
                    
                    white = !white;
                }
            }
        }
        
        white = true;
        for(int i = 0; i < n; i++){
          
            for(int j = 0; j < m; j++){
                 
                if(up[i][j] == 'U'){
                    if(white){
                        up[i][j] = 'W';
                        up[i + 1][j] = 'B';
                    }else{
                        up[i][j] = 'B';
                        up[i + 1][j] = 'W';
                    }
                    
                    white = !white;
                }
                
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(left[i][j] == '.' && up[i][j] == '.') cout<<'.';
                else if(left[i][j] == '.') cout<<up[i][j];
                else cout<<left[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}