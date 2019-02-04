#include<stdio.h>
 
int main()
{
	int Encryptedmessage[100], Counter, Stage1[100],key, Stage2[100], Stage3[100];
	printf("Enter the key which you have to use for decryption:");
	scanf("%d", &key);
	 printf("Enter the Message: ");
	 for(Counter = 1; Encryptedmessage[Counter -1] != key; Counter ++) {
	     scanf("%d", &Encryptedmessage[Counter]);
	     Stage1[Counter] = Encryptedmessage[Counter] + Counter;
	     Stage2[Counter] = key - Stage1[Counter];
	 }
	 Encryptedmessage[Counter - 1] = 0;
     printf("Stage1: ");
	 for(Counter = 1; Encryptedmessage[Counter] != 0 ; Counter++){
	     printf("%d ", Stage1[Counter]);
	 }
    printf("\n");
    printf("Stage2: ");
    for(Counter = 1; Encryptedmessage[Counter] != 0; Counter ++){
    	     printf("%d ", Stage2[Counter]);
    	 }
    printf("\n");
    for (Counter=1; Encryptedmessage[Counter] != 0; Counter ++){
        
        if (Stage2[Counter] >=53){
            Stage3[Counter] = Stage2[Counter]-21;
        }
        else if(Stage2[Counter] <= 26)
        {
            Stage3[Counter]= Stage2[Counter] + 64;
         }
         else{
             Stage3[Counter] = Stage2[Counter] +70;
         }
    }
    printf("Stage3:");
    for(Counter = 1; Encryptedmessage[Counter] != 0; Counter++){
    	   printf("%c", Stage3[Counter] - 1);
    	 }
    	 printf("\n");
    }
