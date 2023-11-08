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
        char dataInscricao[20];
        
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

                    case 4: Inserir_inscricaoDisciplina();
                         break;

                    case 5: Visualizar_TipoCurso();
                         break;

                    case 6: Visualizar_Aluno();
                         break;

                    case 7: Visualizar_Disciplina();
                         break;

                    case 8: Visualizar_inscricaoDisciplina();
                         break;

                    case 9: Atualizar_TipoCurso();
                         break;

                    case 10: Atualizar_Aluno();
                         break;

                    case 11: Atualizar_Disciplina();
                         break;

                     case 12: Atualizar_inscricaoDisciplina();
                         break;

                    case 13: Excluir_TipoCurso();
                         break;

                    case 14: Excluir_Aluno();
                         break;

                  case 15: Excluir_Disciplina();
                         break; 

                  case 16: Excluir_inscricaoDisciplina();
                         break;    
                    
                    case 0: printf("\n Adeus! \n");
                         break;
                    
                    default: printf("\n Opcao invalida, Tente Novamente! :) ");
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
        printf("\n\n Adicionar Codigo TipoCurso: ");
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
        printf("\n O limite de registros foi atingido. Nao e possivel adicionar mais Tipo de Curso. \n");
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

            printf("Codigo TipoCurso: %d\n", tipoCursoArray[i].codigoTipoCurso);
            printf("Nome TipoCurso: %s\n", tipoCursoArray[i].nome);
            printf("Turno TipoCurso: %s\n", tipoCursoArray[i].turno);
            printf("\n\n\n");
        }
    }
}

void Atualizar_TipoCurso() {

    if (tipoCursoCount == 0) {

        printf("\nNenhum Tipo de Curso foi cadastrado ainda. Nao e possivel atualizar.\n");
        return;
           
    } 
    else 
    {
        int codigoAtualizacao;

        printf("\nInforme o codigo do Tipo de Curso que deseja atualizar: ");
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
            printf("\nTipo de Curso com codigo %d nao encontrado.\n", codigoAtualizacao);
        }
    }
}

void Excluir_TipoCurso() {
    
    if (tipoCursoCount == 0) {
        
        printf("\nNenhum Tipo de Curso foi cadastrado ainda. Nao e possivel excluir.\n");
    } 
    else 
    {
        int codigoExclusao;
        
        printf("\nInforme o codigo do Tipo de Curso que deseja excluir: ");
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
            
            printf("\nTipo de Curso excluido com sucesso!\n");
        } 
        else 
        {
            printf("\nTipo de Curso com codigo %d nao encontrado.\n", codigoExclusao);
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
            printf("\nO limite de registros foi atingido. Nao e possível adicionar mais Tipo de Curso.\n");
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

            printf("\n Nenhum Aluno foi cadastrado ainda. Nao e possivel atualizar.\n");
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
                printf("\nAluno com Matricula %d nao encontrado.\n", matriculaAtualizacao);
            }
        }
    }

void Excluir_Aluno() {
    
    if (AlunoCount == 0) {
        
        printf("\nNenhum Aluno foi cadastrado ainda. Nao e possivel excluir.\n");
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
            
            printf("\nAluno excluido com sucesso!\n");
        } 
        else 
        {
            printf("\nAluno com Matricula %d nao encontrada.\n", matriculaExclusao);
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
            printf("\nO limite de registros foi atingido. Nao e possivel adicionar mais Disciplinas.\n");
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

            printf("\n Nenhuma Disciplina foi cadastrado ainda. Nao e possivel atualizar.\n");
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
                printf("\nDisciplina com CodigoDisciplina: %d nao encontrado.\n", DisciplinaAtualizacao);
            }
        }
    }

void Excluir_Disciplina() {
    
    if (DisciplinaCount == 0) {
        
        printf("\nNenhuma Disciplina foi cadastrado ainda. Nao e posivel excluir.\n");
    } 
    else 
    {
        int DisciplinaExclusao;
        
        printf("\nInforme o CodigoDisciplina deseja excluir: ");
        scanf("%d", &DisciplinaExclusao);
        
        int encontrado = 0;
        int indiceExclusao = -1;

        for (int i = 0; i < DisciplinaCount; i++) {
            
            if (DisciplinaArray[i].codigoDisciplina == DisciplinaExclusao) {
                encontrado = 1;
                indiceExclusao = i;
                break;
            }
        }

        if (encontrado) {
            
            for (int i = indiceExclusao; i < DisciplinaCount - 1; i++) {
                DisciplinaArray[i] = DisciplinaArray[i + 1];
            }
            
            DisciplinaCount--;
            
            printf("\nDisciplina excluida com sucesso!\n");
        } 
        else 
        {
            printf("\nDisciplina com CodigoDisciplina %d nao encontrado.\n", DisciplinaExclusao);
        }
    }
}

