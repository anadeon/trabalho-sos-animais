#include<stdio.h>
#include<math.h>

int main ()
{
	char sexo, questionario, cadastro;
	int H, M, idade, data, animais, macho=0, femea=0, mediaidade=0, raca [10] = {0} , cidade [5] = {0}, resgate [3] = {0}, local=0, pessoa=0, racao=0, tiporacao[3]={0}, qtdpotes, coleiras, caminhas, brinquedos, roupinhas, totalRA=0, totalpotes=0, totalcoleiras=0, totalbrinquedos=0, totalroupinhas=0, totalcaminhas=0;
	
	do 
	{
		
	printf("\n ========== Qual e a raca do animal? Digite o numero correspondente: ========== \n 1 - Pastor Alemao;\n 2 - Golden Retriever;\n 3 - Vira lata;\n 4 - Dachshund;\n 5 - Labrador; \n 6 - Rottweiler;\n 7 - Poodle;\n 8 - Yorkshire terrier;\n 9 - Shih Tzu;\n 10 - Outros.\n\n");
	scanf("%d",&animais);
		
	switch (animais)
	{
		case 1: 
	 		printf("\n -- Voce selecionou Pastor Alemao --\n");
	 		raca[0] = raca [0] + 1;
		break;
		
		case 2:
	 		printf("\n -- Voce selecionou Golden Retriever --\n");
			 raca[1] = raca [1] + 1;	
		break;
		
		case 3:
	 		printf("\n -- Voce selecionou Vira lata --\n");
	 		raca [2] = raca [2] + 1;
		break;
		
		case 4:
	 		printf("\n -- Voce selecionou Dachshund --\n");
	 		raca [3] = raca [3] + 1;
		break;
		
		case 5:
	 		printf("\n -- Voce selecionou Labrador --\n");
	 		raca [4] = raca [4] + 1;
		break;
		
		case 6:
	 		printf("\n -- Voce selecionou Rottweiler --\n");
	 		raca [5] = raca [5] + 1;
		break;
		
		case 7:
			printf("\n -- Voce selecionou Poodle --\n");
			raca [6] = raca [6] + 1;
		break;
		
		case 8:
			printf("\n -- Voce selecionou Yorkshire Terrier --\n");
			raca [7] = raca [7] + 1;
		break;
		
		case 9:
			printf("\n -- Voce selecionou Shih Tzu --\n");
			raca [8] = raca [8] + 1;
		break;
		
		case 10:
			printf("\n -- Voce selecionou outros --\n");
			raca [9] = raca [9] + 1;
		break;
		
		default:
			printf("\n -- Numero selecionado invalido --\n");
	}
	
	
	do {
	printf("\n\n ====== Qual e o sexo do animal? ====== \n M - Macho / F - Femea\n\n" );
		scanf(" %c", &sexo);
		
		if (sexo == 'F' || sexo == 'f') {
			femea = femea + 1;
		}
		

		else if (sexo == 'M' || sexo == 'm') {
			macho = macho + 1;
		}
	} while (sexo != 'F' && sexo != 'M' && sexo != 'f' && sexo != 'm'  );
		
	
	printf("\n ====== Qual e a idade aproximadamente do animal? ====== \n\n" );
		scanf(" %d", &idade);
		
		if (idade < 0) {
			printf ("Idade invalida!");
		}
		mediaidade = (mediaidade + idade) / (femea + macho);
	
	
	printf("\n ====== Qual foi o local de resgate? Digite o numero correspondente: ======\n 1 - Porto Alegre ;\n 2 - Canoas;\n 3 - Eldorado do Sul;\n 4 - Roca Sales;\n 5 - Cruzeiro do Sul. \n\n " );
		scanf(" %d",&local);
	
	switch (local) {
		
		case 1: 
	 		printf("\n -- Porto Alegre --\n");
	 		cidade[0] = cidade [0] + 1;
		break;
		
		case 2:
	 		printf("\n -- Canoas --\n");
			 cidade[1] = cidade [1] + 1;	
		break;
		
		case 3:
	 		printf("\n -- Eldorado do Sul --\n");
	 		cidade [2] = cidade [2] + 1;
		break;
		
		case 4:
	 		printf("\n -- Roca Sales --\n");
	 		cidade [3] = cidade [3] + 1;
		break;
		
		case 5:
	 		printf("\n -- Cruzeiro do Sul --\n");
	 		cidade [4] = cidade [4] + 1;
	 	break;
	
	 		default:
		    printf("\n -- Numero selecionado invalido --\n");
	}
	
	printf("\n ====== Quem resgatou o animal? Digite o numero correspondente: ======\n 1 - Bombeiros; \n 2 - Voluntarios; \n 3 - Policia; \n 4 - Ibama.\n\n" );
		scanf(" %d",&pessoa);
		
	switch (pessoa) {
		
		case 1: 
	 		printf("\n -- Bombeiros --\n");
	 		resgate[0] = resgate [0] + 1;
		break;
		
		case 2:
	 		printf("\n -- Voluntarios --\n");
			 resgate[1] = resgate [1] + 1;	
		break;
		
		case 3:
	 		printf("\n -- Policia --\n");
	 		resgate [2] = resgate [2] + 1;
		break;
		
		case 4:
	 		printf("\n -- Ibama --\n ");
	 		resgate [3] = resgate [3] + 1;
		break;
		
			default:
			printf("\n -- Numero selecionado invalido-- \n");
		
	}
	
	
		
	printf ("\n === Quantidade pacotes de racao recebidos: === \n ");
	scanf ("%d", &racao);
	totalRA = totalRA + racao;
		
	printf (" === Quantidade de potes recebidos: ===\n ");
	scanf ("%d", &qtdpotes);
	totalpotes = totalpotes + qtdpotes;
	
	printf (" === Quantidade de coleiras recebidos: ===\n ");
	scanf ("%d", &coleiras);
	totalcoleiras = totalcoleiras + coleiras;
	
	printf (" === Quantidade de caminhas/casinhas recebidos: ===\n ");
	scanf ("%d", &caminhas);
	totalcaminhas = totalcaminhas + caminhas;
	
	printf (" === Quantidade de brinquedos recebidos: ===\n ");
	scanf ("%d", &brinquedos);
	totalbrinquedos = totalbrinquedos + brinquedos;
	
	printf (" === Quantidade de roupinhas recebidos: ===\n ");
	scanf ("%d", &roupinhas);
	totalroupinhas = totalroupinhas + roupinhas;
	
	
	printf ("\n\n === Deseja cadastrar mais animais? (S/N) ===\n");
	scanf (" %c", &cadastro);
	
	} while (cadastro == 'S' || cadastro == 's');
	
	
	printf (" \n ========== RELATORIO FINAL: ==========\n");
	printf("\n ===== Contagem de racas selecionadas: =====\n");
    printf(" -- Pastor Alemao: %d\n", raca[0]);
    printf(" -- Golden Retriever: %d\n", raca[1]);
    printf(" -- Vira lata: %d\n", raca[2]);
    printf(" -- Dachshund: %d\n", raca[3]);
    printf(" -- Labrador: %d\n", raca[4]);
    printf(" -- Rottweiler: %d\n", raca[5]);
    printf(" -- Poodle: %d\n", raca[6]);
    printf(" -- Yorkshire Terrier: %d\n", raca[7]);
    printf(" -- Shih Tzu: %d\n", raca[8]);
    printf(" -- Outros: %d\n", raca[9]);
    printf(" -- Quantidade de machos: %d\n", macho);
    printf(" -- Quantidade de femeas: %d\n", femea);
    printf(" -- Media da idade dos animais: %d", mediaidade);
    
    printf("\n\n ========== Animais resgatados por cidade: ==========\n");
    printf(" -- Porto Alegre: %d\n", cidade[0]);
    printf(" -- Canoas: %d\n", cidade[1]);
    printf(" -- Eldorado do Sul: %d\n", cidade[2]);
    printf(" -- Roca Sales: %d\n", cidade[3]);
    printf(" -- Cruzeiro do Sul: %d\n", cidade[4]);
    
    printf ("\n ========== Relatorio resgates: ==========\n");
    printf (" -- Bombeiros: %d\n", resgate[0]);
    printf (" -- Voluntarios: %d\n", resgate[1]);
    printf (" -- Policia: %d\n", resgate[2]);
    printf (" -- Ibama: %d\n", resgate[3]);
   
    
    printf (" \n ========== Relatorio doacoes total: ========== \n");
    printf ("-- Quantidade de potes: %d\n", qtdpotes);
    printf ("-- Quantidade de pacotes de racao: %d\n", totalRA);
    printf ("-- Quantidade de coleiras recebidas: %d\n", totalcoleiras);
    printf ("-- Quantidade de caminhas/casinhas recebidas: %d\n", totalcaminhas);
    printf ("-- Quantidade de brinquedos recebidas: %d\n", totalbrinquedos);
	printf ("-- Quantidade de roupinhas recebidas: %d\n", totalroupinhas);
   	
   	return 0;
}
