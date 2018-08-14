# a place holder. nothing to do
Import("env")
# src_filter = ["+<foo.h>"]
# env.Replace(SRC_FILTER=src_filter)

build_flags = env.ParseFlags(env['BUILD_FLAGS'])
cppdefines = build_flags.get("CPPDEFINES")
