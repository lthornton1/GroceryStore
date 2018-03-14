#include<iostream> //Author: LogenTHornton
#include<string>
#include<vector>

using namespace std;

int main()
{
  vector<string> list; 
  int numItems = 0;
  char input;

  do {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";


    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;



    if ((input == 'a' || input == 'A')){
      cout << "What is the item?"<<endl;
      string filler;

      cin >> filler;

      list.push_back(filler);

      numItems++;
    }
  } while (input != 'q' && input != 'Q');


  if (list.size() == 0){
    cout << "No items to buy!" << endl;
  }else{

  cout << "==ITEMS TO BUY==" <<endl;
  }



  for (int i=0; i<list.size(); i++){
    cout << i+1 <<" "<< list[i]<<endl;
  }

  return 0;
}
