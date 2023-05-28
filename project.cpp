#include<iostream>
#include<fstream>
#include<string>

using namespace std;

  int total_fee=0;
  static int h;

class grade {
    protected:
    char Name[100];
    char ins_name[100];
    char address[100];
    string blood_group;
    string moblie_nummber;
    char bb[5];
    string enrolled_course;
    public:
    void create_profile();
 };
  
class grade_5:public grade{
    protected:
    int x;
   public:
   void course();

}; 

class grade_8:public grade{
    protected:
    int x;
   public:
   void course();

}; 

class grade_10:public grade{
    protected:
    int x;
   public:
   void course();

}; 


class grade_12:public grade
{
    protected:
    int x;
   public:
   void course();
   string mul[6];

}; 

class grade_16:public grade
{
    protected:
    int x;
   public:
   void course();
   string mul[6];

}; 
   

void grade::create_profile()
{
    cout<<"\n\nGive these necessary informations: "<<endl;
    cout<<endl;
    cin.getline(bb,5);

    cout<<"\nEnter your name: "<<endl;
    cin.getline(Name,100);

    cout<<"\nEnter your institution name: "<<endl;
    cin.getline(ins_name,100);

    cout<<"\nEnter your address: "<<endl;
    cin.getline(address,100);

    cout<<"\nEnter your blood group: "<<endl;
    cin>>blood_group;

    cout<<"\nEnter your mobile number: "<<endl;
    cin>>moblie_nummber;

   
   ofstream info;
    info.open("student.txt");
    info<<"                                ____________________STUDENT INFORMATIION___________________\n"<<endl;
    info<<"Name:"<<Name<<endl<<"Grade:"<<h<<endl<<"Institution name:"<<ins_name<<endl<<"Address:"<<address<<endl;
    info<<"Blood Group:"<<blood_group<<endl<<"Mobile Number:"<<moblie_nummber<<endl<<endl<<endl;

     
   cout<<"\n\n Courses that are available for you:  "<<endl;  
}

void grade_5::course()
{
    N:
    cout<<"\n\nEnter a number associted with the following courses: \n\n"<<endl;
    cout<<"1.Tutorial classes without exam for class ->"<<h<<endl<<"FEE-1000 TK."<<endl;
    cout<<"2.Tutorial classes with exam for class ->"<<h<<endl<<"FEE-1500 TK."<<endl;
    cin>>x;
   if(x==1){enrolled_course="Tutorial classes without exam.";total_fee=1000;}
   else  if(x==2){enrolled_course="Tutorial classes with exam.";total_fee=1500;}
   else{cout<<"\n\nInvalid input\n";total_fee=0;goto N;}

    ofstream info;
    info.open("student.txt",ios::out| ios:: app);
    info<<"------------Your Courses---------\n\n";
    info<<enrolled_course<<endl;
    info.close();

    ofstream dew;
    dew.open("dew.txt");
    dew<<"\n\n\n----------------DEW-----------------\n\n\n";
    dew<<"Name:"<<Name<<endl;
    dew.close();

}    

void grade_8::course()
{
    N:
    cout<<"\n\nEnter  a number associted with the following courses: \n\n"<<endl;
    cout<<"1.Tutorial classes without exam for class ->"<<h<<endl<<"FEE-2000 TK."<<endl;
    cout<<"2.Tutorial classes with exam for class ->"<<h<<endl<<"FEE-2500 TK."<<endl;
    cin>>x;
   if(x==1){enrolled_course="Tutorial classes without exam.";total_fee=2000;}
   else  if(x==2){enrolled_course="Tutorial classes with exam.";total_fee=2500;}
   else{cout<<"\n\nInvalid input\n";total_fee=0;goto N;}

     ofstream info;
    info.open("student.txt",ios::out| ios:: app);
    info<<"------------Your Courses---------\n\n";
    info<<enrolled_course<<endl;
     info.close();

      ofstream dew;
    dew.open("dew.txt");
    dew<<"\n\n\n----------------DEW-----------------\n\n\n";
    dew<<"Name:"<<Name<<endl;
    dew.close();
}  

void grade_10::course()
{
    N:
    cout<<"\n\nEnter a number associted with the following courses: \n\n"<<endl;
    cout<<"1.Tutorial classes without exam for class ->"<<h<<endl<<"FEE-3000 TK."<<endl;
    cout<<"2.Tutorial classes with exam for class ->"<<h<<endl<<"FEE-3500 TK."<<endl;
    cout<<"3.Special classes for SSC exam & test exan ."<<endl<<"FEE-4500  TK."<<endl;
    cin>>x;
    
   if(x==1){enrolled_course="Tutorial classes without exam.";total_fee=3000;}
   else  if(x==2){enrolled_course="Tutorial classes with exam.";total_fee=3500;}
   else  if(x==3){enrolled_course="Special classes for SSC exam with test exam .";total_fee=4500;}
   else{cout<<"\n\nInvalid input\n";total_fee=0;goto N;}
     ofstream info;
    info.open("student.txt",ios::out | ios:: app);
    info<<"------------Your Courses---------\n\n";
    info<<enrolled_course<<endl;
info.close();

 ofstream dew;
    dew.open("dew.txt");
    dew<<"\n\n\n----------------DEW-----------------\n\n\n";
    dew<<"Name:"<<Name<<endl;
    dew.close();

}  


