#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int houses, total_tasks, tick=0, prev;
    cin >> houses >> total_tasks;
    vector<long long int> tasks;
    for(long long int task=0; task<total_tasks; task++)
    {
        long long int number;
        cin >> number;
        if(task==0)
        {
            prev = number;
            tasks.push_back(prev);
        }
        else
        {
            if(prev != number)
            {
                prev = number;
                tasks.push_back(prev);
            }
        }
    }
    prev=1;
    for(auto next : tasks)
    {
        if(prev == next)
            continue;
        if(prev > next)
        {
            tick += houses-(prev-next);
        }
        else
        {
            tick += next-prev;
        }
        prev = next;
    }
    /*
    // too slow bruteforce
    while(index < tasks.size())
    {
        //cout<<house+1<<" "<<tasks[index]<<endl;
        if(tasks[index] == house+1)
            index++;
        house = (house+1)%houses;
        tick++;    
    }
    */
    cout << tick << endl;
    return 0;
}