#include<stdio.h> // Biblioteca de comunica��o com o usu�rio
#include<stdlib.h> //Biblioteca de aloca��o de espa�o em mem�ria
#include<locale.h> //Biblioteca de aloca��o de texto por regi�o
#include<string.h> //Biblioteca respons�vel por cuidar das string
int registro ()
{
	char arquivo [40];
    char cpf [40];
    char nome [40];
    char sobrenome [40];
    char cargo [40];
    
    printf ("digite o cpf a ser cadastrado: ");
    scanf ("%s",cpf);
   
   
    strcpy(arquivo, cpf); // repons�vel por copiar os valores das string
    
    FILE *file; // cria o arquivo
    file = fopen(arquivo , "w"); //cria o arquivo
    fprintf(file, cpf);//salva o valor da vari�vel
    fclose(file);//fecha o arquivo
    
    file= fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome � ser cadastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file= fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o sobrenome � ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file= fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file); 
    
    printf("Digite o cargo � ser cadastrado: ");
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
    printf("N�o foi poss�vel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file)  != NULL)
	
	
	{
	printf("\nEssas s�o as informa��es do usu�rio :");
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
    	printf("O usuario n�o se encontra no sistema!.\n");
    	system("pause");
	}
}

int main()
    {
    int opcao=0; // Definindo vari�veis
    int laco=1;
    
    for(laco=1;laco=1;)
    {
    	
    	system("cls");
 
        setlocale(LC_ALL, "portuguese"); // Definindo a Linguagem

    	printf( "### Cart�rio da EBAC ###\n\n" ); // inicio do menu
	    printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - Registrar nome\n");
	    printf("\t2 - Consultar nomes\n");
	    printf("\t3 - Deletar nomes\n");
	    printf("op��o:  "); // Fim do menu
	
    	scanf("%d", &opcao); // Armazenando a escolha do usu�rio
	
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
		   	printf("Essa op��o n�o est� disponivel!\n");
		    system("pause");
		    break;
		    	
		   		
	    		
		}
	
    	
    	
    }
	
}
	
