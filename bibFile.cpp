#include "bibFile.h"

template <typename T> maFile<T>::maFile(int s){
    size = s;
    file = new T[size];
    for(int i=0; i<size; i++){
        file[i] = 0;
    }
}

template <typename T> maFile<T>::~maFile(){
    delete[] file;
}

template <typename T> void operator<<(std::ostream &o, maFile<T> const &b){
    o << "[";
    for(int i=0; i<b.size; i++){
        o << b.file[i];
        if (i != b.size-1){o << ",";}
    }
    o << "]";
    o << std::endl;
}

template <typename T> maFile<T>& operator=<T>(const maFile<T>& other){
    if (*this != other){
        this->size = other.size;
        this->pos = other.pos;
        delete[] this->file;
        this->file = new T[this->size];
        for (int i=0; i<this-size; i++){
            this->file[i] = other[i];
        }
        delete[] other;
    }
}


template <typename T> void maFile<T>::ajouter(T n){
    file[pos]=n;
    pos++;
}

template <typename T> T maFile<T>::pop(){
    pos--;
    T dernier_element = file[pos];
    file[pos] = 0;
    return dernier_element;
}
