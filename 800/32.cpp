#include <bits/stdc++.h>
using namespace std;

int main()
{

    int y, w;
    cin >> y >> w;

    int temp = max(y, w);
    int chances=6-temp;
    //as one of y or w inluded so
    chances++;

    //now, we just need to reduce this form

    int d=6;

    if(chances==6){
        chances/=6;
        d/=6;
    }
    else if(chances==4){
        chances/=2;
        d/=2;
    }
    else if(chances==3){
        chances/=3;
        d/=3;
    }
    else if(chances==2){
        chances/=2;
        d/=2;
    }

  cout<<chances<<"/"<<d<<endl;
  
    return 0;
}