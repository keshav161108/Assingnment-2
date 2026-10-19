#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int d=i+64;
          char ch=(char)d;
        for(int j=1;j<=i;j++){
          
          printf("%c",ch);
        }
        printf("\n");
        
    }
}