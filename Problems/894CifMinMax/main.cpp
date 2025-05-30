
/*
Cerinţa
Să se scrie o funcție C++ care să determine cea mai mare și cea mai mică cifră a unui număr natural transmis ca parametru. Funcția va întoarce rezultatele prin intermediul unor parametri de ieşire.

Restricţii şi precizări
numele funcției va fi cifminmax
funcția va avea trei parametri: primul parametru reprezintă numărul pentru care se calculează valorile cerute;al doilea parametru va reprezenta cifra maximă, iar al treilea va reprezenta cifra minimă
numărul pentru care se calculează cele doua valori va fi mai mic decât 2.000.000.000*/


void cifminmax(int n, int &max, int &min){
    max=n%10;
    min=n%10;
    while(n){
        if(n%10>max)
            max=n%10;
        if(n%10<min)
            min=n%10;

        n/=10;
    }

}