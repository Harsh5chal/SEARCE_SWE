#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>

typedef long long ll;

using namespace std; 

int main(){

    int n;  //no. of customers
    cin>>n;

    vector<pair<long,long>> v(n);//declaring vector of pairs
    for(int i = 0;i<n;i++){
        scanf("%lld%lld", &v[i].first, &v[i].second);  
    }

    sort(v.begin(),v.end());
    long long sum = 0;

    set<pair<int,int>> q;
    long long t = v[0].first;
    int indext = 0;
    while (indext < n || q.size())
    {
        while (indext < n && v[indext].first <= t)
        {
            q.insert(pair<int,int>(v[indext].second, indext));
            indext++;
        }

        if(q.empty()){
            t = v[indext].first;
        }
        else{
            int i =  q.begin()->second;
            q.erase(q.begin());
            t += v[i].second;
            sum += t - v[i].first;
        }
        
    }
    cout<< sum/n << endl;
    return 0;
}