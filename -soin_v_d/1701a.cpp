#include <iostream>
void gg(int a,int b,int c,int d){
    if(a+b+c+d==4){
        std::cout<<2<<std::endl;
    }
    else{
        if (a+b+c+d==0){
            std::cout<<0<<std::endl;
        }else{
            std::cout<<1<<std::endl;
        }
    }
}

int main(){
    int t=0;
    std::cin>>t;
    while(t--){
        int a=0,b=0,c=0,d=0;
        std::cin>>a>>b>>c>>d;
        gg(a,b,c,d);
    }
    
    
}
