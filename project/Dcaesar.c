#include<stdio.h>
 
int main()
{
	int Dmessage[100], i,stage1[100],key,stage2[100],stage3[100], j=1;
	printf("enter the key ");
	scanf("%d", &key);
	 printf("Enter the message ");
	 
	 for(i = 1; Dmessage[i -1]!=key; i++){
	     
	     scanf("%d", &Dmessage[i]);
	     stage1[i] = Dmessage[i] + i;
	     stage2[i] = key - stage1[i];
	 }
	 Dmessage[i - 1] = 0;
     printf("stage1: ");
	 for(i = 1; Dmessage[i] != 0 ; i++){
	     printf("%d ", stage1[i]);
	 }
printf("\n");
printf("stage2: ");
for(i = 1; Dmessage[i] != 0; i++){
	     printf("%d ", stage2[i]);
	 }
printf("\n");

printf("stage3:");
for(i = 1; Dmessage[i] != 0; i++){
	   printf("%c", stage2[i] - 1);
	 }
	 printf("\n");
}
