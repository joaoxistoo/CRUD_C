#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 1000


   typedef struct{
        int codigoTipoCurso;
        char nome[100];
        char turno[100];

    } TipoCurso;

   typedef struct{ 

        int matricula;
        char cpf [15];
        char nome[100];
        char sexo[20];
        char email[100];
        int codigoTipoCurso;

   } Aluno;

   typedef struct{ 

        int codigoDisciplina;
        int codigoTipoCurso;
        char nome[100];
        char nomeProfessor[100];

   } Disciplina;

    typedef struct{ 

        int matricula;
        int codigoDisciplina;
        int dataInscricao;
        
} inscricaoDisciplina;


void Inserir_TipoCurso();
void Visualizar_TipoCurso();
void Atualizar_TipoCurso();
void Excluir_TipoCurso();

void Inserir_Aluno();
void Visualizar_Aluno();
void Atualizar_Aluno();
void Excluir_Aluno();

void Inserir_Disciplina();
void Visualizar_Disciplina();
void Atualizar_Disciplina();
void Excluir_Disciplina();

void Inserir_inscricaoDisciplina();
void Visualizar_inscricaoDisciplina();
void Atualizar_inscricaoDisciplina();
void Excluir_inscricaoDisciplina();

void menu(){

     int opcao = 0;
          do{
               printf("\n\n Menu: \n\n");
               printf("\n Opcao .1 Inserir_TipoCurso ");
               printf("\n Opcao .2 Inserir_Aluno ");
               printf("\n Opcao .3 Inserir_Disciplina ");
               printf("\n Opcao .4 Inserir_inscricaoDisciplina ");

               printf("\n\n Opcao .5 Visualizar_TipoCurso ");
               printf("\n Opcao .6 Visualizar_Aluno ");
               printf("\n Opcao .7 Visualizar_Disciplina ");
               printf("\n Opcao .8 Visualizar_inscricaoDisciplina");

               printf("\n\n Opcao .9 Atualizar_TipoCurso ");
               printf("\n Opcao .10 Atualizar_Aluno ");
               printf("\n Opcao .11 Atualizar_Disciplina ");
               printf("\n Opcao .12 Atualizar_inscricaoDisciplina ");

               printf("\n\n Opcao .13 Excluir_TipoCurso ");
               printf("\n Opcao .14 Excluir_Aluno ");
               printf("\n Opcao .15 Excluir_Disciplina ");
               printf("\n Opcao .16 Excluir_inscricaoDisciplina ");

               printf("\n\n Opcao .0 Sair do programa ");

               printf("\n\n Escolha uma das Opcoes: ");
               scanf("%d", &opcao);

               switch(opcao){

                    case 1: Inserir_TipoCurso();
                         break;

                    case 2: Inserir_Aluno();
                         break;

                    case 3: Inserir_Disciplina();
                         break;

//                    case 4: Inserir_inscricaoDisciplina();
//                         break;

                    case 5: Visualizar_TipoCurso();
                         break;

                    case 6: Visualizar_Aluno();
                         break;

                    case 7: Visualizar_Disciplina();
                         break;

//                    case 8: Visualizar_inscricaoDisciplina();
//                         break;

                    case 9: Atualizar_TipoCurso();
                         break;

                    case 10: Atualizar_Aluno();
                         break;

                    case 11: Atualizar_Disciplina();
                         break;

//                     case 12: Atualizar_inscricaoDisciplina();
//                         break;

                    case 13: Excluir_TipoCurso();
                         break;

                    case 14: Excluir_Aluno();
                         break;

//                  case 15: Excluir_Disciplina();
//                         break; 

//                  case 16: Excluir_inscricaoDisciplina();
//                         break;    
                    
                    case 0: printf("\n Adeus! \n");
                         break;
                    
                    default: printf("\n Opcao inválida, Tente Novamente! :) ");
                        break;
                    }

     
               } 
               
          while(opcao);    

}

//    --------------------------------------- FUNÇÃO TIPO TIPOCURSO -------------------------------------------

