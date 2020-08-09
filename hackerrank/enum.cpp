#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop{
    int start_time;
    int end_time;
    int duration;
};

struct Available_Workshops{
    int n;
    Workshop *w=new Workshop[n];
};

Available_Workshops* initialize (int start_time[], int duration[], int n){
    Available_Workshops *obj;
    obj->n=n;
    for(int i=0;i<n;i++){
        obj->w[i].start_time=start_time[i];
        obj->w[i].duration=duration[i];
        obj->w[i].end_time=start_time[i]+duration[i];
    }

    return obj;
}


int CalculateMaxWorkshops(Available_Workshops* ptr){
    int total=0,finaltotal=0;
    for(int i=0;i<ptr->n-1;i++){
        int min=i;
        for(int j=i+1;j<ptr->n;j++){
            if(ptr->w[min].start_time>ptr->w[j].start_time)
                min=j;
            if(ptr->w[min].start_time==ptr->w[j].start_time){
                if(ptr->w[min].end_time>ptr->w[j].end_time)
                    min=j;
            }
            }
        if(min!=i)
            swap(ptr->w[i],ptr->w[min]);
        }
    for(int i=0;i<ptr->n-1;i++){
        int time=ptr->w[i].end_time;
        for(int j=i+1;j<ptr->n;j++){
            if(time<=ptr->w[j].start_time){
                time=ptr->w[j].end_time;
                total++;
            }
        }
        finaltotal=max(total,finaltotal);
    }
    return finaltotal;
    }




int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
