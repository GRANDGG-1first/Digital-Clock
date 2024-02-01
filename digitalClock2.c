#include<stdio.h>
#include<unistd.h>

void UserInput(int *H,int *M ,int *S);
void incr(int *H,int *M ,int *S);
void print(int *H ,int *M ,int *S);
int main ()
{
    int hours , minutes ,secondes ;
    UserInput(&hours ,&minutes , &secondes);

    print(&hours ,&minutes , &secondes);

    return 0;
}



//had function dial na5od input mn 3and user
void UserInput(int *H ,int *M ,int *S)
{   
   *H = -1 ,*M = -1 , *S =-1 ;
   //sa3a
    while(*H > 23 || *H < 0 )
    {
    printf("da5al sa3a:");
    scanf("%d",H);
    if (*H > 23 || *H < 0 )
    {
        printf("maymkanch , 3tini kima mgada :\n");
        
    }
    }
    //dkayak
     while(*M > 59 || *M< 0 )
    {
     printf("da5al dkayk:");
    scanf("%d",M);
    
    if (*M > 59|| *M < 0 )
    {
        printf("maymkanch , 3tini kima mgada :\n");
        
    }
    }
    //tawani
     while(*S > 59 || *S < 0 )
    {
    printf("da5al tawani:");
    scanf("%d",S);
    if (*S > 59 || *S < 0 )
    {
        printf("maymkanch , 3tini kima mgada :\n");
        
    }
    }
}
//had function dial incremetation o print sa3a
void print(int *H ,int *M ,int *S)
{   
    while (1)
    {
        sleep(1);
        (*S)++;
        if (*S==60)
        {
            *S=00;
            (*M)++;
            if(*M==60) 
            {
                *M=00;
                (*H)++;
                if(*H ==24)
                {
                    *H=00;
                }
            }
        }
        printf("\r%02d:%02d:%02d",*H,*M,*S);
    }
    
    
}