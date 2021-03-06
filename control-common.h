#ifndef CONTROL_COMMON_H
#define CONTROL_COMMON_H

#include <lua.h>
#include <lauxlib.h>

#include <ui.h>

#include "signatures.h"

int is_control( int signature );
uiControl* check_control( lua_State* L, int idx, int signature );


extern luaL_Reg control_common[];


#endif /* CONTROL_COMMON_H */
