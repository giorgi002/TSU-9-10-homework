// #include <iostream>
// #include <array>
// #include <ctime>
// #include <random>
// using namespace std;
// const int N =20;
// void fill(array<int, N> &x){
//     srand(time(NULL));
//     for(int i=0; i < N;i++){
//         x[i]= rand()% (61)+20;
//     }
// }
// void print(const array <int, N> &x){
//     for(const auto &m : x){
//         cout << m << endl;
//     }
//     cout << endl;
// }
// void change(array<int,N> &x){
//     for(int i=0; i < N; i+=2){
//         x[i]*=3;
//     }
// }
// int main(){
//     array <int, N> arr;
//     fill(arr);
//     cout << "The array is\n";
//     print(arr);
//     change(arr);
//     cout << "changed "<< endl;
//     print(arr);
// }


// second task 👇(1)
// #include <iostream>
// using namespace std;
// int main(){
//     int x =15, y =34;
//     int *k, *p;
//     k=&y;
//     p=k;
//     x=*p;
//     cout << x << endl;
// }



// second task 👇(2)
// #include <iostream>
// using namespace std;
// int main(){
//     double x =7.86, y =3.37, *k,*p;
//     k = &x;
//     p=&y;
//     y= *k;
//     cout << *p << endl;
// }



// third task 👇
// #include <iostream>
// using namespace std;
// void change(double *x, double *y){
//     double t;
//     t=*x;
//     *x=*y;
//     *y=t;
// }
// int main(){
//     double a,b,c;
//     cout << "შემოიტანეთ 3 მთელი რიცხვი \n";
//     cin >> a >> b >> c;
//     if(a > b ) change(&a, &b);
//     if(b > c ) change(&b, &c);
//     if(a > b ) change(&a, &b);
//     cout << "ზრდადობით დალაგების შემდეგ: \n";
//     cout  << a<<" "<< b<< " "<< c << endl;
// }



// fourth task 👇
// #include <iostream>
// using namespace std;
// void maxmin(double *x, double *y){
//     if( *x > *y){
//         double temp;
//         temp=*x;
//         *x=*y;
//         *y= temp;
//     }
// }
// int main(){
//     double a, b, c;
// 	cout << "Enter 3 real numbers ";
// 	cin >> a >> b >> c;
// 	maxmin(&a, &b);
// 	maxmin(&a, &c);
// 	maxmin(&b, &c);
// 	cout << "Sorted reals are " << endl
// 	     << "a = " << a << " b = " << b 
// 	     << " c = " << c << endl;
// }



// fifth task 👇
// #include <iostream>
// using namespace std;
// void change( char *x, char *y){
//     char temp= *x;
//     *x=*y;
//     *y= temp;
// }
// int main(){
//     char a,b;
//     cout << "შემოიტანეთ ორი სიმბოლო\n";
//     cin >>a >> b;
//     cout <<"თქვენ მიერ შემოტანილი რიცხვებია "<< a<< " " <<b << endl;
//     change(&a,&b);
//     cout << a<<" "<< b << endl;
// }



// sixth task 👇
// #include <iostream>
// #include <string>
// using namespace std;
// void change(string *x, string *y){
//     if(*x > *y){
//         string temp =*x;
//         *x=*y;
//         *y =temp;
//     }
// }
// int main(){
//     string a, b, c;
//     cout << "შემოიტანეთ 3 ტექსტი \n";
//     cin >> a >> b >> c;
//     cout <<"თქვენ მიერ შემოტანილი ტექსტებია "<< a<< " " <<b<<" "<<c << endl;
//     cout << a<< b << c;
//     change(&a, &b);
//     change(&b, &c);
//     change(&a, &b);
//     cout << "ზრდადობით დალაგებული სტრინგები: "<< a << " "<< b <<" "<< c << endl;
// }