TipoCurso tipoCursoArray[SIZE];
int tipoCursoCount = 0;

void Inserir_TipoCurso() {
    if (tipoCursoCount < SIZE) {
        printf("\n\n Adicionar Código TipoCurso: ");
        scanf("%d", &tipoCursoArray[tipoCursoCount].codigoTipoCurso);

        printf("\n\n Adicionar Nome TipoCurso: ");
        scanf("%s", tipoCursoArray[tipoCursoCount].nome);

        printf("\n\n Adicionar Turno TipoCurso:");
        scanf("%s", tipoCursoArray[tipoCursoCount].turno);

        tipoCursoCount++;
        printf("\n\nTipo de Curso inserido com sucesso!\n\n");
    } 
    else 
    {
        printf("\n O limite de registros foi atingido. Não é possível adicionar mais Tipo de Curso. \n");
    }

}

void Visualizar_TipoCurso() {
    if (tipoCursoCount == 0) {

        printf("\nNenhum Tipo de Curso foi cadastrado ainda.\n");
    } 
    else 
    {
        printf("\n\n******* Lista de Tipos de Curso: *******\n\n");

        for (int i = 0; i < tipoCursoCount; i++) {

            printf("Código TipoCurso: %d\n", tipoCursoArray[i].codigoTipoCurso);
            printf("Nome TipoCurso: %s\n", tipoCursoArray[i].nome);
            printf("Turno TipoCurso: %s\n", tipoCursoArray[i].turno);
            printf("\n\n\n");
        }
    }
}

