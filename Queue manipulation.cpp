#include <bits/stdc++.h>
using namespace std;
struct Q {
   int f, r, capacity;
   int* q;
   Q(int c) {
      f = r= 0;
      capacity = c;
      q = new int;
   }
   ~Q() { delete[] q; }
   void Enqueue() {
       int d;
      if (capacity == r) { //check if queue is empty or not
         printf("\nQueue is full\n");
         return;
      } else {
          cout<<"Element: ";
         cin>>d;
         q[r] = d; //insert data
         r++; //update rear
      }
      return;
   }
   void Dequeue() {
      if (f == r) {
         printf("\nQueue is empty\n");
         return;
      } else {
         for (int i = 0; i < r - 1; i++) {
            q[i] = q[i + 1];
         }
         r--; //update rear
      }
      return;
   }
   void Display()  {
      int i;
      if (f == r) {
         printf("\nQueue is Empty\n");
         return;
      }
      for (i = f; i < r; i++) {
         printf(" %d <-- ", q[i]);
      }
      cout<<endl;
      return;
   }
};
int main() {
   int ch,k,n;
   cout<<"Capacity: ";
   cin>>n;
   Q myqueue(n);
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : ";
      cin>>ch;
      switch (ch) {
         case 1: 
         myqueue.Enqueue();
         break;
         case 2: myqueue.Dequeue();
         break;
         case 3: myqueue.Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
