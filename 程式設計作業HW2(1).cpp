#include <stdio.h> 
main( )
{
  int a,b,x,y;
   printf("請輸入一個座標A:");
   scanf("(%d,%d)",&a,&b);
   printf("請輸入x的分量:");
   scanf("%d",&x);
   printf("請輸入y的分量:");
   scanf("%d",&y);
   printf("B座標為(%d,%d)\n",a+x,b+y);
   if((b+y)==0)
       printf("B座標在X軸上");
   if((a+x)==0)
       printf("B座標在Y軸上");
   if((b+y)==0&&(a+x)==0)
       printf("B座標在原點");
   if ((a+x)>0)
     {if ((b+y>0))
       printf("B座標在第一象限");
      if ((b+y)<0)
       printf("B座標在第四象限");
     }
   if ((a+x)<0) 
      {if ((b+y>0))
       printf("B座標在第二象限");
       if ((b+y)<0)
       printf("B座標在第三象限");
     } 
}
