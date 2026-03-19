#include<iostream>
#include<vector>
using namespace std;

double CE(int classtest,int sessional,int assignment){
    double CT=classtest;
    double SE=sessional*1.2;
    double as=assignment;

    double final=(CT+SE+as)*0.3;

    return final;
}

double lpw(int file,int practical){
    double files=file*0.6;

    double final = (files+practical)*0.3;

    return final;
}

double SEE(int endsem){
    return endsem*0.4;
}

void CGPA(double final_marks){
    if(final_marks >= 90){
        cout<<"your cgpa is 10";
    }
    else if(final_marks >= 80){
        cout<<"your cgpa is 9";
    }
    else if(final_marks >= 70){
        cout<<"your cgpa is 8";
    }
    else if(final_marks >= 60){
        cout<<"your cgpa is 7";
    }
    else{
        cout<<"your cgpa is below 7";
    }
}

int main(){
    double CT,SE,AS,FILE,LPW,ENDSEM;
    cout<<"enter marks of class test"<<endl;
    cin>>CT;

    cout<<"enter marks of sessional"<<endl;
    cin>>SE;

    cout<<"enter marks of assignment"<<endl;
    cin>>AS;

    cout<<"enter marks of file"<<endl;
    cin>>FILE;

    cout<<"enter marks of practical"<<endl;
    cin>>LPW;

    // cout<<"enter marks of endsem"<<endl;
    // cin>>ENDSEM;
    
    double ce_val=CE(CT,SE,AS);
    double lpw_val=lpw(FILE,LPW);

    cout<<"ce component:"<<ce_val<<endl;
    cout<<"lpw component:"<<lpw_val<<endl;
    // cout<<"endsem:"<<SEE(ENDSEM)<<endl;

    //double marks = CE(CT,SE,AS)+lpw(FILE,LPW)+SEE(ENDSEM);

    //cout<<"the final marks:"<<CE(CT,SE,AS)+lpw(FILE,LPW)+SEE(ENDSEM)<<endl;

    //CGPA(marks);

    int option;
    cout<<"choose option 1(for cgpa) and option 2(to calculate endsem marks)\n";
    cin>>option;

    if(option == 1){
        cout<<"enter marks of endsem"<<endl;
        cin>>ENDSEM;
        cout<<"endsem:"<<SEE(ENDSEM)<<endl;

        double marks = ce_val+lpw_val+SEE(ENDSEM);

        cout<<"the final marks:"<<marks<<endl;

        CGPA(marks);
    }

    else if(option ==2){
        double min_marks;
        double marks_req;
        int gpa;

        cout<<"how much gpa you want?"<<endl;
        cin>>gpa;
        
        switch (gpa)
        {
        case 7:
            min_marks = 60.01;
            marks_req= 2.5*(min_marks-ce_val-lpw_val);
            cout<<"you need "<<marks_req << " marks to score 7gpa\n";

            if(marks_req > 100)     cout<<"Not achievable\n";
            else if(marks_req < 0)  cout<<"Already achieved!\n";
            else                    cout<<"you need "<<marks_req<<" marks to score 7 gpa\n";
            break;
        case 8:
            min_marks = 70.01;
            marks_req= 2.5*(min_marks-ce_val-lpw_val);
            cout<<"you need "<<marks_req << " marks to score 8 gpa\n";

            if(marks_req > 100)     cout<<"Not achievable\n";
            else if(marks_req < 0)  cout<<"Already achieved!\n";
            else                    cout<<"you need "<<marks_req<<" marks to score 8 gpa\n";
            break;
        case 9:
            min_marks = 80.01;
            marks_req= 2.5*(min_marks-ce_val-lpw_val);
            cout<<"you need "<<marks_req << " marks to score 9gpa\n";

            if(marks_req > 100)     cout<<"Not achievable\n";
            else if(marks_req < 0)  cout<<"Already achieved!\n";
            else                    cout<<"you need "<<marks_req<<" marks to score 9 gpa\n";
            break;
        case 10:
            min_marks = 90.01;
            marks_req= 2.5*(min_marks-ce_val-lpw_val);
            cout<<"you need "<<marks_req << " marks to score 10gpa\n";

            if(marks_req > 100)     cout<<"Not achievable\n";
            else if(marks_req < 0)  cout<<"Already achieved!\n";
            else                    cout<<"you need "<<marks_req<<" marks to score 10 gpa\n";
            break;

        default:
            cout<<"enter correct gpa"<<endl;
            break;
        }
    }
    else{
        cout<<"invalid option entered\n";  // ✅ added
    }
    /*
    double es;
    double tp;
    int t;

    cout<<"how much gpa you want?"<<endl;
    cin>>t;
    
    switch (t)
    {
    case 7:
        es = 60.01;
        tp= 2.5*(es-CE(CT,SE,AS)-lpw(FILE,LPW));
        cout<<"you need "<<tp << " marks to score 7gpa\n";
        break;
    case 8:
        es = 70.01;
        tp= 2.5*(es-CE(CT,SE,AS)-lpw(FILE,LPW));
        cout<<"you need "<<tp << " marks to score 8 gpa\n";
        break;
    case 9:
        es = 80.01;
        tp= 2.5*(es-CE(CT,SE,AS)-lpw(FILE,LPW));
        cout<<"you need "<<tp << " marks to score 9gpa\n";
        break;
    case 10:
        es = 90.01;
        tp= 2.5*(es-CE(CT,SE,AS)-lpw(FILE,LPW));
        cout<<"you need "<<tp << " marks to score 10gpa\n";
        break;

    default:
        cout<<"enter correct gpa"<<endl;
        break;
    }
    */
    return 0;
}