#include<stdio.h>
 
int main()
{
	int Dmessage[100], i,stage1[100],key,stage2[100],stage3[100], j;
	printf("enter the key ");
	scanf("%d", &key);
	 printf("Enter the number ");
	 for(i = 1; i<=6 ; i++){
	     
	     scanf("%d", &Dmessage[i]);
	     stage1[i] = Dmessage[i] + i;
	     stage2[i] = key - stage1[i];

 }
     printf("stage1: ");
	 for(i = 1; ; i++){
	     printf("%d ", stage1[i]);
	 }
printf("\n");
printf("stage2: ");
for(i = 1; i<=6; i++){
	     printf("%d ", stage2[i]);
	 }
printf("\n");
for (i=1; i <=6; i++){
    if(stage2[i]<=26){
        stage3[i]= stage2[i] + 64;
     }
     else{
         stage3[i] = stage2[i] +70;
     }
}
printf("stage3:");
for(i = 1; i<=6; i++){
	     printf("%c ", stage3[i] - 1);
	 }
	 printf("\n");
}