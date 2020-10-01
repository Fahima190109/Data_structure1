#include<bits/stdc++.h>
using namespace std;
class Course{
private:
    double credits;
    double Grade;
public:
    //constructor//
    Course(){
     this->credits=0;
      this->Grade=0;
    }
    void set_credit(double credit)
    {
          this->credits=credit;
    }
    double get_credit()
    {
        return credits;
    }
    void set_grade(double grade)
    {
          this->Grade=grade;
    }
    double get_grade()
    {
        return Grade;
    }
};
class Student{
private:
 
    Course all_course[3];
    int student_ID;
    float grade;
    double CGPA;
double credit;
public:
    int merit_position;
    double getcgpa()
    {
      return CGPA;
    }
    int get_ID()
    {
        return student_ID;
    }
    void information(int k)
    {
        double all_credit=0.00;
        double gain_credit=0.00;
      cout<<"Enter the Student ID:"<<endl;
      cin>>student_ID;
      //cgpa of every student //
      for(int i=0;i<3;i++)
      {
        cout<<"course:"<<i+1<<endl;
        cout<<"Grade:"<<endl;
        cin>>grade;
        all_course[i].set_grade(grade);
        cout<<"Credits:"<<endl;
        cin>>credit;
        all_course[i].set_credit(credit);
         all_credit+=all_course[i].get_credit();
    gain_credit+=all_course[i].get_credit()*grade;
      }
       CGPA= gain_credit/all_credit;
 
    }
};
//bubble sort use to find the merit sequentially//
 void get_merit(Student member[],int N){
    for(int i=0;i<N;i++){
        int merit=0;
        for(int j=0;j<N;j++){
            if(member[i].getcgpa()<member[j].getcgpa()) merit++;
        }member[i].merit_position=merit+1;
    }
 }
 //print every student id,cgpa,merit position //
void result(Student member[],int number,int i)
{
    cout<<"Student ID Number is:"<<member[i].get_ID()<<endl;
  cout<<"Student CGPA:"<<fixed<<setprecision(2)<<member[i].getcgpa()<<endl;
  cout<<"Merit Position:"<<member[i].merit_position<<endl;
}
 
int main(){
    cout<<"Enter the number of Student: ";
    int number;
    cin>>number;
     Student *member=new Student[number];
     int i=0;
     while(number!=i){
    member[i].information(i);
    i++;}
 
      get_merit(member,number);
 
    cout<<"Student result is:"<<endl;
    for(int i=0;i<number;i++)
    {
       result(member,number,i);
    }
 
 
    return 0;
}
 
RAW Paste Data
#include<bits/stdc++.h>
using namespace std;
class Course{
private:
    double credits;
    double Grade;
public:
    //constructor//
    Course(){
     this->credits=0;
      this->Grade=0;
    }
    void set_credit(double credit)
    {
          this->credits=credit;
    }
    double get_credit()
    {
        return credits;
    }
    void set_grade(double grade)
    {
          this->Grade=grade;
    }
    double get_grade()
    {
        return Grade;
    }
};
class Student{
private:

    Course all_course[3];
    int student_ID;
    float grade;
    double CGPA;
double credit;
public:
    int merit_position;
    double getcgpa()
    {
      return CGPA;
    }
    int get_ID()
    {
        return student_ID;
    }
    void information(int k)
    {
        double all_credit=0.00;
        double gain_credit=0.00;
      cout<<"Enter the Student ID:"<<endl;
      cin>>student_ID;
      //cgpa of every student //
      for(int i=0;i<3;i++)
      {
        cout<<"course:"<<i+1<<endl;
        cout<<"Grade:"<<endl;
        cin>>grade;
        all_course[i].set_grade(grade);
        cout<<"Credits:"<<endl;
        cin>>credit;
        all_course[i].set_credit(credit);
         all_credit+=all_course[i].get_credit();
    gain_credit+=all_course[i].get_credit()*grade;
      }
       CGPA= gain_credit/all_credit;

    }
};
//bubble sort use to find the merit sequentially//
 void get_merit(Student member[],int N){
    for(int i=0;i<N;i++){
        int merit=0;
        for(int j=0;j<N;j++){
            if(member[i].getcgpa()<member[j].getcgpa()) merit++;
        }member[i].merit_position=merit+1;
    }
 }
 //print every student id,cgpa,merit position //
void result(Student member[],int number,int i)
{
    cout<<"Student ID Number is:"<<member[i].get_ID()<<endl;
  cout<<"Student CGPA:"<<fixed<<setprecision(2)<<member[i].getcgpa()<<endl;
  cout<<"Merit Position:"<<member[i].merit_position<<endl;
}

int main(){
    cout<<"Enter the number of Student: ";
    int number;
    cin>>number;
     Student *member=new Student[number];
     int i=0;
     while(number!=i){
    member[i].information(i);
    i++;}

      get_merit(member,number);

    cout<<"Student result is:"<<endl;
    for(int i=0;i<number;i++)
    {
       result(member,number,i);
    }


    return 0;
}


