#include <iostream>

using namespace std;

int vec1[1001],vec2[1001];

bool identice(int n){
    for(int i=0;i<n;i++){
        cin>>vec1[i];
    }
    for(int i=0;i<n;i++){
        cin>>vec2[i];
    }

    for(int i=0;i<n;i++){
        bool este=false;
        for(int j=0;j<n;j++){
            if(vec1[i]==vec2[j])
            {
                este=true;
                vec2[j]=-1;
                break;
            }
        }
        if(!este)
            return false;

    }
    return true;

}

int main(){
    int n;
    cin>>n;
    if(identice(n))
        cout<<"DA";
    else cout<<"NU";

return 0;
}