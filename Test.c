#include<stdio.h>

typedef struct {
	char Inisial[3];
	int Score;	
} SPlayer;

int main(){
	
	int i=0;
	FILE *fp = fopen("sigma.txt","w");
	
	SPlayer HS;
	
	if (fp == NULL)
	{
		perror("file tidak bisa dibaca");
	}
	
	while(i<6){
		printf("Inisial (3 Karakter):");
		scanf("%3s", &HS.Inisial);
		fflush(stdin);
		printf("\nSkor \t:");
		scanf("%d", &HS.Score);
		fflush(stdin);
		printf("\n");
		fprintf(fp,"%s %d", HS.Inisial, HS.Score);
		i++;
	}
	
	i=0;
	fclose(fp);
	FILE* fload = fopen("sigma.txt", "r");
	printf("NAMA\tSKOR\n");
	if(fp != NULL){
			while(i<5)
			{
				fscanf(fload,"%s %d",&HS.Inisial,&HS.Score);
				if(!feof(fload)){
					printf("%s\t%d\n", HS.Inisial, HS.Score);
				}
				++i;
			}	
		}
		fclose(fload);
	return 0;
	}
	
	

