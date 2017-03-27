#include<stdio.h>
struct personal{
    char name[10];
    int age;
    char sex[2];
};
int main(){
    struct personal user;
    int n=user.age;
    printf("%d",n);
    return 0;
}