void grade_12::course()
{
    cout<<"\n\nEnter  numbers associted with the following courses: \n\n"<<endl;
    cout<<"1.Tutorial classes without exam for HSC.-----FEE-3000 TK."<<endl;
    cout<<"2.Tutorial classes without exam for HSC.-----FEE-3500 TK."<<endl;
    cout<<"3.Special classes for HSC exam.-----FEE-4500  TK."<<endl;
    cout<<"4.Medical Admission preparation course.-----FEE-8000 TK."<<endl;
    cout<<"5.Engineering Admission preparation course.----FEE 8500 TK."<<endl;
    cout<<"6.Universiy Admission preparation course.----FEE 5500 TK."<<endl;
 
        ofstream info;
    info.open("student.txt",ios::out| ios:: app);
   info<<"------------Your Courses---------\n\n"; 
    int c=0;
  string st;
    int y;
    while(1)
    {
        cin>>x;
        if(x==0){break;}
        else if(x==1){y=3000;mul[c]="Tutorial classes without exam.";info<<mul[c]<<endl;}
        else if(x==2){y=3500;mul[c]="Tutorial classes without exam.";info<<mul[c]<<endl;}
        else if(x==3){y=4500;mul[c]="Special classes for HSC exam.";info<<mul[c]<<endl;}
        else if(x==4){y=8000;mul[c]="Medical Admission preparation course.";info<<mul[c]<<endl;}
        else if(x==5){y=8500;mul[c]="Engineering Admission preparation course.";info<<mul[c]<<endl;}
        else if(x==6){y=5500;mul[c]="Universiy Admission preparation course.";info<<mul[c]<<endl;}
        else if (x>6){cout<<"\n\nInvalid input\n"<<endl;y=0;}


     total_fee=total_fee+y;
     c++;
   
        cout<<"Continue choosing by entering associated numbers of the courses or Enter '0' to stop choosing"<<endl;

    }

info.close();

 ofstream dew;
    dew.open("dew.txt");
    dew<<"\n\n\n----------------DEW-----------------\n\n\n";
    dew<<"Name:"<<Name<<endl;
    dew.close();
} 

void grade_16::course()
{
    cout<<"\n\nEnter  numbers associted with the following courses: \n\n"<<endl;
    cout<<"1.Video Editing Course.-----FEE-3000 TK."<<endl;
    cout<<"2.Microsoft Powerpoint Course.-----FEE-3500 TK."<<endl;
    cout<<"3.IELTS Preparation course.-----FEE-4500  TK."<<endl;
    cout<<"4.Programming With C++ Course.-----FEE-8000 TK."<<endl;
    cout<<"5.Programming With Python Course.----FEE 8500 TK."<<endl;
    cout<<"6.Robotics Course.----FEE 5500 TK."<<endl;
 
        ofstream info;
    info.open("student.txt",ios::out| ios:: app);
   info<<"------------Your Courses---------\n\n"; 
    int c=0;
  string st;
    int y;
    while(1)
    {
        cin>>x;
        if(x==0){break;}
        else if(x==1){y=3000;mul[c]="Video Editing Course.";info<<mul[c]<<endl;}
        else if(x==2){y=3500;mul[c]="Microsoft Powerpoint Course.";info<<mul[c]<<endl;}
        else if(x==3){y=4500;mul[c]="IELTS Preparation course.";info<<mul[c]<<endl;}
        else if(x==4){y=8000;mul[c]="Programming With C++ Course.";info<<mul[c]<<endl;}
        else if(x==5){y=8500;mul[c]="Programming With Python Course.";info<<mul[c]<<endl;}
        else if(x==6){y=5500;mul[c]="Robotics Course.";info<<mul[c]<<endl;}
        else if (x>6){cout<<"\n\nInvalid input\n"<<endl;y=0;}


     total_fee=total_fee+y;
     c++;
   
        cout<<"Continue choosing by entering associated numbers of the courses or Enter '0' to stop choosing"<<endl;

    }

info.close();

 ofstream dew;
    dew.open("dew.txt");
    dew<<"\n\n\n----------------DEW-----------------\n\n\n";
    dew<<"Name:"<<Name<<endl;
    dew.close();
} 


