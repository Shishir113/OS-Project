#include<stdio.h>
#include<pthread.h>
#include<unistd.h>


void *prime(void *arg)
{
  int a;
  int c=0;
  a = ((int) arg);


 if(a<0){
   printf("invalid input\n");

 }
 else{
   printf("prime numbers till %d:\n",a);
 for(int j=2;j<=a;j++){
     c=0;
      for(int i=2;i<j;i++){
        if(j%i==0){  
             c=c+1;
         }
        }
        if(c==0){
            printf("%d\n",j);
        }
    }

}
}

int main()
{
  int n; 
  pthread_t p;
  scanf("%d",&n);
    pthread_create(&p,NULL,prime,(void *)n);

    pthread_join(p,NULL);

    printf("PROCESS FINISHED");
  
}