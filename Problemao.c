#include <stdio.h>

/*
QUESTAO 12 - PROBLEMAO


To be continued ....
*/

int main(){

    int i, o=0, num_voo[37], num_voo_desejado, qtd_lgrs_disp[37], cod_cli=0, choice=0;
    char cliente_documento;
    /*
    for(i=0;i<=37;i++){
        printf("\nEntre com o número do Voo: ");
        scanf("%d",&num_voo[i]);
        printf("\nEntre com quantidade de lugares disponiveis no Voo: ");
        scanf("%d",&qtd_lgrs_disp{i});
        printf("#####");
    }

    printf("\nVoos Lidos com SUCESSO!\n");
    */


    while(o=1){
        printf("\nEntre com a opcao desejada:\n1- Novo Cliente\n0- Sair\n");
        scanf("%d",&choice);

        if(choice==1){
            printf("\nEntre com o Documento do Cliente: ");
            scanf("%s",&cliente_documento);
            cod_cli++;
            printf("\nQual o numero do Voo desejado: ");
            scanf("%d",&num_voo_desejado);
        }else if(choice==0){
            break;
            }

    }

    printf("\nACABOU!\n");
    system("pause");
    return 0;
}
