/// ID: C221060, Name: MD. NAJMUS SAKIB RAFI
/// BISMILLAHIR RAHMANIER RAHEEM...



#include<bits/stdc++.h>
#define clear system("cls");
#define p1 printf("\n\n\n\n\t\t\t");
#define p2 printf("\t\t\t");
#define endl '\n'
using namespace std;

/// Global Variable Declaration.
int ns=0,nt=0;


class student
{
public:
    string sid,sname,ssection,ssemester,sdepartment,sadvisor, sreg = "0",sresult = "0";
    /// Default constructor for student.
    student()
    {

    }

    student(string sid, string sname, string ssection, string ssemester, string sdepartment, string sadvisor, string sreg= "0", string sresult = "0")
    {
        this-> sid = sid;
        this-> sname = sname;
        this-> ssection = ssection;
        this-> ssemester = ssemester;
        this-> sdepartment = sdepartment;
        this-> sadvisor = sadvisor;
        this-> sreg = sreg;
        this-> sresult = sresult;
    }

    void showData()
    {
        string s;
        if(sreg == "0")
            s = "NotRegistered";
        else if(sreg == "1")
            s = "Pending";
        else if(sreg == "2")
            s = "Accepted";

        p1
        cout << "Student's ID : " << sid << endl;
        p2
        cout << "Student's Name : " << sname << endl;
        p2
        cout << "Section : " << ssection << endl;
        p2
        cout << "Semester : " << ssemester << endl;
        p2
        cout << "Department : " << sdepartment << endl;
        p2
        cout << "Advisor : " << sadvisor << endl;
        p2
        cout << "Course reg : " << s << endl;
        p2
        cout << "Result : " << sresult << endl << endl;

    }

};

class teacher
{
public:
    string tname,tdesignation,tdepartment, tcourseRequest;

    /// Defaulr constructor for teacher.
    teacher()
    {

    }

    teacher(string tname, string tdesignation, string tdepartment)
    {
        this-> tname = tname;
        this-> tdesignation = tdesignation;
        this-> tdepartment = tdepartment;
    }

    void showData()
    {
        p1
        cout << "Teacher's Name : " << tname << endl;
        p2
        cout << "Designation : " << tdesignation << endl;
        p2
        cout << "Department : " << tdepartment << endl;
        p2
    }

};

/// Globally Declaring the variable for student and teacher.
student sdata[50];
teacher tdata[50];


/// For Uploading all Students Data to File.
void upload_student_data()
{
    fstream supsn("scount.txt",ios:: out);
    supsn << ns;
    supsn.close();
    fstream sup("studentData.txt", ios :: out);

    for(int i=1; i<=ns; i++)
    {
        sup << sdata[i].sid << endl;
        sup << sdata[i].sname << endl;
        sup << sdata[i].ssection << endl;
        sup << sdata[i].ssemester << endl;
        sup << sdata[i].sdepartment << endl;
        sup << sdata[i].sadvisor << endl;
        sup << sdata[i].sreg << endl;
        sup << sdata[i].sresult << endl;

    }

    sup.close();

}


/// For Uploading all Teachers Data to File
void upload_teacher_data()
{
    fstream tuptn("tcount.txt",ios:: out);
    tuptn << nt;
    tuptn.close();
    fstream tup("teacherData.txt", ios :: out);

    for(int i=1; i<=nt; i++)
    {
        tup << tdata[i].tname << endl;
        tup << tdata[i].tdesignation << endl;
        tup << tdata[i].tdepartment << endl;
    }

    tup.close();

}


/// For Reading all students information from file
void read_student_data()
{
    fstream srn("scount.txt",ios:: in);
    srn >> ns;
    srn.close();
    string sid,sname,ssection,ssemester,sdepartment,sadvisor,sreg,sresult;
    fstream sr("studentData.txt", ios :: in);
    fflush(stdin);

    for(int i=1; i<=ns; i++)
    {
        fflush(stdin);
        getline(sr,sid);
        fflush(stdin);
        getline(sr,sname);
        fflush(stdin);
        getline(sr,ssection);
        fflush(stdin);
        getline(sr,ssemester);
        fflush(stdin);
        getline(sr,sdepartment);
        fflush(stdin);
        getline(sr,sadvisor);
        fflush(stdin);
        getline(sr,sreg);
        fflush(stdin);
        getline(sr,sresult);
        sdata[i] = student(sid, sname, ssection, ssemester, sdepartment, sadvisor, sreg, sresult);
    }

    sr.close();

}



