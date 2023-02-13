#include <iostream>
#include <fstream>
using namespace std;

const int MAX_LINE_COUNT = 500;

bool sortAlphabeticallyAscending(string a, string b) {
  return a < b;
}

bool sortAlphabeticallyDescending(string a, string b) {
  return a > b;
}

bool sortByLengthAscending(string a, string b) {
  return a.length() < b.length();
}

bool sortByLengthDescending(string a, string b) {
  return a.length() > b.length();
}

void swap(string &a, string &b) {
  string temp = a;
  a = b;
  b = temp;
}

void selectionSort(string arr[], int n, bool (*compare)(string, string)) {
  for (int i = 0; i < n-1; i++) {
    int minIndex = i;
    for (int j = i+1; j < n; j++) {
      if (compare(arr[j], arr[minIndex])) {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }
}

int main() {
  string lines[MAX_LINE_COUNT];
  int count = 0;

  ifstream file("str.txt");
  if (file.is_open()) {
    while (count < MAX_LINE_COUNT && getline(file, lines[count])) {
      count++;
    }
    file.close();
  }
  else {
    cout << "Unable to open file" << endl;
  }

  int choice;
  cout << "1) Alphabetical Order Ascending Order" << endl;
  cout << "2) Alphabetical Order Descending Order" << endl;
  cout << "3) Ascending Order of the Length of the Strings" << endl;
  cout << "4) Descending Order of the Length of the Strings" << endl;
  cout << "Enter your choice: ";
  cin >> choice;
  switch (choice) {
    case 1:
      selectionSort(lines, count, sortAlphabeticallyAscending);
      break;
    case 2:
      selectionSort(lines, count, sortAlphabeticallyDescending);
      break;
    case 3:
      selectionSort(lines, count, sortByLengthAscending);
      break;
    case 4:
      selectionSort(lines, count, sortByLengthDescending);
      break;
    default:
      cout << "Invalid choice" << endl;
  }

  for (int i = 0; i < count; i++) {
    cout << lines[i] << endl;
  }

  return 0;
}
