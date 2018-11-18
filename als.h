#ifndef _ALS_H
#define _ALS_H

#include "uthash.h"

static inline int min(int x, int y) {
    return (x < y) ? x : y;
}

static inline int max(int x, int y) {
    return (x > y) ? x : y;
}

struct movie {
    int id; 
    int rating_num;
    int num;
    int total_rating;
    UT_hash_handle hh; 
};

struct user {
    int id; 
    int rating_num;
    UT_hash_handle hh; 
};

typedef struct global_info {
    int numIter;
    int numFeature;
    double lambda;
} global_info;

typedef double feature_t;

void compute()
#endif // _ALS_H