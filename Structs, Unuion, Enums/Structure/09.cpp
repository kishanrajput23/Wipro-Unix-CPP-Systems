//Structures HandsOn project 9

1) #pragma pack(1)
struct data
{
  char c;
  int x;
};

output = Size of struct is : 5

2) #pragma pack(1)
struct data
{
  char arr[10];
  int x;
};

output = Size of struct is : 14

3) #pragma pack(1)
struct data
{
  char arr[10];
  long int x;
};

output = Size of struct is : 14

4) #pragma pack(1)
struct data
{
  char arr[100];
  int x;
};

output = Size of struct is : 104