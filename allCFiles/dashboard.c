int x_max =156;
char name_of_hospital[] = {'K','A','N','T','I','P','U','R',' ','C','I','T','Y',' ','H','O','S','P','I','T','A','L'};

//choice
char choice[10],return_choice[10];

    enum choices{
        ADD,
        SHOW,
        REMOVE,
        SEARCH,
        EXIT
    };

//random no generator
    int general_random_number;

//Choices made
    enum choices stringToChoice(char *str) {
    if (strcmp(str, "add") == 0) {
        return ADD;
    }
     else if (strcmp(str, "show") == 0) {
        return SHOW;
    }
     else if (strcmp(str, "remove") == 0) {
        return REMOVE;
    }
    else if (strcmp(str, "search") == 0) {
        return SEARCH;
    }
     else if (strcmp(str, "exit") == 0) {
        return EXIT;
    }
}


void dashboard(){
    //top bar
    srand(time(0));
    general_random_number = rand();

    system("cls");
    for(int i=0; i<x_max; i++){
     printf("-");
    }

    gotoxy(12,2);
    printf("Dashboard");

    gotoxy(130,2);
    printf("Welcome Dr.%s",e_id);


    gotoxy(0,4);
    for(int i=0; i<x_max; i++){
     printf("-");
    }

    for(int i=0; i<31; i++){
                    gotoxy(5,7+i);
                    printf("%c",name_of_hospital[i]);
                    printf("\n");
    }

    for(int i=0; i<40; i++){
        gotoxy(10,0+i);
        printf("|");
    }

    for(int i=0; i<40; i++){
        gotoxy(0,0+i);
        printf("|");
        gotoxy(155,0+i);
        printf("|");
    }
    gotoxy(130,45);
    for(int i=0; i<x_max; i++){
     printf("-");
    }

    dashboardOverview();
    dashboardCommand();
    getch();
}

void dashboardOverview(){
    gotoxy(20,8);
    printf("Overview");
    gotoxy(20,10);

    //for box-1
    for(int i=0; i<35; i++){
     printf("-");
    }

    for(int i=0; i<6; i++){
        printf("\n");
        gotoxy(20,11+i);
        printf("|");
        gotoxy(55,11+i);
        printf("|");
    }
    printf("\n");
    gotoxy(20,17);
    for(int i=0; i<35; i++){
     printf("-");
    }

    gotoxy(65,10);

    //Box-2
    for(int i=0; i<35; i++){
     printf("-");
    }

    for(int i=0; i<6; i++){
        printf("\n");
        gotoxy(65,11+i);
        printf("|");
        gotoxy(99,11+i);
        printf("|");
    }
    printf("\n");
    gotoxy(65,17);
    for(int i=0; i<35; i++){
     printf("-");
    }

    gotoxy(109,10);

    //Box-3
    for(int i=0; i<35; i++){
     printf("-");
    }

    for(int i=0; i<6; i++){
        printf("\n");
        gotoxy(109,11+i);
        printf("|");
        gotoxy(143,11+i);
        printf("|");
    }
    printf("\n");
    gotoxy(109,17);
    for(int i=0; i<35; i++){
     printf("-");
    }

    //Patients_Generator
    gotoxy(28,13);
    printf("Patients:%d",(general_random_number%400)+700);

    //Doctors_Generator
    gotoxy(76,13);
    printf("Doctors:%d",(general_random_number%50)+20);

    //Nurse_Generator
    gotoxy(121,13);
    printf("Nurse:%d",(general_random_number%50)+100);

}

void dashboardCommand(){
    //Command_choose
    printf("\n");
    gotoxy(67,28);
    printf("Enter your command to proceed");

    printf("\n");
    gotoxy(45,30);

    for(int i=0; i<78; i++){
        printf("-");
    }

    for(int i=0; i<4; i++){
       printf("\n");
       gotoxy(45,31+i);
       printf("|");
       gotoxy(62,31+i);
       printf("|");
       gotoxy(75,31+i);
       printf("|");
       gotoxy(88,31+i);
       printf("|");
       gotoxy(105,31+i);
       printf("|");
       gotoxy(122,31+i);
       printf("|");
    }

    gotoxy(45,35);
    for(int i=0; i<78; i++){
        printf("-");
    }

    gotoxy(52,32);
    printf("Add");

    gotoxy(67,32);
    printf("Show");

    gotoxy(78,32);
    printf("Remove");

    gotoxy(94,32);
    printf("Search");

    gotoxy(111,32);
    printf("Exit");

    gotoxy(70,37);
    printf("Command:\\");

    gotoxy(79,38);
    printf("---------------");


    gotoxy(79,37);
    scanf("%s",choice);

    enum choices userChoice = stringToChoice(choice);

    switch (userChoice){

        //To add patients
        case ADD:
            system("cls");
            //patient_records_add();
        break;

        //To show patients
        case SHOW:
            system("cls");
            //patient_records_show();
        break;

        //To remove patient records
        case REMOVE:
            system("cls");
            //patient_records_remove();
        break;

        //To search patient records
        case SEARCH:
            system("cls");
            //patient_records_search();
        break;

        //To exit the program
        case EXIT:
            system("cls");
            //patient_records_exit();
        break;

        //Default
        default:
            printf("Incorrect Command");
            //memset(choice,0,sizeof(choice));
            //system("cls");
            dashboardCommand();
    }
}


