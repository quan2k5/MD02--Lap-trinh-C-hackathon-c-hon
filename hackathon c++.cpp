#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\nnhap so cot cua mang");
	int m;
	scanf("%d",&m);
	printf("\nnhap so dong cua mang");
	int n;
	scanf("%d",&n);
	int numbers[m][n];
	do{
		printf("\n1.nhap gia tri cac phan  tu cua mang");
		printf("\n2.in cac gia tri phan tu cua mmang theo ma tran");
		printf("\n3.tinh so luong ca c phan tu chia het cho 2 va 3");
		printf("\n4.in ra ca phan tu nam tren duong bien,duong cheo chinh va duong cheo phu");
		printf("\n5.su dung thuat toan sap xep lua chon de sap xep mang tang dan theo cot");
		printf("\n6.in ra cac phan tu la so nguyen to");
		printf("\n7.su dung thuat toan noi bot sap xep cac phan tu nam tren duong cheo chinh  cua mang giam dan");
		printf("\n8.nhap gia tri 1 mang 1 chieu gom a phan tu va chi so dong muon chen vao mang,  thuc hien chen vao mang 2 chieu");
		printf("\n9.thoat");
		int choice;
		printf("\nnhap lua chon cua ban ");
		scanf("%d",&choice);
		int count=0;
		int k;
		switch(choice){
			case 1:
				for(int i=0;i<m;i++){
					for(int j=0;j<n;j++){
						printf("numbers[%d][%d]",i,j);
						scanf("%d",&numbers[i][j]);
					}
				}
				break;
			case 2:
					for(int i=0;i<m;i++){
					for(int j=0;j<n;j++){
						printf("%d  ",numbers[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				count=0;
				for(int i=0;i<m;i++){
					for(int j=0;j<n;j++){
						if(numbers[i][j]%2==0 && numbers[i][j]%3==0){
							count++;
						}
					}
				}
				printf("so luong cac phan tu chia het cho 2 va 3 trong mang la %d",count);
				break;
			case 4:
				printf("cac phan tu nam tren duong bien ");
				for(int i=0;i<m;i++){
					for(int j=0;j<n;j++){
						if(i==0||i==m-1||j==0||j==n-1){
							printf("%d ",numbers[i][j]);
						}
					}
				}
				printf("\n");
				if(m==n){
						printf("cac phan tu nam tren duong cheo phu");
						for(int i=0;i<m;i++){
							for(int j=0;j<n;j++){
								if(i+j==n-1){
								    printf("%d ",numbers[i][j]);
								}
							}
						}
						printf("\n cac phan tu nam tren duong cheo chinh");
						for(int i=0;i<m;i++){
							for(int j=0;j<n;j++){
								if(i==j){
								printf("%d ",numbers[i][j]);
							}
						}
					}
			    }else{
			    	printf("khong hop le");
				}
				break;
			case 5:
				k=m*n;
				for(int i=0;i<k-1;i++){
					for(int j=i+1;j<k;j++){
						if(numbers[i/m][i%m]>numbers[j/n][j%n]){
							int temp=numbers[i/m][i%m];
							numbers[i/m][i%m]=numbers[j/n][j%n];
							numbers[j/n][j%n]=temp;
						}
					}
				}
				for(int j=0;j<n;j++){
					for(int i=0;i<m;i++){
						printf("%d  ",numbers[i][j]);
					}
					printf("\n");
				} break;
			case 6:
				printf("cac so nguyen to co trong mang la ");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						for(int index=numbers[i][j];index>0;index--){
							if(numbers[i][j]%index==0){
								count++;
							}
					}
					if(count==2){
						printf("%d ",numbers[i][j]);
					}
					count=0;
					}
		        }
		        break;
		    case 9:
		    	exit(0);
		    default:
		    	printf("vui long nhap lai tu 1 den 9");			
		}
	}while(1==1);
}
