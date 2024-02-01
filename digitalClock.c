#include<stdio.h>
#include<unistd.h>


void UserInput(int *h = -1 , *m = -1 , *s = -1 );
void IncrSway3 ();
void IncrDkayak ();
void IncrTawani ();

int main (){
   
    UserInput();

  
  return 0 ;
}


void  UserInput() {   

     int *h = -1 , *m = -1 , *s = -1 ;

//sway3
while( *h < 0 || *h > 23)

{
    printf("da5al sa3a : ");
    scanf("%d",&h);
if (h < 0 || h > 23)
    printf("3tini valeur mgada\n ");

}

//dkayk
   while( m < 0 || m > 60)

{
    printf("da5al dkayak : ");
    scanf("%d",&m);
if (m < 0 || m > 60)
    printf("3tini valeur mgada\n ");

}

//tawani
while( s < 0 || s > 60)

{
    printf("da5al tawani : ");
    scanf("%d",&s);
if (s < 0 || s > 60)
    printf("3tini valeur mgada\n ");

}
    while (1)
    {
    sleep (3);
    printf("%d : %d : %d \n",h , m , s);
    }

 }

 
