//Standard_library_functions
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<math.h>
#include<time.h>

//File_Inclusion
#include "startUi.c"
#include "loginUI.c"
#include "dashboard.c"


int main(){
    startUI();
    loginUI();
    dashboard();
    //addPatient();
    return 0;
}
