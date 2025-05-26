#include<stdio.h>											//Enter the stdio.h function library
#include<stdlib.h>											//Enter the stdlib.h function library
#include<conio.h>											//Enter the conio.h function library
#include<windows.h>											//Enter the windows.h function library
#include<time.h>											//Enter the time.h function library
void Aa(int);				//declare subroutine
void Bb(int);														
void Cc(char[10]);													
void Dd();
void Ee();
void run();
void end();
void menu();
float grades(int); 
struct student{			    //structure
	char name[10];			//declaration character
	int id;					//declare variable
	int math;
	int physical;
	int english;
	}student[10];
float grades(int i){	   //declare subroutine
	float a=((float)(student[i].math+student[i].physical+student[i].english)/3);
	return a;
} 
int n=0;
void menu(void){										
	printf("--------[Grade system]-----------\n");               
	printf("| a.Enter student grades        |\n");
	printf("| b.Display student grades      |\n");
	printf("| c.Search for student grades   |\n");
	printf("| d.Grand ranking               |\n");
	printf("| e.Exit system                 |\n");
	printf("---------------------------------\n");
}
void end(void){
	printf("我覺得經過這次的作業練習,程式對我來說越來越難了,看來需要多花時間練習了!");
}
void run (void){
	char ch,name[10];
	scanf("%c",&ch);                                	//Enter characters from the keyboard and assign them to ch for storage
	fflush(stdin);										//Clear buffer data
	switch(ch){											//Judgment ch condition 
	case 'a':                                  			//ch matches 'a'     
		system("cls");									//clear screen
		printf("請輸入人數(5~10):");
		scanf("%d",&n);									//Enter characters from the keyboard and assign them to n for storage
		fflush(stdin);									//Clear buffer data
		if(n<5||n>10){									//If n is not between 5~10 
			printf("錯誤請改正\n");
		}
		else{
			Aa(n);										//Execute subroutine Aa()
		}
		system("cls");									//clear screen
		menu();											//Execute the subroutine menu()
		printf("請輸入一個字元\n");                     //prints what's inside " "
		run();											//Execute the subroutine run()
		break;
	case 'b':	                                		//ch matches b  
		system("cls");									//clear screen
		int j;							
		for(j=1;j<=n;j++){								//Execute n times
		Bb(j);											//Execute the subroutine Bb()
		}
		if (getch()){									//If the keyboard is pressed						
		system("cls");									//clear screen
		}		
		menu();											//Execute the subroutine menu()
		printf("請輸入一個字元\n");                     //prints what's inside " "
		run();											//Execute the subroutine run()
		break;                                  		
	case 'c':											//ch matches 'c'
		system("cls");                                 	//clear screen
		printf("請輸入要搜尋的姓名:");
		scanf("%s",&name);								//Enter characters from the keyboard and assign them to name storage
		fflush(stdin);									//Clear buffer data
		Cc(name);										//Execute the subroutine Cc()
		if (getch()){									//If the keyboard is pressed						
		system("cls");									//clear screen
		}												
		menu();											//Execute the subroutine menu()
		printf("請輸入一個字元\n");                     //prints what's inside " "
		run();											//Execute the subroutine run()
		break;
	case 'd':											//ch matches 'd'
		system("cls");                                 	//clear screen
		Dd();											//Execute the subroutine Dd()
		menu();											//Execute the subroutine menu()
		printf("請輸入一個字元\n");                     //prints what's inside " "
		run();											//Execute the subroutine run()
		break;
	case 'e':											//ch matches 'e'
		system("cls");                                 	//clear screen
		Ee();											//Execute the subroutine Ee()
		menu();											//Execute the subroutine menu()
		printf("請輸入一個字元\n");                     //prints what's inside " "
		run();											//Execute the subroutine run()
		break;
	default:											//Neither match 
		system("cls");									//clear screen
		end();											//Execute the subroutine end()
		exit(0);										//end program 
	}
}
void Aa(int p){
	int i;												
	for(i=1;i<=p;i++){									
		student[i].id=0;
		student[i].math=-1;
		student[i].physical=-1;
		student[i].english=-1;
	}
	for(i=1;i<=p;i++){									//Enter p data
		printf("請輸入姓名:");
		scanf("%s",&student[i].name);					//Enter characters from the keyboard and assign them to student[i].name for storage
		fflush(stdin);									//Clear buffer data
	while(1){
		printf("請輸入學號(6位整數):");
		scanf("%d",&student[i].id);						//Enter characters from the keyboard and assign them to student[i].id for storage
		fflush(stdin);									//Clear buffer data
		if(student[i].id>999999||student[i].id<100000){	//If the range is not between 100000~999999
			printf("錯誤請改正\n");
			continue;
		}
		else{
			break;
		}
	}
	while(1){ 
		printf("請輸入數學成績(0~100):");
		scanf("%d",&student[i].math);					//Enter characters from the keyboard and assign them to student[i].math for storage
		fflush(stdin);									//Clear buffer data
		if(student[i].math<0||student[i].math>100){	//If the range is not between 0~100 
			printf("錯誤請改正\n");
			continue;
		}
		else{
			break;
		}
	}
	while(1){
		printf("請輸入物理成績(0~100):");
		scanf("%d",&student[i].physical);				//Enter characters from the keyboard and assign them to student[i].physical for storage
		fflush(stdin);									//Clear buffer data
		if(student[i].physical<0||student[i].physical>100){	//If the range is not between 0~100
			printf("錯誤請改正\n");
			continue;
		}
		else{
			break;
		}
	}
	while(1){
		printf("請輸入英文成績(0~100):");
		scanf("%d",&student[i].english);				//由Enter characters from the keyboard and assign them to student[i].english for storage
		fflush(stdin);									//Clear buffer data
		if(student[i].english<0||student[i].english>100){	//If the range is not between 0~100
			printf("錯誤請改正\n");
			continue;
		}
		else{
			break;
		}
	}
		printf("\n");
	}
}
void Bb(int i){		
	printf("姓名:%s\n",student[i].name);
	printf("學號:%0d\n",student[i].id);
	printf("數學成績:%d\n",student[i].math);
	printf("物理成績:%d\n",student[i].physical);
	printf("英文成績:%d\n",student[i].english);
	printf("平均為%.1f\n",grades(i));
	printf("\n");						
}
void Cc(char name[10]){
	int i;
	for(i=1;i<=n;i++){
		if(strcmp(name,student[i].name)==0){			//If the input name matches the input name of a
			Bb(i);
			return;
		} 
	}
	printf("查無此人\n");
}
void Dd(void){											
	int i,j,k;											
	int g[]={0};
	float grade[]={0};
	float t;
	for(i=1;i<=n;i++){
		grade[i-1]=grades(i);
		g[i]=i;
	}
	for(i=0;i<=n;i++){
		for(j=1;j<=i;j++){
			if(grade[j]>grade[j-1]){
				t=grade[j];
				grade[j]=grade[j-1];
				k=g[j];
				g[j]=g[j-1];
				grade[j-1]=t;
				g[j-1]=k;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d.姓名:%s\t學號:%0d\t平均成績:%.1f\n",i+1,student[g[i]+1].name,student[g[i]+1].id,grade[i]);
	}
	
}
void Ee(void){
	char yn;
	printf("Continue?(y/n)\n");							//prints what's inside " "
	printf("是否要重新輸入\n");	 
	scanf("%c",&yn);									//Enter characters from the keyboard and assign them to yn for storage
	fflush(stdin);										//Clear buffer data
	if(yn=='y'||yn=='Y'){								//if yn='y' or 'Y'
		system("cls");									//clear screen
		menu();											//Execute the subroutine menu()
		printf("請輸入一個字元\n");						//prints what's inside " "
		run();											//Execute the subroutine run()
	}
	else if(yn=='N'||yn=='n'){						 	//Otherwise if yn='N' or 'n'
		system("cls");									//clear screen
		end();											//Execute the subroutine end()
		exit(0);										//end program
	}
	else{												//otherwise
			printf("錯誤訊息重新輸入\n");				//prints what's inside " "
			Ee();										//Execute the subroutine Ee()
	}
}
int main(){
	printf("                    		:-=++===+=+++++=--.                                  \n"); 
    printf("                        .-+**=..      ::::::=###-                                \n"); 
    printf("                      -**=-::        .:::::::--=+**+-.                           \n"); 
    printf("                    =*+:::::.        ::::::::::----==*#+                         \n"); 
    printf("                  -*+:::::::        .:::::::::::-----=*++.                       \n"); 
    printf("                 =#-:::::::.        .::::::::::::::-=+++++**+:                   \n"); 
    printf("            -+*+#*:::::::::         .:::::::::::::::::::::::-+*:                 \n"); 
    printf("          =#+-:*+:::::::::.         ::::::::::::::::::::::::::-*+                \n"); 
    printf("        .*+-:::*::::::::::          .::::::::::::-=:::::::::::::+*               \n"); 
    printf("       .#+::::=::::::::::.          .::::::::::::#*-:::::::::::::+*              \n"); 
    printf("      .#=::::-#:::::::::.            :::::::::::-#=-::::::::::::::#-             \n"); 
    printf("      *+::::-+*::::::::.              ::-:::::::=#=-::::::::::::::+*             \n"); 
    printf("     =#:::::-*+:::-*+++*.  :--:.     *++++#=::::=#=--+---:::::::::-#.            \n"); 
    printf("     #=:::::+#+::::===-:   -##+.      ::-=-:::::-#+-=#---::::::::::*+            \n"); 
    printf("    =#::::-#=-.....      :-.+*-:--         ..::..*+--**-*=:::::::::-#:           \n"); 
    printf("    *+::::*+ ......       :-. .::          ......:#=-=#-+#=:::::::::+#           \n"); 
    printf("    ==::::+#:....                          ...... =*=-=-:--::::::::::**          \n"); 
    printf("    #-::::-+**+=-:..                              .##=----::::::::::-+*#:        \n"); 
    printf("    #-::::--=-==++***#**++++****+*++*+*****+**###*****+----::::::::::=###=       \n"); 
    printf("    *+:-::-==-======##***###**#**#******####*+==---=*#**=*+--:::--:::-=#+.       \n"); 
    printf("    -#-=-::-=--=#=-=**-----==+#===+#+=====++--:::---=#=-*##+=------:::-=#-       \n"); 
    printf("     **#+-:---=+*    -::::.  *-...:#-  -*=::--:::::-=+#.   -**=---------=#+      \n"); 
    printf("      ***----=-=# .++=:::.   :++**=:   #: :.  .::::--=#+     :+#*++#*+=**=+#-    \n"); 
    printf("       .**=--=+=***+=##=.              #-+##=.::::::--=#.       :-==:=+***+**.   \n"); 
    printf("         =#+=-*=====-##*               .-:::-:::::::---#+     .                  \n"); 
    printf("           -+#****+#**++                    :::::::::--++..-+#*.                 \n"); 
    printf("              :. :+*. =*                    :::::::::--++#+=-:*-                 \n"); 
    printf("                      =+                    :::::::::-==++:::.++                 \n"); 
    printf("                      ++                    :::::::::--=#+:.  ++                 \n"); 
    printf("                      *=.                   :::::::::----=   *+                  \n"); 
    printf("                     .#-:.                  :::::::::---#-  +=                   \n"); 
    printf("                    .+#::::                ::::::::::---#+++:                    \n"); 
    printf("                  -*+=-:::::.           ..:::::::::::--==:                       \n"); 
    printf("                  #=::::::::::........::::::::::::::---++.                       \n"); 
    printf("                  =#==++*+++*++++===---::::::-------=--+#                        \n"); 
    printf("                   **#:        ..:--===+++*#**++=----==#=                        \n"); 
    printf("                    **                       .:**---==**                         \n"); 
    printf("                                               .#=--=*#                          \n"); 
    printf("                                                =#==*#.                          \n"); 
    printf("                                                 #*#*                            \n"); 
    printf("                                                 :=:                             \n");  
	int num,xx;
	do{																//implement	
    printf("請輸入4個數字密碼\n");                                  //prints what's inside " "
    scanf("%d",&num);                                               //Enter an integer from the keyboard and assign it to num for storage
    fflush(stdin);													//Clear buffer data
	if(num==2025){                                                  //if num=2021 
		xx=4;											        		//xx is the number of errors=4
	}
	else{															//otherwise
		xx++; 														//Number of errors +1
	}
	}while(xx<3);													//When the number of errors is less than 3 
	if(xx==3){														//If the number of errors=3
		printf("警告\n");											//prints what's inside " "
		Sleep(500);													//Stop for 0.5 seconds
		system("cls");												//clear screen
	}
	else{															//otherwise
		printf("歡迎");                                           	//prints what's inside " "
		Sleep(500);													//Stop for 0.5 seconds
		system("cls");                                              //clear screen
    }		
		menu();														//Execute the subroutine menu()
		printf("請輸入一個字元\n");                             	//prints what's inside " "
		run();														//Execute the subroutine run()
		end();														//Execute the subroutine end()
	system("pause");                                    			//Call the pause command to suspend the execution of the program
	return 0;														//After execution, the integer 0 is returned
 }
	
