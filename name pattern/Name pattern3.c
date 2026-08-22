#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter pattern rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
    {
        for(j=1;j<=n;j++){
          if(i==1 || i==3 || i==5 || j==1){
             printf("* ");
          }
          else {
             printf("  ");
          }
      }
      printf("  ");
        for(j=1;j<=n;j++){
          if(j==1||i==5){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
        printf("  ");
        for(j=1;j<=n;j++){
          if(j==1 || j==5 || i==1 || i==3){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
printf("  ");
        for(j=1;j<=n;j++){
          if(j==1||j==5||j==i){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
        printf("  ");
        for(j=1;j<=n;j++){
          if(j==1||i==1||i==5||j==5&&i>2||i==3&&j>2){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
        printf("  ");
        for(j=1;j<=n;j++){
          if(i==1||j==5||j==1||i==5){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
      printf("\n");
     }
    }
}