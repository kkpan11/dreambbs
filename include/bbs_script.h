#ifndef BBS_SCRIPT_H
#define BBS_SCRIPT_H

#include "cppdef.h"

/* BBS-Lua */

#ifdef M3_USE_BBSLUA
  #include <lua.h>

  #ifdef BBSLUA_USE_LUAJIT
    #include <luajit.h>
  #endif
#endif

#define HAVE_BBSLUA

// Must be consistent with "bbslua.c"

#define BBSLUA_INTERFACE_VER    0.119 // (0.201)
#define BBSLUA_INTERFACE_VER_STR  CPP_STR(BBSLUA_INTERFACE_VER)


/* BBS-Ruby */

#ifdef M3_USE_BBSRUBY
  #include <ruby/version.h>

  #define RUBY_RELEASE_STR \
      VER_PATCH_STR(RUBY_API_VERSION_MAJOR, RUBY_API_VERSION_MINOR, RUBY_API_VERSION_TEENY)
#endif

#define HAVE_BBSRUBY

// Must be consistent with "bbsruby.c"

#define BBSRUBY_MAJOR_VERSION   (0)
#define BBSRUBY_MINOR_VERSION   (3)
#define BBSRUBY_DL_PATCH_VERSION  1
#define BBSRUBY_VERSION_STR \
    VER_DL_STR(BBSRUBY_MAJOR_VERSION, BBSRUBY_MINOR_VERSION, BBSRUBY_DL_PATCH_VERSION)

#define BBSRUBY_INTERFACE_VER   0.111
#define BBSRUBY_INTERFACE_VER_STR  CPP_STR(BBSRUBY_INTERFACE_VER)

#endif  // #ifndef BBS_SCRIPT_H
