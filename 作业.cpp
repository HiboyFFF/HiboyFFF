#include<stdio.h>
int main()
{
    int L,N,x;
    int t[200];
    int ID[11];
    int num[50];
    FILE *fp;
    FILE *fp1;
    FILE *fp2;
    fp1=fopen("1.txt","w+");
    fp2=fopen("2.txt","w+");
    scanf("%d %d",&t,&num);
    while(t<=L)
    {
       if(N1>=N) 
       {
           printf("%d",N1);
           fprintf(fp1,"%d",N1);
           fclose(fp1);
        }
       else if(N1<N)
       {
           printf("%d",N1);
           fprintf(fp2,"%d",N1);
           fclose(fp2);
       }
    }
    if(t<=t[1]&&t>=t[12])
    {
        t=0;
        t+=32;
        printf("%d",t);
        fprintf(fp,"%d",t);
    }
    else if(t<t[12]&&t>=t[24])
    {
        t=0;
        t+=16;
        printf("%d",t);
        fprintf(fp,"%d",t);
    }
    else if(t<t[24]&&t>=t[48])
    {
        t=0;
        t+=8;
        printf("%d",t);
        fprintf(fp,"%d",t);
    }
    else if(t<t[48]&&t>=t[96])
    {
        t=0;
        t+=4;
        printf("%d",t);
        fprintf(fp,"%d",t);
    }
    else if(t<t[48]&&t>=t[197])
    {
        t=0;
        t+=2;
        printf("%d",t);
        fprintf(fp,"%d",t);
    }
    else
    {
        t=0;
        t+=1;
        printf("%d",t);
        fprintf(fp,"%d",t);
    }
    x=round(100+log(1+(t-32)/32)*10);
    printf("%d",x);
    fprintf(fp,"%d",x);
    fclose(fp);
    return 0;
}
