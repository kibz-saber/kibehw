#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>ac;

        int la=s.size();

        for(int i=0;i<la;i++){
            if(s[i]==']'||s[i]=='}'||s[i]==')'){
                if(ac.empty()){
                    return false;
                }
                else{
                    if(s[i]==']'){
                        if(ac.top()=='['){
                            ac.pop();
                        }
                        else{
                            return false;
                        }
                    }

                    if(s[i]=='}'){
                        if(ac.top()=='{'){
                            ac.pop();
                        }
                        else{
                            return false;
                        }
                    }

                    if(s[i]==')'){
                        if(ac.top()=='('){
                            ac.pop();
                        }
                        else{
                            return false;
                        }
                    }
                }
            }
            else{
                ac.push(s[i]);
            }
        }

        if(ac.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};