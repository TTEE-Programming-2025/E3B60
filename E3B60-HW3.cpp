#include<stdio.h>											//��Jstdio.h��Ʈw 
#include<stdlib.h>											//��Jstdlib.h��Ʈw
#include<conio.h>											//��Jconio.h��Ʈw
#include<windows.h>											//��Jwindows.h��Ʈw
#include<time.h>											//��Jtime.h��Ʈw
char ch,yn;													//�ŧi�r�� 
int num,xx,x,i,j;											//�ŧi�ܼ�
int seat[9][9]={0};											//�ŧi9x9�x�}�y��
void Aa();													//�ŧi�Ƶ{��
void Bb();														
void Cc();													
void Dd();
void run();
void end();
void menu();
void menu(void){										
	printf("~~~~~~~~[���t��]~~~~~~~~~\n");               
	printf("* (a)Available seats      *\n");
	printf("* (b)Arrange for you      *\n");
	printf("* (c)Choose by yourself   *\n");
	printf("* (d)Exit                 *\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void end(void){
printf("��ı�o�o�@�����@�~���I���A��F�ڦn�[�~�����A���O�ǥѳo�����@�~�A�ϧڧ�F�����Ӧp��ާ@�C");	
}
void run (void){
	scanf("%c",&ch);                                	//����L��J�r���ë��w��ch�x�s
	fflush(stdin);										//�M���w�İϪ����
	switch(ch){											//�P�_ch���� 
	case 'a':                                  			//ch�ŦX'a'     
		system("cls");									//�M���ù�
		Aa();											//����Ƶ{��Aa()
		menu();											//����Ƶ{��menu()
		printf("�п�J�@�Ӧr��\n");                     //�L�X " " �̭����F��
		run();											//����Ƶ{��run()
		break;
	case 'b':	                                		//ch�ŦXb'  
		system("cls");									//�M���ù�
		Bb();											//����Ƶ{��Bb()
		menu();											//����Ƶ{��menu()
		printf("�п�J�@�Ӧr��\n");                     //�L�X " " �̭����F��
		run();											//����Ƶ{��run()
		break;                                  		
	case 'c':											//ch�ŦX'c'
		system("cls");                                 	//�M���ù�
		Cc();											//����Ƶ{��Cc()
		menu();											//����Ƶ{��menu()
		printf("�п�J�@�Ӧr��\n");                     //�L�X " " �̭����F��
		run();											//����Ƶ{��run()
		break;
	case 'd':											//ch�ŦX'd'
		system("cls");                                 	//�M���ù�
		Dd();											//����Ƶ{��Dd()
		menu();											//����Ƶ{��menu()
		printf("�п�J�@�Ӧr��\n");                     //�L�X " " �̭����F��
		run();											//����Ƶ{��run()
		break;
	default:											//�����ŦX 
		system("cls");									//�M���ù�
		end();											//����Ƶ{��end()
		exit(0);										//�����{�� 
	}
}
void Aa(void){
	int i,j;
    printf("\\123456789\n");

    for(i=0;i<=8;i++)									//���h�j��L�X�}�C�O0�L�X-�O1�L�X*/
	{	 
    	printf("%d",9-i);																				
        for(j=0;j<=8;j++)
		{
            if(seat[i][j]==0)printf("-");
            if(seat[i][j]==1)printf("*");
        }
        printf("\n");																		
    }
    if (getch()){										//�Y���U��L						
		system("cls");									//�M���ù�
	}
}
void Bb(void){											//���|�g
	int n;
	printf("�аݻݭn�X�Ӯy��(1~4):");											
	scanf("%d",&n);	
	fflush(stdin);											
}
void Cc(void){
	char yn;
	char z1,z,z2,esc;
	int i,j;
	int a,b;
			
	while(1){
		printf("�п�J�Q�n���y�� �ĴX��-�ĴX��\n");														
		z1=getche();									//�x�s�r���ܼ� 
		z=getche();
		z2=getche();
		fflush(stdin);
		if(z1<'1'||z1>'9'){								//�y�줶��9x9 
			printf("��J���~�A�Э��s��J\n");										
			continue;
		}
		if(z2<'1'||z2>'9'){
			printf("��J���~�A�Э��s��J\n");										
			continue;
		}
		if(z!=45){
			printf("�榡���~�A�Э��s��J\n");											
			continue;
		}
		a=z1-'0'-9; 									//ascii code�ন�Ʀr
		a<0?a=a*(-1):1;									//�ন�ĴX��
		b=z2-'0'-1;										//ascii code�ন�Ʀr
		if(seat[a][b]==1){
			printf("���y��w���H�A�Э��s��J\n"); 									
		}
		else{
			seat[a][b]=2;
		}
		printf("\n");
		printf("��esc�����Υ��N���~��\n");
		esc=getch();									//���Uesc����		
		if(esc==27){
			break;
		}
	}																	
		printf("\\123456789\n");															
		for(i=0;i<=8;i++){
		printf("%d",9-i);															
		for(j=0;j<=8;j++){								//�L�X���᪺�y��� 
			if(seat[i][j]==0)printf("-");
			if(seat[i][j]==1)printf("*");
			if(seat[i][j]==2)printf("@");
		}
		printf("\n");													
		}
		printf("�T�{�L�~�Ы����N��^����\n");
		fflush(stdin);
		if (getch()){
			system("cls");
		}
}
void Dd(void){											
	printf("Continue?(y/n)\n");							//�L�X " " �̭����F��
	printf("�O�_�n���s��J\n");	 
	scanf("%c",&yn);									//����L��J�r���ë��w��yn�x�s
	fflush(stdin);										//�M���w�İϪ����
	if(yn=='y'||yn=='Y'){								//�Yyn='y'��'Y' 
		system("cls");									//�M���ù� 
		menu();											//����Ƶ{��menu() 
		printf("�п�J�@�Ӧr��\n");						//�L�X " " �̭����F��
		run();											//����Ƶ{��run()
	}
	else if(yn=='N'||yn=='n'){						 	//�_�h�Yyn='N'��'n' 
		system("cls");									//�M���ù�
		end();											//����Ƶ{��end()
		exit(0);										//�����{�� 
	}
	else{												//�_�h 
			printf("���~�T�����s��J\n");				//�L�X " " �̭����F��
			Dd();										//����Ƶ{��Cc() 
	}
}
int main(){
    printf("------------------------------------------------------------------------------------\n"); 
	printf("        			.::::----------..                     .::::.                    \n");    
    printf("      			.:-::-------------:::.                  .-::...                     \n");
    printf("			...:--..:::-::-----===--::::-:               .-:::::.                   \n");  
	printf("		.::--::::::....:.:::--===----:::::--      ::----------:--                   \n");   
    printf("	:-::::::::.....::...::--===-----:::::::-     =-------------                     \n");  
    printf("    -::::::::::.::::::::::------:--::::::..:.     :-----:----=-:                    \n");  
    printf("     ...::.....::::::.:-:::::--::::::::::::::          ....----==:                  \n");  
    printf("       :......::::::::::::::::::::::. ..:.::.              .=-----=-.               \n");  
    printf("      :.......::.::::::::::::::::::..    ..:                ---======-              \n");  
    printf("     ::........:::::...:::::::::-:.::.......                .=-========.            \n");  
    printf("     -::::...:::::.:..:::::::.:::::::::..:                  :+==========.           \n");  
    printf("    :::::::::::::::::::::::::.:::::::---:                   -==-=======-=.          \n");  
    printf("    ::::-::-----:..::::::..:::::::----.                    .==---=========          \n");  
    printf("    -::::-::-----::::......::::-:..               ---:    :--:-----------=:         \n");  
    printf("    -:::::::-----::......::::---                .=---=   :-:::::::---:----=         \n");  
    printf("    :::::::::-----:..::. ::::-=.               .=-----:---:-:::::::::::----.        \n");  
    printf("    .-:-:::::::::...:.   .:::-                 -----------::::::::::::::::-.        \n");  
    printf("     :--::::::::   :       ..             .-===-------------:::::-::::::::-.        \n");  
    printf("      -:::::-:......                   .:===-==-=---------:::::::--:::::::-         \n");  
    printf("       -:::::::::::                   ----========-------:::::------::::---         \n");  
    printf("        :..:::::::-                 .---===----------::::-----:----:::::--.         \n");  
    printf("         ::::::::-=                .---=-----------::::::::-::-----:------          \n");  
    printf("          .--:---==:               ----------==-----------:--:------:----           \n");  
    printf("            .--=====.              =-----------==--===----------::-:----.           \n");  
    printf("              .-==--=------:       =---=================-------:----:------.        \n");  
    printf("                 ----==---=-==.    :=---=========+====+=====----------::---:        \n");  
    printf("                -=---======--=:     ---------===============-----:-------:          \n");  
    printf("               ---====..::::.        :=------====--===-=-=-------::::..             \n");  
    printf("               -----=.                .-==---==---------=---=-:                     \n");  
    printf("               -::--.                   .:----:::::-------:.                        \n");  
    printf("                ::.                         ..:::::::..                             \n");  
	printf("------------------------------------------------------------------------------------\n");
	do{																//����	
    printf("�п�J4�ӼƦr�K�X\n");                                  //�L�X " " �̭����F��
    scanf("%d",&num);                                               //����L��J��ƨë��w��num�x�s
    fflush(stdin);													//�M���w�İϪ����
	if(num==2022){                                                  //�Ynum=2021 
		xx=4;														//xx�����~����=4 
	}
	else{															//�_�h 
		xx++; 														//���~����+1
	}
	}while(xx<3);													//����~���Ƥp��3 
	if(xx==3){														//�Y���~����=3 
		printf("ĵ�i\n");											//�L�X " " �̭����F��
		Sleep(500);													//��0.5��
		system("cls");												//�M���ù�
	}
	else{															//�_�h 
		printf("�w��");                                           	//�L�X " " �̭����F��
		Sleep(500);													//��0.5��
		system("cls");                                              //�M���ù�
		srand(time(NULL));
		for(x=1;x<=10;x++){	
        i=rand()%9;
        j=rand()%9;
        if(seat[i][j]==1)x--;
        seat[i][j]=1;
    }		
		menu();														//����Ƶ{��menu()
		printf("�п�J�@�Ӧr��\n");                             	//�L�X " " �̭����F��
		run();														//����Ƶ{��run()
	}
  
	end();												     		//����Ƶ{��end()
	system("pause");                                    			//�I�spause���O�A�ΨӼȰ��{��������
	return 0;														//���槹���A�Ǧ^���0
 }
	