// seventh task 👇(1)
// #include <iostream>
// using namespace std;
// int sum(int x, int y, int *p){
//     *p = x*y;
//     return x+y;
// }
// int main(){
//     int a,b,jami,namravli;
//     cout << "შემოიტანეთ 2 მთელი რიცხვი \n";
//     cin >> a >> b;
//     jami=sum(a,b,&namravli);
//     cout << "ამ ორი რიცხვის ჯამი არის "<< jami<< endl
//          << "და ნამრავლია "<< namravli << endl; 
// }



// seventh task 👇(2)
// #include <iostream>
// #include <cmath>
// using namespace std;
// int func(int x, int y,int z, int *per){
//     *per = x + y + z;
//     int s = (x+y+z)/2.;
//     int partobi = sqrt(s*(s-x)*(s-y)*(s-z));
//     return partobi;
// }
// int main(){
//     int a,b,c,jami,namravli ;
//     cout << "შემოიტანეთ 3 მთელი რიცხვი \n";
//     cin >> a>> b>>c;
//     namravli =func(a,b,c,&jami);
//     cout << "ამ სამკუთხედის პერიმეტრი არის "<< jami<< endl
//          << "და ფართობია "<< namravli << endl;
// }



// seventh task 👇(3)
// #include <iostream>
// #include <cmath>
// using namespace std;
// int func(int x,int h){
//     return (x*h)/2.;
// }
// int main(){
//     int a,b,partobi;
//     cout << "შემოიტანეთ 2 მთელი რიცხვი \n";
//     cin >>a >>b;
//     partobi = func(a,b);
//     cout << "ამ სამკუთხედის ფართობი არის "<< partobi<< endl;
// }



// eight task 👇
// #include <iostream>
// #include <fstream>
// #include <vector>
// using namespace std;
// void fill(vector <string> * x){
//     ifstream fin("names.txt");
//     string n;
//     while(fin >> n){
//         (*x).push_back(n);
//     }
// }
// void print ( const vector <string> *x){
//     cout << "ვექტორის წევრებია:\n";
//     for(int i =0; i < x->size(); i++){
//         cout << (*x)[i]<< " ";
//     }
//     cout << endl;
// }
// int find( vector <string> *x, string n, string k){
//     int c =0;
//     for(int i=0; i <x->size(); i++){
//         if((*x)[i]==n){
//             (*x)[i]=k;
//             c++;
//         }
//     }
//     return c;
// }
// int main(){
//     vector <string>str;
//     fill(&str);
//     print(&str);
//     int count = find(&str, "Gio", "Giorgi");
//     if(count) {
//         cout << "The name Gio is changed "<< count << " times";
//         print(&str);
//         ofstream write("names.txt");
//         for(const auto m :str){
//             write << m << endl;
//         }
//     }
//     else{
//         cout << "The name Gio is not found \n";
//     }
// }



// task nine 👇
// #include <iostream>
// #include <vector>
// #include <ctime>
// #include <cmath>
// using namespace std;
// const int N =10;
// void fill( vector <int> *x){
//     srand(time(NULL));
//     for(int i =0; i <N; i++){
//         x->push_back(rand()%41+10); //10 დან 50 ის შუალედიდან ავიღოთ რიცხვები
//     }
// }
// int find(vector <int> *x,int *ind){
//     int max =x->at(0);
//     *ind=0;
//     for(int i =1;i<x->size(); i++){                 
//         if(x->at(i) > max){
//             max = x->at(i);
//             *ind=i;
//         }
//     }
//     return max;
// }
// void cvladi(vector <int> *x,int *sum,int *sashualo, int *sashualogeom){
//     *sashualo=0;
//     int namravli =1;
//     for (int i =0; i < x->size(); i++){
//         *sum+= x->at(i);
//         namravli*=x->at(i);
//     }
//     *sashualo= *sum/x->size();
//     *sashualogeom= pow(namravli, 1./10);
// }
// void print(const vector <int> *x){
//     cout <<"ვექტორის ელემენტებია \n";
//     for(int i =0; i < x->size(); i++){
//         cout << x->at(i)<< endl;
//     }
// }
// int main(){
//     vector <int> vec;
//     fill(&vec);
//     print(&vec);
//     int sum, avarage,sashualo,max,maxindex;
//     max =find(&vec,&maxindex);
//     cvladi(&vec, &sum, &avarage, & sashualo);
//     cout<< "ამ რიცხვებში უდიდესია "<< max << " ინდექსით "<< ++maxindex<< endl;
//     cout << "ამ რიცხვები ჯამი არის "<<sum << endl;
//     cout <<"ამ რიცხვების საშუალო არის "<< avarage<<endl;
//     cout <<"ამ რიცხვების საშუალო გეომეტრიული არის "<< sashualo << endl;
// }



