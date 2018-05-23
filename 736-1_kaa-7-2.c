
#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,size,temp;
    scanf("%d", &size);
    int massive[size];
    for (i=0;i<size; i++)
    {
        scanf ("%d", &massive[i]);
        
    }
    
    for (k=size/2; k>0; k/=2)
        for(i = k; i < size; i++)
        {
            temp = massive[i];
            for(j = i; j>=k; j-=k)
            {
                if(temp < massive[j-k])
                {
                    massive[j] = massive[j-k];
                }
                else
                    break;
            }
            massive[j] = temp;
        }
    
    for (i=0;i<size; i++)
    {
        printf ("%d ", massive[i]);
        
    }
    
    printf("\n");
    return 0;
}

