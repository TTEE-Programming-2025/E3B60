#include<stdio.h>
#include<stdlib.h>

/*
�o�����@�~���ڹ� C �y�������e���F��`�J���z�ѡA
�S�O�O�b�e����X�P����P�_�����ΤW�C�ڵo�{�A�]�p�ϧή�
�A�ݭn�Ҽ{�r���ƦC������ʡA�����ܹL��������ϮסA�_�h��X�ɷ|��o���áC
�������~�A���ٽƲߤF scanf �P printf ���ϥΡA�H�� if-else �P�_���c�����ΡC
���M�@�}�l�J��F�@�ǿ��~�A����ڦ��\�]�X�Q�n���e���ɡA�P��D�`�����N�P�A
�o���@�~��ڨӻ��O�@���_�Q���ǲ߸g��C
*/

int main(void)
{
	int a; //�ŧi�ܼ�a
	char c; //�ŧi�r��b

	printf("\t    ||    \n");
    printf("\t    ||    \n");
    printf("\t  ______  \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");
    printf("\t |#######| \n");//�o�O�e�@�M����
    printf("\t |#######| \n");
    printf("\t  \_____/  \n");

    system("pause"); //�Ȱ��ù��e��
    system("CLS"); //�M���ù�

        printf("��J�K�X\n");
        scanf("%d",&a); //��J�K�X
    if(a==2024) //�K�X���T a=2024
    {
        printf("�w��\n");
    }
    else if(a!=2024) //�K�X���~ a!=2024
    {
        printf("ĵ�i!��J���~\n");
        return 0;
    }


    system("pause");
    system("CLS");
	printf("----------------------------\n"); //�C�L�D���
	printf("| 'A'...'Z' : Uppercase    |\n");
	printf("| 'a'...'z' : Lowercase    |\n");
	printf("| '0'...'9' : Digit        |\n");
	printf("| Otherwise : E3B60�B�}��  |\n");
	printf("----------------------------\n");
	printf("��J�@�Ӧr��\n"); //���ܿ�J�r��
	scanf("%s",&c); //��J�r��

    if('A'<=c && c<='Z') //�Yc���j�g�r��
    {
        printf("Uppercase\n");
    }
    else if('a'<=c && c<='z') //�Yc���p�g�r��
    {
        printf("Lowercase\n");
    }
    else if('0'<=c && c<='9') //�Yc���Ʀr
    {
        printf("Digit\n");
    }
    else //�Yc����L�r��
    {
        printf("E3B 60 �B�}�� \n");
    }
    system("pause");

    return 0;

    }

