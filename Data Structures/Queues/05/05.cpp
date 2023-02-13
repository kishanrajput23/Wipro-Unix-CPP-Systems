/*
Please Stand in a QUEUE
You are provided with a data file (as shown below). The data file has 2 fields [name] and [queue details] which are single space seperated

You have 3 queues represented as below 
 Food Queue - F
 Movie Queue - M
 Bus Queue - B

Write a program to make people stand in the correct queue. 
Also display names of people standing in each of the queues as you dequeue them. 

data.txt
 [name] [queue details]
 Chakradhar F
 Poornima M
 Rahul B
 Raj_Ranjan B
 Saikat M
 Saran F
 Saravanakumar M
 Shalini B
 Shanju M
 Shashank F
 Shashi_Raj M
 Shiwani_Kumari F
 Sivakami M
 Soundharya F
 Sri_Hari M
 Sumanth B
 Sumit M

 */

#include <iostream>
#include <fstream>
#include <string>
#include <queue>

using namespace std;

int main(int argc, char* argv[]) {

  if (argc < 2) {
    cerr << "Please provide the data file name as a command line argument." << endl;
    return 1;
  }


  ifstream data_file(argv[1]);
  if (!data_file.is_open()) {
    cerr << "Failed to open the data file." << endl;
    return 1;
  }


  queue<string> food_queue;
  queue<string> movie_queue;
  queue<string> bus_queue;


  string name;
  char queue_details;
  while (data_file >> name >> queue_details) {
    switch (queue_details) {
      case 'F':
        food_queue.push(name);
        break;
      case 'M':
        movie_queue.push(name);
        break;
      case 'B':
        bus_queue.push(name);
        break;
      default:
        cerr << "Invalid queue details for " << name << endl;
    }
  }


  data_file.close();


  cout << "People standing in the Food Queue: " << endl;
  while (!food_queue.empty()) {
    cout << food_queue.front() << endl;
    food_queue.pop();
  }

  cout << "People standing in the Movie Queue: " << endl;
  while (!movie_queue.empty()) {
    cout << movie_queue.front() << endl;
    movie_queue.pop();
  }

  cout << "People standing in the Bus Queue: " << endl;
  while (!bus_queue.empty()) {
    cout << bus_queue.front() << endl;
    bus_queue.pop();
  }

  return 0;
}
