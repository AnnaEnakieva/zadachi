#include <iostream>
#include <algorithm>
using namespace std;
int min(int x, int y, int z)
{
  int s = x;
  if (y < s) s=y;
  if(z < s) s=z;
  return s;
}
int main ()
{
cin >> a >> b;
  cout << "max(a,b)==" << max(a,b) << endl;
  return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
int max(int x, int y, int z)
{
  int s = x;
  if (y > s) s=y;
  if(z > s) s=z;
  return s;
}

int main ()
{
cin >> a >> b;
  cout << "min(a,b)==" << min(a,b) << endl;
  return 0;
}


#include <iostream>
#include <algorithm>
using namespace std;
int avg(int x, int y, int z)
{
  int s;
  s=(x+y+z)/3;
  return s;
}
int main ()
{
cin >> a >> b;
  cout << "avg(a,b)==" << avg(a,b) << endl;
  return 0;
}


#include <iostream>
#include <algorithm>
using namespace std;
int med(int x, int y, int z)
{
  int s;
  s=(x+y+z)- max(x,y,z)-min(x,y,z);
  return s;  
}
int main ()
{
cin >> a >> b;
  cout << "med(a,b)==" << med(a,b) << endl;
  return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
int swap(int x, int y, int z)
{
  int s=x;
  x=y;
  y=z;
  z=s;
 
}
int main ()
{
cin >> a >> b >> c;
  cout << "swap(a,b)==" << swap(a,b) << endl;
  return 0;
}

