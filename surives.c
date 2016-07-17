#include<stdio.h>

int fl(int N){
    int f2,f3,f4,i=2;
    f2=f3=f4=0;
    f2=1;
    f3=1;
    while(1)
    {f4=f2+f3;++i;if(i==N){ printf("%d\n",f4);break;}
    f2=f4+f3;++i;if(i==N){ printf("%d\n",f2);break;}
    f3=f2+f4;++i;if(i==N){ printf("%d\n",f3);break;}
    } 
    return 0;
}
int main()
{   
    int N;
    scanf("%d\n",&N);
    fl(N);
    return 0;
}
