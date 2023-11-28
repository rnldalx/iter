#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
int choix;
int T[50],m,j,val;
int operateur,num1,num2,num3;

printf("bonjour\n");
printf("bienvenue dans votre menu du programme\n");
printf("1:creer un tableau dynamique de dimension 1\n");
pintf("2:un numero de 8 a 10 chiffres\n");
scanf ("%d",&choix);

switch (choix); 
       case1:
       	printf ("vous avez decidez de creer un tableau dynamique de dimension 1\n ");
       	printf("\n entrer un nombre de  valeur  du tableau (max:50\n)");
       	scanf("%d",&val) ;
       	for(m=0;m<val;m++){
       		printf("element[%d]=",m);
       		scanf("%d",&T[m]);
       	}
       		printf("le tableau entrer est \n ");
       		for(m=0;m<val;m++)
		   
		   printf("%d",&T[m]);
		   break;

       case2:
	   printf ("veuillez entrer votre numero de 8 a 10 chiffres 1\n");
       for (j=0;j<8;j++){
       	scanf("%d",num[j]);
	   }
	   if(num[1]>=0&&num[1]<4){
	   	for(j=9;j<3;j--) 
	   	num[m]=num[m-2];
       }
       num[0]=0;
       num[1]=1;
       printf ("veuillez votre nouveau numero est:\n" );
       for (m=0;1<=9;1++){
       	printf ("%d",num[1]);
	   }
	   else if (num[1]>=4&&num[1]<7){
	   	for (m=9;m>2;m--);{
		   num[1]=num[1-2];
		   }
		   num[0]=0
		   num[1]=5
		   printf("vore  nouveau numero est:\n");
		   for (m=0;1<9;1++){
		   	printf ("%d",num[1]);
		   }
	
		else if(num[1]>7&&num[1]<10)  
		for (m=9;m>2;1--)
		num[1]=num[m-2];
	   }
       num[0]=0;
       num[1]=7;
       printf ("votre nouveau numero est:\n");
       for (m=0;1<=9;1++);
       printf ("%d",num[1]);
	returni 0;
}
