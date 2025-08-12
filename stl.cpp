#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
using namespace std;


int main() {
    /* (vector) -> is the stl template libray contaner use as the dynamic array so that we can change it size and capacity at run time
        (push_back) --> to add the value like pb(1) --> {1} pb(2) --> {1,2}
        (pop_back)  --> it will remove the last element of the vector also it will not effect the capacity only the size or remove only the value not the capacity of the vector
        (size)      --> is the value a vector fill now like {1,2,3,4} s = 4
        (capasity)  --> is the value we can fit in or how many we can fit in every time when the capacity become full and we add other value 
            {1,2} --> size = 2 capacity = 2 now we add pb(3) | {1,2,3} --> size = 3 capacity = 4 if it is full like {1,2,3,4} and now we add 
            pb(5) --> size = 5 capacity = 8 so every time the capacity become double or multiply with two 
        (at|[])     --> it is use to go on specific index on the vector like {1,2,3} --> arr.at(1) = 2 | arr[1] = 2
        (front)     --> will show the first value of the vector {11,22,33} => 11
        (back)      --> will show the last  value of the vector {11,22,33} => 33
        (vec(size,value)) --> like {vector <int> arr(size,value)} == so the size is that how many size/capacity  value = is that what value we will insert on each idx
            or like arr(2,2) --> {2,2} arr(4size,4the value to insert on each idx) --> {4,4,4,4}  4 S/4 C so the it will iterate the value in all the vector 
        (begin)   --> will give the first element memory location like a pointer cout<<*(arr.begin())<<endl;
        (end)     --> will give the last element memory location like a p in startin teh arr.end() is not pointing the last value it point arr.end()+1   cout<<*(arr.end()-1);
        (erase)   --> it is use to erase the element in the vecotr erase(arr.begin()) it erase the first value from the array
            but if we want to remove the 2nd index value simple erase(arr.begin()+2) we can also delete multiple value from aray
            erase(start,end) start is included and end is not like end - 1 arr.erase(arr.begin()+1,arr.begin+3)
            can change the size but not the capacity
        (insert) --> will insert the value it specific index can change the capasity and size arr.insert(arr.begin()+2,100);
        (clear)  --> will clear all the vector can change size only
        (empty)  --> will check if the vector is empty or not
        (iterator) --> it is use for the vector to iterater through the vector like we use the arr.begin() which point to the starting index pointer and end which is the end+1
                       vector <int>::iterator it;
        (reverse_iterator)  --> vector <int>::reverse_iterator it; is use for reverseing vector
        (rbegin)   --> is the last element index {1,2,3,4} = 4
        (rend)     --> is the garbge value {rend{1,2,3,4}end} that why we use end - 1
        (list)     --> it is dously linked array like we can add the element in the front/back also can remove the element from the front and back
                       list   <int> arrl = {1,2,3,4}; so it mean we will have the front function for at as will as start
                       also it is not allow random accec in array 
        (deque)    --> is known as double ended que is as like list can form functoin for front and back it is allow random acces d[2]
        {{{{
            we can also use this methood 
            vector <int>::reverse_iterator it;
            for (vector <int>::reverse_iterator it = arr.rbegin();it!=arr.rend(); it++)
            for (vector <int>::iterator it = arr.begin;it!=arr.end();it++)
            but modern c++ automaticaly understand what are we asseging the variable so
            for (auto it = arr.rbegin();it!=arr.rend(); it++)
            for (auto it = arr.begin() ;it!=arr.end() ; it++)
        }}}}
        (pair)  --> is use for to stor the pair or double values in can be char or integers 
            pair  p = {1,'a'};                         normal
            pair<int,int> p = {1,2};                   normal wiht insealizer
            pair <int,pair<int,int>> p = {1,{2,3}};    need insealizer
            vector<pair<int,int>> vp = {{1,2},{3,4}};  pair in vector vector<pair<int,int>> vectorpair;
            *******************************************************
            loop to iterater through pair
            for(pair<int,int> p:vp){    
                cout<<p.first<<" "<<p.second<<endl; to show the pair first and secound value
            }
            *******************************************************
            for (int i = 0; i < 3; i++) {
                cout<<vp[i].first<<" "<<vp[i].second; to show the pair first and secound value
                cout<<endl;
            }
            *******************************************************
                vp.push_back({4,4}); // it will acceume that we will first make the pair then it will push back it in the vector
                vp.emplace_back(5,5);// it will in-place the object or automaticaly create teh pair and then push it in the back of vector

            &&&&&&&&&&&&&&&&&&&&&&&
            non sequancial container
            *stack* lifo last in fist outf
            it store the value in the stack form it add the value in the last and first remove the last value 
            (top) --> it is use to show the top value of the stack or last in
            (swap) --> it will swap the value with each other  
                stack<int> p;
                stack pd;
                p.push(1); ===  | 3 | --> last in and first out 
                p.push(2); ===  | 2 | 
                p.push(3); ===  | 1 |
                                -----
        
                    """""""""""""""WILL show the value of the stack container"""""""""""""""""""
                    
                                                while (!s.empty())
                                                {
                                                    cout<<" | "<<s.top()<<" | ";
                                                    s.pop();
                                                    cout<<endl;
                                                }
                                                cout<<"--------";
                |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
                *queue fifo first in first out
                     queue<int> q;
                        q.push(1); ==   -------------
                        q.push(2); ==   | 1 | 2 | 3 | it will add the vlue like {1} - {1,2} - {1,2,3} and remove {1,2,3} - {2,3} - {3}
                        q.push(3); ==   -------------
                        queue<int> q2;
                        q2.push(11); == ----------------
                        q2.push(22); == | 11 | 22 | 33 |  swap it q = {11,22,33} q2 = {1,2,3}
                        q2.push(33); == ----------------
                        q.swap(q2);


                        while(!q.empty()){
                            cout<<q.front();
                            q.pop();
                        }
                                    */



    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    queue<int> q2;
    q2.push(11);
    q2.push(22);
    q2.push(33);
    q.swap(q2);


    while(!q2.empty()){
        cout<<q2.front();
        q2.pop();
    }
    









    return 0;
}