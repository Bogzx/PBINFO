#include <iostream>

using namespace std;
bool palindrom(long long n){
    long long reverse=0;
    long long saven=n;
    while(n){
        reverse*=10;
        reverse+=n%10;
        n/=10;
    }
    if(reverse == saven)
        return true;
    return false;

}

long long largest_palindromic_sufix(long long n){
    long long largest_pal_suf=n%10;
    long long sufix=0;
    long long power=10;
    while(power<n*10){
        sufix=n%power;        // verificam daca e sufix adaugand 
        if(palindrom(sufix))
            largest_pal_suf=sufix;
        power*=10;
    }
    return largest_pal_suf;
}


long long reverse(long long n){
    long long rev=0;

    while(n){
        rev*=10;
        rev+=n%10;
        n/=10;
    }
    return rev;


}

int main(){
long long n;

cin>>n;
cout<<(largest_palindromic_sufix(reverse(n)))<<" "<<largest_palindromic_sufix(n);

return 0;
}