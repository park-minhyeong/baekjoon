#include <string>
#include <vector>
#include <queue>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    
    queue <string> q1;
    queue <string> q2;
    queue <string> q;
    
    for (int i=0; i<cards1.size(); i++){
        q1.push(cards1[i]);
}
    for (int i=0; i<cards2.size(); i++){
        q2.push(cards2[i]);
        
}
    for (int i=0; i<goal.size(); i++){
        q.push(goal[i]);
        
}
    string answer = "";
    bool isSuccess=true;
    
    while(!q.empty()){
        if (q.front().compare(q1.front()) ==0){
            q.pop();
            q1.pop();
        }
        else if (q.front().compare(q2.front())==0)
        {
            q.pop();
            q2.pop();
        }
        else{
            isSuccess=false;
            break;
        }  
        
    }
    if(isSuccess) 
        answer="Yes";
    else 
        answer="No";
    
    
    return answer;
}