
#include <bits/stdc++.h>
using namespace std;

list<long long> q;
unordered_map<long long, list<long long>::iterator> pos;

void insert(long long x) {
    if (pos.count(x)) {
        q.erase(pos[x]);
    }

    q.push_back(x);
    pos[x] = prev(q.end());
}

void removeOldest() {
    if (q.empty()) return;

    long long x = q.front();
    q.pop_front();
    pos.erase(x);
}
using namespace std;
int main(){
        unordered_map<long long,long long>ind;
        long long n,k;
        long long ans=0,an=0;
        scanf("%lld %lld", &n, &k);
        vector<long long>arr(n);
        long long brun=0;
        long long run=0;
        long long start=0;
        for (long long j=0;j<n;j++){
            scanf("%lld", &arr[j]);
            ind.try_emplace(arr[j],j);
            ind[arr[j]]=j;
            insert(arr[j]);
            if(q.size()<=k && j!=n-1){
                run++;
            }
            else if (q.size()<=k && j==n-1){
                run++;
                if(run>brun){
                    brun=run;
                    ans= j;
                    an=start;
                }

            }
            else{
                if(run>brun){
                    brun=run;
                    ans= j-1;
                    an=start;

                }
                
                long long rem=ind[q.front()];
                ind.erase(q.front());
                run=run-(rem-start);
                start =rem+1;
                removeOldest();
                



                //se.erase(arr[j-run]);
            }
            //doesnt consider than a number can be repeated


        }
        printf("%lld %lld\n", an+1, ans+1);
        
        
        //.insert(val)
        //.erase(val)
       
        //use an unordered set,we add elements to the set until the set has a size of
        //in set cantaccess element quick
        //check later for data structure that works well
        
        //k 
      
 
    }



