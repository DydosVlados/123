#include <iostream>
#include <fstream>
 using namespace std;


 int main(){
 int n;
   cout«"Enter n: ";
   cin»n;
   ofstream file;
 file.open("c:\\Qt\\Projects\\1\\example.txt");
   for (int i=1;i<=n;i++) {
   for (int j=1;j<=i;j++) {
 cout«0;
   file «"0";
 }
   cout«endl;
   file «endl;
 }
 file.close();
   getchar();
 getchar();
   return 0;
}





 #include <iostream>
 #include <fstream>
 #include <iomanip>
 #include <math.h>
  using namespace std;


int main(){
int n;
   cout«"Enter n: ";
   cin»n;
   ofstream file;
   file.open("c:\\Qt\\Projects\\1\\example.txt");
   for (int i=1;i<=n;i++) {
   for (int j=1;j<=i;j++) {
cout«0;
   file «"0";
}
cout«endl;
file «endl;
}
   file.open("c:\\Qt\\Projects\\1\\example2.txt");
   double shag,npredel,vpredel;
   cout«"Enter (npredel and vpredel): ";
   cin»npredel»vpredel;
   cout«"Enter shag: ";
   cin»shag;
   cout«"\tx\t\ty"«endl;
   cout.precision(5);

for (double x=npredel;x<=vpredel;x+=shag) {
double y=pow((2+x),2)+3*x;
   cout«"\t"«x«"\t\t"«y«endl;
   file«"\tx\t\ty"«endl;
   file«"\t"«x«"\t\t"«y«endl;
}
file.close();
   getchar();
   getchar();

return 0;


#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

using namespace std;
int main(){
   ofstream file;
   file.open("c:\\Qt\\Projects\\1\\example4.txt");
int ch;
double x=2;
double x;
int chislitel=1;
   cout«"Enter Ch: ";
   cin»ch;
   cout«"Enter x: ";
   cin»x;
int znamenatel=7;//znamenatel - chislo vozle x
double l=(chislitel/(znamenatel*x))*(-1);
while(znamenatel<ch){
   chislitel++;
   znamenatel++;
if(chislitel%2==0){
   l=l+(chislitel/(znamenatel*x));
}
else{
l=l+(chislitel/(znamenatel*x))*(-1);
}
}
   cout«l«endl;
   file«l;
   file.close();

return 0;
}



#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

   using namespace std;

int main(){
   ofstream file;
   file.open("c:\\Qt\\Projects\\1\\example3.txt");
   file«"\tx\t\ty"«endl;
double shag,npredel,vpredel;
   cout«"Enter (npredel and vpredel): ";
   cin»npredel»vpredel;
   cout«"Enter shag: ";
   cin»shag;
   cout«"\tx\t\ty"«endl;
   cout.precision(5);
for (double x=npredel;x<=vpredel;x+=shag) {
double y=sqrt(5*x+4*(pow(x,3)))+4*x+3/sin(9*x+71);
   cout«"\t"«x«"\t\t"«y«endl;
   file«"\t"«x«"\t\t"«y«endl;
   file.open("c:\\Qt\\Projects\\1\\example4.txt");
double x,y;
   cout«"Enter x: ";
   cin»x;
if(x>2){
   y=2*x-15;
   cout«y;
   file«y;
}
if(x==2.0){
   y=5;
   cout«y;
   file«y;
}
if(x<2){
   y=3*fabs(x-1)-8;
   cout«y;
   file«y;
}
file.close();

return 0;
}



#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

using namespace std;
int main(){
   ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
double x,y;
    cout«"Enter x: ";
    cin»x;
if(x>2){
    y=2*x-15;
    cout«y;
    file«y;
}
if(x==2.0){
    y=5;
    cout«y;
    file«y;
}
if(x<2){
    y=3*fabs(x-1)-8;
    cout«y;
    file«y;
}
double d,stsharov;
int kolvosharov;
cout«"Vvedite vnutrennii diametr vnutrennego shara(sm), tolsh'inu stenok sharov(mm), kolichestvo sharov: "«endl;
cin»d»stsharov»kolvosharov;
double V=(4/3*3.14*pow((d+kolvosharov*stsharov/10),3))/1000;
cout«V;
file«V;



file.close();


return 0;
}
