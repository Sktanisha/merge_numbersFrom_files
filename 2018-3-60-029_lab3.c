#include<stdio.h>
#include <stdlib.h>
int main()
{
    int num,i;
    FILE *f1,*f2,*f3;
    //int numbers_1[1000];
    //int numbers_2[1000];
    f1 = fopen("run1.txt", "r");
    f2 = fopen("run2.txt", "r");
    f3 = fopen("merge.txt", "w");
    int n1,n2,x1,x2,equal;

    x1 = fscanf(f1, "%d", &n1);
    x2 = fscanf(f2, "%d", &n2);
    while(x1>0 || x2>0)
    {
        if(x1 < 1 || n2 < n1)
        {
            fprintf(f3, "%d \n", n2);
            x2 = fscanf(f2, "%d", &n2);
        }
        else if(x2 < 1 || n1 < n2)
        {
            fprintf(f3, "%d \n", n1);
            x1 = fscanf(f1, "%d", &n1);
        }
        else
        {
            equal = n1;
            fprintf(f3, "%d \n", equal);
            while(n1 == equal && x1 > 0) x1 = fscanf(f1, "%d", &n1);
            while(n2 == equal && x2 > 0) x2 = fscanf(f2, "%d", &n2);
        }
    }
    /* while(r1>0 || r2>0){
         if( n2 < n1){
            fprintf(final, "%d \n", n2);
            r2 = fscanf(f2, "%d", &n2);
        }else {
            fprintf(final, "%d \n", n1);
            r1 = fscanf(f1, "%d", &n1);
        }
    } */
    fclose(f3);
    fclose(f1);
    fclose(f2);
    /* while (fscanf(f1, "%d", &numbers_1[i]) != EOF)
     {
         i++;
     }
     fclose(f1);

     numbers_1[i] = '\0';

     for (i = 0; numbers_1[i] != '\0'; i++)
         printf("%d\n", numbers_1[i]);
     */

    /* while (fscanf(f1, "%d", &temp) != EOF)
     {
     }
     while (fscanf(f2, "%d", &temp) != EOF)
     {
     }
     */

    return 0;
}

