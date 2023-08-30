
#include "flag.h"

#define GET_MASK(offset, reg)                       (reg & offset)

#define FLAG_ERROR_OFFSET                           (0U)
#define FLAG_UPDATE_OFFSET                          (1U)
#define FLAG3_OFFSET                                (2U)
#define FLAG4_OFFSET                                (3U)
#define FLAG5_OFFSET                                (4U)
#define FLAG6_OFFSET                                (5U)
#define FLAG7_OFFSET                                (6U)
#define FLAG8_OFFSET                                (7U)

static uint8_t flag = 0;

static uint8_t _get_flag_error(void)
{
    return GET_MASK(FLAG_ERROR_OFFSET, flag) >> FLAG_ERROR_OFFSET;
}

static void _set_flag_error(void)
{
    flag |= (1 << FLAG_ERROR_OFFSET);
}

static void _reset_flag_error(void)
{
    flag &= ~(1 << FLAG_ERROR_OFFSET);
}

static uint8_t _get_flag_update(void)
{
    return GET_MASK(FLAG_UPDATE_OFFSET, flag) >> FLAG_UPDATE_OFFSET;
}

static void _set_flag_update(void)
{
    flag |= (1 << FLAG_UPDATE_OFFSET);
}

static void _reset_flag_update(void)
{
    flag &= ~(1 << FLAG_UPDATE_OFFSET);
}

void FLAG_init(FLAGS_t *flags)
{
    flags->error.get = _get_flag_error;
    flags->error.set = _set_flag_error;
    flags->error.reset = _reset_flag_error;

    flags->update.get = _get_flag_update;
    flags->update.set = _set_flag_update;
    flags->update.reset = _reset_flag_update;
}