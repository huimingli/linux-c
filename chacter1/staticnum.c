#include<stdio.h>
int func(int x){
    static int n=5;//编译阶段已完成初始化
    n++;
    return x+n;
}
int main(){
    for(int i=0;i<3;i++){
        printf("%d\n",func(1));
    }
    return 0;
}
   
