#include <iostream>
    int taskcurrent = 1;
    std::string taskTlite[100];
    std::string taskDescription[100];
    std::string taskDate[100];
    std::string taskStatus[100];




void addTask(std::string title, std::string description, std::string date, int status){

    if (taskcurrent >= 100){
        std::cout << "numero maximo de tarefaz utrapasado" << std::endl; 
    } else{
        taskTlite[taskcurrent] = title;
        taskDescription[taskcurrent]= description;
        taskDate[taskcurrent] = date;
        taskStatus[taskcurrent] = status;
        taskcurrent++;

        std::cout << "tarefa declarada" << std::endl;

        printMenu();
        

 

    }
}

std::string DefineStatus(int NumberId){
    std::string status;

    if(NumberId == 1) {
        status = "Pendente";
    }else if(NumberId == 2){
        status = "Em Progresso";
    }else if(NumberId == 3){
        status = "Concluída";
    }

    return status;

}

void printMenu(){

    if(taskcurrent != 1){
        for (size_t i = 0; i != taskcurrent; i++)
        {
            switch (taskcurrent)
            {
            case /* constant-expression */:
                /* code */
                break;
            
            default:
                break;
            }
            std::cout << "Titulo: "<< taskTlite[taskcurrent] << " // " << "Descrição: " << taskDescription[taskcurrent]<< " // " <<"Data: "<<  taskDate[taskcurrent] << " // " << taskStatus[taskcurrent] << std::endl;
            
        }
        

    }


}



int main(){

    printMenu();


}