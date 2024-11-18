#include <iostream>
void coprime();
void coprime2();
void coprime3();

int main()
{
    coprime3();
}


void coprime() {
    unsigned int a,b,p,ax,bx,t,i,counter;

    std::cin>>a>>b>>p;

    for(i=a;i<=b;i++) {
        ax=i;
        bx=p;
        while(bx!=0) {
            t = bx;
            bx = ax%bx;
            ax=t;
        }
        if(ax == 1) {
            counter++;
            std::cout<<i<<" jest wzglednie pierwsze z "<<p<<std::endl;
        }
    }
            std::cout<<"liczba "<<p<<" jest wzglednie pierwsza z "<<counter<<" liczbami";
}

void coprime2() {
    unsigned int a,b,p,x,ax,bx,t,counter =0,suma=0;
    int tempCounter2=0;
    std::cout<<"Podaj poczatek przedzialu"<<std::endl;
    std::cin>>a;
    std::cout<<"Podaj koniec przedzialu"<<std::endl;
    std::cin>>b;
    std::cout<<"Podaj dla jakiej liczby sprawdzic"<<std::endl;
    std::cin>>p;
    std::cout<<"Podaj co ktora liczbe wyswietlac"<<std::endl;
    std::cin>>x;
    int counters[b];
    for(int j = 1; j<=b;j++) {
        if(j%x==0) {
            tempCounter2+=1;;
            counter=0;
            for(int i=a;i<=j;i++) {
                ax=i;
                bx=p;
                while(bx) {
                    t = bx;
                    bx = ax%bx;
                    ax=t;
                }
                if(ax == 1) {
                    counter++;
                }
            }
            suma+=counter;
            counters[j]=counter;
            std::cout<<j<<" - "<<counter<<" - "<<suma<<std::endl;
        }
    }

    for(int m = 10; m<=b;m+=x) {
        std::cout<<std::endl;
        for(int n = 0; n<=100;n++) {
            if(n==counters[m]) {
                std::cout<<"*";
            }
            else {
                std::cout<<".";
            }
        }
    }
}

void coprime3() {
    unsigned int a,b,x,ax,bx,t,counter =0,suma=0;
    int tempCounter2=0;
    std::cout<<"Podaj poczatek przedzialu"<<std::endl;
    std::cin>>a;
    std::cout<<"Podaj koniec przedzialu"<<std::endl;
    std::cin>>b;
    std::cout<<"Podaj co ktora liczbe wyswietlac"<<std::endl;
    std::cin>>x;
    int counters[b];
    int counters2[b];
    int roznica;
    for(int j = 1; j<=b;j++) {
            counter=0;
        for(int i=a;i<=j;i++) {
            ax=i;
            bx=j;
            while(bx) {
                t = bx;
                bx = ax%bx;
                ax=t;
            }
            if(ax == 1) {
                counter++;
            }
        }
        suma+=counter;
        if(j%x==0) {
            counters[j]=suma;
            roznica = suma-counters[j-x];
            counters2[j]=roznica;
            std::cout<<j<<" - "<<counter<<" - "<<suma<<" (";
            if(j!=10) {
                std::cout<<counters2[j]<<")"<<std::endl;
            }
            else {
                std::cout<<counters[x]<<")"<<std::endl;
            }
        }
    }
    for(int m = x; m<=b;m+=x) {
        std::cout<<std::endl;
        std::cout<<m;;
        if(m>99) {
            std::cout<<"  ";
        }
        else if(m>999) {
            std::cout<<" ";
        }
        else {
            std::cout<<"   ";
        }
        for(int n = 0; n<=150; n++) {
            if(n==counters[m]/100) {
                std::cout<<"*";
            }
            else {
                std::cout<<".";
            }
        }
    }
    std::cout<<std::endl;
    std::cout<<std::endl;

     for(int m = x+x; m<=b;m+=x) {
        std::cout<<std::endl;
        std::cout<<m;;
        if(m>99) {
            std::cout<<"  ";
        }
        else if(m>999) {
            std::cout<<" ";
        }
        else {
            std::cout<<"   ";
        }
        for(int n = 0; n<=150; n++) {
            if(n==counters2[m]/100) {
                std::cout<<"x";
            }
            else {
                std::cout<<".";
            }
        }
    }

    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"x - roznica * - suma T - obydwa";
    std::cout<<std::endl;

     for(int m = x; m<=b;m+=x) {
        std::cout<<std::endl;
        std::cout<<m;;
        if(m>99) {
            std::cout<<"  ";
        }
        else if(m>999) {
            std::cout<<" ";
        }
        else {
            std::cout<<"   ";
        }
        for(int n = 0; n<=150; n++) {
            if (n==counters[m]/100 && n==counters2[m]/100) {
                std::cout<<"T";
            }
            else if(n==counters2[m]/100) {
                std::cout<<"x";
            }
            else if(n==counters[m]/100) {
                std::cout<<"*";
            }
            else {
                std::cout<<".";
            }
        }
    }
}