void Atualizar_TipoCurso() {

    if (tipoCursoCount == 0) {

        printf("\nNenhum Tipo de Curso foi cadastrado ainda. Não é possível atualizar.\n");
        return;
           
    } 
    else 
    {
        int codigoAtualizacao;

        printf("\nInforme o código do Tipo de Curso que deseja atualizar: ");
        scanf("%d", &codigoAtualizacao);
        
        int encontrado = 0;

        for (int i = 0; i < tipoCursoCount; i++) {

            if (tipoCursoArray[i].codigoTipoCurso == codigoAtualizacao) {
               
                printf("\nDigite o novo nome para o Tipo de Curso: ");
                scanf("%s", tipoCursoArray[i].nome);

                printf("\nDigite o novo turno para o Tipo de Curso: ");
                scanf("%s", tipoCursoArray[i].turno);

                printf("\nTipo de Curso atualizado com sucesso!\n");
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("\nTipo de Curso com código %d não encontrado.\n", codigoAtualizacao);
        }
    }
}

void Excluir_TipoCurso() {
    
    if (tipoCursoCount == 0) {
        
        printf("\nNenhum Tipo de Curso foi cadastrado ainda. Não é possível excluir.\n");
    } 
    else 
    {
        int codigoExclusao;
        
        printf("\nInforme o código do Tipo de Curso que deseja excluir: ");
        scanf("%d", &codigoExclusao);
        
        int encontrado = 0;
        int indiceExclusao = -1;

        for (int i = 0; i < tipoCursoCount; i++) {
            
            if (tipoCursoArray[i].codigoTipoCurso == codigoExclusao) {
                encontrado = 1;
                indiceExclusao = i;
                break;
            }
        }

        if (encontrado) {
            
            for (int i = indiceExclusao; i < tipoCursoCount - 1; i++) {
                tipoCursoArray[i] = tipoCursoArray[i + 1];
            }
            
            tipoCursoCount--;
            
            printf("\nTipo de Curso excluído com sucesso!\n");
        } 
        else 
        {
            printf("\nTipo de Curso com código %d não encontrado.\n", codigoExclusao);
        }
    }
}

//    --------------------------------------- FUNÇÃO TIPO TIPOCURSO -------------------------------------------

//  --------------------------------------------- FUNÇÃO ALUNO ------------------------------------------------ 

Aluno AlunoArray[SIZE];

int AlunoCount = 0;

void Inserir_Aluno() {
        if (AlunoCount < SIZE) {
            
            printf("\n\n Insira a Matricula Aluno: ");
            scanf("%d", &AlunoArray[AlunoCount].matricula);

            printf("\n\n Insira o Cpf Aluno: ");
            scanf("%s", AlunoArray[AlunoCount].cpf);

            printf("\n\n Insira o Nome Aluno: ");
            scanf("%s", AlunoArray[AlunoCount].nome);

            printf("\n\n Insira o Sexo Aluno: ");            
            scanf("%s", AlunoArray[AlunoCount].sexo);

            printf("\n\n Insira o Email Aluno: ");
            scanf("%s", AlunoArray[AlunoCount].email);

            printf("\n\n Insira o CodigoTipoCurso Aluno: "); 
            scanf("%d", &AlunoArray[AlunoCount].codigoTipoCurso);

            AlunoCount++;
            
            printf("\n\n Aluno inserido com sucesso!\n\n");
        } 
        else 
        {
            printf("\nO limite de registros foi atingido. Não é possível adicionar mais Tipo de Curso.\n");
        }

    }

    void Visualizar_Aluno() {
        if (AlunoCount == 0) {

            printf("\nNenhum Aluno foi cadastrado ainda.\n");
        } 
        else 
        {
            printf("\n\n******* Lista de Alunos: *******\n\n");

            for (int i = 0; i < AlunoCount; i++) {

                printf("Matricula Aluno: %d\n", AlunoArray[i].matricula);
                printf("Cpf Aluno: %s\n", AlunoArray[i].cpf);
                printf("Nome Aluno: %s\n", AlunoArray[i].nome);
                printf("Sexo Aluno: %s\n", AlunoArray[i].sexo);
                printf("Email Aluno: %s\n", AlunoArray[i].email);
                printf("CodigoTipoCurso Aluno: %d\n", AlunoArray[i].codigoTipoCurso);
                printf("\n\n\n");
            }
        }
    }

void Atualizar_Aluno() {

        if (AlunoCount == 0) {

            printf("\n Nenhum Aluno foi cadastrado ainda. Não é possível atualizar.\n");
            return;
        } 
        else 
        {
            int matriculaAtualizacao;

            printf("\nInforme a Matricula do Aluno que deseja atualizar: ");
            scanf("%d", &matriculaAtualizacao);
            
            int encontrado = 0;

            for (int i = 0; i < AlunoCount; i++) {

                if (AlunoArray[i].matricula == matriculaAtualizacao) {
                
                    printf("\nDigite a nova Matricula para o Aluno: ");
                    scanf("%d", &AlunoArray[i].matricula);

                    printf("\nDigite o novo cpf para o Aluno: ");
                    scanf("%s", AlunoArray[i].cpf);

                    printf("\nDigite o novo Nome para o Aluno: ");
                    scanf("%s", AlunoArray[i].nome);

                    printf("\nDigite o novo sexo para o Aluno: ");
                    scanf("%s", AlunoArray[i].sexo);

                    printf("\nDigite o novo Email para o Aluno: ");
                    scanf(" %s", AlunoArray[i].email);

                    printf("\nDigite o novo CodigoTipoCurso para o Aluno: ");
                    scanf(" %d", &AlunoArray[i].codigoTipoCurso);


                    printf("\n Aluno atualizado com sucesso!\n");
                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado) {
                printf("\nAluno com Matricula %d não encontrado.\n", matriculaAtualizacao);
            }
        }
    }

void Excluir_Aluno() {
    
    if (AlunoCount == 0) {
        
        printf("\nNenhum Aluno foi cadastrado ainda. Não é possível excluir.\n");
    } 
    else 
    {
        int matriculaExclusao;
        
        printf("\nInforme a Matricula do Aluno que deseja excluir: ");
        scanf("%d", &matriculaExclusao);
        
        int encontrado = 0;
        int indiceExclusao = -1;

        for (int i = 0; i < AlunoCount; i++) {
            
            if (AlunoArray[i].matricula == matriculaExclusao) {
                encontrado = 1;
                indiceExclusao = i;
                break;
            }
        }

        if (encontrado) {
            
            for (int i = indiceExclusao; i < AlunoCount - 1; i++) {
                AlunoArray[i] = AlunoArray[i + 1];
            }
            
            AlunoCount--;
            
            printf("\nAluno excluído com sucesso!\n");
        } 
        else 
        {
            printf("\nAluno com Matricula %d não encontrada.\n", matriculaExclusao);
        }
    }
}

//  --------------------------------------------- FUNÇÃO ALUNO ------------------------------------------------

// -------------------------------------------- FUNÇÃO DISCIPLINA ---------------------------------------------

Disciplina DisciplinaArray[SIZE];

int DisciplinaCount = 0;

void Inserir_Disciplina() {
        if (DisciplinaCount < SIZE) {
            
            printf("\n\n Insira o CodigoDisciplina da Disciplina: ");
            scanf("%d", &DisciplinaArray[DisciplinaCount].codigoDisciplina);

            printf("\n\n Insira o CodigoTipoCurso da Disciplina: ");
            scanf("%d", &DisciplinaArray[DisciplinaCount].codigoTipoCurso);

            printf("\n\n Insira o Nome da Disciplina: ");
            scanf("%s", DisciplinaArray[DisciplinaCount].nome);

            printf("\n\n Insira o NomeProfessor da Disciplina: ");            
            scanf("%s", DisciplinaArray[DisciplinaCount].nomeProfessor);


            DisciplinaCount++;
            
            printf("\n\n Disciplina inserida com sucesso!\n\n");
        } 
        else 
        {
            printf("\nO limite de registros foi atingido. Não é possível adicionar mais Disciplinas.\n");
        }

    }

 void Visualizar_Disciplina() {
        if (DisciplinaCount == 0) {

            printf("\nNenhuma Disciplina foi cadastrada ainda.\n");
        } 
        else 
        {
            printf("\n\n******* Lista de Disciplinas: *******\n\n");

            for (int i = 0; i < DisciplinaCount; i++) {

                printf("Matricula Aluno: %d\n", DisciplinaArray[i].codigoDisciplina);
                printf("Cpf Aluno: %d\n", DisciplinaArray[i].codigoTipoCurso);
                printf("Nome Aluno: %s\n", DisciplinaArray[i].nome);
                printf("Sexo Aluno: %s\n", DisciplinaArray[i].nomeProfessor);                
                printf("\n\n\n");
            }
        }
    }


void Atualizar_Disciplina() {

        int DisciplinaAtualizacao;

        if (DisciplinaCount == 0) {

            printf("\n Nenhuma Disciplina foi cadastrado ainda. Não é possível atualizar.\n");
            return;
        } 
        else 
        {

            printf("\n Informe o CodigoDisciplina que deseja atualizar: ");
            scanf("%d", &DisciplinaAtualizacao);
            
            int encontrado = 0;

            for (int i = 0; i < DisciplinaCount; i++) {


                if (DisciplinaArray[i].codigoDisciplina == DisciplinaAtualizacao) {
                
                    printf("\nDigite o novo CodigoDisciplina para Disciplina: ");
                    scanf("%d", &DisciplinaArray[i].codigoDisciplina);

                    printf("\nDigite o novo CodigoTipoCurso para a Disciplina: ");
                    scanf("%d", &DisciplinaArray[i].codigoTipoCurso);

                    printf("\nDigite o novo Nome para a Disciplina: ");
                    scanf("%s", DisciplinaArray[i].nome);

                    printf("\nDigite o novo NomeProfessor para a Disciplina: ");
                    scanf("%s", DisciplinaArray[i].nomeProfessor);

                    printf("\n Disciplina atualizado com sucesso!\n");

                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado) {
                printf("\nDisciplina com CodigoDisciplina: %d não encontrado.\n", DisciplinaAtualizacao);
            }
        }
    }




int main(){ 

     menu();

}
