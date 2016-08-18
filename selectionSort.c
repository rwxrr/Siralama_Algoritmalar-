#include <stdio.h>
#include <stdlib.h>

/* Selection Sort */

int main(int argc, char *argv[]) {
	
	int i,j,tmp,boyut;

	
	printf("Kac adet eleman gireceksiniz...\n");
	scanf("%d",&boyut);
	int dizi[boyut];
	
	
	for(i=0;i<boyut;i++)
	{
		printf("%d. sayiyi gir.",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<boyut;i++){
	
	for(j=0;j<boyut;j++)
	{

		if(dizi[j]>dizi[i]){

		tmp=dizi[i];
		dizi[i]=dizi[j];
		dizi[j]=tmp;
	}
}

}
	for(i=0;i<boyut;i++){
		printf("\n%d",dizi[i]);

}

getch ();
return 0;

}
	
