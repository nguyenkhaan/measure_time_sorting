#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
mt19937 rd(1810206); 
//Render du lieu Randomized 
long long Rand(long long l, long long r)
{
    return uniform_int_distribution<long long>(l,r)(rd);
}
int numberTestcases[] = {1000, 2000, 10000, 20000, 30000}; 
const int L = 0; 
const int R = 1000; 
ofstream res("../output/output1.out"); 
//Src: Chat GPT 
double measureTime(const char* command) {
    auto start = high_resolution_clock::now();
    system(command);
    auto stop = high_resolution_clock::now();
    duration<long double> elapsed = stop - start;
    return elapsed.count();
}
//
void timeUp(int n) 
{
    res << "DO LON CUA MANG: " << n << endl; 
    long double t1 = measureTime("../algo/selection_sort");
    long double t2 = measureTime("../algo/insertion_sort");
    long double t3 = measureTime("../algo/merge_sort");
    long double t4 = measureTime("../algo/qsort");
    
    res << "Selection Sort Time: " << t1 << " seconds" << endl;
    res << "Insertion Sort Time: " << t2 << " seconds" << endl;
    res << "Merge Sort Time: " << t3 << " seconds" << endl;
    res << "Quick Sort Time: " << t4 << " seconds" << endl;
}
void gen1()
{   
    vector<int> a1(1000); 
    for (auto n : numberTestcases) 
    {
        ofstream o("../input.inp"); 
        vector<int> a(n); 
        o << n << endl; 
        for (int i = 0; i < n; ++i) a[i] = Rand(L, R); 
        for (int i = 0; i < n; ++i) o << a[i] << ' ';
        timeUp(n); 
        o.close(); 
    }
    res.close(); 
}
int main() 
{
    gen1(); 
}



