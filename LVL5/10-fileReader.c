#include <stdio.h>

//Bir Dosyayi Okuyup Ekrana Yazan Program

int main()
{
	char text;
	char fileName[20] = "10-filetext.txt";
	FILE* fileP;
	
	printf("\n'%s' is\n",fileName);
	
	fileP = fopen(fileName, "r");
	
	if(fileP == NULL)
	{
		printf("\nHata Alindi\n");
	}
	
	else
	{
		text = fgetc(fileP);
		while(text != EOF)
		{
			printf("%c",text);
			text = fgetc(fileP);
		}
		
		fclose(fileP);
	}
	
	printf("\nProgram End\n");
	
	return 0;
}
