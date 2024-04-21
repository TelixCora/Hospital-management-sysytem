//Variable decleration
char e_id[30];

char e_pass[30];

char id[8][100] = {"Aayush", "Sahaj", "Abhiyan", "Anshu", "Aarus", "Kaushal", "Binod", "Aashutosh"};

char pass[8][20] = {"000", "001", "002", "003", "004", "005", "006", "007"};

    void loginUI(){
    //top bar
    system("cls");
    gotoxy(42,10);
    for(int i=0; i<74; i++){
     printf("-");
    }

    //Side bars
    for(int i=0; i<15; i++){
        printf("\n");
        gotoxy(42,11+i);
        printf("|");
        gotoxy(115,11+i);
        printf("|");
    }

    //Bottom Bars
    printf("\n");
    gotoxy(42,26);
    for(int i=0; i<74; i++){
     printf("-");
    }

    //Header_Under_bar
    gotoxy(76,11);
    printf("Login");

    //Sectional_Bottom_Bar
    gotoxy(42,13);
    for(int i=0; i<74; i++){
     printf("-");
    }

    loginUser();
}

    void loginUser(){
    //Continue_under_bar
    printf("\n");
    gotoxy(58,17);
    printf("ID:");
    gotoxy(62,18);
    printf("-----------------------------");

    printf("\n");
    gotoxy(58,22);
    printf("Pass:");
    gotoxy(63,23);
    printf("-----------------------------");

    gotoxy(63,17);
    scanf("%s",e_id);

    gotoxy(64,22);
    scanf("%s",e_pass);

     for (int i = 0; i < 8; i++) {
        if (strcmp(e_pass, pass[i]) == 0 && strcmp(e_id, id[i]) == 0) {
            return;
        }
    }
    // Login failed
    gotoxy(58,25);
    printf("Login failed. Incorrect ID or password.\n");
    getch();

    //A concept of recursive function
    loginUI();
}


