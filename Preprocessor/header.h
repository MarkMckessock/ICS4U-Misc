#ifndef HEADER // Prevents compilation if this file has already been included

# define HEADER
# define k_name "mark"
# define k_int 4.576

# if value == 1
    //Code
# elif value == 2
    //Code
# endif

#endif


#define WINDOWS // Can also be defined at compile-time "gcc -D WINDOWS conditional_compilation.c"

#ifdef WINDOWS //Could be defined at compile-time as "gcc -D k_homedir=/home/user/ conditional_compilation.c"
# define k_homedir "C:\\Users\\user\\"
#else
# define k_homedir /home/user/
#endif

#undef WINDOWS //Undefines WINDOWS
