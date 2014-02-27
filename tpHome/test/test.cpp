#include <iostream>
#include<list>
using namespace std;

int main()
{
  list<char*> lst;
  char* q;
  char a='o';
  q=&a;

  for(int i=0; i<5; i++)
      lst.push_back(q);

  cout << "Taille de la liste = " << lst.size() << endl;

  cout << "Contenu de la liste: ";
  list<char*>::iterator p = lst.begin();
  while(p != lst.end()) {
      cout << (*p)<<endl;
    p++;
  }

  return 0;
}
