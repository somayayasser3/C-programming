#include <iostream>
#include <cstring>
using namespace std;
const int MAX_NAME=14;
enum Gender{MALE,FEMALE};
struct Date{int year; int month; int day;};

struct Student
 {
 int ID;
 char first_name[MAX_NAME+1];
 char last_name[MAX_NAME+1];
 Date birth_date;
 Gender gender;
 double GPA;
 };

 void InputStudent(Student *S){

 cout<<"ENTER THE STUDENT ID"<<endl;
 cin>>(*S).ID;
 cout<<"ENTER THE STUDENT BIRTHDATE"<<endl;
 cin>>(*S).birth_date.day>>(*S).birth_date.month>>(*S).birth_date.year;
cout<<"ENTER THE STUDENT FIRST NAME"<<endl;
 cin>>(*S).first_name;
 cout<<"ENTER THE STUDENT LAST NAME"<<endl;
 cin>>(*S).last_name;
 cout<<"ENTER THE STUDENT GPA"<<endl;
 cin>>(*S).GPA;}



 void OutputStudent(Student *S){

 cout<<(*S).ID <<'\t'<<(*S).first_name<<(*S).last_name<<'\t'<<(*S).birth_date.day<<'/'<<(*S).birth_date.month<<'/'<<(*S).birth_date.year<<'\t'<<(*S).GPA<<endl;}



 void InputAllStudent(Student* S, int n){


     for(int i=0;i<n;i++)
 {
        InputStudent(&S[i]);

 }
 }

 void OutputAllStudent(Student *S,int n){


     for (int i=0;i<n;i++){
OutputStudent(&S[i]);
     }

 }


void sortbygpa(Student *S,int n){

for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
if(i==n-1){ break;}
else
        {if(S[i].GPA < S[i+1].GPA){
           Student temp= S[i];
           S[i]=S[i+1];
           S[i+1]=temp;}
        }}}
    OutputAllStudent(*&S,n);


}
void sortbybirthdate(Student *S,int n){
    for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
                    if(i==n-1){break;}
                    if(S[i].birth_date.year <S[i+1].birth_date.year){
                   Student temp= S[i];
                        S[i]=S[i+1];
                       S[i+1]=temp;}
                       else if(S[i].birth_date.year ==S[i+1].birth_date.year&&S[i].birth_date.month <S[i+1].birth_date.month)
                        {
                            Student temp= S[i];
                        S[i]=S[i+1];
                       S[i+1]=temp;
                       }

                       else if(S[i].birth_date.year ==S[i+1].birth_date.year&&S[i].birth_date.month ==S[i+1].birth_date.month&&S[i].birth_date.day < S[i+1].birth_date.day){

                        Student temp= S[i];
                        S[i]=S[i+1];
                       S[i+1]=temp;}}
                       }


                       OutputAllStudent(*&S,n);


                    }

Student* SearchStudentID (Student* S, int n, int ID){
    cout<<"ENTER THE ID"<<endl;
    cin>>ID;
    for(int i=0;i<n;i++){
        if(S[i].ID==ID){OutputStudent(&S[i]);}
        break;}


    }

Student* SearchStudentFirstName(Student* S, int n, char* name){
cout<<"ENTER THE NAME YOU WANT TO SEARCH FOR"<<endl;
cin>>name;

for(int i=0;i<n;i++){
int x=0;
    for(int j=0;j<sizeof(name);j++){
          if(name[j]==S[i].first_name[j]){x++;}

    }
    if(x==sizeof(name)) OutputStudent(&S[i]);}



}




int main()
{
int choice ;
char name[100];
int n;
int ID;
cout<<"ENTER NUMBER OF STUDENTS"<<endl;
cin>>n;
Student *S = new Student [n];
cout<<"ENTER STUDENTS DATA"<<endl;
InputAllStudent(S,n);
for(int i=0;i>=0;i++){
cout<< "1) Output all students data."<<endl<<"2) Sort students by increasing birth date."<<endl<<"3) Sort students by decreasing GPA."<<endl<<"4) Search students by ID."<<endl<<"5) Search students by first name."<<endl<<"6) Exit the program."<<endl;
cin>>choice;
if(choice==1){OutputAllStudent(S,n);}
else if(choice==2){sortbybirthdate(S,n);}
else if(choice==3){sortbygpa(S,n);}
else if(choice==4){SearchStudentID(S,n,ID);}
else if(choice==5){SearchStudentFirstName(S,n,name);}
else if(choice==6){delete[]S;  return 0; }}

    return 0;}