/// For reading all teachers information from file
void read_teacher_data()
{
    fstream trn("tcount.txt",ios:: in);
    trn >> nt;
    trn.close();
    string tname,tdesignation,tdepartment;
    fstream tr("teacherData.txt", ios :: in);
    fflush(stdin);

    for(int i=1; i<=nt; i++)
    {
        fflush(stdin);
        getline(tr,tname);
        fflush(stdin);
        getline(tr,tdesignation);
        fflush(stdin);
        getline(tr,tdepartment);
        fflush(stdin);
        tdata[i] = teacher(tname, tdesignation, tdepartment);
    }

    tr.close();

}



/// For Home Menu
void patternHome()
{
    cout<<endl<<endl;
    printf("\t\t\t*****************************************************************\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*\t  (1) Teacher\t\t*\t  (2) Student\t\t*\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t*\t\t\t\t*\n");
    printf("\t\t\t*****************************************************************\n");
    printf("\n\n\t\t\t(3) Exit");
}


/// For student Menu
void studentMenu()
{
    p1
    printf("(1) Add New Student\n");
    p2
    printf("(2) Edit Existing\n");
    p2
    printf("(3) Delete a Student's Information\n");
    p2
    printf("(4) Show All Student's Informations\n");
    p2
    printf("(5) Course Registration\n");
    p2
    printf("(6) See Result\n");
    p2
    printf("(7) Go to Home\n\n");
    p2
    printf("Select an Option: ");
}



/// For teacher Menu
void teacherMenu()
{
    p1
    printf("(1) Add New Teacher\n");
    p2
    printf("(2) Edit Existing\n");
    p2
    printf("(3) Delete a Teacher's Information\n");
    p2
    printf("(4) Show All Teacher's Informations\n");
    p2
    printf("(5) Result Processing\n");
    p2
    printf("(6) Course Requests\n");
    p2
    printf("(7) Go to Home\n\n");
    p2
    printf("Select an Option: ");

}


/// if any  error occurs we call this function.
void error()
{
    system("Color C0");
    cout << "\n\n\n\n\t\t\t\tERROR!\n";
    cout << "\n\t\t\tPress Enter to go Back...";
}



