#include "object.h"

static uint8_t data;

uint8_t _get_data(void)
{
    return data;
}

void _set_data(uint8_t value)
{
    data = value;
}


void OBJECT_struct_init(OBJECT_struct_t *this)
{
    FLAG_init(&this->flags);
    this->get_data = _get_data;
    this->set_data = _set_data;
}

