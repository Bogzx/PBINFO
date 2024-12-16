int cifminpar(int n) {
    if (n<10) {
        return (n%2==0)?n:-1;

    } 
    else {
        int cifra_curenta=n%10;
        int minim_rest=cifminpar(n/10);

        if (cifra_curenta%2==0) {
            if (minim_rest==-1||cifra_curenta<minim_rest)
                return cifra_curenta;
        }
        
        return minim_rest;
    }
}