//bug:length is not increasing 
//bug:flickring too much.
/*bug solved: at main menu dont press any other key that are not in options
otherwise you have to restart the game.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
int spd=1;
int h=24,w=45,hx,hy,fx,fy,sh,st;
int flag=0,score=0,gmovr=0,err=0;
char ss[150],k;
int speed()
{	
	printf ("\nselect speed\n");
	scanf("%d",&spd);
	if(spd==1){spd=1; }
	 else if (spd==3) {spd=(float)(0.1);}
	 else spd=(float)(.987);
	 printf("\npress any key \n");
return spd;
}
void maan()
{ man:
		system("cls");
	printf("\t\t\t\t\t\t Welcome to My Snake Game\n");
	printf("\t\t\t\t press nums key to select options. And then press Enter \n");
	printf(" 1. Start\n 2. Options\n 3. Help\n 4. Exit \n\n\n made&design by Samar\t\t\t\t\t\t\tcopyright reserved to me (o_o)\n");
	printf("\n\n\nP.S.-There are still some bug if you found that then press 3 and enter.\n");
	scanf("%c",&k);
	switch(k)
	{case '1': k=1;break;
	 case '2': {system("cls");
	 			printf("Movement Speed\n 1.Slow\n 2.Medium\n 3.Fast\n");//not working 
				 printf ("P.S.  not working \n");
				spd=speed();
	 	getch();
   				 goto man;
	        	break;
	        }
	 case '3':{ system("cls");
	 	printf("\t\t\t\tHelp Panel\n ---Movement key---\nPress a for left\npress d for right\npress w for up\npress s for down\n\n\n Press any key to return main menu\n");
	 	printf("\n\n\nif question or queries \n contact me:bsc 3rd yr(2019 batch)\nemail:samhackofficial@gmail.com\nmob no.: (0_0)");
		 getch();
		 goto man;  
		break;
	 		}
	 case '4':{ exit(0);
		break;
	       }
	default : printf("\nEnter any valid key\n");getch();
				goto man;
	}
}
void setup()
{
	hx=h/2;
	hy=w/2;
	while(fx==0||fx==23||fy==0||fy==44)
	{
	fx=rand()%23;
	fy=rand()%44;	
	}	
}
void box1()
{
	system("cls");
int i,j;
	for(i=0;i<h;i++)
	{
		for(j=0;j<w;j++)
		{
		if(i==hx&&j==hy)
			{
				printf("O");
			}
		else if (i==fx&&j==fy)
			{
				printf("$");
			}
		else if(i==0||i==23||j==0||j==44)
			{
				printf("#");	
			}
     	else
			printf(" ");
		}
		printf("\n");
	}
}

void mov()
{
	switch(flag)
	{
		case 1: hx--;	break;	
		case 2:	hx++;	break;
		case 3:	hy++;	break;
		case 4:	hy--;	break;
		case 5: exit(0);break;
	}
	if(hx==0||hx==h||hy==0||hy==w)
	{
		gmovr=1;
	}
	if(hx==fx&&hy==fy)
    {
	fx=rand()%23;
	fy=rand()%44;
	score++;
	}	
}

void inp()
{
//	sleep(spd);
	if(kbhit())
	{	
 	switch(getch())
 	{
 	case 'w': flag=1; break;
 	case 's': flag=2; break;	 
	case 'd': flag=3; break;
	case 'a': flag=4; break;	
	case 'q': flag=5; break;
    } 
    }
}

int main()
{

 man:
    maan();
	if(k==1)
	{
   setup(); 
   while(gmovr!=1)
  {
     inp();
	 box1();
	 mov();	
	 printf("Score :%d",score);	 
  }
  	}
  	system("cls");
  	printf ("Your Score:%d",score);
  	printf("\n\n\n\n\n\t\t\t=======   =====   ===   ===   =====     =====  =    =  ====  =====\n\t\t\t==        =   =   = =  =  =   =         =   =  =    =  =     =   =\n\t\t\t==        =====   =  =    =   =====     =   =  =    =  ====  =====\n\t\t\t==   ==   =   =   =       =   =         =   =   =  =   =     = =  \n\t\t\t=======   =   =   =       =   =====     =====    ==    ====  =  ==\n");
    printf("press any key ");
	getch();
	gmovr=0;
	score=0;
goto man;
if (err=1) {main();}
}
