#ifndef FLAG_H
#define FLAG_H

#include "stdint.h"

typedef struct FLAG_t
{
    uint8_t (*get)(void);
    void (*set)(void);
    void (*reset)(void);
}FLAG_t;


typedef struct FLAGS_t
{
    FLAG_t error;
    FLAG_t update;
}FLAGS_t;

void FLAG_init(FLAGS_t *flags);

#endif /* FLAG_H */