#include <stdio.h>
#include <conio.h>


int main (){
	int total, ct_t=0, ct_b=0, ct_r=0;
	char tpVinho;
	
	do{
		printf("\n\nDigite [s] para sair!");
		printf("\nt - tinto\nb - branco\nr - rosado\n Digite a opcao: ");
		tpVinho = getche ();
		
		switch(tpVinho)
		{
			case't':
			ct_t ++;
			break;
			
			case'b':
			ct_b ++;				
			break;
			
			case'r':
			ct_r ++;	
			
			
		}
	}while(tpVinho != 's');
		
		printf("\n\nQuantidade de tinto %d", ct_t);
		printf("\n\nQuantidade de tinto %d", ct_t);
		printf("\n\nQuantidade de tinto %d", ct_t);
			
	return 0;		
	
	
}
