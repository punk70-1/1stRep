#include <iostream>
#include <cmath>
//#include <simplecpp>
using namespace std;

// struct point{
//     double x,y;
// };

// struct disk{
//     point center;
//     double radius;
// };

// bool intersct(disk d1, disk d2){
//     return (pow(d1.center.x - d2.center.x, 2) + pow(d1.center.y - d2.center.y, 2)) < pow(d1.radius + d2.radius, 2);
// }

// void CheckAll(disk disks[], int n){
//     for(int i = 0; i < n-1; i++){
//         for(int j = i + 1; j < n; j++){
//             if(intersct(disks[i], disks[j])){cout << i + 1 << " & " << j + 1 << " does intersect" << endl;}
//             else {cout << i + 1 << " & " << j + 1 << " doesn't interset" << endl;}
//         }
//     }
//     return;
// }

// int f(int *a, int *b){
//     // int *a = &x; int *b = &y;
//     return *a + *b;
// }

// int main(){
//    disk list_of_disks[4] = {{{2,3},4}, {{7,3},4}, {{7,8},4}, {{12, 8}, 4}};
//    CheckAll(list_of_disks, 4);
// }

struct vctr{
    double x, y, z;
    double length(){
        return sqrt(x*x+ y*y +z*z);
    }
};

double mode(vctr v){
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

int main(){
    vctr A = {1,2,3};
    cout << A.length();
    cout << endl<< mode(A);    
}







