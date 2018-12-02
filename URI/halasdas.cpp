#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;
int rm=1,fr=1,j=-1,d=0;
class hall
{
protected:
    int w,f;
    char hn[50];
public:
    void gethallinfo()
    {
        cout<<"\n\t     Input The Hall Name: ";
        cin>>hn;
        cout<<"\n\t  HOW MANY FLOOR IN THAT HALL?\n\t  : ";
        cin>>f;
        cout<<"\t  HOW MANY ROOM IN THAT HALL?\n\t  : ";
        cin>>w;
    }
};
class room:public hall
{

public:

};

class student:public room
{
public:
    char id[10];
    char name[50],fc[50],dep[50],dis[50],lv[4],sm[4];

    void getstinfo()
    {
        cout<<"\n\t   Name: ";
        cin>>name;
        cout<<"\n\t   Student ID: ";
        cin>>id;
        cout<<"\n\t   Faculty: ";
        cin>>fc;
        cout<<"\n\t   Department: ";
        cin>>dep;
        cout<<"\n\t   Level: ";
        cin>>lv;
        cout<<"\n\t   Semester: ";
        cin>>sm;
        cout<<"\n\t   Home District: ";
        cin>>dis;
    }
};


class getfile:public student
{
    char floor[50],roomno[50], filename[200];
public:
    void file();
};


void getfile :: file()
{
    class student s[100];
    int i,k,x;
    char c;
    while(1)
    {
        if(rm>w)
        {
            cout<<"\n\n\t***** SORRY ! SORRY !! SORRY !!! *****\n";
            cout<<"\n\t  ***** There Are No Space *****\n\n";
            break;
        }
        else
        {
            j+=1;
            cout<<"\n\tPlease Entry Your Information:\n";
            s[j].getstinfo();
            cout<<"\n\t     ***** Complete *****\n";
            cout<<"\tAllocated Seat:\n";
            cout<<"\t\t FLOOR NO: "<<fr<<endl;
            cout<<"\t\t ROOM NO: "<<rm<<endl;
            cout<<"\t\t SEAT NO: "<<(j%4)+1<<endl;
            sprintf(roomno,"%d",rm);
            sprintf(floor,"%d",fr);
            char la[200];
            strcpy(la,s[j].id);
            ofstream per(la);
            per<<" FLOOR NO: "<<fr<<endl;
            per<<" ROOM NO: "<<rm<<endl;
            per<<" SEAT NO: "<<(j%4)+1<<endl;
            per.close();
            if(((j+1)%4)==0)
            {
                char a[200];
                strcpy(a,floor);
                strcat(a,"_");
                strcat(a,roomno);
                ofstream ro(a);
                for(k=j-3; k<=j; k++)
                {
                    ro<<"\n\t   Name: "<<s[k].name;
                    ro<<"\n\t   Student ID: "<<s[k].id;
                    ro<<"\n\t   Faculty: "<<s[k].fc;
                    ro<<"\n\t   Department: "<<s[k].dep;
                    ro<<"\n\t   Level: "<<s[k].lv;
                    ro<<"\n\t   Semester: "<<s[k].sm;
                    ro<<"\n\t   Home District: "<<s[k].dis<<"\n";
                }
                ro.close();
                d=j+1;
            }
            cout<<"\n\t Continue (y/n)? : ";
            cin>>c;
            c=tolower(c);
            if(c=='n')
            {
                if(((j+1)%4)!=0)
                {
                    char a[200];
                    strcpy(a,floor);
                    strcat(a,"_");
                    strcat(a,roomno);
                    ofstream ro(a);
                    for(k=d; k<=j; k++)
                    {
                        ro<<"\n\t   Name: "<<s[k].name;
                        ro<<"\n\t   Student ID: "<<s[k].id;
                        ro<<"\n\t   Faculty: "<<s[k].fc;
                        ro<<"\n\t   Department: "<<s[k].dep;
                        ro<<"\n\t   Level: "<<s[k].lv;
                        ro<<"\n\t   Semester: "<<s[k].sm;
                        ro<<"\n\t   Home District: "<<s[k].dis<<"\n";
                    }
                    ro.close();
                }
                break;
            }
            else
            {
                if((j+1)%4==0)
                {
                    rm+=1;
                    if(rm%(w/f)==1)
                        fr+=1;
                    else if(w==f)
                        fr+=1;
                }
            }
        }
    }
}


class disfile:public student
{
public:
    void display();
};

void disfile:: display()
{
    char cc;
    while(1)
    {
        int y;
        cout<<"\n   ========  What do you want to search?  ========\n   ||";
        cout<<"\t\t\t\t\t\t||\n   ||\t\t  [1] STUDENT\t\t\t||";
        cout<<"\n   ||\t\t\t\t\t\t||\n   ||\t\t  [2] ROOM \t\t\t||";
        cout<<"\n   ===============================================\n";
        cout<<"\n\n\t\tEnter your  choice: ";
        cin>>y;
        if(y==1)
        {
            cout<<"\n\t\tInput the student id: ";
            char r[200],m;
            cin>>r;
            ifstream dd(r);
            if(!dd)
            {
                cout<<"\n\t\t\t===============";
                cout<<"\n\t\t\t!!\t     !!\n\t\t\t!!   ERROR   !!\n\t\t\t!!\t     !!";
                cout<<"\n\t\t\t===============\n\n";
            }
            else
            {
                while(dd)
                {
                    dd.get(m);
                    cout<<m;
                }
            }
            dd.close();
        }
        if(y==2)
        {
            char fl[10],rn[10];
            cout<<"\n\tInput the floor name:";
            cin>>fl;
            cout<<"\n\tInput the room number:";
            cin>>rn;
            char u[200];
            strcpy(u,fl);
            strcat(u,"_");
            strcat(u,rn);
            ifstream ro(u);
            char m;
            if(!ro)
            {
                cout<<"\n\t\t\t===============";
                cout<<"\n\t\t\t!!\t     !!\n\t\t\t!!   ERROR   !!\n\t\t\t!!\t     !!";
                cout<<"\n\t\t\t===============\n\n";
            }
            else
            {
                cout<<"\n\tStudent information:\n";
                while(ro)
                {
                    ro.get(m);
                    cout<<m;
                }
            }
            ro.close();
        }
        cout<<"\n\t Continue Searching (y/n)? : ";
        cin>>cc;
        cc=tolower(cc);
        if(cc=='n')
            break;
    }
}




int main()
{
    cout<<"\n\t         *** WELCOME TO ***\n";
    cout<<"\n\t******** THE HALL MANAGEMENT ********\n";
    getfile a;
    disfile d;
    a.gethallinfo();
    while(1)
    {
        cout<<"\n   ================  MAIN   MENU  ================\n   ||";
        cout<<"\t\t\t\t\t\t||\n   ||\t\t   [1] ENTRY \t\t\t||";
        cout<<"\n   ||\t\t\t\t\t\t||\n   ||\t\t   [2] SEARCH  \t\t\t||";
        cout<<"\n   ||\t\t\t\t\t\t||\n   ||\t\t   [3] EXIT\t\t\t||\n   ||\t\t\t\t\t\t||";
        cout<<"\n   ===============================================\n";
        cout<<"\n\n\t\tEnter your  choice : ";
        int j;
        cin>>j;
        if(j==1)
        {
            a.file();
        }
        if(j==2)
        {
            d.display();
        }
        if(j==3)
        {
            cout<<"\n\n\n**********   T H A N K   Y O U   F O R   W O R K I N G   **********\n\n\n";
            break;
        }
    }
    return 0;
}


