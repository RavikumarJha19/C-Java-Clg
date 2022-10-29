#include<iostream>
#include<string.h>
using namespace std;

class Hospital
{
public:
    string hospital_name,location,contact;
    int available_beds,beds_price;
    float rating;
    void getHospitalData()
    {
        
        cout<<"\nEnter the hospital name:"<<endl;
        cin>>hospital_name;
        cin.ignore();
        cout<<"Enter the location:"<<endl;
        getline(cin,location);
        cout<<"Enter the rating:"<<endl;
        cin>>rating;
        cout<<"Enter contact:"<<endl;
        cin>>contact;
        cout<<"enter price per bed"<<endl;
        cin>>beds_price;
    }

    void printhospitaldata()
    {
        cout<<"\nHospital's name:"<<hospital_name<<endl;
        cout<<"Location:"<<location<<endl;
        cout<<"Available beds:"<<available_beds<<endl;
        cout<<"Rating:"<<rating<<endl;
        cout<<"Contact:"<<contact<<endl;
        cout<<"Price per bed:"<<beds_price<<endl;
    }

    int searchHospitalbyName(string hosp_name)
    {
        int x=1;
        if(hospital_name==hosp_name)
        {
            cout<<"\nMatch found"<<endl;
            return x;
        }
        else{
            cout<<"\nNot found"<<endl;
            x=2;
            return x;
        }
    }

    int searchbyavailablebeds(int avail_bed)
    {
        int y=1;
        if(available_beds==avail_bed)
        {
            cout<<"\nMatch found"<<endl;
            return y;
        }
        else{
            cout<<"\nNot found"<<endl;
            y=2;
            return y;
        }
    }

    void updatehospitalinfo()
    {
        
        cout<<"\nEnter the hospital name:"<<endl;
        cin>>hospital_name;
        cin.ignore();
        cout<<"Enter the location:"<<endl;
        getline(cin,location);
        cout<<"Enter the rating:"<<endl;
        cin>>rating;
        cout<<"Enter contact:"<<endl;
        cin>>contact;
        cout<<"enter price per bed"<<endl;
        cin>>beds_price;
    }
};

class Patient : public Hospital
{
public:
    string P_name;
    int P_id;
    void getPatientData()
    {
        cin.ignore();
        cout<<"\nEnter Patient's Name:"<<endl;
        getline(cin,P_name);
        cout<<"Enter Patient's Id:"<<endl;
        cin>>P_id;
    }

    void printpatientdata()
    {
        cout<<"\nPatient Name:"<<P_name<<endl;
        cout<<"Patient's Id:"<<P_id<<endl;
    }

    void updatepatientdata()
    {
        cin.ignore();
        cout<<"\nEnter Patient's Name:"<<endl;
        getline(cin,P_name);
        cout<<"Enter Patient's Id:"<<endl;
        cin>>P_id;
    }

};

int main()
{
    Hospital h[50];
    Patient p[50];
    int updatechoice, i=0,avail_bed,t,noofpatients,newnoofpatients,x,y;
    string hosp_name;
    char choice;
    
    cout<<"Enter no. of patients"<<endl;
    cin>>noofpatients;
    for(i=0;i<1;i++)
    {
        h[i].getHospitalData();
    }
    {
    for(i=0;i<noofpatients;i++)
        p[i].getPatientData();
    }
    while(1)
    {
        cout<<"\n1.print hospital's data"<<endl;
        cout<<"2.print patient's data"<<endl;
        cout<<"3.search hospital by name"<<endl;
        cout<<"4.search by available beds"<<endl;
        cout<<"5.update info"<<endl;
        cout<<"6.exit"<<endl;
        cout<<"enter choice"<<endl;
        cin>>updatechoice;
        switch(updatechoice)
        {

        case 1:
            for(i=0;i<1;i++)
            h[i].printhospitaldata();
            i++;
            break;

        case 2:
            for(i=0;i<noofpatients;i++){
                p[i].printpatientdata();
                cout<<"\n";
            }
                break;

        case 3:
        cin.ignore();
            getline(cin,hosp_name);
            for(t=0;t<1;t++)
            {
               x=h[t].searchHospitalbyName(hosp_name);
               if(x==1)
                h[t].printhospitaldata();
                
            }
                break;

        case 4:
            cin>>avail_bed;
            for(t=0;t<1;t++)
            {
               y=h[t].searchbyavailablebeds(avail_bed);
               if(y==1)
               h[t].printhospitaldata();
            }

                break;
        case 5:
            cout<<"\nWhat would you like to update? p or h?"<<endl;
            cin>>choice;
            if(choice=='p'){
                cout<<"Enter new number of patients"<<endl;
                cin>>newnoofpatients;
                for(i=0;i<noofpatients;i++)
                p[i].updatepatientdata();
            }
            else if(choice=='h'){
                cout<<"Enter new hospital data"<<endl;
                for(i=0;i<1;i++)
                h[i].updatehospitalinfo();
            }
            else{
                cout<<"Wrong choice!"<<endl;
            }
            break;

        case 6:
            exit(0);
            break;
        }
    }
    return 0;
}
