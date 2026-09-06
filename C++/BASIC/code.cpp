// #include <iostream>
// using namespace std;
// int main() {
//   int a,b;
//   cout<<"give your nmuber : ";
//   cin >> a;
//   cout<<"give your nmuber : ";
//   cin >> b;
//   int sum = a+b;
//   cout<<"sum is "<<sum<<"\n";
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){

//     int a =45;
//     if (a>100){
//         cout<<"yes it is"<<endl;
//     }else{
//         cout<<"sorry no way";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){

//     int age;
//     cout<<"enter your age\n";
//     cin>>age;
//     if (age>=18){
//         cout<<"can vote "<<age<<endl;
//     }else{
//         cout<<"minor\n";
//     }


//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int mks;
//     cout<<"enter mks";
//     cin>> mks;

//     if(mks>=90){
//         cout<<"topper\n";
//     } else if(mks>=50 && mks<90){
//         cout<<"avg\n";
//     } else if(mks>=20 && mks<50){
//         cout<<"my bad\n";
//     } else{
//         cout<<"sorry\n";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"enter char";
//     cin>> ch;

//     if(ch >= 'A' && ch <='Z'){
//         cout<<"UPPER CASE\n";
//     }else{
//         cout<<"LOWERCASE\n";
//     }
//     return 0;
// }

// approach 2
//  #include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"enter char";
//     cin>> ch;

//     if(ch >= 65 && ch <=90){
//         cout<<"UPPER CASE\n";
//     }else{
//         cout<<"LOWERCASE\n";
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int count =1;
//     while(count<=10){ 
//         cout<<count<< " " ;
//         count++;
//     }
   
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"give no";
//     cin>> n;
//    int sum =0;
//    for(int i=1;i<=n;i++){
//     sum+=i;
//         if (i==3)
//         break;
//     }
//    cout<<sum;


   
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n=50;
//     int oddSum =0;
//     int evenSum=0;
//     for(int i=1;i<=n;i++){
//         if ( i%2!=0){
//             oddSum+= i;
//         }else{
//             evenSum+= i;
//         }
//     }
//     cout<<"even"<<evenSum<<endl;
//     cout<<"odd"<<oddSum<<endl;


   
//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
    int n =10;
    for(int i=1;i<=n;i++){
        int a  =10;
        for(int j=1; j<=a;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}