void about(){
cout<<"                                                        ---------- ABOUT US-----------\n\n";
cout<<"                                     Our institution was born out of passion .A passion for making  difference"<<endl;
cout<<"                                      Creating a movement of OnnoRokom Manush(different humans) and bringing  "<<endl;
cout<<"                                   about  a change.When our institution was founded in the later part of 2000,"<<endl;
cout<<"                                   it's founders had no idea that it would take on a life of its own.We provide"<<endl;
cout<<"                                    our best for the good of the students.We have a great number of qualified and "<<endl;
cout<<"                               exprienced teachers and instructors.we provide all kinds of facilities to our studens"<<endl;
}

void branches(){
    cout<<"                                                  ----------OUR OFFICES---------\n\n";
    cout<<"1.Dhaka"<<endl;
    cout<<"2.Rajshahi"<<endl;
    cout<<"3.Chittagong"<<endl;
    cout<<"4.Khulna"<<endl;
    cout<<"5.Sylhet"<<endl;
    cout<<"6.Rangpur"<<endl;
    cout<<"7.Barishal"<<endl;
    cout<<"8.Mymensingh"<<endl;
}

    void display(){
        string stt;
        ifstream disp;
        disp.open("student.txt");
        if(disp.is_open()){
        while(disp.eof()==0)
        {
          getline(disp,stt);
          cout<<stt<<endl;
        }

        disp.close();}

        else{cout<<"\n\nYou have not registered yet.Register first.\n\n";}
    }


int main(){
grade_5 g_5;
grade_8 g_8;
grade_10 g_10;
grade_12 g_12;
grade_16 g_16;


 M:
 cout<<" \n\n\n\n                       _______________ONLINE EDUCATION_____________   \n \n"<<endl;
cout <<"Choose Options : (1/2/3/4/5)\n \n   "<<endl;
cout<<"1.Course Registration."<<endl;
cout<<"2.My Enrolled Courses."<<endl;
cout<<"3.Dues.  "<<endl;
cout<<"4.Our Offices."<<endl;
cout<<"5.About Us\n\n"<<endl;

int  x;
cin>>x;

if(x==1){

P:

    cout<<"\n\nIn which grade are you reading in?\n"<<endl;
    cout<<"School->(1-10)"<<endl;
    cout<<"College->(11-12)"<<endl;
    cout<<"University->(13-16)"<<endl;
    cout<<"\nGRADE:";
    
    cin>>h;
    
    if(h>=1 &&h<=5){
        g_5.create_profile(); 
          g_5.course();
        cout<<"\n\nYour course registraton is successfull"<<endl;
    }

     else   if(h>=6 &&h<=8){
     
         g_8.create_profile();
           g_8.course();
        cout<<"\n\nYour course registraton is successfull"<<endl;
       }

        else   if(h>=9 &&h<=10){
            
       g_10.create_profile();
       g_10.course(); 
        cout<<"\n\nYour course registraton is successfull"<<endl;
       }

        else   if(h>=11 &&h<=12){
      
           g_12.create_profile();
                 g_12.course();
        cout<<"\n\nYour course registraton is successfull"<<endl;
       }
     
     else   if(h>=13 &&h<=16){
       g_16.create_profile();
                 g_16.course();
        cout<<"\n\nYour course registraton is successfull"<<endl;
     }

     else{cout<<"\n\nInvalid insertion\n\n";goto P;}

     
    cout<<"\n\nYour total fee is :"<<total_fee<<"/-"<<endl;
    cout<<"\nDo you want pay now? 1.YES  2.NO \n";
    int v;
    cin>>v;
    if (v==1){total_fee=0;cout<<"\n\nYour payment is sucessful.\n\n";}
    else {total_fee=total_fee;cout<<"\n\nPay the dews later.\n\n";}

   ofstream dew;
    dew.open("dew.txt",ios::out| ios:: app);
    dew<<"Dew="<<total_fee<<"/-"<<endl;
    dew.close();

               cout<<"\n\npress '1' to go to Main Menu "<<endl;
     int m;
     cin>>m;
   if (m==1){ goto M;}

}


else if(x==2){
    display();

 cout<<"\n\npress '1' to go to Main Menu"<<endl;
       
     int m;
     cin>>m;
if (m==1){ goto M;}
}

else if(x==3){
       string stt;
        ifstream dews;
        dews.open("dew.txt");
        if(dews.is_open()){
        while(dews.eof()==0)
        {
          getline(dews,stt);
          cout<<stt<<endl;
        }

        dews.close();}

          else{cout<<"\n\nYou have not registered yet.Register first.\n\n";}

          cout<<"\n\npress '1' to go to Main Menu"<<endl;
     int m;
     cin>>m;
if (m==1){ goto M;}
}

else if(x==4){
 branches();

           cout<<"\n\npress '1' to go to Main Menu"<<endl;
     int m;
     cin>>m;
if (m==1){ goto M;}

}

else if(x==5){
  about();
            cout<<"\n\npress '1' to go to Main Menu"<<endl;
     int m;
     cin>>m;
if (m==1){ goto M;}
}

else {cout<<"\n\nInvalid Insertion\n\n";goto M;}

return 0;
}