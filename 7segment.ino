//A B C D E F G 
//1 1 1 1 1 1 0  Number 0
//0 1 1 0 0 0 0  Number 1
//1 1 0 1 1 0 1  Number 2
//1 1 1 1 0 0 1  Number 3
//0 1 1 0 0 1 1  Number 4
//1 0 1 1 0 1 1  Number 5
//1 0 1 1 1 1 1  Number 6
//1 1 1 0 0 0 0  Number 7
//1 1 1 1 1 1 1  Number 8
//1 1 1 1 0 1 1  Number 9
const byte Display[8]={2,3,4,5,6,7,8,9};
int array[10][8]={
  {1,1,1,1,1,1,0,1},{0,1,1,0,0,0,0,0},{1,1,0,1,1,0,1,1},
  {1,1,1,1,0,0,1,0},{0,1,1,0,0,1,1,1},{1,0,1,1,0,1,1,0},
  {1,0,1,1,1,1,1,1},{1,1,1,0,0,0,0,0},{1,1,1,1,1,1,1,1},
{1,1,1,1,0,1,1,0}};
void setup()
{
  for(int i=0;i<8;i++)
  pinMode(Display[i], OUTPUT);
}
void loop() {  
  for (int i=0;i<10;i++){
  for(int x=0;x<8;x++){digitalWrite(Display[x],array[i][x]);}
  delay(2000);}
}