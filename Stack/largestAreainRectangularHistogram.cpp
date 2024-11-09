#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>

using namespace std;

// this is an Leet code problem 84: Largets Area in Rectangular Histogram

vector <int> previousSmallestElementIndex (vector <int> input){
    stack <int> s;
    s.push(-1);
    vector <int> ans(input.size());

    for(int i =0; i<input.size();i++){

        int curr = input[i];

        while(s.top() != -1 && input[s.top()] >= curr){
            s.pop();
        }

        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}

vector <int> nextSmallestElementIndex (vector <int> input){
    stack <int> s;
    s.push(-1);
    vector <int> ans(input.size());

    for(int i = input.size()-1; i>=0 ; i--){

        int curr = input[i];

        while (s.top() != -1 && input[s.top()]>= curr){
            s.pop();
        }

        ans[i] = s.top();

        s.push(i);
    }

    return ans;
}



int largestAreainHistogram (vector <int> heights){

    vector <int> prev = previousSmallestElementIndex(heights);
    cout<<"Prev : "<<endl;

    for(auto p : prev){
        cout<<p <<" ";
    }

    cout<<endl<<endl;

    vector <int> next = nextSmallestElementIndex(heights);
     cout<<"Next : "<<endl;

    for(auto n : next){
        cout<<n <<" ";
    }

    cout<<endl<<endl;


    int size = heights.size(),maxArea = INT_MIN;


    for (int i =0 ; i<size; i++){

        if(next[i] == -1){
            next[i]= size;
        }

        int length = heights[i];
        int width = next[i] - prev[i] -1;

        int area = length * width;

        maxArea = max (area , maxArea);


    }


    return maxArea;

}



int main(){

    vector <int> heights = {2,1,5,6,2,3};
    for (auto z: heights){
        cout<<z<< " ";

    }


int ans = largestAreainHistogram(heights);

cout<<"Largert Area : "<<ans<<" hitogram"<<endl;

return 0;
}