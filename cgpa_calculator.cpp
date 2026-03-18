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

    cout<<"enter marks of endsem"<<endl;
    cin>>ENDSEM;

    
    cout<<"ce component:"<<CE(CT,SE,AS)<<endl;
    cout<<"lpw component:"<<lpw(FILE,LPW)<<endl;
    cout<<"endsem:"<<SEE(ENDSEM)<<endl;

    double marks = CE(CT,SE,AS)+lpw(FILE,LPW)+SEE(ENDSEM);

    cout<<"the final marks:"<<CE(CT,SE,AS)+lpw(FILE,LPW)+SEE(ENDSEM)<<endl;

    CGPA(marks);
    return 0;
}