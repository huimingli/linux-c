#include<stdio.h>
#include<string.h>
int main(){
   char *p = "abcdef";
   char q[9] = "3456 7";
   int nums[3]={1,32,3};
   printf("%lu %lu \n",sizeof(p),strlen(p));//指针的sizeof为4（32位系统，如果为8时，说明是64位系统）
   printf("%lu %lu \n",sizeof(q),strlen(q));//数组的sizeof为数组长度，strlen是字符长度
   return 0;
}
