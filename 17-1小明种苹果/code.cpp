#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N,M=0;
    scanf("%d%d",&N,&M);
    //cout<<N<<M<<endl;
    int T=0,K=-1,P=-1;
    for(int i=1;i<=N;i++){
        int total,sum=0;
        scanf("%d",&total);
        for(int j=0;j<M;j++){
            int c;
            scanf("%d",&c);
            sum+=abs(c);
        }
        T+=total-sum;
        if(sum>P){
            K=i;
            P=sum;
        }
    }
    cout<<T<<' '<<K<<' '<<P<<endl;
    
    
    
    return 0;
}
