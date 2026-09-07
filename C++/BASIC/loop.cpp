// square pattern on n = x

// #include <iostream>
// using namespace std;
// int main(){

//     int n = 5;
//     for (int i =1; i<=n;i++){
//         for(int j =1; j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){

//     int n = 5;
//     for (int i =1; i<=n;i++){
//         char ch ='A';
//         for(int j =1; j<=n;j++){
//             cout<<ch;
//             ch+=1;
//         }
//         cout<<endl;
//     }


//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){

//     int n = 3;
//     int k=1;
//     for (int i =1; i<=n;i++){
//         for(int j =1; j<=n;j++){
//             cout<<k;
//             k+=1;
//         }
//         cout<<endl;
//     }


//     return 0;
// }

// triangle pattern 
// #include <iostream>
// using namespace std;
// int main(){

//     int n = 5;
//      char ch='A';
//     for (int i =0; i<n;i++){
//         for(int j =0; j<i+1;j++){
//             cout<<(ch);
            
//         }
//         cout<<endl;
//         ch++;
//     }


//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){

//     int n = 5;
//     for (int i =0; i<n; i++){
//         for(int j =i+1; j>0; j--){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }

//     return 0;
// }

// floyd's triangle pattern 


// #include <iostream>
// using namespace std;
// int main(){

//     int n = 5;
//     int k =1;
//     for (int i=0; i<n; i++){
//         for (int j=1;j<i+1; j++ ){
//             cout<<k;
//             k++;
            
//         }
//         cout<<endl;
        
//     }


//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){

//     int n = 5;
//     char ch ='A';
//     for (int i=0; i<n; i++){
//         for (int j=1;j<i+1; j++ ){
//             cout<<ch;
//             ch++;
            
//         }
//         cout<<endl;
        
//     }


//     return 0;
// }


// inverted traingle 

// #include <iostream>
// using namespace std;
// int main(){

//     int n = 5;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//                 cout<<(i+1);
//             }
        
//         cout<<endl;
//     }


//     return 0;
// }

#include <iostream>
using namespace std;
int main(){

    int n = 5;
    char ch ='a';
    for (int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j =0; j<n-i; j++){
            cout<<ch;
        }
        cout<<endl;
    }


    return 0;
}