#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int N;
    scanf("%d",&N);
    int T=0,D=0,E=0;
    vector<int> Eres(N,0);

    for(int i=1;i<=N;i++){
        int mi=0;
        scanf("%d",&mi);
        int total=0;
        int sum=0;
        int totalLast=0;
        for(int j=1;j<=mi;j++){
            int aij;
            scanf("%d",&aij);
            if(aij>0){
                //if(i==3)
                //cout<<aij+sum<<' '<<total<<endl;
                if(aij+sum<totalLast){
                    //cout<<"D"<<endl;
                    if(Eres[i-1]==0) {
                        D++;
                    }
                    //cout<<i<<endl;
                    Eres[i-1]=1;
                }
                total=aij;
                totalLast=aij;
                sum=0;
            }
            else{

                sum+=abs(aij);//统计摘下来的数量

                total+=aij;
                //if(i==5){cout<<sum<<endl;}
            }
        }
        T+=total;
    }

    int len=0;
    vector<int> EresTemp(N,0);
    for(int i=0;i<N;i++){
        if((i==0)&&(Eres[i]==1)&&(Eres[i+1]==1)&&(Eres[N-1]==1)){
            E++;
            EresTemp[i]=1;//启弃用了，发现其实判断条件很简单，不用判断4，5，6个的情况
            EresTemp[N-1]=1;
            EresTemp[i+1]=1;
        }else if((i==N-1)&&(Eres[i]==1)&&(Eres[i-1]==1)&&(Eres[0]==1)){
            E++;
            EresTemp[i]=1;
            EresTemp[0]=1;
            EresTemp[i-1]=1;
        }
        else if((Eres[i]==1)&&(Eres[i-1]==1)&&(Eres[i+1]==1)){
            E++;
            EresTemp[i]=1;
            EresTemp[i-1]=1;
            EresTemp[i+1]=1;
        }

    }
    cout<<T<<" "<<D<<' '<<E<<endl;
//    for(int v:Eres){
//        cout<<v<<endl;
//    }
};
