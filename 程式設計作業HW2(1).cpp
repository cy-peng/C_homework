#include <stdio.h> 
main( )
{
  int a,b,x,y;
   printf("�п�J�@�Ӯy��A:");
   scanf("(%d,%d)",&a,&b);
   printf("�п�Jx�����q:");
   scanf("%d",&x);
   printf("�п�Jy�����q:");
   scanf("%d",&y);
   printf("B�y�Ь�(%d,%d)\n",a+x,b+y);
   if((b+y)==0)
       printf("B�y�ЦbX�b�W");
   if((a+x)==0)
       printf("B�y�ЦbY�b�W");
   if((b+y)==0&&(a+x)==0)
       printf("B�y�Цb���I");
   if ((a+x)>0)
     {if ((b+y>0))
       printf("B�y�Цb�Ĥ@�H��");
      if ((b+y)<0)
       printf("B�y�Цb�ĥ|�H��");
     }
   if ((a+x)<0) 
      {if ((b+y>0))
       printf("B�y�Цb�ĤG�H��");
       if ((b+y)<0)
       printf("B�y�Цb�ĤT�H��");
     } 
}