// task ten👇(1)
// #include <iostream>
// #include <array>
// #include <ctime>
// using namespace std;
// int const N =10;
// void fill(array<int,N> * arr){
//     srand(time(NULL));
//     for(int i=0; i< N;i++){
//         arr->at(i)=rand()% 36 + 15; //15 იდან 50 ამდე შუალედიდან 
//     }
// }
// int func(array <int,N> *arr, int *a){
//     int firstindex=arr->size();
//     for(int i=0; i <N;i++){
//         if(arr->at(i) ==*a){
//             firstindex=i;
//             cout << "ასეთი ელემენტი არის მასივში და მისი ინდექსია "<< firstindex+1<< endl;
//             return 0;
//         }
//     }
//     if(firstindex ==arr->size()){
//             cout <<"ასეთ ელემენტი არ არის მასივში,მასივის ზომაა "<<arr->size() << endl;
//     }
//     return firstindex;
// }
// int main(){
//     array<int, N >arr;
//     fill(&arr);
//     int b; cout << "შემოიტანეთ რიცხვი "<< endl;
//     cin >> b;
//     cout << "array-ის ელემენტებია "<< endl;
//     for(auto m : arr){
//         cout << m << endl;
//     }
//     func(&arr, &b);
// }



// task eleven 👇
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// const char *a = "exam";
// int func(){
//     ifstream fin("words.in");
//     string word;
//     int counter =0;
//     int b=0;
//     while(fin >>word){
//         counter++;
//         if(word == a){
//             cout << "ეს სიტყვა არის ფაილში და მისი რიგითი ნომერია "<< counter << endl;
//             b++;
//         } 
//     }
//     if(b==0){
//         cout << -1<< endl;
//     }
// }
// int main(){
//     func();
// }



// task twelve 👇
// #include <iostream>
// using namespace std;
// double change(double *a,double*b){
//     if(*a > *b){
//         double temp;
//         temp=*a;
//         *a=*b;
//         *b=temp;
//         cout<<"ადგილების გაცვლის შემდეგ " << *a <<" "<< *b<< endl;;
//     }
// }
// int main(){
//     double a,b;
//     cout << "შემოიტანეთ ორი ნამდვილი რიცხვი \n";
//     cin >> a >>b;
//     cout << "თქვენ მიერ შემოტანილი რიცხვებია "<< a<< " და" << b<< endl;
//     change(&a,&b);
// }



// task thirteen 👇
// #include <iostream>
// using namespace std;
// void func(double *a, double *b, double *c){
//     if(*a < *b) swap(*a, *b);
//     if(*b < *c) swap(*b, *c);
//     if(*a < *b) swap(*a, *b);
// }
// int main(){
//     double num1,num2,num3;
//     cout << "შემოიტანეთ სამი რიცხვი: ";
//     cin >> num1 >> num2 >> num3;
//     cout << "შემოტანილი რიცხვები: " << num1 << ", " << num2 << ", " << num3 << endl;
//     func(&num1, &num2,&num3);
//     cout << "დალაგებული რიცხვები კლებადობით: " << num1 << ", " << num2 << ", " << num3 << endl;
// }



