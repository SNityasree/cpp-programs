//Write a C program to generate employee payroll using structures.

#include<iostream>
#include<iomanip>
using namespace std;
struct employe{
    int id;
    string name;
    float salary,hra,da,medic,pf,insurance;
};
int main()
{
    int n,payslip;
    cout<<"Enter the number of employees: ";
    cin>>n;
    cout<<"Enter your input for every employee:"<<"\n";
    struct employe e[n];
    for(int i=0;i<n;i++){
        cout<<"Employee ID: ";
        cin>>e[i].id;
        cout<<"Employee Name: ";
        cin>>e[i].name;
        cout<<"Basic salary, HRA: ";
        cin>>e[i].salary>>e[i].hra;
        cout<<"DA, Medical Allowance: ";
        cin>>e[i].da>>e[i].medic;
        cout<<"PF and Insurance: ";
        cin>>e[i].pf>>e[i].insurance;
        cout<<"\n";
    }
    cout<<"Enter employee ID to get payslip: ";
    cin>>payslip;
    for(int i=0;i<n;i++){
        if(e[i].id==payslip){
        cout<<"Salary Slip of "<<e[i].name<<":\n";
        cout<<"Employee ID: "<<e[i].id<<"\n";
        cout<<fixed<<setprecision(2)<<"Basic Salary: "<<e[i].salary<<"\n";
        cout<<fixed<<setprecision(2)<<"House Rent Allowance: "<<e[i].hra<<"\n";
        cout<<fixed<<setprecision(2)<<"Dearness Allowance: "<<e[i].da<<"\n";
        cout<<fixed<<setprecision(2)<<"Medical Allowance: "<<e[i].medic<<"\n";
        cout<<fixed<<setprecision(2)<<"Gross Salary: "<<(e[i].salary + e[i].hra + e[i].da +e[i].medic)<<" Rupees\n\n";
        cout<<"Deductions:"<<"\nProvident fund: "<<fixed<<setprecision(2)<<e[i].pf<<"\n";
        cout<<"Insurance: "<<fixed<<setprecision(2)<<e[i].insurance<<"\n";
        cout<<"Net Salary: "<<fixed<<setprecision(2)<<((e[i].salary + e[i].hra + e[i].da + e[i].medic) - (e[i].pf + e[i].insurance))<<" Rupees";
    }
    }
    return 0;
}
