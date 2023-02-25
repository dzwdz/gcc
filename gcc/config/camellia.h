#undef LIB_SPEC
#define LIB_SPEC "-lc"

#undef LINK_SPEC
#define LINK_SPEC "-pie -no-dynamic-linker"

#undef STARTFILE_SPEC
#define STARTFILE_SPEC "crt0.o%s crti.o%s crtbeginS.o%s"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC "crtendS.o%s crtn.o%s"
