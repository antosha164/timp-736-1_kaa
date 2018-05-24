#include <stdio.h>
#include <math.h>

int main()
{
    int size,step,tmp,i;
    float step_change;
    scanf("%d", &size);
    int massive[size];
    for (i=0;i<size; i++)
    {
        scanf ("%d", &massive[i]);
    }
    
    step=size-1;
    step_change=1.2473;
    while (step>=1)
    {
        for (i=0; i+step<size; i++)
        {
            if (massive[i]>massive[i+step])
            {
                tmp=massive[i];
                massive[i]=massive[i+step];
                massive[i+step]=tmp;
            }
            
        }
        
        step=step/step_change;
        
    }
    for (i=0;i<size; i++)
    {
        printf ("%d ", massive[i]);
        
    }
    printf("\n");
    return 0;
}

