#include<stdio.h> // Biblioteca de comunicação com o usuário
#include<stdlib.h> //Biblioteca de alocação de espaço em memória
#include<locale.h> //Biblioteca de alocação de texto por região
#include<string.h> //Biblioteca responsável por cuidar das string
int registro ()
{
	char arquivo [40];
    char cpf [40];
    char nome [40];
    char sobrenome [40];
    char cargo [40];
    
    printf ("digite o cpf a ser cadastrado: ");
    scanf ("%s",cpf);
   
   
    strcpy(arquivo, cpf); // reponsável por copiar os valores das string
    
    FILE *file; // cria o arquivo
    file = fopen(arquivo , "w"); //cria o arquivo
    fprintf(file, cpf);//salva o valor da variável
    fclose(file);//fecha o arquivo
    
    file= fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome á ser cadastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file= fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o sobrenome á ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file= fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file); 
    
    printf("Digite o cargo á ser cadastrado: ");
    scanf("%s", cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file, cargo);
    fclose(file);
    
    system("pause");
   
}

int consulta()
{
	setlocale(LC_ALL, "portuguese"); // Definindo a Linguagem
	
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o cpf a ser consultado: ");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
    printf("Não foi possível abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file)  != NULL)
	
	
	{
	printf("\nEssas são as informações do usuário :");
	printf("%s", conteudo);
	printf("\n\n");
	}
    system("pause");
   
}

int deletar ()
{
    char cpf [40];
    
    printf("Digite o cpf do usuario a ser deletado: ");
    scanf("%s",cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
    	printf("O usuario não se encontra no sistema!.\n");
    	system("pause");
	}
}

int main()
    {
    int opcao=0; // Definindo variáveis
    int laco=1;
    
    for(laco=1;laco=1;)
    {
    	
    	system("cls");
 
        setlocale(LC_ALL, "portuguese"); // Definindo a Linguagem

    	printf( "### Cartório da EBAC ###\n\n" ); // inicio do menu
	    printf("Escolha a opção desejada do menu:\n\n");
	    printf("\t1 - Registrar nome\n");
	    printf("\t2 - Consultar nomes\n");
	    printf("\t3 - Deletar nomes\n");
	    printf("opção:  "); // Fim do menu
	
    	scanf("%d", &opcao); // Armazenando a escolha do usuário
	
	    system("cls");
	    
	    
	    switch(opcao)
	    {
	    	case 1:
	        registro ();
		    break;
		    
		    case 2:
		   	consulta ();
		   	break;
		   	
		   	case 3:
		   	deletar ();
		    break;
		    
		   
		    default:
		   	printf("Essa opção não está disponivel!\n");
		    system("pause");
		    break;
		    	
		   		
	    		
		}
	
    	
    	
    }
	
}
	
