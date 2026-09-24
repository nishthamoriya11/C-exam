#include<iostream>
#include<cstring>

using namespace std;
class Employee{
    private:
        char name[50];
        int salary;
        char designation[50];
    public:
        void setData(char n[50], int s,char d[50]){
            strcpy(name,n);
            salary=s;
            strcpy(designation,d);
        }
        void getData(){
            cout<< "Name: "<< name 
                << " | salary: "<< salary
                << " | Desgnation: "<< designation<< endl;
        }
        
};
int main(){
    int salary;
    char name[50], designation[50];
    Employee e1;
    e1.setData("Nishtha",50000,"manager");
    Employee e2;
    e2.setData("Lizi",50000,"Graphic_designer");

    e1.getData();
    e2.getData();
}