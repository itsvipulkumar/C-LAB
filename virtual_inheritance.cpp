/****  An educational institute wishes to maintian database of it's emplyees. The datbase is devided into a number of classes where herarical 
relationship are shown in figure. Figure also shows the minimum information required for each class. specified all the  classes and define
function to create the database and retreat individual information as and when required. *****/
#include <iostream>
#include <string>
using namespace std;
class Staff
{
protected:
    int code;
    string name;

public:
    void get_S(int c, string n)
    {
        code = c;
        name = n;
    }
    void disp_S();
};
class Typist : public Staff
{
protected:
    int speed;

public:
    void get_T(int sp)
    {
        speed = sp;
    }
    void disp_T();
};

class Teacher : public Staff
{
protected:
    string subj;
    int publication;

public:
    void get_Tea(string sub, int pub)
    {
        subj = sub;
        publication = pub;
    }
    void disp_Tea();
};

class Officer : public Staff
{
protected:
    char grade;

public:
    void get_off(char grd)
    {
        grade = grd;
    }
    void disp_off();
};

class Regular : public Typist
{
protected:
    int salary;

public:
    void get_reg(int sal)
    {
        salary = sal;
    }
    void disp_reg();
};
class Casual : public Typist
{
protected:
    int dly_wages;

public:
    void get_casual(int d_w)
    {
        dly_wages = d_w;
    }
    void disp_casual();
};

void Staff::disp_S()
{
    cout << "Code : " << code << endl;
    cout << "Name : " << name << endl;
}
void Teacher::disp_Tea()
{
    cout << "Subject : " << subj << endl;
    cout << "publication : " << publication << endl;
}

void Typist::disp_T()
{
    cout << "Speed : " << speed << " WPS" << endl;
}
void Officer::disp_off()
{
    cout << "Grade : " << grade << endl;
}
void Regular::disp_reg()
{
    cout << "Salary  : " << salary << " / month" << endl;
}
void Casual::disp_casual()
{
    cout << "Daily Wages : " << dly_wages << " / Day" << endl;
}
int main()
{
    cout << "\n\n<<<===   For Teacher  ===>>>\n\n";
    Teacher obj;
    obj.get_S(7232, "Vipul Chauhan");
    obj.disp_S();
    obj.get_Tea("OOPS", 91673);
    obj.disp_Tea();

    cout << "\n\n<<<===   For Typist  ===>>>\n\n";
    Typist obj1;
    obj1.get_S(3021, "Shuaib Akthar");
    obj1.disp_S();
    obj1.get_T(90);
    obj1.disp_T();

    cout << "\n\n<<<===   For Officer  ===>>>\n\n";
    Officer obj2;
    obj2.get_S(3654534, "Harsh Chaturvedy");
    obj2.disp_S();
    obj2.get_off('A');
    obj2.disp_off();
    cout << "\n\n<<<===   For Regular  ===>>>\n\n";

    Regular obj3;
    obj3.get_S(2798, "Sheetal Verma");
    obj3.disp_S();
    obj3.get_reg(90999);
    obj3.disp_reg();

    cout << "\n\n<<<===   For Casual  ===>>>\n\n";

    Casual obj4;
    obj4.get_S(00120, "Sumit Chauhan");
    obj4.disp_S();
    obj4.get_casual(256);
    obj4.disp_casual();
    return 0;
}