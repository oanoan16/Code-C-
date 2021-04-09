#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define N 10
char map[N][N], map1[N][N];
int check_K=0, check_E=0;
int Px=2, Py=5, Ex=3, Ey=7, Kx=6, Ky=9, check;

void tao_map(){
	memset(map, '_' , sizeof(map));
	map[Px][Py] = 'P';
	map[Ex][Ey] = 'E';
	map[Kx][Ky] = 'K';
}
void in_map(){
	tao_map();
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			printf("%c ", map[i][j]);
		}
		printf("\n");
	}
	return ;
}
void check_map()
{
	if ( map[Kx][Ky] == 'P' )          
	{
		in_map();
		printf("Nhat duoc key roi ne!") ;
		check_K = 1 ;
		return ;
	}
	if ( map[Ex][Ey] == 'P' )   
		return ;
	
	return;
}
void update_map(){
	int check_go=1;
	if(check==1){
		if(Py==0){
			check_go=0;
			return ;
		}
		else Py--;
	} 
	if(check==2){
		if(Px==N-1){
			check_go=0;
			return ;
		}
		else Px++;
	}
	if(check==3){
		if(Py==N-1){
			check_go=0;
			return ;
		}
		else Py++;
	}
	if(check==4){
		if(Px==0){
			check_go=0;
			return;
		}
		else Px--;
	}
	if(check_go=0){
		printf("Khong di duoc!");
	}
	else{
		check_map();
		in_map();
	}
	return ;
}


int main(){
//	tao_map();
	in_map();
	check_K=0;
	check_E=0;
	char go;
//	printf("Nhap buoc di: ");
	int check_go;	
	while(check_E != 1){
		printf("Nhap buoc di: \n");
		check_go=1;
		scanf("%c", &go);
		if(go == 'A') check=1;
		else if(go == 'S') check=2;
			else if(go == 'D') check=3;
				else if(go == 'W') check=4;
				else{
					in_map();
					printf("Moi nhap lai: ");
					check_go=0;
					continue;
			
				}
			update_map();
			printf("\n");
	}
	return 0;
}
