#include <stdio.h>
int main()
{
   char str[256],firstchar,lastchar;
   int size,count;
   scanf("%d",&size);
   for(int j=0; j<size;j++){
      scanf("%s",&str);
      for(int i=0; str[i]!='\0';i++){
         firstchar=str[0];
         count=i;
         lastchar=str[i];
      }
      if(count+1<=10){
         printf("%s\n",str);
      }
      else{
      printf("%c%d%c\n",firstchar,count-1,lastchar);
      }
   }
   return 0;
}