/// Main Code starts from Here...
int main()
{

    /// Reading all data of student and techer from their corresponding files...
    read_student_data();
    read_teacher_data();

    while(1)
    {
        clear;
        system("Color E0");
        patternHome();
        int t1;
        printf("\n\n\n");
        printf("\t\t\tSelect an option: ");
        cin >> t1;


        if(t1<1 || t1>3)
        {
            clear;
            error();
            fflush(stdin);
            getchar();
        }

        /// Option Selection Teacher or Student.


        /// Student selected...
        else if(t1==2)
        {
            clear;
            system("Color A0");
            int t2;
            studentMenu();
            cin >> t2;


            if(t2<1 || t2>7)
            {
                clear;
                error();
                fflush(stdin);
                getchar();
            }


            /// Add student
            else if(t2==1)
            {
                clear;
                string s_id,s_name,s_section,s_semester,s_department,s_advisor;

                for(int i=ns+1; i<=ns+1; i++)
                {
                    p1
                    cout << "Informations of Student Number " << i << endl << endl;
                    p2
                    cout << "Enter student's ID : ";
                    cin >> s_id;
                    cout<<endl;
                    p2
                    fflush(stdin);
                    cout << "Enter student's Name : ";
                    getline(cin,s_name);
                    cout<<endl;
                    p2
                    fflush(stdin);
                    cout << "Section : ";
                    getline(cin,s_section);
                    cout<<endl;
                    p2
                    fflush(stdin);
                    cout << "Semester : ";
                    cin >> s_semester;
                    cout<<endl;
                    p2
                    fflush(stdin);
                    cout << "Department : ";
                    getline(cin,s_department);
                    cout<<endl;
                    p2
                    fflush(stdin);
                    cout << "Advisor Name : ";
                    getline(cin,s_advisor);
                    cout<<endl;
                    sdata[i] = student(s_id, s_name, s_section, s_semester, s_department, s_advisor);

                }

                ns = ns + 1;
                upload_student_data();

            }


            /// edit existing student
            else if(t2 == 2)
            {
                clear;
                string s_id,s_name,s_section,s_semester,s_department,s_advisor;
                p1
                cout << "Student's ID : ";
                string t3;
                int f1 = 0;
                cin >> t3;

                for(int i=1; i<=ns; i++)
                {
                    if(sdata[i].sid == t3)
                    {
                        p1
                        cout << "Enter New ID : ";
                        cin >> s_id;
                        cout<<endl;
                        p2
                        fflush(stdin);
                        cout << "Enter New Name : ";
                        getline(cin,s_name);
                        cout<<endl;
                        p2
                        fflush(stdin);
                        cout << "New Section : ";
                        getline(cin,s_section);
                        cout<<endl;
                        p2
                        fflush(stdin);
                        cout << "New Semester : ";
                        cin >> s_semester;
                        cout<<endl;
                        p2
                        fflush(stdin);
                        cout << "New Department : ";
                        cin >> s_department;
                        cout<<endl;
                        p2
                        fflush(stdin);
                        cout << "New Advisor Name : ";
                        getline(cin,s_advisor);
                        cout<<endl;
                        sdata[i] = student(s_id, s_name, s_section, s_semester, s_department, s_advisor);
                        f1 = 1;

                    }

                    upload_student_data();
                }

                if(f1==1)
                {
                    clear;
                    system("Color D0");
                    p1
                    cout << "Edit Successful" << endl << endl;
                    p2
                    cout << "Press Enter to go back: ";
                    fflush(stdin);
                    getchar();
                }


                if(f1 == 0)
                {
                    clear;
                    error();
                    fflush(stdin);
                    getchar();
                }

            }


            ///delete student data
            else if(t2 == 3)
            {
                clear;
                string s_id,s_name,s_section,s_semester,s_department,s_advisor;
                p1
                cout << "Student's ID : ";
                string t3;
                int f1 = 0,t;
                cin >> t3;

                for(int i=1; i<=ns; i++)
                {
                    if(sdata[i].sid == t3)
                    {
                        t = i;
                        f1 = 1;

                    }
                }

                if(f1==1)
                {
                    for(int i=t; i<ns; i++)
                    {
                        sdata[i] = sdata[i+1];
                    }
                    ns-=1;
                    upload_student_data();
                }

                if(f1==1)
                {
                    clear;
                    system("Color C0");
                    p1
                    cout << "Delete Successful!" << endl << endl;
                    p2
                    cout << "Press Enter to go back: ";
                    fflush(stdin);
                    getchar();
                }

                else if(f1==0)
                {
                    clear;
                    error();
                    fflush(stdin);
                    getchar();
                }
            }



            ///show all students data
            else if(t2 == 4)
            {
                clear;

                for(int i=1; i<=ns; i++)
                {
                    sdata[i].showData();
                }

                cout << endl << endl;
                p2
                cout << "Press Enter to go back: ";
                fflush(stdin);
                getchar();

            }


            /// Course Registration
            else if(t2 == 5)
            {
                clear;
                p1
                string t15;
                int t16,f=0;
                printf("Enter your ID : ");
                cin >> t15;


                for(int i=1; i<=ns; i++)
                {
                    if(t15 == sdata[i].sid)
                    {
                        t16 = i;
                        f = 1;
                    }
                }


                if(f==0)
                {
                    clear;
                    error();
                    fflush(stdin);
                    getchar();
                }



                else if(f == 1)
                {
                    clear;
                    sdata[t16].sreg = "1";
                    upload_student_data();
                    p1
                    printf("Request Sent Successful!\n");
                    cout << endl;
                    p2
                    cout << "Press Enter to go back: ";
                    fflush(stdin);
                    getchar();

                }


            }

            /// See Result
            else if(t2 == 6)
            {
                clear;
                string t9,t10;
                int f = 0;
                p1
                printf("Enter Your ID : ");
                cin >> t9;

                /// searching if the id exists or not
                for(int i=1; i<=ns; i++)
                {
                    if(sdata[i].sid == t9)
                    {
                        t10 = sdata[i].sresult;
                        f = 1;
                        break;

                    }
                }


                if(f == 0)
                {
                    clear;
                    error();
                    fflush(stdin);
                    getchar();
                }

                /// if id is found
                else if(f == 1)
                {

                    /// if result is not published yet
                    if(t10 == "0")
                    {
                        clear;
                        p1
                        printf("Your result is pending...");
                        cout << endl << endl;
                        p2
                        cout << "Press Enter to go back: ";
                        fflush(stdin);
                        getchar();
                    }


                    /// showing result
                    else
                    {
                        clear;
                        p1
                        printf("Your Result is : ");
                        cout << t10 << endl;
                        cout << endl << endl;
                        p2
                        cout << "Press Enter to go back: ";
                        fflush(stdin);
                        getchar();

                    }
                }


            }

            /// Go to Home Menu.
            else if(t2 == 7)
            {
                continue;
            }

        }



        // Teacher Selected.
        else if(t1 == 1)
        {
            clear;
            system("Color B0");
            int t4;
            teacherMenu();
            cin >> t4;

            if(t4<1 || t4>7)
            {
                clear;
                error();
                fflush(stdin);
                getchar();
            }


            /// Add Teacher
            else if(t4==1)
            {
                clear;
                string t_name,t_designation,t_department;

                for(int i=nt+1; i<=nt+1; i++)
                {
                    p1
                    cout << "Informations of Teacher Number " << i << endl << endl;
                    p2
                    fflush(stdin);
                    cout << "Enter Teacher's Name : ";
                    getline(cin,t_name);
                    cout<<endl;
                    p2
                    fflush(stdin);
                    cout << "Designation : ";
                    getline(cin,t_designation);
                    cout<<endl;
                    p2
                    fflush(stdin);
                    cout << "Department : ";
                    getline(cin,t_department);
                    cout<<endl;
                    tdata[i] = teacher(t_name, t_designation, t_department);

                }

                nt = nt + 1;
                upload_teacher_data();

            }


            /// Edit Existing Teacher
            else if(t4 == 2)
            {
                clear;
                string t_name,t_designation,t_department;
                p1
                cout << "Teacher's Name : ";
                string t6;
                int f1 = 0;
                fflush(stdin);
                getline(cin,t6);

                for(int i=1; i<=nt; i++)
                {
                    if(tdata[i].tname == t6)
                    {
                        p1
                        fflush(stdin);
                        cout << "Enter New Name : ";
                        getline(cin,t_name);
                        cout<<endl;
                        p2
                        fflush(stdin);
                        cout << "New Designation : ";
                        getline(cin,t_designation);
                        cout<<endl;
                        p2
                        fflush(stdin);
                        cout << "New Department : ";
                        getline(cin,t_department);
                        cout<<endl;
                        tdata[i] = teacher(t_name, t_designation, t_department);
                        f1 = 1;

                    }

                    upload_teacher_data();
                }

                if(f1==1)
                {
                    clear;
                    system("Color D0");
                    p1
                    cout << "Edit Successful!" << endl << endl;
                    p2
                    cout << "Press Enter to go back: ";
                    fflush(stdin);
                    getchar();
                }

                if(f1 == 0)
                {
                    clear;
                    error();
                    fflush(stdin);
                    getchar();
                }

            }


            ///Delete Teacher Data
            else if(t4 == 3)
            {
                clear;
                string t_name,t_designation,t_department;
                p1
                cout << "Teacher's Name : ";
                string t3;
                int f1 = 0,t;
                fflush(stdin);
                getline(cin,t3);

                for(int i=1; i<=nt; i++)
                {
                    if(tdata[i].tname == t3)
                    {
                        t = i;
                        f1 = 1;

                    }
                }

                if(f1==1)
                {
                    for(int i=t; i<nt; i++)
                    {
                        tdata[i] = tdata[i+1];
                    }
                    nt-=1;
                    upload_teacher_data();
                }


                if(f1==1)
                {
                    clear;
                    system("Color C0");
                    p1
                    cout << "Delete Successful!" << endl << endl;
                    p2
                    cout << "Press Enter to go back: ";
                    fflush(stdin);
                    getchar();
                }

                else if(f1==0)
                {
                    clear;
                    error();
                    fflush(stdin);
                    getchar();
                }
            }


            ///Show all Teacher's Data
            else if(t4 == 4)
            {
                clear;
                for(int i=1; i<=nt; i++)
                {
                    tdata[i].showData();
                }
                cout << endl << endl;
                p2
                cout << "Press Enter to go back: ";
                fflush(stdin);
                getchar();

            }


            /// Result Processing
            else if(t4 == 5)
            {
                clear;
                string t11;
                int t12,f = 0;
                p1
                printf("Enter Student's ID : ");
                cin >> t11;
                for(int i=1; i<=ns; i++)
                {
                    if(sdata[i].sid == t11)
                    {
                        t12 = i;
                        f = 1;
                        break;
                    }
                }

                if(f == 0)
                {
                    clear;
                    error();
                    fflush(stdin);
                    getchar();
                }

                else if(f == 1)
                {
                    clear;
                    string t13;
                    p1
                    printf("Enter the student's result : ");
                    cin >> t13;
                    sdata[t12].sresult = t13;
                    upload_student_data();
                    p1
                    printf("Result Successfully Added!\n");
                    cout << endl << endl;
                    p2
                    cout << "Press Enter to go back: ";
                    fflush(stdin);
                    getchar();


                }
            }


            /// Course Requests
            else if(t4 == 6)
            {
                clear;
                string t17;
                int t18,f=0;

                /// searching if there has any pending requests
                for(int i=1; i<=ns; i++)
                {
                    if(sdata[i].sreg == "1")
                    {
                        f = 1;
                    }
                }


                if(f==0)
                {
                    clear;
                    p1
                    printf("No Pending Requests...!");
                    cout << endl << endl;
                    p2
                    cout << "Press Enter to go back: ";
                    fflush(stdin);
                    getchar();

                }


                else if(f==1)
                {
                    p1
                    string t20;
                    int t21,ff=0;
                    printf("Enter Student's ID to Accept Registration : ");
                    cin >> t20;
                    for(int i=1; i<=ns; i++)
                    {
                        if(sdata[i].sid == t20)
                        {
                            t21 = i;
                            ff = 1;
                            break;
                        }
                    }



                    if(ff == 0)
                    {
                        clear;
                        error();
                        fflush(stdin);
                        getchar();
                    }

                    else if(ff == 1)
                    {

                        ///if the request is pending
                        if(sdata[t21].sreg== "1")
                        {
                            clear;
                            sdata[t21].sreg = "2";
                            upload_student_data();
                            p1
                            printf("Registration Successful!\n");
                            cout << endl << endl;
                            p2
                            cout << "Press Enter to go back: ";
                            fflush(stdin);
                            getchar();
                        }

                        /// if the student did not send any request
                        else if(sdata[t21].sreg == "0")
                        {
                            clear;
                            p1
                            printf("This Student Has Not Sent any Request for Course Registration.");
                            cout << endl << endl;
                            p2
                            cout << "Press Enter to go back: ";
                            fflush(stdin);
                            getchar();
                        }


                        /// if the student is already registered
                        else if(sdata[t21].sreg == "2")
                        {
                            clear;
                            p1
                            printf("This Student Has already Enrolled in the Course.");
                            cout << endl << endl;
                            p2
                            cout << "Press Enter to go back: ";
                            fflush(stdin);
                            getchar();

                        }
                    }

                }

            }


            /// Go to Home Menu.
            else if(t4 == 7)
            {
                continue;
            }



        }


        ///Exiting from the programm.
        else if(t1 == 3)
        {
            clear;
            system("Color B0");
            p1
            printf("Thank You! :)\n\n");
            break;
        }
    }

}

/// Code is Finished.... :)
/// Alhamdulillah...
