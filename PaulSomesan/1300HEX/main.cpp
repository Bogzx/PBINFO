#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream in("hex.in"); // Open the input file
ofstream out("hex.out"); // Open the output file

int main() {
    char nr_bin[11000];

    in.getline(nr_bin,sizeof(nr_bin));
    int len=strlen(nr_bin);
    int mod4=strlen(nr_bin)%4;

    char tabel[]="0123456789ABCDEF";

    if(mod4==1){
        out<<tabel[nr_bin[0]-'0'];
    }
    if(mod4==2){
        out<<tabel[(nr_bin[1]-'0')*2+nr_bin[0]-'0'];
    }
    if(mod4==3){
        out<<tabel[(nr_bin[0]-'0')*4+(nr_bin[1]-'0')*2+nr_bin[2]-'0'];
    }

    for(int i=mod4;i<len;i+=4){
        int base16=int(nr_bin[i+3]-'0')+int(nr_bin[i+2]-'0')*2+int(nr_bin[i+1]-'0')*4+int(nr_bin[i]-'0')*8;

        out<<tabel[base16];
    }


    in.close(); // Close the input file
    out.close(); // Close the output file
    return 0;
}
