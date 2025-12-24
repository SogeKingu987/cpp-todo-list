#include <iostream>
#include <string>
#include <cstddef>
#include <limits>
using namespace std;

int main()
{
    int option;
    int i;
    int j;
    int taskcounter = 0;
    string task[1000];
    string status[1000];

    std::cout << "\n\nPersonal To-Do List" << endl ;
    std::cout << "-------------------" << endl ;

    while (option != 5) {
        std::cout << "\n\n--------------------------------------------------";
        std::cout << "\n1. Add a task" << endl ;
        std::cout << "2. View all tasks" << endl ;
        std::cout << "3. Mark a task as done" << endl ;
        std::cout << "4. Delete a task" << endl ;
        std::cout << "5. Exit" << endl ;
        std::cout << "--------------------------------------------------\n\n";

        i = 0;

        std::cout << "\nWhat do you wish to do? Choose between 1 - 5 : " << endl ;
        cin >> option;

        switch (option) {
            case 1:
            j = 0;
            for(i = 0; j != -999; i++){
                char continu;

                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                    // lets say the getline kinda takes in "New Line" as a limiter to move on. so the guy above kinda ignores it. i guess.
                    std::cout << "\n\nName your task : ";
                    getline(cin,task[taskcounter]);
                    status[taskcounter] = "Not Done";
                    taskcounter++;


                std::cout << "Do you wish to add another task? [Y/N] : ";
                cin >> continu;

                switch (continu) {
                    case 'y' :
                        j = 1;
                        break;
                    case 'Y' :
                        j = 1;
                        break;
                    case 'n' :
                        j = -999;
                    case 'N' :
                        j = -999;
                }
                
            }
            break;

            case 2: 
            i = 0;
            if (taskcounter == 0){
                std::cout << "No tasks currently exist!";
            }
            else {
                char continu;
                std::cout << "\n----------------------------------\n";
                while (!task[i].empty()){
                    std::cout << i+1 << ". " << task[i] << " [ " << status[i] << " ]" "\n";
                    i++;
                }
                std::cout << "----------------------------------";

                std::cout << "\n\nEnter anything to exit to main menu :" ;
                std::cin >> continu;
            }
            break;

            case 3:
            i = 0;
            j = 0;
            if (taskcounter == 0){
                std::cout << "No tasks currently exist!";
            }
            else {
                std::cout << "\n-------------------------------------------------------\n";
                while (!task[i].empty()){
                    std::cout << i+1 << ". " << task[i] << " [ " << status[i] << " ]" "\n";
                    i++;
                }
                std::cout << "---------------------------------------------------------";

                for (j = 0; j >= 0; j++) {
                    char continu;
                    int taskselect = 0;
                    std::cout << "\n\nSelect a task to set as done (Enter a number) :" ;
                    cin >> taskselect;
                    status[taskselect - 1] = "Done";
                    std::cout << task[taskselect - 1] << " has been marked as done!\n\n";
                    std::cout << "Do you want to mark another task as done? [Y/N] :";
                    cin >> continu;

                    switch (continu) {
                        case 'y':
                        j = 1;
                        break;
                        case 'Y' :
                        j = 1;
                        break;
                        case 'n' :
                        j = -999;
                        case 'N' :
                        j = -999;
                    }
                }
            }
            break;
            
            case 4:
                i = 0;
                j = 0;
                if (taskcounter == 0){
                    std::cout << "No tasks currently exist!";
                }
                else{
                    std::cout << "\n-------------------------------------------------------\n";
                    while (!task[i].empty()){
                        std::cout << i+1 << ". " << task[i] << " [ " << status[i] << " ]" "\n";
                        i++;
                    }
                    std::cout << "---------------------------------------------------------";

                    for (j = 0; j >= 0; j++) {
                        char continu;
                        int taskselect = 0;
                        int deletioncounter;
                        std::cout << "\n\nSelect a task to Delete (Enter a Number) :" ;
                        cin >> taskselect;
                        std::cout << task[taskselect - 1] << " has been Deleted!\n\n";
                    
                        if (task[taskselect].empty()){
                            task[taskselect-1].clear();
                            status[taskselect-1].clear();
                            taskcounter--;
                        }
                        else if (!task[taskselect].empty()){
                            deletioncounter = taskselect - 1;
                        
                            for (i = 0; !task[taskselect].empty(); i++ ){
                                task[taskselect - 1] = task[taskselect];
                                status[taskselect-1] = status[taskselect];
                                taskselect++;
                                deletioncounter++;
                            }
                            task[deletioncounter].clear();
                            status[deletioncounter].clear();
                            taskcounter--;
                        }
                    
                    
                        j = -999;
                    }
                }
            
            break;

            case 5:
            break;
        }
        
        

    }
    std::cout << "See you next time :)" ;
}

