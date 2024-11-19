#include<iostream>
using namespace std;

struct Question{
    int no;
    string qn;
    int op1;
    int op2;
    int op3;
    int correct;
};

void displayQuestion(Question question){
    cout<<question.qn<<endl;
    cout<<question.op1<<endl;
    cout<<question.op2<<endl;
    cout<<question.op3<<"\n";
    int c;
    cout<<"Enter the correct option(1,2,3): ";
    cin>>c;
    if(c==1){
        if(question.op1==question.correct){
            cout<<"Correct!"<<"\n\n";
        }else{
            cout<<"Incorrect!"<<"\n\n";
        }
    }else if(c == 2){
        if(question.op2==question.correct){
            cout<<"Correct!"<<"\n\n";
        }else{
            cout<<"Incorrect!"<<"\n\n";
        }
    }else if(c==3){
        if(question.op3==question.correct){
            cout<<"Correct!"<<"\n\n";
        }else{
            cout<<"Incorrect!"<<"\n\n";
        }
    }else{
        cout<<"Incorrect option!"<<"\n\n";
    }
    
}

int main(){
    Question q1 ={1 ,"Find the sum of 5 and 2?", 3, 7, 8, 7};
    Question q2 ={2 ,"Find the sum of 5 and 5?", 2, 5, 10, 10};
    Question q3 ={3 ,"Find the sum of 8 and 7?", 15, 6, 2, 14};
    Question q4 ={4 ,"Find the difference between 12 and 2?", 25, 14, 10, 10};
    Question q5 ={5 ,"Find the multiplication of 1 and 4?", 24, 4, 14, 4};

    int n = 1;

    while(n<6){
        if(n==1){
            displayQuestion(q1);
            n++;
        }else if(n==2){
            displayQuestion(q2);
            n++;
        }else if(n==3){
            displayQuestion(q3);
            n++;
        }else if(n==4){
            displayQuestion(q4);
            n++;
        }else if(n==5){
            displayQuestion(q5);
            n++;
        }else{
            break;
        }
    }


    return 0;
}