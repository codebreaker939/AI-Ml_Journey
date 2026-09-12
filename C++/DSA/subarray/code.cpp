// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     int n =5;
//     int arr[5]= {1,2,3,4,5};
//     int max_sum = INT_MIN;
//     // for (int st=0;st<n;st++){
//     //     for(int end = st;end<n;end++){
//     //         for(int i=st; i<=end;i++){
//     //             cout<<arr[i];
//     //         }
//     //         cout<<" ";
//     //     }
//     //     cout<<endl;
//     // }
// //  max sum of subaaray
//     for(int st = 0; st<n; st++){
//         int currSum=0;
//         for(int end= st; end<n; end++){
//             currSum+= arr[end];
//             max_sum = max(currSum,max_sum);
//         }
//     }
//     cout<<max_sum;
//     return 0;
// }


// max sum with kadande's algo

#include <iostream>
#include <vector>