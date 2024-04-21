void gotoxy(int col, int row){
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c={col,row};
    SetConsoleCursorPosition(hStdout,c);
}

void startUI(){
    //top bar
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
    gotoxy(68,15);
    printf("Hospital Managment System");

    //Sectional_bottom_bar
    gotoxy(42,22);
    for(int i=0; i<74; i++){
     printf("-");
    }

    //Continue_under_bar
    printf("\n");
    gotoxy(68,24);
    printf("Press any key to continue!");
    getch();
}
