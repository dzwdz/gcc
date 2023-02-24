#undef LIB_SPEC
#define LIB_SPEC "-lc"

#undef LINK_SPEC
#define LINK_SPEC "-z max-page-size=4096 -pie -no-dynamic-linker"
