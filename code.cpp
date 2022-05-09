/* This program includes three different algorith
    1. First Come First Serve
    2. Shortest Job First
    3. Priority Schedulling
    
    Just uncomment the code the required algorithm and use it. I hope you like it. :)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int BT[5]={2, 3, 1, 5, 4}, CT[5] = {2, 4, 6, 1, 5}, AT[5] = {0};
    int tat_sum = 0, wt_sum = 0, pos_bt, tat[5], wt[5], avg_tat, avg_wt;
    
    // // CALCULATING TAT AND WT
    // cout << "First Come First Serve\n";          // <----- FIRST COME FIRST SERVE STARTS HERE
    // for(int i = 0;i < 5;i++){
    //     tat[i] = CT[i] - AT[i];
    //     wt[i] = tat[i] - BT[i];
    //     tat_sum += tat[i];
    //     wt_sum += wt[i];
    // }
    // cout << "\t#P\tAT\tBT\tCT\tTAT\tWT\n";
    // for (int i = 0;i<5;i++){
    //     cout << "\tP"<<i<<"\t"<<AT[i]<<"\t"<<BT[i]<<"\t"<<CT[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<endl; 
    // }
    // cout <<"\n\n\tAverage TAT = "<<(float)tat_sum/5;
    // cout <<"\n\tAverage WT = "<<(float)wt_sum/5;
    
    // cout <<"Shortest Job First"<<endl;           // <----- SHORTEST JOB FIRST STARTS HERE
    // // SHORTING BT
    // for (int i = 0;i < 5;i++){
    //     pos_bt = i;
    //     for (int j=i+1;j<5;j++){
    //         if(BT[j] < BT[pos_bt])
    //             pos_bt = j;
    //     }
    //     int temp = 0;
    //     temp = BT[i];
    //     BT[i] = BT[pos_bt];
    //     BT[pos_bt] = temp;
        
    //     temp = CT[i];
    //     CT[i] = CT[pos_bt];
    //     CT[pos_bt] = temp;
    // }
    
    // // CALCULATING TAT AND WT
    // for(int i = 0;i < 5;i++){
    //     tat[i] = CT[i] - AT[i];
    //     wt[i] = tat[i] - BT[i];
    //     tat_sum += tat[i];
    //     wt_sum += wt[i];
    // }
    // cout << "\t#P\tAT\tBT\tCT\tTAT\tWT\n";
    // for (int i = 0;i<5;i++){
    //     cout << "\tP"<<i<<"\t"<<AT[i]<<"\t"<<BT[i]<<"\t"<<CT[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<endl; 
    // }
    // cout <<"\n\n\tAverage TAT = "<<(float)tat_sum/5;
    // cout <<"\n\tAverage WT = "<<(float)wt_sum/5;
    
    int priority[5] = {3, 2, 5, 1, 4};
    cout << "\tPriority Scheduling"<<endl;       // <------ PRIORITY SCHEDULING STARTS HERE
    int index = 0;
  
    // FINDING THE MAXIMUM PRIORITY ROW
    for(int i = 0;i < 5;i++){
        for(int j = 0;j<5;j++){
            if(priority[index] > priority[j])
                index = j;
        }
        // CALCULATING TAT AND WT ACCODIONG TO PRIORITY
        priority[index] = INT_MAX;
        tat[index] = CT[index] - AT[index];
        wt[index] = tat[index] - BT[index];
        tat_sum += tat[index];
        wt_sum += wt[index];
    }
    cout << "\t#P\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0;i<5;i++){
        cout << "\tP"<<i<<"\t"<<AT[i]<<"\t"<<BT[i]<<"\t"<<CT[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<endl; 
    }
    cout <<"\n\n\tAverage TAT = "<<(float)tat_sum/5;
    cout <<"\n\tAverage WT = "<<(float)wt_sum/5;
    return 0;
}