// -------------------------------------------- FUNÇÃO DISCIPLINA ---------------------------------------------

// -------------------------------------------- FUNÇÃO INSCRIÇÃODISCIPLINA ---------------------------------------------

inscricaoDisciplina inscricaoDisciplinaArray[SIZE];

int inscricaoDisciplinaCount = 0;

void Inserir_inscricaoDisciplina() {

        if (inscricaoDisciplinaCount < SIZE) {
            
            printf("\n\n Insira a Matricula da inscricaoDisciplina: ");
            scanf("%d", &inscricaoDisciplinaArray[inscricaoDisciplinaCount].matricula);

            printf("\n\n Insira o CodigoDisciplina da InscricaoDisciplina: ");
            scanf("%d", &inscricaoDisciplinaArray[inscricaoDisciplinaCount].codigoDisciplina);

            printf("\n\n Insira a DataInscricao da inscricaoDisciplina: ");
            scanf("%s", inscricaoDisciplinaArray[inscricaoDisciplinaCount].dataInscricao);

            
            inscricaoDisciplinaCount++;
            
            printf("\n\n InscricaoDisciplina inserida com sucesso!\n\n");
        } 
        else 
        {
            printf("\nO limite de registros foi atingido. Nao e possível adicionar mais InscricaoDisciplinas.\n");
        }

    }

 void Visualizar_inscricaoDisciplina() {

        if (inscricaoDisciplinaCount == 0) {

            printf("\nNenhuma InscricaoDisciplina foi cadastrada ainda.\n");
        } 
        else 
        {
            printf("\n\n******* Lista de Disciplinas: *******\n\n");

            for (int i = 0; i < inscricaoDisciplinaCount; i++) {

                printf("Matricula InscricaoDisciplina: %d\n", inscricaoDisciplinaArray[i].matricula);
                printf("CodigoDisciplina InscricaoDisciplina : %d\n", inscricaoDisciplinaArray[i].codigoDisciplina);
                printf("DataInscricao InscricaoMatricula: %s\n", inscricaoDisciplinaArray[i].dataInscricao);                
                printf("\n\n\n");
            }
        }
    }

void Atualizar_inscricaoDisciplina() {

        int inscricaoDisciplinaAtualizacao;

        if (inscricaoDisciplinaCount == 0) {

            printf("\n Nenhuma InscricaoDisciplina foi cadastrado ainda. Nao e possivel atualizar.\n");
            return;
        } 
        else 
        {

            printf("\n Informe a Matricula que deseja atualizar: ");
            scanf("%d", &inscricaoDisciplinaAtualizacao);
            
            int encontrado = 0;

            for (int i = 0; i < inscricaoDisciplinaCount; i++) {


                if (inscricaoDisciplinaArray[i].matricula == inscricaoDisciplinaAtualizacao) {
                
                    printf("\nDigite a nova Matricula para InscricaoDisciplina: ");
                    scanf("%d", &inscricaoDisciplinaArray[i].matricula);

                    printf("\nDigite o novo CodigoDisciplina para a InscricaoDisciplina: ");
                    scanf("%d", &inscricaoDisciplinaArray[i].codigoDisciplina);

                    printf("\nDigite o DataInscricao para a InscricaoDsiciplina: ");
                    scanf("%s", inscricaoDisciplinaArray[i].dataInscricao);

                    printf("\n Disciplina atualizado com sucesso!\n");

                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado) {
                printf("\nDisciplina com Matricula:  %d nao encontrado.\n", inscricaoDisciplinaAtualizacao);
            }
        }
    }

void Excluir_inscricaoDisciplina() {
    
    if (inscricaoDisciplinaCount == 0) {
        
        printf("\nNenhuma InscricaoDisciplina foi cadastrado ainda. Nao e posiível excluir.\n");
    } 
    else 
    {
        int inscricaoDisciplinaExclusao;
        
        printf("\nInforme a Matricula que deseja excluir: ");
        scanf("%d", &inscricaoDisciplinaExclusao);
        
        int encontrado = 0;
        int indiceExclusao = -1;

        for (int i = 0; i < inscricaoDisciplinaCount; i++) {
            
            if (inscricaoDisciplinaArray[i].matricula == inscricaoDisciplinaExclusao) {
                encontrado = 1;
                indiceExclusao = i;
                break;
            }
        }

        if (encontrado) {
            
            for (int i = indiceExclusao; i < inscricaoDisciplinaCount - 1; i++) {
                inscricaoDisciplinaArray[i] = inscricaoDisciplinaArray[i + 1];
            }
            
            inscricaoDisciplinaCount--;
            
            printf("\nIscricaoDisciplina excluida com sucesso!\n");
        } 
        else 
        {
            printf("\nInscricaoDisciplina com Matricrula %d nao encontrado.\n", inscricaoDisciplinaExclusao);
        }
    }
}

int main(){ 

     menu();

}

