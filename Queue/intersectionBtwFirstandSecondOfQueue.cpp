  #include <iostream>
  #include <stack>
  #include <queue>

  using namespace std;


  void intersectionFirstandSecondHalfOfQueue(queue <int> &q){

        int n = q.size();
        int k = n/2;

        int count = 0;

        queue <int> newQ;


        // Step 1: Take first half of queue into a new Queue;
        while (!q.empty()){
            
            int temp = q.front();
            q.pop();
            count++;
            
            newQ.push(temp);
            
            if(count == k){
                break;
            }
                

        }
        
      

        while(!q.empty() && !newQ.empty()){
            int first = newQ.front();
           
            newQ.pop();

            q.push(first);


            int second = q.front();
            q.pop();

            q.push(second);
        }
        
        
        // For odd number of elements in Queue
        if(n&1){
            int oddElement = q.front();
            q.pop();
            
            q.push(oddElement);
        }


  }

  int main (){

    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);

    intersectionFirstandSecondHalfOfQueue(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


    return 0;

  }

