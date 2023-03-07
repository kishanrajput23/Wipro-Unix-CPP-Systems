#include<iostream>
#include<cstring>
using namespace std;

char * moveRobot(int input1,int input2, char* input3, char* input4){
      input3 = strtok(input3, "-");
      char arr[3];
      int i=0;
      while(input3 != NULL)
      { 
            arr[i++] = *input3;
            input3 = strtok(NULL, "-"); 
      }
      int x = arr[0]-'0';
      int y = arr[1]-'0';
      char d = arr[2];
      
      input4 = strtok(input4, " ");
      char inst;
      string s= "";
      while(input4 != NULL)
      { 
            inst = *input4;
            
            if (inst == 'M') {
            if ((d == 'N') && (y + 1 <= input2))
            y++;
            else if ((d == 'E') && (x + 1 <= input1))
            x++;
            else if ((d == 'S') && (y - 1 >= 0))
            y--;
            else if ((d == 'W') && (x - 1 >= 0))
            x--;
            else 
            { 
                  char* res = new char;
                  sprintf(res,"%d-%d-%c-ER",x,y,d);
                  return res;
            }
      
      } 
      else if (inst == 'R') {
            if (d == 'N')
            d = 'E';
            else if (d == 'E')
            d = 'S';
            else if (d == 'S')
            d = 'W';
            else if (d == 'W')
            d = 'N';
      } 
      else if (inst == 'L') {
            if (d == 'N')
            d = 'W';
            else if (d == 'E')
            d = 'N';
            else if (d == 'S')
            d = 'E';
            else if (d == 'W')
            d = 'S';
      }
      input4 = strtok(NULL, " ");
      }
      char* res1 = new char;
      sprintf(res1,"%d-%d-%c",x,y,d);
      return res1;
}
