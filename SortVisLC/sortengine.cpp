#include "sortengine.h"

sortEngine::sortEngine(int vectorSize)
{
    for(int i = 0; i < vectorSize; i++){
        values.push_back(i);
    }
}

void sortEngine::shuffle(){
    std::cout << "SHUFFLING..." << std::endl;
    for(int i = 0; i < (int)values.size() - 1; i++){
        int j = i + rand() % (values.size() - i);
        swap(values[i], values[j]);
    }
}

void sortEngine::selectionSort(){
    std::cout << "Selection sorting..." << std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    // Algorithm
    int minIdx;
    do{
        for(int i = 0; i < (int)values.size() - 1; i++){
            minIdx = i;
            for(int j = i + 1; j < (int)values.size(); j++){
                if(values[j] < values[minIdx])
                    minIdx = j;
            }
            swap(values[i], values[minIdx]);
        }
    }while(sorted() == false);

    auto end = std::chrono::high_resolution_clock::now();
    double elapsed_time_ms = std::chrono::duration<double, std::milli>(end-start).count();
    std::cout << "Time elapsed : " << elapsed_time_ms << " ms" << std::endl;
}

void sortEngine::swap(int &a, int &b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

bool sortEngine::sorted(){
    for(int i = 0; i < (int)values.size(); i++){
        if(values[i] != i)
            return false;
    }
    return true;
}
