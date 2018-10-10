#include <stdio.h>
#define DIM 8
void afficher_lab(int lab[DIM][DIM],char palette[]){
		int i,j;
		for(i=0;i<DIM;i++){
			for(j=0;j<DIM;j++){
				if(i==0 && j==0){
					printf("+--------+\n");
				}
				if(j==0){
					printf("|");
				}
				if(lab[i][j]==0){
					printf("%c",palette[0]);
				}
				if(lab[i][j]==1){
					printf("%c",palette[1]);
				}
				if(j==7){
					printf("|");
				}
				
			}
			printf("\n");
			if(i==DIM-1){
				printf("+--------+\n");
			}
		
		}
}
int main(){
	char palette[2]={' ','*'};
	int lab[DIM][DIM]={{0,0,1,0,0,0,1,1},{1,0,0,1,1,0,1,0},{1,0,1,1,1,0,0,0},{1,0,0,1,0,0,1,1},{0,1,0,0,0,1,0,1},{0,0,0,1,0,1,0,1},{1,1,1,1,0,0,0,0},{1,0,1,1,0,0,0,0}};
	afficher_lab(lab,palette);

return 0;
}
