// // geeting size of aaray

// #include <iostream>
// using namespace std;
// int main(){

//     double mks[6]={23,344,22,22,43};
//     int size = sizeof(mks);
//     cout<<size<<endl;
//     int finalSize = sizeof(mks)/sizeof(double);
//     cout<<finalSize;



//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){

//     double mks[6]={23,344,22,22,43};
//     int size = sizeof(mks);
//     cout<<size<<endl;
//     int finalSize = sizeof(mks)/sizeof(double);
//     cout<<finalSize;



//     return 0;
// }

// get smallets in aaray 

// #include <iostream>
// using namespace std;
// int main(){

//     int nums[7]={5,15,20,1,-15,24,-24};
//     int sz = 7;
//     int smallest = 0;
//     for(int i=0; i<sz; i++){
//         if(nums[i]<smallest){
//             smallest = nums[i];
//         }
//     }
//     cout<<smallest;
//     return 0;
// }

// // get largest 

// #include <iostream>
// using namespace std;
// int main(){

//     int nums[7]={5,15,20,1,-15,24,204};
//     int sz = 7;
//     int largest = 0;
//     for(int i=0; i<sz; i++){
//         if(nums[i]>largest){
//             largest = nums[i];
//         }
//     }
//     cout<<largest;
//     return 0;
// }

// // --> approach 2 via min max function 
// #include <iostream>
// using namespace std;
// int main(){

//     int nums[7]={5,15,20,1,-15,24,-24};
//     int sz = 7;
//     int smallest = 0;
//     for(int i=0; i<sz; i++){
//         smallest = min(nums[i],smallest);
//     }
//     cout<<smallest;
//     return 0;
// }

// index of smallest
// #include <iostream>
// using namespace std;
// int main(){

//     int nums[7]={5,15,20,1,-15,24,-24};
//     int sz = 7;
//     int smallest = 0;
//     int smallestIndex =0;
//     for(int i=0; i<sz; i++){
//         if(nums[i]<smallest){
//             smallest = nums[i];
//             smallestIndex = i;
//         }
//     }
//     cout<<smallestIndex;
//     return 0;
// }



// // Linear Search 

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[],int sz,int target) {
//     for (int i=0; i<sz; i++){
//         if (arr[i]==target)
//         return i;
//     }
//     return -1;
// }

// int main(){

//     int arr[]={55,5,4,3,5,7,67,88};
//     int size =8;
//     int tg =7;

//     cout<<linearSearch(arr,size,tg);
//     return 0;
// }


// waf to cal sum and product of aaray

// #include <iostream>
// using namespace std;

// int getSum(int arr[], int sz){
//   int  sum=0;
//     for (int i =0; i<sz; i++){
//         sum+= arr[i];
//     }
//     return sum;
// }

// int getproduct(int arr[], int sz){
//   int  product=1;
//     for (int i =0; i<sz; i++){
//         product*= arr[i];
//     }
//     return product;
// }

// int main(){

//     int arr[]={1,2,3,4};
//     int sz = 4;
//     cout<<getSum(arr,sz)<<endl;
//     cout<<getproduct(arr,sz);
   
//     return 0;
// }

// waf to swap min and max of aaray


#include <iostream>
using namespace std;

int mn (int arr[], int sz){
    int smallest = arr[0];
    int smallIndex = 0;
    for (int i=0; i<sz; i++){
        smallest = min(arr[i],smallest);
        if(smallest==arr[i]){
            smallIndex =i;
        }
    }
    return smallIndex;
}

int mx (int arr[], int sz){
    int laargest = arr[0];
    int bigIndex = 0;
    for (int i=0; i<sz; i++){
        laargest = max(arr[i],laargest);
        if(laargest==arr[i]){
            bigIndex =i;
        }
    }
    return bigIndex;
}

int main(){

    int arr []= {4,3,6,2,1,-15};
    int sz = 6;
    int mN= mn(arr,sz);
    int mX= mx(arr,sz);
    
    swap(arr[mN],arr[mX]);
    for(int i =0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}