#include <iostream>
#include<vector>
 
int main(){
    int n=0;
    std::cin>>n;
    std::vector <int> s(200001,0);
    std::vector <int> a;
    for(int i=1;i<=n;i++){
        int ai=0;
        std::cin>>ai;
        a.push_back(ai);
        
    }
    
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(s[a[i]]==0){
            ans=a[i];
            s[a[i]]=1;
            
        }
    }std::cout<<ans;
}
