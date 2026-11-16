#include <stdio.h>

void WrittenMenu(){
    const char menuHead[] = "=========";
    const char menuTitle[] = "fakeBank App";
    const char menu1O[] = "Show balance";
    const char menu2O[] = "deposit balance";
    const char menu3O[] = "withdraw balance";
    const char menu4O [] = "History";
    const char menu5O [] = "Exit program";
    const char prompt [] = "Choose option: ";

    const char * menuList [] = {
        menuHead, menuTitle, menuHead,
        menu1O, 
        menu2O, 
        menu3O, 
        menu4O, 
        menu5O,
        menuHead,
        prompt
    };

    for(int i = 0; i<10; i++){
        prinf("%s\n", menuList[i]);
    }
}

int menu(){
    int response = 0;
    while (1==1)
    {
        WrittenMenu();
        scanf("%d", &response);
        if(response == 1){
            printf("chosen option 1");
        }

        if(response == 2){
            printf("chosen option 2");
        }

        if(response == 3){
            printf("chosen option 3");
        }

        if(response == 4){
            printf("chosen option 4");
        }

        if(response == 5){
            return 0;
        }
    }
}