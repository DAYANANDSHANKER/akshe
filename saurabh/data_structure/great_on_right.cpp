#include<vector>
#include<stack>
#include <bits/stdc++.h> 

using namespace std;

int main(){
    vector<int>v = {2,5,9,3,1,12,6,8,7};
    vector<long long >ans;
    stack<long long>s;
     int n = v.size()-1;
     s.push(n);
     ans[n]=-1;
     for(int i = v.size()-2;i>=0;i--){
        while(!s.empty() && v[i]>= s.top()){
            s.pop();
        }
        if(s.empty()){ ans[i]= -1;}
        else {ans[i] = s.top();}
        s.push(v[i]);
    }
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<endl;    
    }
    return 0;
}