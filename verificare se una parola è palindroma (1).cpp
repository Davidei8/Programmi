#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n, i, fl=0;
    char parola[100];

    cout<<"Inserire la lunghezza della parola da inserire:";
    cin>>n;
    
    system("cls");
    
    for(i=0; i<=(n-1); i++)
    {
        cout<<"Inserire la lettera:";
        cin>>parola[i];
    }
    
    for(i=0; i<(n/2); i++)
    {
        if(parola[i]!=parola[n-1-i])
        {
            fl=1;
            i=n;
        }
        else
        {
            fl=0;
        }
    }
    
    if(fl=0)
    {
        cout<<"La parola e' palindroma \n";
    }
    else
    {
        cout<<"La parola non e' palindroma \n";
    }
    
    system("pause");
}
