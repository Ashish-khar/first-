#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

main()
	{
		system("cls");
		system("color fc");
		
		char x[15];
		char e[15];
		int  z, d, c, com, pascom;
		int g;
		int  a=0, b=0, y, j = 1;
		int bill=0, bom=0, boe=0, bob=0;
		struct database{
		char name[15];
		char id[15];
		int reg;
		char password[15];
		int home[15];		
		}customer[100];
		printf("Welcome to Top Ocean milk delivery \n");
		printf("1.)login in\n2.)Sign up\n\n\n");	
		scanf("%d",&c);
	if(c==1)
	{
		printf("User id \n");
		scanf("%s", &x);
		printf("Password \n");
		scanf("%s", &e);
		FILE *database = fopen("C:\\CDB.txt","r");
	
		do
		{	
		fscanf(database," %d\t %s\t%s\t%s\n",&customer[j].reg,&customer[j].name,&customer[j].id,&customer[j].password);
		/*	printf("%d\n",customer[j].reg);
		sleep(1);*/
		b=a;
		a=customer[j].reg;
		com = strcmp(x,customer[j].id);
		/*	printf("%d\n",com);*/
		
		}while(com != 0 && b<customer[j].reg);
		
			if(com == 0)
			{
				pascom = strcmp(e,customer[j].password);
				if(pascom==0)
				{
						printf("Welcome %s \n",customer[j].name);
					
					 	do
						{
						 	z = 0;
							printf("\n\n\nSelect the item to add in cart \n\n1)MILK\t\t$45.00/K.G.\n\n2)EGG\t\t$5.00/piece\n\n3)BREAD\t\t$35.00/pack\n\n");
							scanf("%d",&g);
								if(g==1)
									{
									printf("How much liters of milk ?\n");
									scanf("%d",&z);
									bom+=z*45;
									printf("\n\nDo you want to add more items  \n1)Yes\n\n2)No\n\n");
									scanf("%d",&d);
									if(d==2)
									{
										break;
									}
									else if(d==1)
									{
									continue;
									}
									}
								
								else if(g==2)
									{
									
									printf("How Many eggs ? \n");
									scanf("%d",&z);
									boe+=z*5;
									printf("\n\nDo you want to add more items  \n1)Yes\n\n2)No\n\n");
									scanf("%d",&d);
									if(d==2)
									{
										break;
									}
									else if(d==1)
									{
									continue;
									}
									
									}
								
									
									
								else if(g==3)
									{
									
									printf("How much packs of bread ? \n");
									scanf("%d",&z);
									bob+=z*35;
									printf("\n\nDo you want to add more items  \n1)Yes\n\n2)No\n\n");
									scanf("%d",&d);
									if(d==2)
									{
										break;
									}
									else if(d==1)
									{
									continue;
									}
									}
						}while(d==1);
						
					bill = bom+boe+bob;
					printf("\n\n\n\n\n\n\n\n\tYOUR CART\n");
					printf("NUMBER OF EGGS = %d\n",boe/5);
					printf("LITERS OF MILK = %d\n",bom/45);
					printf("PACKS OF BREAD = %d\n",bob/35);
					
					
					printf("\n\nTOTAL BILL=%d$\n\n\n",bill);
				}
				else if(pascom!=0)
				{
						printf("WRONG PASSWORD");
						sleep(2);
						exit(0);
										
				}
									
			}
			else if(com != 0)
			{
				printf("User Not Found");	
				sleep(2);
				exit(0);			
			}
	}
		
		
		
		
		
		
	else if(2) //sing up
	{
	FILE *database = fopen("C:\\CDB.txt","r");
	
	do
	{	
		fscanf(database," %d\t %s\t%s\t%s\n",&customer[j].reg,&customer[j].name,&customer[j].id,&customer[j].password);
		/*printf("%d",customer[j].reg);
		sleep(1);*/
		b=a;
		a=customer[j].reg;
		
	}while(b<customer[j].reg);
	
	
	printf("\tCustomer registeration\n\t Your Unique ID is %d\n",++b);
	printf("Name\n");
	scanf("%s",&customer[b].name);
	printf("User id\n");
	scanf("%s",&customer[b].id);
	printf("Password\n");
	scanf("%s",&customer[b].password);
	printf("\n\t  Registration Successfull\n");
	printf("\tPlease note your unique ID is %d\n",b);
	database = fopen("C:\\CDB.txt","a");
	fprintf(database," %d\t %s\t%s\t%s\n",b,customer[b].name,customer[b].id,customer[b].password);

	
	/*database = fopen("C:\\CDB.txt","r");
	fscanf(database," %d\t %s\t%d\t%s\n",&customer[i].reg,&customer[i].name,&customer[i].id,&customer[i].password);
	printf("%d",&customer[i].reg);
	*/
	fclose(database);

	
	sleep(2);
			
	}
	else
	{
		printf("Sorry wrong Input");
	}
	
return(0);
			
	
}

