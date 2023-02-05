#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

// Tufan Özkan Q6 210201078

void sifrele(char *str, char *sifr)
{
    for(int i=0;str[i]!='\0';i++)
    {
        sifr[i]=str[i]+10;
    }
    int uz=strlen(sifr);
    char dizi1[10];
    sprintf(dizi1,"%d",uz);
    strcat(sifr,dizi1);

    int hs=kucuksayisi(sifr);
    char dizi2[10];
    sprintf(dizi2,"%d",hs);
    strcat(sifr,dizi2);
}

void desifre(char *desifrelenmis, char *sifrelenmis)
{
    for(int i=0;i<110;i++)
    {
        if(isdigit(sifrelenmis[i]))
        {
            break;
        }
        else
        {
            desifrelenmis[i]=sifrelenmis[i]-10;
        }
    }
}

int kucuksayisi(char *string)
{
    int n=0;
    for(int i=0;i<string[i]!='\0';i++)
    {
        if(97<=string[i]<=122)
        {
            n++;
        }
    }
    return n;
}

int main()
{
    char str[100];
    char sifrelenmis[110];
    char desifrelenmis[110];
    printf("sifrelencek metni giriniz: ");
    gets(str);

    sifrele(str,sifrelenmis);
    printf("sifrelenmis metin: ");
    puts(sifrelenmis);

    desifre(desifrelenmis,sifrelenmis);
    printf("desifrelenmis metin: ");
    puts(desifrelenmis);

    return 0;
}