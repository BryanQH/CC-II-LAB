#include <iostream>
#include<stdlib.h>

using namespace std;

int main(void)
{
            int c,cont,j,i,tabla[100];

            i=0;
            for (c=100;c>=1;c--)
            {
        cont=0;
        for (j=1;j<=c;j++)
        {
            if (c%j==0)
            {
               cont++;
            }
        }
        if (cont==2 || j==1 || j==0)
        {
         tabla[i]=c;
         i++;
        }
    }

            for (c=0;c<i;c++)
            {
        cout<<" "<<tabla[c];
    }

    system("\nPAUSE");
    return 0;

}
