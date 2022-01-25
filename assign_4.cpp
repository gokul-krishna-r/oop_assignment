/*Write a program to read 10 records of student with the information name,age and date of birth and
arrange the output in the following format. Fill the unused fields with dots.*/

#include<iostream>
#include<string.h>
using namespace std;

class Student{
    int age,day,month,year;
    char name[100];

    public:
        void setStudentData(){
            cout<<"Enter name of student: ";
            cin.get(name,100,'\n');
            cout<<"Enter DOB(dd/mm/yy): ";
            cin>>day>>month>>year;
            cout<<"Enter age: ";
            cin>>age;
            cin.ignore();

        }
        Student(){
            age=0;
            day=0;
            month=0;
            year=0;
       
        }
        Student(int age,int day,int month,int year,char name[]){
            this->age=age;
            this->day=day;
            this->month=month;
            this->year=year;
            strcpy(this->name,name);
        }
       
        void displayStudent(){
            cout<<"....."<<name<<".........."<<day<<"/"<<month<<"/"<<year<<".........."<<age;

        }
        
        void sort(Student stud[]){
            Student temp;
            for(int i=0;i<10;i++){
                for(int j=0;j<10-i-1;j++){
                    if(strcmp(stud[j].name,stud[j+1].name)>0){
                        temp=stud[j];
                        stud[j]=stud[j+1];
                        stud[j+1]=temp;
                    }
                }
            }
        }
};

int main(){
    Student s[10];
    for(int i=0;i<10;i++){
        cout<<"\t\t------Enter Student "<<i+1<<" Details------"<<endl;
        s[i].setStudentData();
    }
    s->sort(s);
    cout<<"Sl.No\t"<<"Name"<<"\t\t"<<"DOB"<<"\t\t"<<"Age";
    for(int i=0;i<10;i++){
        cout<<endl;
        cout<<i+1;
        s[i].displayStudent();
    }
    return 0;
}