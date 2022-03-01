#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b); 
}

void swap(int* &x, int* &y){
   int tmp = *x;
   *x = *y; 
   *y = tmp;
}

bool sort(vector<int> v){
   while(v.size()>1){
      int minIndex = min_element(v.begin(),v.end())-v.begin();
      if(minIndex == 0) v.erase(v.begin());
      else if(gcd(v[0],v[minIndex]) > 1){ swap(v[minIndex],v[0]); v.erase(v.begin()); }
      else{
         int i=1;
         while(i<v.size() && (gcd(v[minIndex],v[i])==1 || gcd(v[i],v[0])==1)) i++;
         if(i==v.size()) return false;
         else{ swap(v[i],v[0]); swap(v[0],v[minIndex]); v.erase(v.begin());}       
      }   
   }
   return true;   
}

int main(){
   ifstream fin; 
   ofstream fout; 
   int T,d,row; 
   string line; 
   
   /*Input*/
   fin.open("input.txt");
   getline(fin,line); 
   stringstream ss(line); 
   ss >> T;
   vector <int> v[T];
   for(row=0;row<T;row++){ 
      getline(fin,line); 
      stringstream ss(line); 
      while(ss >> d) v[row].push_back(d);        
   }
   fin.close();
   
   /*Output*/  
   fout.open("output.txt");
   for(row=0;row<T;row++) 
      if(sort(v[row])) fout << "True" << endl;  
      else fout << "False" <<endl;
   fout.close();   

   return 0;
}
