#include "object.h"
#include <stdio.h>

int main(void)
{
    OBJECT_struct_t object;
    OBJECT_struct_init(&object);
    if(!object.flags.error.get())
    {
        object.flags.update.set();
        object.set_data(10);
    }
    printf("%d\r\n", object.get_data());
    return 0;
}