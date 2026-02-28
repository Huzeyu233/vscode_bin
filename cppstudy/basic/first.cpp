#include<iostream>
int jisuan(int a,int b);
int main(){
    int x,y;
    x=10;
    y=231;
    int c=jisuan(x,y);
    printf("%d",c);
    int ewwq=x*y+c;
    printf("ewwq=%d",ewwq);
    return 0;
}
int jisuan(int a,int b){
    return a+b;
}