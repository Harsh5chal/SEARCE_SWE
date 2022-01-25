#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
 
    stack<int> max;
    stack<int> s;
    max.push(0);
    
    int n;
    cin>>n;
    
    while (n--){
        int x;
        cin>>x;
        if(x==1){
            cin>>x;
            if(x>=max.top()) 
                max.push(x);
                s.push(x);
        }
        else if(x==2){
            if(s.top()==max.top()) 
                max.pop();
                s.pop();
        } 
        else if(x==3) 
                cout<<max.top()<<endl;
    }
    return 0;
}