#include <iostream>

int max_tableau(int tab[], int taille) {
    int max = tab[0];

    for (int i = 1; i < taille; i++){
        if (tab[i] > max){
          max =  tab[i]; 
        }  
    }
    return max;
    
}
int min_tableau(int tab[],int taille) {
    int min = tab[0];

    for (int i = 1; i < taille; i++){
        if (tab[i]< min){
            min = tab[i]
        }
           
    }
   return min; 
}

using namespace std;

int main(){
    int tab[5] = {7,2,9,4,1};

    cout <<"le maximum est:"<<
    max_tableau(tab, 5) << endl;
    cout << "Le minimum est:" <<
    min_tableau(tab, 5) << endl;
    
    return 0
}