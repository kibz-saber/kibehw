
#include <bits/stdc++.h>

using namespace std;
int main(){
    
    
        int n;
        long long g;
        cin>>n>>g;
        vector<pair<long long,int>>arr(n);
        for (int j=0;j<n;j++){
            cin>>arr[j].first;
            arr[j].second=j+1;
        }
        sort(arr.begin(),arr.end());
        bool find =false;
        for(int i=0;i<n-2;i++){
            int it=1;
            int ot=1;
            long long go=g-arr[i].first;
            long long min=arr[i+it].first;
            long long max=arr[n-ot].first;
            while( n-ot>i+it){
            if (min+max==go){
                find=true;
                cout<<arr[i].second<<" "<<arr[i+it].second<<" "<<arr[n-ot].second;
                break;
            }
            else if(min+max<go){
                it++;
                min=arr[i+it].first;
            }
            else{
                ot++;
                max=arr[n-ot].first;
            }
        }
        if(find){break;}
            
        }
        if (find==false){
            cout<<"IMPOSSIBLE";
        }
        
       
        
      
        cout<<endl;
 
    }