// // task fourteen 👇
// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>
// using namespace std;
// void fill(vector <string> *x){
//     ifstream fin("data.txt");
//     string n;
//     while(fin >> n){
//         x->push_back(n);
//     }
//     fin.close();
// }
// void print( const vector <string> *x){
//     for(int i =0; i<x->size();i++){
//         cout << x->at(i)<< " ";
//     }
//     cout << endl;
// }
// int main(){
//     vector <string> words;
//     words.push_back("Hello");
//     words.push_back("Bye");
//     fill(&words);
//     cout << "ვექტორში არსებული სიტყვებია \n";
//     print(&words);
// }



// task fifteen 👇
// #include <iostream>
// #include <fstream>
// #include <string>
// #include <vector>
// using namespace std;
// void fill(vector <string> &x){
//     ifstream fin("names.txt");
//     string n;
//     while(fin >> n){
//         x.push_back(n);
//     }
// }
// void print( vector <string> &x){
//     for(auto &m :x){
//         cout << m << endl;
//     }
// }
// int change(vector <string> &x, string a, string b){
//     int c=0;
//     for(auto & m : x){
//         if(m==a){
//             m =b;
//             c++;
//         }
//     }
//     return c;
// }
// int main(){
//     vector <string> str;
//     fill(str);
//     print(str);
//     int count =0;
//     count = change( str, "Gio", "Giorgi");
//     if(count){
//         cout << "The name Gio is changed "<< count << " times";
//         print(str);
//         ofstream write("names.txt");
//         for(const auto m :str){
//             write << m << endl;
//         }
//     }
//     else{
//         cout << "The name Gio is not found \n";
//     } 
// }



// task sixteen 👇
// #include <iostream>
// #include <vector>
// #include <ctime>
// using namespace std;
// void fill(vector <double> &x){
//     srand(time(NULL));
//     for(int i=0; i < 55; i++){
//         x.push_back(rand() % 46 + 15);
//     }
// }
// double find(vector <double> &x){
//     double maxvalue=20;
//     int maxindex =-1;
//     for(int i =0; i < 55; i++){
//         if(x.at(i)> maxvalue){
//             maxvalue = x[i];
//             maxindex = i;
//         }
//     }
//     return maxindex;
// }
// void print(vector <double> &x){
//     cout << "Vector elements:" << endl;
//     for(auto &m : x){
//         cout << m << endl;
//     }
//     cout << endl;
// }
// int main(){
//     vector <double> nums;
//     fill(nums);
//     print(nums);
//     int  maxindex = find(nums);
//     if (maxindex != -1) {
//         cout << "The largest element greater than 20 is at index: " << maxindex
//              << ", value: " << nums[maxindex] << endl;
//     } else {
//         cout << "No elements greater than 20 found." << endl;
//     }
// }



// task seventeen 👇
// #include <iostream>
// #include <array>
// #include <fstream>
// #include <cmath>
// using namespace std;
// const int N =30;
// void fill(array <int,N> &x){
//     ifstream fin("info.in");
//     for(int i =0; i < N; i++){
//         fin >> x[i];
//     }
// }
// double find(array <int, N> &x){
//     double namravli=1;
//     int counter;
//     for(auto &m : x){
//         if(m %4==0){
//             counter++;
//             namravli *=m;
//         }
//     }
//     return pow(namravli, 1.0/counter);
// }
// int findmin(array <int,N> &x){
//     int min  =x[0];
//     int max = x[0];
//     for(int i =1; i<N;i++){
//         if(x[i] <min) min=x[i];
//         if(x[i] > max) max= x[i];
//     }
//     return min+max;
// }
// int main(){
//     array <int, N> arr;
//     fill(arr);
//     double geomet = find(arr);
//     cout << "გეომეტრიული საშუალო ამ რიცხვების არის "<< geomet<< endl;
//     int sum=findmin(arr);
//     cout << "უდიდესისა და უმცირესი რიცხვების ჯამია "<< sum << endl;
// }


