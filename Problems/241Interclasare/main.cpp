    #include <iostream>
    #include <fstream>
    using namespace std;

    ifstream in("interclasare.in");
    ofstream out("interclasare.out");

    int sir1[100002],sir2[100002],sir3[100002];

    int main(){
        int n,m;
        in>>n;

        for(int i=0;i<n;i++)
            in>>sir1[i];

        in>>m;
        for(int i=0;i<m;i++)
            in>>sir2[i];

        int indc=0,inda=0,indb=0;

        while(inda<n and indb<m){
            if(sir1[inda]<=sir2[indb])
                sir3[++indc]=sir1[inda++];
            else    
                sir3[++indc]=sir2[indb++];
        }

        while(inda<n){
            sir3[++indc]=sir1[inda++];
        }
        while(indb<m)
                sir3[++indc]=sir2[indb++];

        for(int i=1;i<=indc;i++){
            if((i-1)%10==0 and i!=1)
                out<<"\n";
            out<<sir3[i]<<" ";

        }
        
        in.close();
        out.close();
    return 0;
    }