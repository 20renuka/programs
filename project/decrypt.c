#include<stdio.h>
 
int main()
{
	int Dmessage[100], i,stage1[100],key,stage2[100],stage3[100], j=1;
	printf("enter the key ");
	scanf("%d", &key);
	 printf("Enter the number ");
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
for (i=1; Dmessage[i] != 0; i++){
    
    if (stage2[i] >=53){
        stage3[i] = stage2[i]-21;
    }
    else if(stage2[i] <= 26)
    {
        stage3[i]= stage2[i] + 64;
     }
     else{
         stage3[i] = stage2[i] +70;
     }
}
printf("stage3:");
for(i = 1; Dmessage[i] != 0; i++){
	   printf("%c", stage3[i] - 1);
	 }
	 printf("\n");
}
