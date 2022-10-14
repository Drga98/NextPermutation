//
// Created by Daniel on 13/10/2022.
//

#ifndef NEXTPERMUTATION_NEXTPERMUTE_H
#define NEXTPERMUTATION_NEXTPERMUTE_H

#include <vector>
#include <algorithm>

template<typename T = unsigned char>
class NextPermute : public std::vector<T> {

public:
    NextPermute(const std::initializer_list<T> &l) : std::vector<T> (l){}

    void permute(){
        const size_t n = this->size();
        auto k = static_cast<ssize_t>(n-2);
        auto l = static_cast<ssize_t>(n-1);

        for(; k>= 0; k--)
            if(this->operator[](k) < this->operator[](k+1ul))
                break;

        if(k < 0)
            std::reverse(this->begin(), this->end());

        else {
            for (; l > k; l--)
                if (this->operator[](l) > this->operator[](k))
                    break;

            std::swap(this->operator[](k), this->operator[](l));
            std::reverse(this->begin() + k + 1, this->end());
        }
    }

    explicit operator std::vector<T>(){
        return *dynamic_cast<std::vector<T>>(this);
    }
};

#endif //NEXTPERMUTATION_NEXTPERMUTE_H
