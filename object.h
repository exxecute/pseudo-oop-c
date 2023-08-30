#ifndef OBJECT_H
#define OBJECT_H

#include "stdint.h"
#include "flag.h"

typedef struct OBJECT_struct_t
{
    FLAGS_t flags;

    uint8_t (*get_data)(void);
    void (*set_data)(uint8_t value);
}OBJECT_struct_t;

void OBJECT_struct_init(OBJECT_struct_t *this);

#endif /* OBJECT_H */