/*
 * Original Source  : /tmp/__omni_tmp__6621/himeno_2e_c_pp.c
 * Language         : C
 * Compiled Time    : 2015-01-28 04:13:26
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 0.9.0
 */
# 1 "/tmp/__omni_tmp__6621/himeno_2e_c_pp.c"
typedef long ptrdiff_t;
typedef unsigned long size_t;
typedef int wchar_t;
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long __int64_t;
typedef unsigned long __uint64_t;
typedef long __quad_t;
typedef unsigned long __u_quad_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
struct anon_type_1___fsid_t {
int __val[2];
};
typedef struct anon_type_1___fsid_t __fsid_t;
typedef long __clock_t;
typedef unsigned long __rlim_t;
typedef unsigned long __rlim64_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
typedef int __daddr_t;
typedef long __swblk_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __blkcnt64_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsblkcnt64_t;
typedef unsigned long __fsfilcnt_t;
typedef unsigned long __fsfilcnt64_t;
typedef long __ssize_t;
typedef long __loff_t;
typedef long * __qaddr_t;
typedef char * __caddr_t;
typedef long __intptr_t;
typedef unsigned int __socklen_t;
union anon_type_3___value {
unsigned int __wch;
char __wchb[4];
};
typedef struct anon_type_2___mbstate_t __mbstate_t;
typedef int _G_int16_t;
typedef int _G_int32_t;
typedef unsigned int _G_uint16_t;
typedef unsigned int _G_uint32_t;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t {
};
typedef void _IO_lock_t;
enum __codecvt_result {
__codecvt_ok = 0,
__codecvt_partial = 1,
__codecvt_error = 2,
__codecvt_noconv = 3
};
struct _IO_FILE_plus {
};
typedef long __io_read_fn(void * __cookie, char * __buf, unsigned long __nbytes);
typedef long __io_write_fn(void * __cookie, char const * __buf, unsigned long __n);
typedef int __io_seek_fn(void * __cookie, long * __pos, int __w);
typedef int __io_close_fn(void * __cookie);
typedef long off_t;
typedef long ssize_t;
typedef long time_t;
struct timeval {
long tv_sec;
long tv_usec;
};
typedef int __sig_atomic_t;
struct anon_type_6___sigset_t {
unsigned long __val[(1024) / ((8) * (sizeof(unsigned long)))];
};
typedef struct anon_type_6___sigset_t __sigset_t;
typedef struct anon_type_6___sigset_t sigset_t;
struct timespec {
long tv_sec;
long tv_nsec;
};
typedef long suseconds_t;
typedef long __fd_mask;
struct anon_type_7_fd_set {
long __fds_bits[(1024) / ((8) * ((int)(sizeof(long))))];
};
typedef struct anon_type_7_fd_set fd_set;
typedef long fd_mask;
struct timezone {
int tz_minuteswest;
int tz_dsttime;
};
typedef struct timezone * __timezone_ptr_t;
enum __itimer_which {
ITIMER_REAL = 0,
ITIMER_VIRTUAL = 1,
ITIMER_PROF = 2
};
struct itimerval {
struct timeval it_interval;
struct timeval it_value;
};
typedef int __itimer_which_t;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long uint_least64_t;
typedef char int_fast8_t;
typedef long int_fast16_t;
typedef long int_fast32_t;
typedef long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long uint_fast16_t;
typedef unsigned long uint_fast32_t;
typedef unsigned long uint_fast64_t;
typedef long intptr_t;
typedef unsigned long uintptr_t;
typedef long intmax_t;
typedef unsigned long uintmax_t;
typedef int MPI_Datatype;
typedef int MPI_Comm;
typedef int MPI_Group;
typedef int MPI_Win;
struct ADIOI_FileD {
};
typedef struct ADIOI_FileD * MPI_File;
typedef int MPI_Op;
enum MPIR_Win_flavor {
MPI_WIN_FLAVOR_CREATE = 1,
MPI_WIN_FLAVOR_ALLOCATE = 2,
MPI_WIN_FLAVOR_DYNAMIC = 3,
MPI_WIN_FLAVOR_SHARED = 4
};
typedef enum MPIR_Win_flavor MPIR_Win_flavor_t;
enum MPIR_Win_model {
MPI_WIN_SEPARATE = 1,
MPI_WIN_UNIFIED = 2
};
typedef enum MPIR_Win_model MPIR_Win_model_t;
enum MPIR_Topo_type {
MPI_GRAPH = 1,
MPI_CART = 2,
MPI_DIST_GRAPH = 3
};
typedef enum MPIR_Topo_type MPIR_Topo_type;
typedef void MPI_Handler_function(int * , int * , ...);
typedef int MPI_Comm_copy_attr_function(int, int, void * , void * , void * , int * );
typedef int MPI_Comm_delete_attr_function(int, int, void * , void * );
typedef int MPI_Type_copy_attr_function(int, int, void * , void * , void * , int * );
typedef int MPI_Type_delete_attr_function(int, int, void * , void * );
typedef int MPI_Win_copy_attr_function(int, int, void * , void * , void * , int * );
typedef int MPI_Win_delete_attr_function(int, int, void * , void * );
typedef void MPI_Comm_errhandler_function(int * , int * , ...);
typedef void MPI_File_errhandler_function(struct ADIOI_FileD * * , int * , ...);
typedef void MPI_Win_errhandler_function(int * , int * , ...);
typedef void MPI_Comm_errhandler_fn(int * , int * , ...);
typedef void MPI_File_errhandler_fn(struct ADIOI_FileD * * , int * , ...);
typedef void MPI_Win_errhandler_fn(int * , int * , ...);
typedef int MPI_Errhandler;
typedef int MPI_Request;
typedef int MPI_Message;
typedef void MPI_User_function(void * , void * , int * , int * );
typedef int MPI_Copy_function(int, int, void * , void * , void * , int * );
typedef int MPI_Delete_function(int, int, void * , void * );
enum MPIR_Combiner_enum {
MPI_COMBINER_NAMED = 1,
MPI_COMBINER_DUP = 2,
MPI_COMBINER_CONTIGUOUS = 3,
MPI_COMBINER_VECTOR = 4,
MPI_COMBINER_HVECTOR_INTEGER = 5,
MPI_COMBINER_HVECTOR = 6,
MPI_COMBINER_INDEXED = 7,
MPI_COMBINER_HINDEXED_INTEGER = 8,
MPI_COMBINER_HINDEXED = 9,
MPI_COMBINER_INDEXED_BLOCK = 10,
MPI_COMBINER_STRUCT_INTEGER = 11,
MPI_COMBINER_STRUCT = 12,
MPI_COMBINER_SUBARRAY = 13,
MPI_COMBINER_DARRAY = 14,
MPI_COMBINER_F90_REAL = 15,
MPI_COMBINER_F90_COMPLEX = 16,
MPI_COMBINER_F90_INTEGER = 17,
MPI_COMBINER_RESIZED = 18,
MPI_COMBINER_HINDEXED_BLOCK = 19
};
typedef int MPI_Info;
typedef long MPI_Aint;
typedef int MPI_Fint;
typedef long long MPI_Count;
typedef long long MPI_Offset;
struct MPI_Status {
int count_lo;
int count_hi_and_cancelled;
int MPI_SOURCE;
int MPI_TAG;
int MPI_ERROR;
};
typedef struct MPI_Status MPI_Status;
struct MPIR_T_enum_s {
};
struct MPIR_T_cvar_handle_s {
};
struct MPIR_T_pvar_handle_s {
};
struct MPIR_T_pvar_session_s {
};
typedef struct MPIR_T_enum_s * MPI_T_enum;
typedef struct MPIR_T_cvar_handle_s * MPI_T_cvar_handle;
typedef struct MPIR_T_pvar_handle_s * MPI_T_pvar_handle;
typedef struct MPIR_T_pvar_session_s * MPI_T_pvar_session;
enum MPIR_T_verbosity_t {
MPIX_T_VERBOSITY_INVALID = 0,
MPI_T_VERBOSITY_USER_BASIC = 221,
MPI_T_VERBOSITY_USER_DETAIL = 222,
MPI_T_VERBOSITY_USER_ALL = 223,
MPI_T_VERBOSITY_TUNER_BASIC = 224,
MPI_T_VERBOSITY_TUNER_DETAIL = 225,
MPI_T_VERBOSITY_TUNER_ALL = 226,
MPI_T_VERBOSITY_MPIDEV_BASIC = 227,
MPI_T_VERBOSITY_MPIDEV_DETAIL = 228,
MPI_T_VERBOSITY_MPIDEV_ALL = 229
};
typedef enum MPIR_T_verbosity_t MPIR_T_verbosity_t;
enum MPIR_T_bind_t {
MPIX_T_BIND_INVALID = 0,
MPI_T_BIND_NO_OBJECT = 9700,
MPI_T_BIND_MPI_COMM = 9701,
MPI_T_BIND_MPI_DATATYPE = 9702,
MPI_T_BIND_MPI_ERRHANDLER = 9703,
MPI_T_BIND_MPI_FILE = 9704,
MPI_T_BIND_MPI_GROUP = 9705,
MPI_T_BIND_MPI_OP = 9706,
MPI_T_BIND_MPI_REQUEST = 9707,
MPI_T_BIND_MPI_WIN = 9708,
MPI_T_BIND_MPI_MESSAGE = 9709,
MPI_T_BIND_MPI_INFO = 9710
};
typedef enum MPIR_T_bind_t MPIR_T_bind_t;
enum MPIR_T_scope_t {
MPIX_T_SCOPE_INVALID = 0,
MPI_T_SCOPE_CONSTANT = 60438,
MPI_T_SCOPE_READONLY = 60439,
MPI_T_SCOPE_LOCAL = 60440,
MPI_T_SCOPE_GROUP = 60441,
MPI_T_SCOPE_GROUP_EQ = 60442,
MPI_T_SCOPE_ALL = 60443,
MPI_T_SCOPE_ALL_EQ = 60444
};
typedef enum MPIR_T_scope_t MPIR_T_scope_t;
enum MPIR_T_pvar_class_t {
MPIX_T_PVAR_CLASS_INVALID = 0,
MPIR_T_PVAR_CLASS_FIRST = 240,
MPI_T_PVAR_CLASS_STATE = 240,
MPI_T_PVAR_CLASS_LEVEL = 241,
MPI_T_PVAR_CLASS_SIZE = 242,
MPI_T_PVAR_CLASS_PERCENTAGE = 243,
MPI_T_PVAR_CLASS_HIGHWATERMARK = 244,
MPI_T_PVAR_CLASS_LOWWATERMARK = 245,
MPI_T_PVAR_CLASS_COUNTER = 246,
MPI_T_PVAR_CLASS_AGGREGATE = 247,
MPI_T_PVAR_CLASS_TIMER = 248,
MPI_T_PVAR_CLASS_GENERIC = 249,
MPIR_T_PVAR_CLASS_LAST = 250,
MPIR_T_PVAR_CLASS_NUMBER = 10
};
typedef enum MPIR_T_pvar_class_t MPIR_T_pvar_class_t;
typedef int MPI_Grequest_cancel_function(void * , int);
typedef int MPI_Grequest_free_function(void * );
typedef int MPI_Grequest_query_function(void * , struct MPI_Status * );
typedef int MPIX_Grequest_poll_function(void * , struct MPI_Status * );
typedef int MPIX_Grequest_wait_function(int, void * * , double, struct MPI_Status * );
typedef int MPI_Datarep_conversion_function(void * , int, int, void * , long long, void * );
typedef int MPI_Datarep_extent_function(int datatype, long * , void * );
typedef int MPIX_Grequest_class;
struct mpixi_mutex_s {
};
typedef struct mpixi_mutex_s * MPIX_Mutex;
typedef void * xmp_desc_t;
struct _IO_marker;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
struct anon_type_2___mbstate_t {
int __count;
union anon_type_3___value __value;
};
struct anon_type_4__G_fpos_t {
long __pos;
struct anon_type_2___mbstate_t __state;
};
typedef struct anon_type_4__G_fpos_t _G_fpos_t;
struct anon_type_5__G_fpos64_t {
long __pos;
struct anon_type_2___mbstate_t __state;
};
typedef struct anon_type_5__G_fpos64_t _G_fpos64_t;
struct _IO_marker {
struct _IO_marker * _next;
struct _IO_FILE * _sbuf;
int _pos;
};
struct _IO_FILE {
int _flags;
char * _IO_read_ptr;
char * _IO_read_end;
char * _IO_read_base;
char * _IO_write_base;
char * _IO_write_ptr;
char * _IO_write_end;
char * _IO_buf_base;
char * _IO_buf_end;
char * _IO_save_base;
char * _IO_backup_base;
char * _IO_save_end;
struct _IO_marker * _markers;
struct _IO_FILE * _chain;
int _fileno;
int _flags2;
long _old_offset;
unsigned short _cur_column;
char _vtable_offset;
char _shortbuf[1];
void * _lock;
long _offset;
void * __pad1;
void * __pad2;
void * __pad3;
void * __pad4;
unsigned long __pad5;
int _mode;
char _unused2[(((15) * (sizeof(int))) - ((4) * (sizeof(void * )))) - (sizeof(unsigned long))];
};
typedef struct _IO_FILE _IO_FILE;
typedef struct anon_type_4__G_fpos_t fpos_t;
# include "xmp_func_decl.h"
# include "xmp_index_macro.h"
# include "xmp_comm_macro.h"
static void * _XMP_DESC_t;
static void * _XMP_DESC_n;
static int _XMP_NODES_SIZE_n_0;
static int _XMP_NODES_SIZE_n_1;
static int _XMP_NODES_RANK_n_0;
static int _XMP_NODES_RANK_n_1;
static float * _XMP_ADDR_p;
static void * _XMP_DESC_p;
static unsigned long long _XMP_GTOL_acc_p_0;
static unsigned long long _XMP_GTOL_acc_p_1;
static unsigned long long _XMP_GTOL_acc_p_2;
static int _XMP_GTOL_temp0_p_0;
static int _XMP_GTOL_temp0_p_1;
static float * _XMP_ADDR_bnd;
static void * _XMP_DESC_bnd;
static unsigned long long _XMP_GTOL_acc_bnd_0;
static unsigned long long _XMP_GTOL_acc_bnd_1;
static unsigned long long _XMP_GTOL_acc_bnd_2;
static int _XMP_GTOL_temp0_bnd_0;
static int _XMP_GTOL_temp0_bnd_1;
static float * _XMP_ADDR_wrk1;
static void * _XMP_DESC_wrk1;
static unsigned long long _XMP_GTOL_acc_wrk1_0;
static unsigned long long _XMP_GTOL_acc_wrk1_1;
static unsigned long long _XMP_GTOL_acc_wrk1_2;
static int _XMP_GTOL_temp0_wrk1_0;
static int _XMP_GTOL_temp0_wrk1_1;
static float * _XMP_ADDR_wrk2;
static void * _XMP_DESC_wrk2;
static unsigned long long _XMP_GTOL_acc_wrk2_0;
static unsigned long long _XMP_GTOL_acc_wrk2_1;
static unsigned long long _XMP_GTOL_acc_wrk2_2;
static int _XMP_GTOL_temp0_wrk2_0;
static int _XMP_GTOL_temp0_wrk2_1;
static float * _XMP_ADDR_a;
static void * _XMP_DESC_a;
static unsigned long long _XMP_GTOL_acc_a_0;
static unsigned long long _XMP_GTOL_acc_a_1;
static unsigned long long _XMP_GTOL_acc_a_2;
static unsigned long long _XMP_GTOL_acc_a_3;
static int _XMP_GTOL_temp0_a_1;
static int _XMP_GTOL_temp0_a_2;
static float * _XMP_ADDR_b;
static void * _XMP_DESC_b;
static unsigned long long _XMP_GTOL_acc_b_0;
static unsigned long long _XMP_GTOL_acc_b_1;
static unsigned long long _XMP_GTOL_acc_b_2;
static unsigned long long _XMP_GTOL_acc_b_3;
static int _XMP_GTOL_temp0_b_1;
static int _XMP_GTOL_temp0_b_2;
static float * _XMP_ADDR_c;
static void * _XMP_DESC_c;
static unsigned long long _XMP_GTOL_acc_c_0;
static unsigned long long _XMP_GTOL_acc_c_1;
static unsigned long long _XMP_GTOL_acc_c_2;
static unsigned long long _XMP_GTOL_acc_c_3;
static int _XMP_GTOL_temp0_c_1;
static int _XMP_GTOL_temp0_c_2;
extern void xmpc_init_all();
extern void xmpc_module_init();
static int xmpc_main(int argc, char * * argv);
extern void xmpc_finalize_all();
extern void xmpc_init_file_himeno_5f_2e_5f_c_5f_pp();
extern void xmpc_finalize_file_himeno_5f_2e_5f_c_5f_pp();
# 348 "/usr/linux-k1om-4.7/linux-k1om/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_;
# 349 "/usr/linux-k1om-4.7/linux-k1om/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_;
# 350 "/usr/linux-k1om-4.7/linux-k1om/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_;
extern int __underflow(struct _IO_FILE * );
extern int __uflow(struct _IO_FILE * );
extern int __overflow(struct _IO_FILE * , int);
extern int _IO_getc(struct _IO_FILE * __fp);
extern int _IO_putc(int __c, struct _IO_FILE * __fp);
extern int _IO_feof(struct _IO_FILE * __fp);
extern int _IO_ferror(struct _IO_FILE * __fp);
extern int _IO_peekc_locked(struct _IO_FILE * __fp);
extern void _IO_flockfile(struct _IO_FILE * );
extern void _IO_funlockfile(struct _IO_FILE * );
extern int _IO_ftrylockfile(struct _IO_FILE * );
extern int _IO_vfscanf(struct _IO_FILE * , char const * , __builtin_va_list, int * );
extern int _IO_vfprintf(struct _IO_FILE * , char const * , __builtin_va_list);
extern long _IO_padn(struct _IO_FILE * , int, long);
extern unsigned long _IO_sgetn(struct _IO_FILE * , void * , unsigned long);
extern long _IO_seekoff(struct _IO_FILE * , long, int, int);
extern long _IO_seekpos(struct _IO_FILE * , long, int);
extern void _IO_free_backup_area(struct _IO_FILE * );
# 165 "/usr/linux-k1om-4.7/linux-k1om/usr/include/stdio.h"
extern struct _IO_FILE * stdin;
# 166 "/usr/linux-k1om-4.7/linux-k1om/usr/include/stdio.h"
extern struct _IO_FILE * stdout;
# 167 "/usr/linux-k1om-4.7/linux-k1om/usr/include/stdio.h"
extern struct _IO_FILE * stderr;
extern int remove(char const * __filename);
extern int rename(char const * __old, char const * __new);
extern int renameat(int __oldfd, char const * __old, int __newfd, char const * __new);
extern struct _IO_FILE * tmpfile(void);
extern char * tmpnam(char * __s);
extern char * tmpnam_r(char * __s);
extern char * tempnam(char const * __dir, char const * __pfx);
extern int fclose(struct _IO_FILE * __stream);
extern int fflush(struct _IO_FILE * __stream);
extern int fflush_unlocked(struct _IO_FILE * __stream);
extern struct _IO_FILE * fopen(char const * __filename, char const * __modes);
extern struct _IO_FILE * freopen(char const * __filename, char const * __modes, struct _IO_FILE * __stream);
extern struct _IO_FILE * fdopen(int __fd, char const * __modes);
extern struct _IO_FILE * fmemopen(void * __s, unsigned long __len, char const * __modes);
extern struct _IO_FILE * open_memstream(char * * __bufloc, unsigned long * __sizeloc);
extern void setbuf(struct _IO_FILE * __stream, char * __buf);
extern int setvbuf(struct _IO_FILE * __stream, char * __buf, int __modes, unsigned long __n);
extern void setbuffer(struct _IO_FILE * __stream, char * __buf, unsigned long __size);
extern void setlinebuf(struct _IO_FILE * __stream);
extern int fprintf(struct _IO_FILE * __stream, char const * __format, ...);
extern int printf(char const * __format, ...);
extern int sprintf(char * __s, char const * __format, ...);
extern int vfprintf(struct _IO_FILE * __s, char const * __format, __builtin_va_list __arg);
extern int vprintf(char const * __format, __builtin_va_list __arg);
extern int vsprintf(char * __s, char const * __format, __builtin_va_list __arg);
extern int snprintf(char * __s, unsigned long __maxlen, char const * __format, ...);
extern int vsnprintf(char * __s, unsigned long __maxlen, char const * __format, __builtin_va_list __arg);
extern int vdprintf(int __fd, char const * __fmt, __builtin_va_list __arg);
extern int dprintf(int __fd, char const * __fmt, ...);
extern int fscanf(struct _IO_FILE * __stream, char const * __format, ...);
extern int scanf(char const * __format, ...);
extern int sscanf(char const * __s, char const * __format, ...);
extern int __isoc99_fscanf(struct _IO_FILE * __stream, char const * __format, ...);
extern int __isoc99_scanf(char const * __format, ...);
extern int __isoc99_sscanf(char const * __s, char const * __format, ...);
extern int vfscanf(struct _IO_FILE * __s, char const * __format, __builtin_va_list __arg);
extern int vscanf(char const * __format, __builtin_va_list __arg);
extern int vsscanf(char const * __s, char const * __format, __builtin_va_list __arg);
extern int __isoc99_vfscanf(struct _IO_FILE * __s, char const * __format, __builtin_va_list __arg);
extern int __isoc99_vscanf(char const * __format, __builtin_va_list __arg);
extern int __isoc99_vsscanf(char const * __s, char const * __format, __builtin_va_list __arg);
extern int fgetc(struct _IO_FILE * __stream);
extern int getc(struct _IO_FILE * __stream);
extern int getchar(void);
extern int getc_unlocked(struct _IO_FILE * __stream);
extern int getchar_unlocked(void);
extern int fgetc_unlocked(struct _IO_FILE * __stream);
extern int fputc(int __c, struct _IO_FILE * __stream);
extern int putc(int __c, struct _IO_FILE * __stream);
extern int putchar(int __c);
extern int fputc_unlocked(int __c, struct _IO_FILE * __stream);
extern int putc_unlocked(int __c, struct _IO_FILE * __stream);
extern int putchar_unlocked(int __c);
extern int getw(struct _IO_FILE * __stream);
extern int putw(int __w, struct _IO_FILE * __stream);
extern char * fgets(char * __s, int __n, struct _IO_FILE * __stream);
extern char * gets(char * __s);
extern long __getdelim(char * * __lineptr, unsigned long * __n, int __delimiter, struct _IO_FILE * __stream);
extern long getdelim(char * * __lineptr, unsigned long * __n, int __delimiter, struct _IO_FILE * __stream);
extern long getline(char * * __lineptr, unsigned long * __n, struct _IO_FILE * __stream);
extern int fputs(char const * __s, struct _IO_FILE * __stream);
extern int puts(char const * __s);
extern int ungetc(int __c, struct _IO_FILE * __stream);
extern unsigned long fread(void * __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * __stream);
extern unsigned long fwrite(void const * __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * __s);
extern unsigned long fread_unlocked(void * __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * __stream);
extern unsigned long fwrite_unlocked(void const * __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * __stream);
extern int fseek(struct _IO_FILE * __stream, long __off, int __whence);
extern long ftell(struct _IO_FILE * __stream);
extern void rewind(struct _IO_FILE * __stream);
extern int fseeko(struct _IO_FILE * __stream, long __off, int __whence);
extern long ftello(struct _IO_FILE * __stream);
extern int fgetpos(struct _IO_FILE * __stream, struct anon_type_4__G_fpos_t * __pos);
extern int fsetpos(struct _IO_FILE * __stream, struct anon_type_4__G_fpos_t const * __pos);
extern void clearerr(struct _IO_FILE * __stream);
extern int feof(struct _IO_FILE * __stream);
extern int ferror(struct _IO_FILE * __stream);
extern void clearerr_unlocked(struct _IO_FILE * __stream);
extern int feof_unlocked(struct _IO_FILE * __stream);
extern int ferror_unlocked(struct _IO_FILE * __stream);
extern void perror(char const * __s);
# 27 "/usr/linux-k1om-4.7/linux-k1om/usr/include/bits/sys_errlist.h"
extern int sys_nerr;
# 28 "/usr/linux-k1om-4.7/linux-k1om/usr/include/bits/sys_errlist.h"
extern char const * const sys_errlist[];
extern int fileno(struct _IO_FILE * __stream);
extern int fileno_unlocked(struct _IO_FILE * __stream);
extern struct _IO_FILE * popen(char const * __command, char const * __modes);
extern int pclose(struct _IO_FILE * __stream);
extern char * ctermid(char * __s);
extern void flockfile(struct _IO_FILE * __stream);
extern int ftrylockfile(struct _IO_FILE * __stream);
extern void funlockfile(struct _IO_FILE * __stream);
extern int select(int __nfds, struct anon_type_7_fd_set * __readfds, struct anon_type_7_fd_set * __writefds, struct anon_type_7_fd_set * __exceptfds, struct timeval * __timeout);
extern int pselect(int __nfds, struct anon_type_7_fd_set * __readfds, struct anon_type_7_fd_set * __writefds, struct anon_type_7_fd_set * __exceptfds, struct timespec const * __timeout, struct anon_type_6___sigset_t const * __sigmask);
extern int gettimeofday(struct timeval * __tv, struct timezone * __tz);
extern int settimeofday(struct timeval const * __tv, struct timezone const * __tz);
extern int adjtime(struct timeval const * __delta, struct timeval * __olddelta);
extern int getitimer(int __which, struct itimerval * __value);
extern int setitimer(int __which, struct itimerval const * __new, struct itimerval * __old);
extern int utimes(char const * __file, struct timeval const __tvp[2]);
extern int lutimes(char const * __file, struct timeval const __tvp[2]);
extern int futimes(int __fd, struct timeval const __tvp[2]);

#include "param.h"
#include <immintrin.h>

# 674 "/opt/intel//impi/5.0.1.035/mic/include/mpi.h"
extern struct MPIR_T_pvar_handle_s * const MPI_T_PVAR_ALL_HANDLES;
# 805 "/opt/intel//impi/5.0.1.035/mic/include/mpi.h"
extern int * MPI_F_STATUS_IGNORE;
# 806 "/opt/intel//impi/5.0.1.035/mic/include/mpi.h"
extern int * MPI_F_STATUSES_IGNORE;
# 807 "/opt/intel//impi/5.0.1.035/mic/include/mpi.h"
extern int * const MPI_UNWEIGHTED;
# 808 "/opt/intel//impi/5.0.1.035/mic/include/mpi.h"
extern int * const MPI_WEIGHTS_EMPTY;
int MPI_Send(void const * buf, int count, int datatype, int dest, int tag, int comm);
int MPI_Recv(void * buf, int count, int datatype, int source, int tag, int comm, struct MPI_Status * status);
int MPI_Get_count(struct MPI_Status const * status, int datatype, int * count);
int MPI_Bsend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int MPI_Ssend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int MPI_Rsend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int MPI_Buffer_attach(void * buffer, int size);
int MPI_Buffer_detach(void * buffer_addr, int * size);
int MPI_Isend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Ibsend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Issend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Irsend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Irecv(void * buf, int count, int datatype, int source, int tag, int comm, int * request);
int MPI_Wait(int * request, struct MPI_Status * status);
int MPI_Test(int * request, int * flag, struct MPI_Status * status);
int MPI_Request_free(int * request);
int MPI_Waitany(int count, int array_of_requests[], int * indx, struct MPI_Status * status);
int MPI_Testany(int count, int array_of_requests[], int * indx, int * flag, struct MPI_Status * status);
int MPI_Waitall(int count, int array_of_requests[], struct MPI_Status array_of_statuses[]);
int MPI_Testall(int count, int array_of_requests[], int * flag, struct MPI_Status array_of_statuses[]);
int MPI_Waitsome(int incount, int array_of_requests[], int * outcount, int array_of_indices[], struct MPI_Status array_of_statuses[]);
int MPI_Testsome(int incount, int array_of_requests[], int * outcount, int array_of_indices[], struct MPI_Status array_of_statuses[]);
int MPI_Iprobe(int source, int tag, int comm, int * flag, struct MPI_Status * status);
int MPI_Probe(int source, int tag, int comm, struct MPI_Status * status);
int MPI_Cancel(int * request);
int MPI_Test_cancelled(struct MPI_Status const * status, int * flag);
int MPI_Send_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Bsend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Ssend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Rsend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Recv_init(void * buf, int count, int datatype, int source, int tag, int comm, int * request);
int MPI_Start(int * request);
int MPI_Startall(int count, int array_of_requests[]);
int MPI_Sendrecv(void const * sendbuf, int sendcount, int sendtype, int dest, int sendtag, void * recvbuf, int recvcount, int recvtype, int source, int recvtag, int comm, struct MPI_Status * status);
int MPI_Sendrecv_replace(void * buf, int count, int datatype, int dest, int sendtag, int source, int recvtag, int comm, struct MPI_Status * status);
int MPI_Type_contiguous(int count, int oldtype, int * newtype);
int MPI_Type_vector(int count, int blocklength, int stride, int oldtype, int * newtype);
int MPI_Type_hvector(int count, int blocklength, long stride, int oldtype, int * newtype);
int MPI_Type_indexed(int count, int const * array_of_blocklengths, int const * array_of_displacements, int oldtype, int * newtype);
int MPI_Type_hindexed(int count, int const * array_of_blocklengths, long const * array_of_displacements, int oldtype, int * newtype);
int MPI_Type_struct(int count, int const * array_of_blocklengths, long const * array_of_displacements, int const * array_of_types, int * newtype);
int MPI_Address(void const * location, long * address);
int MPI_Type_extent(int datatype, long * extent);
int MPI_Type_size(int datatype, int * size);
int MPI_Type_lb(int datatype, long * displacement);
int MPI_Type_ub(int datatype, long * displacement);
int MPI_Type_commit(int * datatype);
int MPI_Type_free(int * datatype);
int MPI_Get_elements(struct MPI_Status const * status, int datatype, int * count);
int MPI_Pack(void const * inbuf, int incount, int datatype, void * outbuf, int outsize, int * position, int comm);
int MPI_Unpack(void const * inbuf, int insize, int * position, void * outbuf, int outcount, int datatype, int comm);
int MPI_Pack_size(int incount, int datatype, int comm, int * size);
int MPI_Barrier(int comm);
int MPI_Bcast(void * buffer, int count, int datatype, int root, int comm);
int MPI_Gather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int MPI_Gatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const * recvcounts, int const * displs, int recvtype, int root, int comm);
int MPI_Scatter(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int MPI_Scatterv(void const * sendbuf, int const * sendcounts, int const * displs, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int MPI_Allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int MPI_Allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const * recvcounts, int const * displs, int recvtype, int comm);
int MPI_Alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int MPI_Alltoallv(void const * sendbuf, int const * sendcounts, int const * sdispls, int sendtype, void * recvbuf, int const * recvcounts, int const * rdispls, int recvtype, int comm);
int MPI_Alltoallw(void const * sendbuf, int const sendcounts[], int const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], int const rdispls[], int const recvtypes[], int comm);
int MPI_Exscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int MPI_Reduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int root, int comm);
int MPI_Op_create(void (* user_fn)(void * , void * , int * , int * ), int commute, int * op);
int MPI_Op_free(int * op);
int MPI_Allreduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int MPI_Reduce_scatter(void const * sendbuf, void * recvbuf, int const recvcounts[], int datatype, int op, int comm);
int MPI_Scan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int MPI_Group_size(int group, int * size);
int MPI_Group_rank(int group, int * rank);
int MPI_Group_translate_ranks(int group1, int n, int const ranks1[], int group2, int ranks2[]);
int MPI_Group_compare(int group1, int group2, int * result);
int MPI_Comm_group(int comm, int * group);
int MPI_Group_union(int group1, int group2, int * newgroup);
int MPI_Group_intersection(int group1, int group2, int * newgroup);
int MPI_Group_difference(int group1, int group2, int * newgroup);
int MPI_Group_incl(int group, int n, int const ranks[], int * newgroup);
int MPI_Group_excl(int group, int n, int const ranks[], int * newgroup);
int MPI_Group_range_incl(int group, int n, int ranges[][3], int * newgroup);
int MPI_Group_range_excl(int group, int n, int ranges[][3], int * newgroup);
int MPI_Group_free(int * group);
int MPI_Comm_size(int comm, int * size);
int MPI_Comm_rank(int comm, int * rank);
int MPI_Comm_compare(int comm1, int comm2, int * result);
int MPI_Comm_dup(int comm, int * newcomm);
int MPI_Comm_dup_with_info(int comm, int info, int * newcomm);
int MPI_Comm_create(int comm, int group, int * newcomm);
int MPI_Comm_split(int comm, int color, int key, int * newcomm);
int MPI_Comm_free(int * comm);
int MPI_Comm_test_inter(int comm, int * flag);
int MPI_Comm_remote_size(int comm, int * size);
int MPI_Comm_remote_group(int comm, int * group);
int MPI_Intercomm_create(int local_comm, int local_leader, int peer_comm, int remote_leader, int tag, int * newintercomm);
int MPI_Intercomm_merge(int intercomm, int high, int * newintracomm);
int MPI_Keyval_create(int (* copy_fn)(int, int, void * , void * , void * , int * ), int (* delete_fn)(int, int, void * , void * ), int * keyval, void * extra_state);
int MPI_Keyval_free(int * keyval);
int MPI_Attr_put(int comm, int keyval, void * attribute_val);
int MPI_Attr_get(int comm, int keyval, void * attribute_val, int * flag);
int MPI_Attr_delete(int comm, int keyval);
int MPI_Topo_test(int comm, int * status);
int MPI_Cart_create(int comm_old, int ndims, int const dims[], int const periods[], int reorder, int * comm_cart);
int MPI_Dims_create(int nnodes, int ndims, int dims[]);
int MPI_Graph_create(int comm_old, int nnodes, int const indx[], int const edges[], int reorder, int * comm_graph);
int MPI_Graphdims_get(int comm, int * nnodes, int * nedges);
int MPI_Graph_get(int comm, int maxindex, int maxedges, int indx[], int edges[]);
int MPI_Cartdim_get(int comm, int * ndims);
int MPI_Cart_get(int comm, int maxdims, int dims[], int periods[], int coords[]);
int MPI_Cart_rank(int comm, int const coords[], int * rank);
int MPI_Cart_coords(int comm, int rank, int maxdims, int coords[]);
int MPI_Graph_neighbors_count(int comm, int rank, int * nneighbors);
int MPI_Graph_neighbors(int comm, int rank, int maxneighbors, int neighbors[]);
int MPI_Cart_shift(int comm, int direction, int disp, int * rank_source, int * rank_dest);
int MPI_Cart_sub(int comm, int const remain_dims[], int * newcomm);
int MPI_Cart_map(int comm, int ndims, int const dims[], int const periods[], int * newrank);
int MPI_Graph_map(int comm, int nnodes, int const indx[], int const edges[], int * newrank);
int MPI_Get_processor_name(char * name, int * resultlen);
int MPI_Get_version(int * version, int * subversion);
int MPI_Get_library_version(char * version, int * resultlen);
int MPI_Errhandler_create(void (* function)(int * , int * , ...), int * errhandler);
int MPI_Errhandler_set(int comm, int errhandler);
int MPI_Errhandler_get(int comm, int * errhandler);
int MPI_Errhandler_free(int * errhandler);
int MPI_Error_string(int errorcode, char * string, int * resultlen);
int MPI_Error_class(int errorcode, int * errorclass);
double MPI_Wtime(void);
double MPI_Wtick(void);
int MPI_Init(int * argc, char * * * argv);
int MPI_Finalize(void);
int MPI_Initialized(int * flag);
int MPI_Abort(int comm, int errorcode);
int MPI_Pcontrol(int const level, ...);
int MPIR_Dup_fn(int oldcomm, int keyval, void * extra_state, void * attribute_val_in, void * attribute_val_out, int * flag);
int MPI_Close_port(char const * port_name);
int MPI_Comm_accept(char const * port_name, int info, int root, int comm, int * newcomm);
int MPI_Comm_connect(char const * port_name, int info, int root, int comm, int * newcomm);
int MPI_Comm_disconnect(int * comm);
int MPI_Comm_get_parent(int * parent);
int MPI_Comm_join(int fd, int * intercomm);
int MPI_Comm_spawn(char const * command, char * argv[], int maxprocs, int info, int root, int comm, int * intercomm, int array_of_errcodes[]);
int MPI_Comm_spawn_multiple(int count, char * array_of_commands[], char * * array_of_argv[], int const array_of_maxprocs[], int const array_of_info[], int root, int comm, int * intercomm, int array_of_errcodes[]);
int MPI_Lookup_name(char const * service_name, int info, char * port_name);
int MPI_Open_port(int info, char * port_name);
int MPI_Publish_name(char const * service_name, int info, char const * port_name);
int MPI_Unpublish_name(char const * service_name, int info, char const * port_name);
int MPI_Comm_set_info(int comm, int info);
int MPI_Comm_get_info(int comm, int * info);
int MPI_Accumulate(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win);
int MPI_Get(void * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win);
int MPI_Put(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win);
int MPI_Win_complete(int win);
int MPI_Win_create(void * base, long size, int disp_unit, int info, int comm, int * win);
int MPI_Win_fence(int assert, int win);
int MPI_Win_free(int * win);
int MPI_Win_get_group(int win, int * group);
int MPI_Win_lock(int lock_type, int rank, int assert, int win);
int MPI_Win_post(int group, int assert, int win);
int MPI_Win_start(int group, int assert, int win);
int MPI_Win_test(int win, int * flag);
int MPI_Win_unlock(int rank, int win);
int MPI_Win_wait(int win);
int MPI_Win_allocate(long size, int disp_unit, int info, int comm, void * baseptr, int * win);
int MPI_Win_allocate_shared(long size, int disp_unit, int info, int comm, void * baseptr, int * win);
int MPI_Win_shared_query(int win, int rank, long * size, int * disp_unit, void * baseptr);
int MPI_Win_create_dynamic(int info, int comm, int * win);
int MPI_Win_attach(int win, void * base, long size);
int MPI_Win_detach(int win, void const * base);
int MPI_Win_get_info(int win, int * info_used);
int MPI_Win_set_info(int win, int info);
int MPI_Get_accumulate(void const * origin_addr, int origin_count, int origin_datatype, void * result_addr, int result_count, int result_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win);
int MPI_Fetch_and_op(void const * origin_addr, void * result_addr, int datatype, int target_rank, long target_disp, int op, int win);
int MPI_Compare_and_swap(void const * origin_addr, void const * compare_addr, void * result_addr, int datatype, int target_rank, long target_disp, int win);
int MPI_Rput(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win, int * request);
int MPI_Rget(void * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win, int * request);
int MPI_Raccumulate(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win, int * request);
int MPI_Rget_accumulate(void const * origin_addr, int origin_count, int origin_datatype, void * result_addr, int result_count, int result_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win, int * request);
int MPI_Win_lock_all(int assert, int win);
int MPI_Win_unlock_all(int win);
int MPI_Win_flush(int rank, int win);
int MPI_Win_flush_all(int win);
int MPI_Win_flush_local(int rank, int win);
int MPI_Win_flush_local_all(int win);
int MPI_Win_sync(int win);
int MPI_Add_error_class(int * errorclass);
int MPI_Add_error_code(int errorclass, int * errorcode);
int MPI_Add_error_string(int errorcode, char const * string);
int MPI_Comm_call_errhandler(int comm, int errorcode);
int MPI_Comm_create_keyval(int (* comm_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* comm_delete_attr_fn)(int, int, void * , void * ), int * comm_keyval, void * extra_state);
int MPI_Comm_delete_attr(int comm, int comm_keyval);
int MPI_Comm_free_keyval(int * comm_keyval);
int MPI_Comm_get_attr(int comm, int comm_keyval, void * attribute_val, int * flag);
int MPI_Comm_get_name(int comm, char * comm_name, int * resultlen);
int MPI_Comm_set_attr(int comm, int comm_keyval, void * attribute_val);
int MPI_Comm_set_name(int comm, char const * comm_name);
int MPI_File_call_errhandler(struct ADIOI_FileD * fh, int errorcode);
int MPI_Grequest_complete(int request);
int MPI_Grequest_start(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), void * extra_state, int * request);
int MPI_Init_thread(int * argc, char * * * argv, int required, int * provided);
int MPI_Is_thread_main(int * flag);
int MPI_Query_thread(int * provided);
int MPI_Status_set_cancelled(struct MPI_Status * status, int flag);
int MPI_Status_set_elements(struct MPI_Status * status, int datatype, int count);
int MPI_Type_create_keyval(int (* type_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* type_delete_attr_fn)(int, int, void * , void * ), int * type_keyval, void * extra_state);
int MPI_Type_delete_attr(int datatype, int type_keyval);
int MPI_Type_dup(int oldtype, int * newtype);
int MPI_Type_free_keyval(int * type_keyval);
int MPI_Type_get_attr(int datatype, int type_keyval, void * attribute_val, int * flag);
int MPI_Type_get_contents(int datatype, int max_integers, int max_addresses, int max_datatypes, int array_of_integers[], long array_of_addresses[], int array_of_datatypes[]);
int MPI_Type_get_envelope(int datatype, int * num_integers, int * num_addresses, int * num_datatypes, int * combiner);
int MPI_Type_get_name(int datatype, char * type_name, int * resultlen);
int MPI_Type_set_attr(int datatype, int type_keyval, void * attribute_val);
int MPI_Type_set_name(int datatype, char const * type_name);
int MPI_Type_match_size(int typeclass, int size, int * datatype);
int MPI_Win_call_errhandler(int win, int errorcode);
int MPI_Win_create_keyval(int (* win_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* win_delete_attr_fn)(int, int, void * , void * ), int * win_keyval, void * extra_state);
int MPI_Win_delete_attr(int win, int win_keyval);
int MPI_Win_free_keyval(int * win_keyval);
int MPI_Win_get_attr(int win, int win_keyval, void * attribute_val, int * flag);
int MPI_Win_get_name(int win, char * win_name, int * resultlen);
int MPI_Win_set_attr(int win, int win_keyval, void * attribute_val);
int MPI_Win_set_name(int win, char const * win_name);
int MPI_Alloc_mem(long size, int info, void * baseptr);
int MPI_Comm_create_errhandler(void (* comm_errhandler_fn)(int * , int * , ...), int * errhandler);
int MPI_Comm_get_errhandler(int comm, int * errhandler);
int MPI_Comm_set_errhandler(int comm, int errhandler);
int MPI_File_create_errhandler(void (* file_errhandler_fn)(struct ADIOI_FileD * * , int * , ...), int * errhandler);
int MPI_File_get_errhandler(struct ADIOI_FileD * file, int * errhandler);
int MPI_File_set_errhandler(struct ADIOI_FileD * file, int errhandler);
int MPI_Finalized(int * flag);
int MPI_Free_mem(void * base);
int MPI_Get_address(void const * location, long * address);
int MPI_Info_create(int * info);
int MPI_Info_delete(int info, char const * key);
int MPI_Info_dup(int info, int * newinfo);
int MPI_Info_free(int * info);
int MPI_Info_get(int info, char const * key, int valuelen, char * value, int * flag);
int MPI_Info_get_nkeys(int info, int * nkeys);
int MPI_Info_get_nthkey(int info, int n, char * key);
int MPI_Info_get_valuelen(int info, char const * key, int * valuelen, int * flag);
int MPI_Info_set(int info, char const * key, char const * value);
int MPI_Pack_external(char const datarep[], void const * inbuf, int incount, int datatype, void * outbuf, long outsize, long * position);
int MPI_Pack_external_size(char const datarep[], int incount, int datatype, long * size);
int MPI_Request_get_status(int request, int * flag, struct MPI_Status * status);
int MPI_Status_c2f(struct MPI_Status const * c_status, int * f_status);
int MPI_Status_f2c(int const * f_status, struct MPI_Status * c_status);
int MPI_Type_create_darray(int size, int rank, int ndims, int const array_of_gsizes[], int const array_of_distribs[], int const array_of_dargs[], int const array_of_psizes[], int order, int oldtype, int * newtype);
int MPI_Type_create_hindexed(int count, int const array_of_blocklengths[], long const array_of_displacements[], int oldtype, int * newtype);
int MPI_Type_create_hvector(int count, int blocklength, long stride, int oldtype, int * newtype);
int MPI_Type_create_indexed_block(int count, int blocklength, int const array_of_displacements[], int oldtype, int * newtype);
int MPI_Type_create_hindexed_block(int count, int blocklength, long const array_of_displacements[], int oldtype, int * newtype);
int MPI_Type_create_resized(int oldtype, long lb, long extent, int * newtype);
int MPI_Type_create_struct(int count, int const array_of_blocklengths[], long const array_of_displacements[], int const array_of_types[], int * newtype);
int MPI_Type_create_subarray(int ndims, int const array_of_sizes[], int const array_of_subsizes[], int const array_of_starts[], int order, int oldtype, int * newtype);
int MPI_Type_get_extent(int datatype, long * lb, long * extent);
int MPI_Type_get_true_extent(int datatype, long * true_lb, long * true_extent);
int MPI_Unpack_external(char const datarep[], void const * inbuf, long insize, long * position, void * outbuf, int outcount, int datatype);
int MPI_Win_create_errhandler(void (* win_errhandler_fn)(int * , int * , ...), int * errhandler);
int MPI_Win_get_errhandler(int win, int * errhandler);
int MPI_Win_set_errhandler(int win, int errhandler);
int MPI_Type_create_f90_integer(int range, int * newtype);
int MPI_Type_create_f90_real(int precision, int range, int * newtype);
int MPI_Type_create_f90_complex(int precision, int range, int * newtype);
int MPI_Reduce_local(void const * inbuf, void * inoutbuf, int count, int datatype, int op);
int MPI_Op_commutative(int op, int * commute);
int MPI_Reduce_scatter_block(void const * sendbuf, void * recvbuf, int recvcount, int datatype, int op, int comm);
int MPI_Dist_graph_create_adjacent(int comm_old, int indegree, int const sources[], int const sourceweights[], int outdegree, int const destinations[], int const destweights[], int info, int reorder, int * comm_dist_graph);
int MPI_Dist_graph_create(int comm_old, int n, int const sources[], int const degrees[], int const destinations[], int const weights[], int info, int reorder, int * comm_dist_graph);
int MPI_Dist_graph_neighbors_count(int comm, int * indegree, int * outdegree, int * weighted);
int MPI_Dist_graph_neighbors(int comm, int maxindegree, int sources[], int sourceweights[], int maxoutdegree, int destinations[], int destweights[]);
int MPI_Improbe(int source, int tag, int comm, int * flag, int * message, struct MPI_Status * status);
int MPI_Imrecv(void * buf, int count, int datatype, int * message, int * request);
int MPI_Mprobe(int source, int tag, int comm, int * message, struct MPI_Status * status);
int MPI_Mrecv(void * buf, int count, int datatype, int * message, struct MPI_Status * status);
int MPI_Comm_idup(int comm, int * newcomm, int * request);
int MPI_Ibarrier(int comm, int * request);
int MPI_Ibcast(void * buffer, int count, int datatype, int root, int comm, int * request);
int MPI_Igather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int MPI_Igatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int root, int comm, int * request);
int MPI_Iscatter(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int MPI_Iscatterv(void const * sendbuf, int const sendcounts[], int const displs[], int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int MPI_Iallgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int MPI_Iallgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm, int * request);
int MPI_Ialltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int MPI_Ialltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm, int * request);
int MPI_Ialltoallw(void const * sendbuf, int const sendcounts[], int const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], int const rdispls[], int const recvtypes[], int comm, int * request);
int MPI_Ireduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int root, int comm, int * request);
int MPI_Iallreduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int MPI_Ireduce_scatter(void const * sendbuf, void * recvbuf, int const recvcounts[], int datatype, int op, int comm, int * request);
int MPI_Ireduce_scatter_block(void const * sendbuf, void * recvbuf, int recvcount, int datatype, int op, int comm, int * request);
int MPI_Iscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int MPI_Iexscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int MPI_Ineighbor_allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int MPI_Ineighbor_allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm, int * request);
int MPI_Ineighbor_alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int MPI_Ineighbor_alltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm, int * request);
int MPI_Ineighbor_alltoallw(void const * sendbuf, int const sendcounts[], long const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], long const rdispls[], int const recvtypes[], int comm, int * request);
int MPI_Neighbor_allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int MPI_Neighbor_allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm);
int MPI_Neighbor_alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int MPI_Neighbor_alltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm);
int MPI_Neighbor_alltoallw(void const * sendbuf, int const sendcounts[], long const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], long const rdispls[], int const recvtypes[], int comm);
int MPI_Comm_split_type(int comm, int split_type, int key, int info, int * newcomm);
int MPI_Get_elements_x(struct MPI_Status const * status, int datatype, long long * count);
int MPI_Status_set_elements_x(struct MPI_Status * status, int datatype, long long count);
int MPI_Type_get_extent_x(int datatype, long long * lb, long long * extent);
int MPI_Type_get_true_extent_x(int datatype, long long * lb, long long * extent);
int MPI_Type_size_x(int datatype, long long * size);
int MPI_Comm_create_group(int comm, int group, int tag, int * newcomm);
int MPIX_Comm_group_failed(int comm, int * failed_group);
int MPIX_Comm_remote_group_failed(int comm, int * failed_group);
int MPIX_Comm_reenable_anysource(int comm, int * failed_group);
int MPI_T_init_thread(int required, int * provided);
int MPI_T_finalize(void);
int MPI_T_enum_get_info(struct MPIR_T_enum_s * enumtype, int * num, char * name, int * name_len);
int MPI_T_enum_get_item(struct MPIR_T_enum_s * enumtype, int indx, int * value, char * name, int * name_len);
int MPI_T_cvar_get_num(int * num_cvar);
int MPI_T_cvar_get_info(int cvar_index, char * name, int * name_len, int * verbosity, int * datatype, struct MPIR_T_enum_s * * enumtype, char * desc, int * desc_len, int * binding, int * scope);
int MPI_T_cvar_handle_alloc(int cvar_index, void * obj_handle, struct MPIR_T_cvar_handle_s * * handle, int * count);
int MPI_T_cvar_handle_free(struct MPIR_T_cvar_handle_s * * handle);
int MPI_T_cvar_read(struct MPIR_T_cvar_handle_s * handle, void * buf);
int MPI_T_cvar_write(struct MPIR_T_cvar_handle_s * handle, void * buf);
int MPI_T_pvar_get_num(int * num_pvar);
int MPI_T_pvar_get_info(int pvar_index, char * name, int * name_len, int * verbosity, int * var_class, int * datatype, struct MPIR_T_enum_s * * enumtype, char * desc, int * desc_len, int * binding, int * readonly, int * continuous, int * atomic);
int MPI_T_pvar_session_create(struct MPIR_T_pvar_session_s * * session);
int MPI_T_pvar_session_free(struct MPIR_T_pvar_session_s * * session);
int MPI_T_pvar_handle_alloc(struct MPIR_T_pvar_session_s * session, int pvar_index, void * obj_handle, struct MPIR_T_pvar_handle_s * * handle, int * count);
int MPI_T_pvar_handle_free(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * * handle);
int MPI_T_pvar_start(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int MPI_T_pvar_stop(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int MPI_T_pvar_read(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int MPI_T_pvar_write(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int MPI_T_pvar_reset(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int MPI_T_pvar_readreset(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int MPI_T_category_get_num(int * num_cat);
int MPI_T_category_get_info(int cat_index, char * name, int * name_len, char * desc, int * desc_len, int * num_cvars, int * num_pvars, int * num_categories);
int MPI_T_category_get_cvars(int cat_index, int len, int indices[]);
int MPI_T_category_get_pvars(int cat_index, int len, int indices[]);
int MPI_T_category_get_categories(int cat_index, int len, int indices[]);
int MPI_T_category_changed(int * stamp);
int PMPI_Send(void const * buf, int count, int datatype, int dest, int tag, int comm);
int PMPI_Recv(void * buf, int count, int datatype, int source, int tag, int comm, struct MPI_Status * status);
int PMPI_Get_count(struct MPI_Status const * status, int datatype, int * count);
int PMPI_Bsend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int PMPI_Ssend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int PMPI_Rsend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int PMPI_Buffer_attach(void * buffer, int size);
int PMPI_Buffer_detach(void * buffer_addr, int * size);
int PMPI_Isend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Ibsend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Issend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Irsend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Irecv(void * buf, int count, int datatype, int source, int tag, int comm, int * request);
int PMPI_Wait(int * request, struct MPI_Status * status);
int PMPI_Test(int * request, int * flag, struct MPI_Status * status);
int PMPI_Request_free(int * request);
int PMPI_Waitany(int count, int array_of_requests[], int * indx, struct MPI_Status * status);
int PMPI_Testany(int count, int array_of_requests[], int * indx, int * flag, struct MPI_Status * status);
int PMPI_Waitall(int count, int array_of_requests[], struct MPI_Status array_of_statuses[]);
int PMPI_Testall(int count, int array_of_requests[], int * flag, struct MPI_Status array_of_statuses[]);
int PMPI_Waitsome(int incount, int array_of_requests[], int * outcount, int array_of_indices[], struct MPI_Status array_of_statuses[]);
int PMPI_Testsome(int incount, int array_of_requests[], int * outcount, int array_of_indices[], struct MPI_Status array_of_statuses[]);
int PMPI_Iprobe(int source, int tag, int comm, int * flag, struct MPI_Status * status);
int PMPI_Probe(int source, int tag, int comm, struct MPI_Status * status);
int PMPI_Cancel(int * request);
int PMPI_Test_cancelled(struct MPI_Status const * status, int * flag);
int PMPI_Send_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Bsend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Ssend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Rsend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Recv_init(void * buf, int count, int datatype, int source, int tag, int comm, int * request);
int PMPI_Start(int * request);
int PMPI_Startall(int count, int array_of_requests[]);
int PMPI_Sendrecv(void const * sendbuf, int sendcount, int sendtype, int dest, int sendtag, void * recvbuf, int recvcount, int recvtype, int source, int recvtag, int comm, struct MPI_Status * status);
int PMPI_Sendrecv_replace(void * buf, int count, int datatype, int dest, int sendtag, int source, int recvtag, int comm, struct MPI_Status * status);
int PMPI_Type_contiguous(int count, int oldtype, int * newtype);
int PMPI_Type_vector(int count, int blocklength, int stride, int oldtype, int * newtype);
int PMPI_Type_hvector(int count, int blocklength, long stride, int oldtype, int * newtype);
int PMPI_Type_indexed(int count, int const * array_of_blocklengths, int const * array_of_displacements, int oldtype, int * newtype);
int PMPI_Type_hindexed(int count, int const * array_of_blocklengths, long const * array_of_displacements, int oldtype, int * newtype);
int PMPI_Type_struct(int count, int const * array_of_blocklengths, long const * array_of_displacements, int const * array_of_types, int * newtype);
int PMPI_Address(void const * location, long * address);
int PMPI_Type_extent(int datatype, long * extent);
int PMPI_Type_size(int datatype, int * size);
int PMPI_Type_lb(int datatype, long * displacement);
int PMPI_Type_ub(int datatype, long * displacement);
int PMPI_Type_commit(int * datatype);
int PMPI_Type_free(int * datatype);
int PMPI_Get_elements(struct MPI_Status const * status, int datatype, int * count);
int PMPI_Pack(void const * inbuf, int incount, int datatype, void * outbuf, int outsize, int * position, int comm);
int PMPI_Unpack(void const * inbuf, int insize, int * position, void * outbuf, int outcount, int datatype, int comm);
int PMPI_Pack_size(int incount, int datatype, int comm, int * size);
int PMPI_Barrier(int comm);
int PMPI_Bcast(void * buffer, int count, int datatype, int root, int comm);
int PMPI_Gather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int PMPI_Gatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const * recvcounts, int const * displs, int recvtype, int root, int comm);
int PMPI_Scatter(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int PMPI_Scatterv(void const * sendbuf, int const * sendcounts, int const * displs, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int PMPI_Allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int PMPI_Allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const * recvcounts, int const * displs, int recvtype, int comm);
int PMPI_Alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int PMPI_Alltoallv(void const * sendbuf, int const * sendcounts, int const * sdispls, int sendtype, void * recvbuf, int const * recvcounts, int const * rdispls, int recvtype, int comm);
int PMPI_Alltoallw(void const * sendbuf, int const sendcounts[], int const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], int const rdispls[], int const recvtypes[], int comm);
int PMPI_Exscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int PMPI_Reduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int root, int comm);
int PMPI_Op_create(void (* user_fn)(void * , void * , int * , int * ), int commute, int * op);
int PMPI_Op_free(int * op);
int PMPI_Allreduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int PMPI_Reduce_scatter(void const * sendbuf, void * recvbuf, int const recvcounts[], int datatype, int op, int comm);
int PMPI_Scan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int PMPI_Group_size(int group, int * size);
int PMPI_Group_rank(int group, int * rank);
int PMPI_Group_translate_ranks(int group1, int n, int const ranks1[], int group2, int ranks2[]);
int PMPI_Group_compare(int group1, int group2, int * result);
int PMPI_Comm_group(int comm, int * group);
int PMPI_Group_union(int group1, int group2, int * newgroup);
int PMPI_Group_intersection(int group1, int group2, int * newgroup);
int PMPI_Group_difference(int group1, int group2, int * newgroup);
int PMPI_Group_incl(int group, int n, int const ranks[], int * newgroup);
int PMPI_Group_excl(int group, int n, int const ranks[], int * newgroup);
int PMPI_Group_range_incl(int group, int n, int ranges[][3], int * newgroup);
int PMPI_Group_range_excl(int group, int n, int ranges[][3], int * newgroup);
int PMPI_Group_free(int * group);
int PMPI_Comm_size(int comm, int * size);
int PMPI_Comm_rank(int comm, int * rank);
int PMPI_Comm_compare(int comm1, int comm2, int * result);
int PMPI_Comm_dup(int comm, int * newcomm);
int PMPI_Comm_dup_with_info(int comm, int info, int * newcomm);
int PMPI_Comm_create(int comm, int group, int * newcomm);
int PMPI_Comm_split(int comm, int color, int key, int * newcomm);
int PMPI_Comm_free(int * comm);
int PMPI_Comm_test_inter(int comm, int * flag);
int PMPI_Comm_remote_size(int comm, int * size);
int PMPI_Comm_remote_group(int comm, int * group);
int PMPI_Intercomm_create(int local_comm, int local_leader, int peer_comm, int remote_leader, int tag, int * newintercomm);
int PMPI_Intercomm_merge(int intercomm, int high, int * newintracomm);
int PMPI_Keyval_create(int (* copy_fn)(int, int, void * , void * , void * , int * ), int (* delete_fn)(int, int, void * , void * ), int * keyval, void * extra_state);
int PMPI_Keyval_free(int * keyval);
int PMPI_Attr_put(int comm, int keyval, void * attribute_val);
int PMPI_Attr_get(int comm, int keyval, void * attribute_val, int * flag);
int PMPI_Attr_delete(int comm, int keyval);
int PMPI_Topo_test(int comm, int * status);
int PMPI_Cart_create(int comm_old, int ndims, int const dims[], int const periods[], int reorder, int * comm_cart);
int PMPI_Dims_create(int nnodes, int ndims, int dims[]);
int PMPI_Graph_create(int comm_old, int nnodes, int const indx[], int const edges[], int reorder, int * comm_graph);
int PMPI_Graphdims_get(int comm, int * nnodes, int * nedges);
int PMPI_Graph_get(int comm, int maxindex, int maxedges, int indx[], int edges[]);
int PMPI_Cartdim_get(int comm, int * ndims);
int PMPI_Cart_get(int comm, int maxdims, int dims[], int periods[], int coords[]);
int PMPI_Cart_rank(int comm, int const coords[], int * rank);
int PMPI_Cart_coords(int comm, int rank, int maxdims, int coords[]);
int PMPI_Graph_neighbors_count(int comm, int rank, int * nneighbors);
int PMPI_Graph_neighbors(int comm, int rank, int maxneighbors, int neighbors[]);
int PMPI_Cart_shift(int comm, int direction, int disp, int * rank_source, int * rank_dest);
int PMPI_Cart_sub(int comm, int const remain_dims[], int * newcomm);
int PMPI_Cart_map(int comm, int ndims, int const dims[], int const periods[], int * newrank);
int PMPI_Graph_map(int comm, int nnodes, int const indx[], int const edges[], int * newrank);
int PMPI_Get_processor_name(char * name, int * resultlen);
int PMPI_Get_version(int * version, int * subversion);
int PMPI_Get_library_version(char * version, int * resultlen);
int PMPI_Errhandler_create(void (* function)(int * , int * , ...), int * errhandler);
int PMPI_Errhandler_set(int comm, int errhandler);
int PMPI_Errhandler_get(int comm, int * errhandler);
int PMPI_Errhandler_free(int * errhandler);
int PMPI_Error_string(int errorcode, char * string, int * resultlen);
int PMPI_Error_class(int errorcode, int * errorclass);
double PMPI_Wtime(void);
double PMPI_Wtick(void);
int PMPI_Init(int * argc, char * * * argv);
int PMPI_Finalize(void);
int PMPI_Initialized(int * flag);
int PMPI_Abort(int comm, int errorcode);
int PMPI_Pcontrol(int const level, ...);
int PMPI_Close_port(char const * port_name);
int PMPI_Comm_accept(char const * port_name, int info, int root, int comm, int * newcomm);
int PMPI_Comm_connect(char const * port_name, int info, int root, int comm, int * newcomm);
int PMPI_Comm_disconnect(int * comm);
int PMPI_Comm_get_parent(int * parent);
int PMPI_Comm_join(int fd, int * intercomm);
int PMPI_Comm_spawn(char const * command, char * argv[], int maxprocs, int info, int root, int comm, int * intercomm, int array_of_errcodes[]);
int PMPI_Comm_spawn_multiple(int count, char * array_of_commands[], char * * array_of_argv[], int const array_of_maxprocs[], int const array_of_info[], int root, int comm, int * intercomm, int array_of_errcodes[]);
int PMPI_Lookup_name(char const * service_name, int info, char * port_name);
int PMPI_Open_port(int info, char * port_name);
int PMPI_Publish_name(char const * service_name, int info, char const * port_name);
int PMPI_Unpublish_name(char const * service_name, int info, char const * port_name);
int PMPI_Comm_set_info(int comm, int info);
int PMPI_Comm_get_info(int comm, int * info);
int PMPI_Accumulate(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win);
int PMPI_Get(void * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win);
int PMPI_Put(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win);
int PMPI_Win_complete(int win);
int PMPI_Win_create(void * base, long size, int disp_unit, int info, int comm, int * win);
int PMPI_Win_fence(int assert, int win);
int PMPI_Win_free(int * win);
int PMPI_Win_get_group(int win, int * group);
int PMPI_Win_lock(int lock_type, int rank, int assert, int win);
int PMPI_Win_post(int group, int assert, int win);
int PMPI_Win_start(int group, int assert, int win);
int PMPI_Win_test(int win, int * flag);
int PMPI_Win_unlock(int rank, int win);
int PMPI_Win_wait(int win);
int PMPI_Win_allocate(long size, int disp_unit, int info, int comm, void * baseptr, int * win);
int PMPI_Win_allocate_shared(long size, int disp_unit, int info, int comm, void * baseptr, int * win);
int PMPI_Win_shared_query(int win, int rank, long * size, int * disp_unit, void * baseptr);
int PMPI_Win_create_dynamic(int info, int comm, int * win);
int PMPI_Win_attach(int win, void * base, long size);
int PMPI_Win_detach(int win, void const * base);
int PMPI_Win_get_info(int win, int * info_used);
int PMPI_Win_set_info(int win, int info);
int PMPI_Get_accumulate(void const * origin_addr, int origin_count, int origin_datatype, void * result_addr, int result_count, int result_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win);
int PMPI_Fetch_and_op(void const * origin_addr, void * result_addr, int datatype, int target_rank, long target_disp, int op, int win);
int PMPI_Compare_and_swap(void const * origin_addr, void const * compare_addr, void * result_addr, int datatype, int target_rank, long target_disp, int win);
int PMPI_Rput(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win, int * request);
int PMPI_Rget(void * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win, int * request);
int PMPI_Raccumulate(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win, int * request);
int PMPI_Rget_accumulate(void const * origin_addr, int origin_count, int origin_datatype, void * result_addr, int result_count, int result_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win, int * request);
int PMPI_Win_lock_all(int assert, int win);
int PMPI_Win_unlock_all(int win);
int PMPI_Win_flush(int rank, int win);
int PMPI_Win_flush_all(int win);
int PMPI_Win_flush_local(int rank, int win);
int PMPI_Win_flush_local_all(int win);
int PMPI_Win_sync(int win);
int PMPI_Add_error_class(int * errorclass);
int PMPI_Add_error_code(int errorclass, int * errorcode);
int PMPI_Add_error_string(int errorcode, char const * string);
int PMPI_Comm_call_errhandler(int comm, int errorcode);
int PMPI_Comm_create_keyval(int (* comm_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* comm_delete_attr_fn)(int, int, void * , void * ), int * comm_keyval, void * extra_state);
int PMPI_Comm_delete_attr(int comm, int comm_keyval);
int PMPI_Comm_free_keyval(int * comm_keyval);
int PMPI_Comm_get_attr(int comm, int comm_keyval, void * attribute_val, int * flag);
int PMPI_Comm_get_name(int comm, char * comm_name, int * resultlen);
int PMPI_Comm_set_attr(int comm, int comm_keyval, void * attribute_val);
int PMPI_Comm_set_name(int comm, char const * comm_name);
int PMPI_File_call_errhandler(struct ADIOI_FileD * fh, int errorcode);
int PMPI_Grequest_complete(int request);
int PMPI_Grequest_start(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), void * extra_state, int * request);
int PMPI_Init_thread(int * argc, char * * * argv, int required, int * provided);
int PMPI_Is_thread_main(int * flag);
int PMPI_Query_thread(int * provided);
int PMPI_Status_set_cancelled(struct MPI_Status * status, int flag);
int PMPI_Status_set_elements(struct MPI_Status * status, int datatype, int count);
int PMPI_Type_create_keyval(int (* type_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* type_delete_attr_fn)(int, int, void * , void * ), int * type_keyval, void * extra_state);
int PMPI_Type_delete_attr(int datatype, int type_keyval);
int PMPI_Type_dup(int oldtype, int * newtype);
int PMPI_Type_free_keyval(int * type_keyval);
int PMPI_Type_get_attr(int datatype, int type_keyval, void * attribute_val, int * flag);
int PMPI_Type_get_contents(int datatype, int max_integers, int max_addresses, int max_datatypes, int array_of_integers[], long array_of_addresses[], int array_of_datatypes[]);
int PMPI_Type_get_envelope(int datatype, int * num_integers, int * num_addresses, int * num_datatypes, int * combiner);
int PMPI_Type_get_name(int datatype, char * type_name, int * resultlen);
int PMPI_Type_set_attr(int datatype, int type_keyval, void * attribute_val);
int PMPI_Type_set_name(int datatype, char const * type_name);
int PMPI_Type_match_size(int typeclass, int size, int * datatype);
int PMPI_Win_call_errhandler(int win, int errorcode);
int PMPI_Win_create_keyval(int (* win_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* win_delete_attr_fn)(int, int, void * , void * ), int * win_keyval, void * extra_state);
int PMPI_Win_delete_attr(int win, int win_keyval);
int PMPI_Win_free_keyval(int * win_keyval);
int PMPI_Win_get_attr(int win, int win_keyval, void * attribute_val, int * flag);
int PMPI_Win_get_name(int win, char * win_name, int * resultlen);
int PMPI_Win_set_attr(int win, int win_keyval, void * attribute_val);
int PMPI_Win_set_name(int win, char const * win_name);
int PMPI_Alloc_mem(long size, int info, void * baseptr);
int PMPI_Comm_create_errhandler(void (* comm_errhandler_fn)(int * , int * , ...), int * errhandler);
int PMPI_Comm_get_errhandler(int comm, int * errhandler);
int PMPI_Comm_set_errhandler(int comm, int errhandler);
int PMPI_File_create_errhandler(void (* file_errhandler_fn)(struct ADIOI_FileD * * , int * , ...), int * errhandler);
int PMPI_File_get_errhandler(struct ADIOI_FileD * file, int * errhandler);
int PMPI_File_set_errhandler(struct ADIOI_FileD * file, int errhandler);
int PMPI_Finalized(int * flag);
int PMPI_Free_mem(void * base);
int PMPI_Get_address(void const * location, long * address);
int PMPI_Info_create(int * info);
int PMPI_Info_delete(int info, char const * key);
int PMPI_Info_dup(int info, int * newinfo);
int PMPI_Info_free(int * info);
int PMPI_Info_get(int info, char const * key, int valuelen, char * value, int * flag);
int PMPI_Info_get_nkeys(int info, int * nkeys);
int PMPI_Info_get_nthkey(int info, int n, char * key);
int PMPI_Info_get_valuelen(int info, char const * key, int * valuelen, int * flag);
int PMPI_Info_set(int info, char const * key, char const * value);
int PMPI_Pack_external(char const datarep[], void const * inbuf, int incount, int datatype, void * outbuf, long outsize, long * position);
int PMPI_Pack_external_size(char const datarep[], int incount, int datatype, long * size);
int PMPI_Request_get_status(int request, int * flag, struct MPI_Status * status);
int PMPI_Status_c2f(struct MPI_Status const * c_status, int * f_status);
int PMPI_Status_f2c(int const * f_status, struct MPI_Status * c_status);
int PMPI_Type_create_darray(int size, int rank, int ndims, int const array_of_gsizes[], int const array_of_distribs[], int const array_of_dargs[], int const array_of_psizes[], int order, int oldtype, int * newtype);
int PMPI_Type_create_hindexed(int count, int const array_of_blocklengths[], long const array_of_displacements[], int oldtype, int * newtype);
int PMPI_Type_create_hvector(int count, int blocklength, long stride, int oldtype, int * newtype);
int PMPI_Type_create_indexed_block(int count, int blocklength, int const array_of_displacements[], int oldtype, int * newtype);
int PMPI_Type_create_hindexed_block(int count, int blocklength, long const array_of_displacements[], int oldtype, int * newtype);
int PMPI_Type_create_resized(int oldtype, long lb, long extent, int * newtype);
int PMPI_Type_create_struct(int count, int const array_of_blocklengths[], long const array_of_displacements[], int const array_of_types[], int * newtype);
int PMPI_Type_create_subarray(int ndims, int const array_of_sizes[], int const array_of_subsizes[], int const array_of_starts[], int order, int oldtype, int * newtype);
int PMPI_Type_get_extent(int datatype, long * lb, long * extent);
int PMPI_Type_get_true_extent(int datatype, long * true_lb, long * true_extent);
int PMPI_Unpack_external(char const datarep[], void const * inbuf, long insize, long * position, void * outbuf, int outcount, int datatype);
int PMPI_Win_create_errhandler(void (* win_errhandler_fn)(int * , int * , ...), int * errhandler);
int PMPI_Win_get_errhandler(int win, int * errhandler);
int PMPI_Win_set_errhandler(int win, int errhandler);
int PMPI_Type_create_f90_integer(int r, int * newtype);
int PMPI_Type_create_f90_real(int p, int r, int * newtype);
int PMPI_Type_create_f90_complex(int p, int r, int * newtype);
int PMPI_Reduce_local(void const * inbuf, void * inoutbuf, int count, int datatype, int op);
int PMPI_Op_commutative(int op, int * commute);
int PMPI_Reduce_scatter_block(void const * sendbuf, void * recvbuf, int recvcount, int datatype, int op, int comm);
int PMPI_Dist_graph_create_adjacent(int comm_old, int indegree, int const sources[], int const sourceweights[], int outdegree, int const destinations[], int const destweights[], int info, int reorder, int * comm_dist_graph);
int PMPI_Dist_graph_create(int comm_old, int n, int const sources[], int const degrees[], int const destinations[], int const weights[], int info, int reorder, int * comm_dist_graph);
int PMPI_Dist_graph_neighbors_count(int comm, int * indegree, int * outdegree, int * weighted);
int PMPI_Dist_graph_neighbors(int comm, int maxindegree, int sources[], int sourceweights[], int maxoutdegree, int destinations[], int destweights[]);
int PMPI_Improbe(int source, int tag, int comm, int * flag, int * message, struct MPI_Status * status);
int PMPI_Imrecv(void * buf, int count, int datatype, int * message, int * request);
int PMPI_Mprobe(int source, int tag, int comm, int * message, struct MPI_Status * status);
int PMPI_Mrecv(void * buf, int count, int datatype, int * message, struct MPI_Status * status);
int PMPI_Comm_idup(int comm, int * newcomm, int * request);
int PMPI_Ibarrier(int comm, int * request);
int PMPI_Ibcast(void * buffer, int count, int datatype, int root, int comm, int * request);
int PMPI_Igather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int PMPI_Igatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int root, int comm, int * request);
int PMPI_Iscatter(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int PMPI_Iscatterv(void const * sendbuf, int const sendcounts[], int const displs[], int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int PMPI_Iallgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int PMPI_Iallgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm, int * request);
int PMPI_Ialltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int PMPI_Ialltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm, int * request);
int PMPI_Ialltoallw(void const * sendbuf, int const sendcounts[], int const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], int const rdispls[], int const recvtypes[], int comm, int * request);
int PMPI_Ireduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int root, int comm, int * request);
int PMPI_Iallreduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int PMPI_Ireduce_scatter(void const * sendbuf, void * recvbuf, int const recvcounts[], int datatype, int op, int comm, int * request);
int PMPI_Ireduce_scatter_block(void const * sendbuf, void * recvbuf, int recvcount, int datatype, int op, int comm, int * request);
int PMPI_Iscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int PMPI_Iexscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int PMPI_Ineighbor_allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int PMPI_Ineighbor_allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm, int * request);
int PMPI_Ineighbor_alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int PMPI_Ineighbor_alltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm, int * request);
int PMPI_Ineighbor_alltoallw(void const * sendbuf, int const sendcounts[], long const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], long const rdispls[], int const recvtypes[], int comm, int * request);
int PMPI_Neighbor_allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int PMPI_Neighbor_allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm);
int PMPI_Neighbor_alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int PMPI_Neighbor_alltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm);
int PMPI_Neighbor_alltoallw(void const * sendbuf, int const sendcounts[], long const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], long const rdispls[], int const recvtypes[], int comm);
int PMPI_Comm_split_type(int comm, int split_type, int key, int info, int * newcomm);
int PMPI_Comm_create_group(int comm, int group, int tag, int * newcomm);
int PMPI_Get_elements_x(struct MPI_Status const * status, int datatype, long long * count);
int PMPI_Status_set_elements_x(struct MPI_Status * status, int datatype, long long count);
int PMPI_Type_get_extent_x(int datatype, long long * lb, long long * extent);
int PMPI_Type_get_true_extent_x(int datatype, long long * lb, long long * extent);
int PMPI_Type_size_x(int datatype, long long * size);
int PMPIX_Comm_group_failed(int comm, int * failed_group);
int PMPIX_Comm_remote_group_failed(int comm, int * failed_group);
int PMPIX_Comm_reenable_anysource(int comm, int * failed_group);
int PMPI_T_init_thread(int required, int * provided);
int PMPI_T_finalize(void);
int PMPI_T_enum_get_info(struct MPIR_T_enum_s * enumtype, int * num, char * name, int * name_len);
int PMPI_T_enum_get_item(struct MPIR_T_enum_s * enumtype, int indx, int * value, char * name, int * name_len);
int PMPI_T_cvar_get_num(int * num_cvar);
int PMPI_T_cvar_get_info(int cvar_index, char * name, int * name_len, int * verbosity, int * datatype, struct MPIR_T_enum_s * * enumtype, char * desc, int * desc_len, int * binding, int * scope);
int PMPI_T_cvar_handle_alloc(int cvar_index, void * obj_handle, struct MPIR_T_cvar_handle_s * * handle, int * count);
int PMPI_T_cvar_handle_free(struct MPIR_T_cvar_handle_s * * handle);
int PMPI_T_cvar_read(struct MPIR_T_cvar_handle_s * handle, void * buf);
int PMPI_T_cvar_write(struct MPIR_T_cvar_handle_s * handle, void * buf);
int PMPI_T_pvar_get_num(int * num_pvar);
int PMPI_T_pvar_get_info(int pvar_index, char * name, int * name_len, int * verbosity, int * var_class, int * datatype, struct MPIR_T_enum_s * * enumtype, char * desc, int * desc_len, int * binding, int * readonly, int * continuous, int * atomic);
int PMPI_T_pvar_session_create(struct MPIR_T_pvar_session_s * * session);
int PMPI_T_pvar_session_free(struct MPIR_T_pvar_session_s * * session);
int PMPI_T_pvar_handle_alloc(struct MPIR_T_pvar_session_s * session, int pvar_index, void * obj_handle, struct MPIR_T_pvar_handle_s * * handle, int * count);
int PMPI_T_pvar_handle_free(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * * handle);
int PMPI_T_pvar_start(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int PMPI_T_pvar_stop(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int PMPI_T_pvar_read(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int PMPI_T_pvar_write(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int PMPI_T_pvar_reset(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int PMPI_T_pvar_readreset(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int PMPI_T_category_get_num(int * num_cat);
int PMPI_T_category_get_info(int cat_index, char * name, int * name_len, char * desc, int * desc_len, int * num_cvars, int * num_pvars, int * num_categories);
int PMPI_T_category_get_cvars(int cat_index, int len, int indices[]);
int PMPI_T_category_get_pvars(int cat_index, int len, int indices[]);
int PMPI_T_category_get_categories(int cat_index, int len, int indices[]);
int PMPI_T_category_changed(int * stamp);
int MPI_File_open(int comm, char const * filename, int amode, int info, struct ADIOI_FileD * * fh);
int MPI_File_close(struct ADIOI_FileD * * fh);
int MPI_File_delete(char const * filename, int info);
int MPI_File_set_size(struct ADIOI_FileD * fh, long long size);
int MPI_File_preallocate(struct ADIOI_FileD * fh, long long size);
int MPI_File_get_size(struct ADIOI_FileD * fh, long long * size);
int MPI_File_get_group(struct ADIOI_FileD * fh, int * group);
int MPI_File_get_amode(struct ADIOI_FileD * fh, int * amode);
int MPI_File_set_info(struct ADIOI_FileD * fh, int info);
int MPI_File_get_info(struct ADIOI_FileD * fh, int * info_used);
int MPI_File_set_view(struct ADIOI_FileD * fh, long long disp, int etype, int filetype, char const * datarep, int info);
int MPI_File_get_view(struct ADIOI_FileD * fh, long long * disp, int * etype, int * filetype, char * datarep);
int MPI_File_read_at(struct ADIOI_FileD * fh, long long offset, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_read_at_all(struct ADIOI_FileD * fh, long long offset, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write_at(struct ADIOI_FileD * fh, long long offset, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write_at_all(struct ADIOI_FileD * fh, long long offset, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_iread_at(struct ADIOI_FileD * fh, long long offset, void * buf, int count, int datatype, int * request);
int MPI_File_iwrite_at(struct ADIOI_FileD * fh, long long offset, void const * buf, int count, int datatype, int * request);
int MPI_File_read(struct ADIOI_FileD * fh, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_read_all(struct ADIOI_FileD * fh, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write_all(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_iread(struct ADIOI_FileD * fh, void * buf, int count, int datatype, int * request);
int MPI_File_iwrite(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, int * request);
int MPI_File_seek(struct ADIOI_FileD * fh, long long offset, int whence);
int MPI_File_get_position(struct ADIOI_FileD * fh, long long * offset);
int MPI_File_get_byte_offset(struct ADIOI_FileD * fh, long long offset, long long * disp);
int MPI_File_read_shared(struct ADIOI_FileD * fh, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write_shared(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_iread_shared(struct ADIOI_FileD * fh, void * buf, int count, int datatype, int * request);
int MPI_File_iwrite_shared(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, int * request);
int MPI_File_read_ordered(struct ADIOI_FileD * fh, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write_ordered(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_seek_shared(struct ADIOI_FileD * fh, long long offset, int whence);
int MPI_File_get_position_shared(struct ADIOI_FileD * fh, long long * offset);
int MPI_File_read_at_all_begin(struct ADIOI_FileD * fh, long long offset, void * buf, int count, int datatype);
int MPI_File_read_at_all_end(struct ADIOI_FileD * fh, void * buf, struct MPI_Status * status);
int MPI_File_write_at_all_begin(struct ADIOI_FileD * fh, long long offset, void const * buf, int count, int datatype);
int MPI_File_write_at_all_end(struct ADIOI_FileD * fh, void const * buf, struct MPI_Status * status);
int MPI_File_read_all_begin(struct ADIOI_FileD * fh, void * buf, int count, int datatype);
int MPI_File_read_all_end(struct ADIOI_FileD * fh, void * buf, struct MPI_Status * status);
int MPI_File_write_all_begin(struct ADIOI_FileD * fh, void const * buf, int count, int datatype);
int MPI_File_write_all_end(struct ADIOI_FileD * fh, void const * buf, struct MPI_Status * status);
int MPI_File_read_ordered_begin(struct ADIOI_FileD * fh, void * buf, int count, int datatype);
int MPI_File_read_ordered_end(struct ADIOI_FileD * fh, void * buf, struct MPI_Status * status);
int MPI_File_write_ordered_begin(struct ADIOI_FileD * fh, void const * buf, int count, int datatype);
int MPI_File_write_ordered_end(struct ADIOI_FileD * fh, void const * buf, struct MPI_Status * status);
int MPI_File_get_type_extent(struct ADIOI_FileD * fh, int datatype, long * extent);
int MPI_Register_datarep(char const * datarep, int (* read_conversion_fn)(void * , int, int, void * , long long, void * ), int (* write_conversion_fn)(void * , int, int, void * , long long, void * ), int (* dtype_file_extent_fn)(int, long * , void * ), void * extra_state);
int MPI_File_set_atomicity(struct ADIOI_FileD * fh, int flag);
int MPI_File_get_atomicity(struct ADIOI_FileD * fh, int * flag);
int MPI_File_sync(struct ADIOI_FileD * fh);
struct ADIOI_FileD * MPI_File_f2c(int file);
int MPI_File_c2f(struct ADIOI_FileD * file);
int PMPI_File_open(int, char const * , int, int, struct ADIOI_FileD * * );
int PMPI_File_close(struct ADIOI_FileD * * );
int PMPI_File_delete(char const * , int);
int PMPI_File_set_size(struct ADIOI_FileD * , long long);
int PMPI_File_preallocate(struct ADIOI_FileD * , long long);
int PMPI_File_get_size(struct ADIOI_FileD * , long long * );
int PMPI_File_get_group(struct ADIOI_FileD * , int * );
int PMPI_File_get_amode(struct ADIOI_FileD * , int * );
int PMPI_File_set_info(struct ADIOI_FileD * , int);
int PMPI_File_get_info(struct ADIOI_FileD * , int * );
int PMPI_File_set_view(struct ADIOI_FileD * , long long, int, int, char const * , int);
int PMPI_File_get_view(struct ADIOI_FileD * , long long * , int * , int * , char * );
int PMPI_File_read_at(struct ADIOI_FileD * , long long, void * , int, int, struct MPI_Status * );
int PMPI_File_read_at_all(struct ADIOI_FileD * , long long, void * , int, int, struct MPI_Status * );
int PMPI_File_write_at(struct ADIOI_FileD * , long long, void const * , int, int, struct MPI_Status * );
int PMPI_File_write_at_all(struct ADIOI_FileD * , long long, void const * , int, int, struct MPI_Status * );
int PMPI_File_iread_at(struct ADIOI_FileD * , long long, void * , int, int, int * );
int PMPI_File_iwrite_at(struct ADIOI_FileD * , long long, void const * , int, int, int * );
int PMPI_File_read(struct ADIOI_FileD * , void * , int, int, struct MPI_Status * );
int PMPI_File_read_all(struct ADIOI_FileD * , void * , int, int, struct MPI_Status * );
int PMPI_File_write(struct ADIOI_FileD * , void const * , int, int, struct MPI_Status * );
int PMPI_File_write_all(struct ADIOI_FileD * , void const * , int, int, struct MPI_Status * );
int PMPI_File_iread(struct ADIOI_FileD * , void * , int, int, int * );
int PMPI_File_iwrite(struct ADIOI_FileD * , void const * , int, int, int * );
int PMPI_File_seek(struct ADIOI_FileD * , long long, int);
int PMPI_File_get_position(struct ADIOI_FileD * , long long * );
int PMPI_File_get_byte_offset(struct ADIOI_FileD * , long long, long long * );
int PMPI_File_read_shared(struct ADIOI_FileD * , void * , int, int, struct MPI_Status * );
int PMPI_File_write_shared(struct ADIOI_FileD * , void const * , int, int, struct MPI_Status * );
int PMPI_File_iread_shared(struct ADIOI_FileD * , void * , int, int, int * );
int PMPI_File_iwrite_shared(struct ADIOI_FileD * , void const * , int, int, int * );
int PMPI_File_read_ordered(struct ADIOI_FileD * , void * , int, int, struct MPI_Status * );
int PMPI_File_write_ordered(struct ADIOI_FileD * , void const * , int, int, struct MPI_Status * );
int PMPI_File_seek_shared(struct ADIOI_FileD * , long long, int);
int PMPI_File_get_position_shared(struct ADIOI_FileD * , long long * );
int PMPI_File_read_at_all_begin(struct ADIOI_FileD * , long long, void * , int, int);
int PMPI_File_read_at_all_end(struct ADIOI_FileD * , void * , struct MPI_Status * );
int PMPI_File_write_at_all_begin(struct ADIOI_FileD * , long long, void const * , int, int);
int PMPI_File_write_at_all_end(struct ADIOI_FileD * , void const * , struct MPI_Status * );
int PMPI_File_read_all_begin(struct ADIOI_FileD * , void * , int, int);
int PMPI_File_read_all_end(struct ADIOI_FileD * , void * , struct MPI_Status * );
int PMPI_File_write_all_begin(struct ADIOI_FileD * , void const * , int, int);
int PMPI_File_write_all_end(struct ADIOI_FileD * , void const * , struct MPI_Status * );
int PMPI_File_read_ordered_begin(struct ADIOI_FileD * , void * , int, int);
int PMPI_File_read_ordered_end(struct ADIOI_FileD * , void * , struct MPI_Status * );
int PMPI_File_write_ordered_begin(struct ADIOI_FileD * , void const * , int, int);
int PMPI_File_write_ordered_end(struct ADIOI_FileD * , void const * , struct MPI_Status * );
int PMPI_File_get_type_extent(struct ADIOI_FileD * , int, long * );
int PMPI_Register_datarep(char const * , int (* )(void * , int, int, void * , long long, void * ), int (* )(void * , int, int, void * , long long, void * ), int (* )(int, long * , void * ), void * );
int PMPI_File_set_atomicity(struct ADIOI_FileD * , int);
int PMPI_File_get_atomicity(struct ADIOI_FileD * , int * );
int PMPI_File_sync(struct ADIOI_FileD * );
struct ADIOI_FileD * PMPI_File_f2c(int);
int PMPI_File_c2f(struct ADIOI_FileD * );
int MPIX_Grequest_class_create(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), int (* poll_fn)(void * , struct MPI_Status * ), int (* wait_fn)(int, void * * , double, struct MPI_Status * ), int * greq_class);
int MPIX_Grequest_class_allocate(int greq_class, void * extra_state, int * request);
int MPIX_Grequest_start(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), int (* poll_fn)(void * , struct MPI_Status * ), int (* wait_fn)(int, void * * , double, struct MPI_Status * ), void * extra_state, int * request);
int MPIX_Mutex_create(int count, int comm, struct mpixi_mutex_s * * hdl);
int MPIX_Mutex_free(struct mpixi_mutex_s * * hdl);
int MPIX_Mutex_lock(struct mpixi_mutex_s * hdl, int mutex, int proc);
int MPIX_Mutex_unlock(struct mpixi_mutex_s * hdl, int mutex, int proc);
int PMPIX_Grequest_class_create(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), int (* poll_fn)(void * , struct MPI_Status * ), int (* wait_fn)(int, void * * , double, struct MPI_Status * ), int * greq_class);
int PMPIX_Grequest_class_allocate(int greq_class, void * extra_state, int * request);
int PMPIX_Grequest_start(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), int (* poll_fn)(void * , struct MPI_Status * ), int (* wait_fn)(int, void * * , double, struct MPI_Status * ), void * extra_state, int * request);
int PMPIX_Mutex_create(int count, int comm, struct mpixi_mutex_s * * hdl);
int PMPIX_Mutex_free(struct mpixi_mutex_s * * hdl);
int PMPIX_Mutex_lock(struct mpixi_mutex_s * hdl, int mutex, int proc);
int PMPIX_Mutex_unlock(struct mpixi_mutex_s * hdl, int mutex, int proc);
extern int xmp_get_mpi_comm(void);
extern void xmp_init_mpi(int * argc, char * * * argv);
extern void xmp_finalize_mpi(void);
extern void xmp_init(int * argc, char * * * argv);
extern void xmp_finalize(void);
extern int xmp_num_nodes(void);
extern int xmp_node_num(void);
extern void xmp_barrier(void);
extern int xmp_all_num_nodes(void);
extern int xmp_all_node_num(void);
extern double xmp_wtime(void);
extern double xmp_wtick(void);
extern int xmp_array_ndims(void * d, int * ndims);
extern int xmp_array_lbound(void * d, int dim, int * lbound);
extern int xmp_array_ubound(void * d, int dim, int * ubound);
extern unsigned long xmp_array_type_size(void * d);
extern int xmp_array_gsize(void * d, int dim);
extern int xmp_array_lsize(void * d, int dim, int * lsize);
extern int xmp_array_gcllbound(void * d, int dim);
extern int xmp_array_gclubound(void * d, int dim);
extern int xmp_array_lcllbound(void * d, int dim);
extern int xmp_array_lclubound(void * d, int dim);
extern int xmp_array_gcglbound(void * d, int dim);
extern int xmp_array_gcgubound(void * d, int dim);
extern int xmp_array_laddr(void * d, void * * laddr);
extern int xmp_array_lshadow(void * d, int dim, int * lshadow);
extern int xmp_array_ushadow(void * d, int dim, int * ushadow);
extern int xmp_array_owner(void * d, int ndims, int index[], int dim);
extern int xmp_array_lead_dim(void * d, int size[]);
extern int xmp_array_gtol(void * d, int g_idx[], int lidx[]);
extern int xmp_align_axis(void * d, int dim, int * axis);
extern int xmp_align_offset(void * d, int dim, int * offset);
extern int xmp_align_format(void * d, int dim);
extern int xmp_align_size(void * d, int dim);
extern int xmp_align_replicated(void * d, int dim, int * replicated);
extern int xmp_align_template(void * d, void * * dt);
extern int xmp_template_fixed(void * d, int * fixed);
extern int xmp_template_ndims(void * d, int * ndims);
extern int xmp_template_lbound(void * d, int dim, int * lbound);
extern int xmp_template_ubound(void * d, int dim, int * ubound);
extern int xmp_template_gsize(void * d, int dim);
extern int xmp_template_lsize(void * d, int dim);
extern int xmp_dist_format(void * d, int dim, int * format);
extern int xmp_dist_blocksize(void * d, int dim, int * blocksize);
extern int xmp_dist_stride(void * d, int dim);
extern int xmp_dist_nodes(void * d, void * * dn);
extern int xmp_dist_axis(void * d, int dim, int * axis);
extern int xmp_dist_gblockmap(void * d, int dim, int * map);
extern int xmp_nodes_ndims(void * d, int * ndims);
extern int xmp_nodes_index(void * d, int dim, int * index);
extern int xmp_nodes_size(void * d, int dim, int * size);
extern int xmp_nodes_rank(void * d, int * rank);
extern int xmp_nodes_comm(void * d, void * * comm);
extern int xmp_nodes_equiv(void * d, void * * dn, int lb[], int ub[], int st[]);
extern void xmp_sched_template_index(int * local_start_index, int * local_end_index, int const global_start_index, int const global_end_index, int const step, void * const template, int const template_dim);
extern void xmp_sync_memory(int const * status);
extern void xmp_sync_all(int const * status);
extern void xmp_sync_image(int image, int * status);
extern void xmp_sync_images(int num, int * image_set, int * status);
extern void xmp_sync_images_all(int * status);
extern void xmp_sort_up(void * a_desc, void * b_desc);
extern void xmp_sort_down(void * a_desc, void * b_desc);
extern void * xmp_malloc(void * d, ...);
extern void xmp_free(void * d);
extern void xmp_exit(int status);
float jacobi(int nn);
int initmax(int, int, int);
void initmt();
void sendp(int, int, int);
void sendp1();
void sendp2();
void sendp3();
double fflop(int mx, int my, int mz);
double mflops(int nn, double cpu, double flop);
double time();
/* array 'p' is removed by XcalableMP align directive */
/* array 'a' is removed by XcalableMP align directive */
/* array 'b' is removed by XcalableMP align directive */
/* array 'c' is removed by XcalableMP align directive */
/* array 'bnd' is removed by XcalableMP align directive */
/* array 'wrk1' is removed by XcalableMP align directive */
/* array 'wrk2' is removed by XcalableMP align directive */
# 65 "himeno.c"
static float omega;
# 67 "himeno.c"
static int ndx;
# 67 "himeno.c"
static int ndy;
# 67 "himeno.c"
static int ndz;
# 68 "himeno.c"
static int imax;
# 68 "himeno.c"
static int jmax;
# 68 "himeno.c"
static int kmax;
# 70 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
# 71 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
# 72 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
# 73 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
# 74 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
# 75 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
# 76 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
# 77 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
# 78 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
# 79 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
# 80 "himeno.c"
/* ignored Xcode.XMP_PRAGMA */
int main(int argc, char * * argv)
{
int r;
xmpc_init_all(argc, argv);
xmpc_module_init();
r = (xmpc_main(argc, argv));
xmpc_finalize_all(r);
return r;
}
double fflop(int mx, int my, int mz)
{
{
# 192 "himeno.c"
return ((((double)(mz - (2))) * ((double)(my - (2)))) * ((double)(mx - (2)))) * (34.0);
}
}
double mflops(int nn, double cpu, double flop)
{
{
# 198 "himeno.c"
return ((flop / cpu) * (1.e-6)) * ((double)(nn));
}
}
void initmt()
{
{
# 204 "himeno.c"
int i;
# 204 "himeno.c"
int j;
# 204 "himeno.c"
int k;
{
int _XMP_loop_init_k;
int _XMP_loop_cond_k;
int _XMP_loop_step_k;
int _XMP_loop_init_j;
int _XMP_loop_cond_j;
int _XMP_loop_step_j;
int _XMP_loop_init_i;
int _XMP_loop_cond_i;
int _XMP_loop_step_i;
_XMP_sched_loop_template_DUPLICATION(0, MKMAX, 1, &(_XMP_loop_init_k), &(_XMP_loop_cond_k), &(_XMP_loop_step_k), _XMP_DESC_t, 0);
_XMP_sched_loop_template_BLOCK(0, MJMAX, 1, &(_XMP_loop_init_j), &(_XMP_loop_cond_j), &(_XMP_loop_step_j), _XMP_DESC_t, 1);
_XMP_sched_loop_template_BLOCK(0, MIMAX, 1, &(_XMP_loop_init_i), &(_XMP_loop_cond_i), &(_XMP_loop_step_i), _XMP_DESC_t, 2);
# 207 "himeno.c"
for(i = _XMP_loop_init_i; i < _XMP_loop_cond_i; i += _XMP_loop_step_i) {
# 208 "himeno.c"
for(j = _XMP_loop_init_j; j < _XMP_loop_cond_j; j += _XMP_loop_step_j) {
# 209 "himeno.c"
for(k = _XMP_loop_init_k; k < _XMP_loop_cond_k; k += _XMP_loop_step_k) {
# 210 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 0, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) = (0.0);
# 211 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 1, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) = (0.0);
# 212 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 2, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) = (0.0);
# 213 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 3, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) = (0.0);
# 214 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 0, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2))) = (0.0);
# 215 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 1, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2))) = (0.0);
# 216 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 2, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2))) = (0.0);
# 217 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 0, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2))) = (0.0);
# 218 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 1, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2))) = (0.0);
# 219 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 2, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2))) = (0.0);
# 220 "himeno.c"
(*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), j + (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))) = (0.0);
# 221 "himeno.c"
(*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk1, i, j, k, _XMP_GTOL_acc_wrk1_0, _XMP_GTOL_acc_wrk1_1))) = (0.0);
# 222 "himeno.c"
(*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk2, i, j, k, _XMP_GTOL_acc_wrk2_0, _XMP_GTOL_acc_wrk2_1))) = (0.0);
# 223 "himeno.c"
(*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_bnd, i, j, k, _XMP_GTOL_acc_bnd_0, _XMP_GTOL_acc_bnd_1))) = (0.0);
}
}
}
}
{
int _XMP_loop_init_k;
int _XMP_loop_cond_k;
int _XMP_loop_step_k;
int _XMP_loop_init_j;
int _XMP_loop_cond_j;
int _XMP_loop_step_j;
int _XMP_loop_init_i;
int _XMP_loop_cond_i;
int _XMP_loop_step_i;
_XMP_sched_loop_template_DUPLICATION(0, kmax, 1, &(_XMP_loop_init_k), &(_XMP_loop_cond_k), &(_XMP_loop_step_k), _XMP_DESC_t, 0);
_XMP_sched_loop_template_BLOCK(0, jmax, 1, &(_XMP_loop_init_j), &(_XMP_loop_cond_j), &(_XMP_loop_step_j), _XMP_DESC_t, 1);
_XMP_sched_loop_template_BLOCK(0, imax, 1, &(_XMP_loop_init_i), &(_XMP_loop_cond_i), &(_XMP_loop_step_i), _XMP_DESC_t, 2);
# 227 "himeno.c"
for(i = _XMP_loop_init_i; i < _XMP_loop_cond_i; i += _XMP_loop_step_i) {
# 228 "himeno.c"
for(j = _XMP_loop_init_j; j < _XMP_loop_cond_j; j += _XMP_loop_step_j) {
# 229 "himeno.c"
for(k = _XMP_loop_init_k; k < _XMP_loop_cond_k; k += _XMP_loop_step_k) {
# 230 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 0, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) = (1.0);
# 231 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 1, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) = (1.0);
# 232 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 2, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) = (1.0);
# 233 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 3, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) = ((1.0) / (6.0));
# 234 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 0, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2))) = (0.0);
# 235 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 1, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2))) = (0.0);
# 236 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 2, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2))) = (0.0);
# 237 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 0, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2))) = (1.0);
# 238 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 1, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2))) = (1.0);
# 239 "himeno.c"
(*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 2, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2))) = (1.0);
# 240 "himeno.c"
(*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), j + (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))) = (((float)((_XMP_M_LTOG_TEMPLATE_BLOCK(i, 0, (MIMAX - (1)) + (1), _XMP_NODES_SIZE_n_1, _XMP_NODES_RANK_n_1)) * (_XMP_M_LTOG_TEMPLATE_BLOCK(i, 0, (MIMAX - (1)) + (1), _XMP_NODES_SIZE_n_1, _XMP_NODES_RANK_n_1)))) / ((float)((imax - (1)) * (imax - (1)))));
# 241 "himeno.c"
(*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk1, i, j, k, _XMP_GTOL_acc_wrk1_0, _XMP_GTOL_acc_wrk1_1))) = (0.0);
# 242 "himeno.c"
(*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk2, i, j, k, _XMP_GTOL_acc_wrk2_0, _XMP_GTOL_acc_wrk2_1))) = (0.0);
# 243 "himeno.c"
(*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_bnd, i, j, k, _XMP_GTOL_acc_bnd_0, _XMP_GTOL_acc_bnd_1))) = (1.0);
}
}
}
}
_XMP_reflect__(_XMP_DESC_p);
}
}
float jacobi(int nn)
{
{
# 251 "himeno.c"
int i;
# 251 "himeno.c"
int j;
# 251 "himeno.c"
int k;
# 251 "himeno.c"
int n;
# 252 "himeno.c"
float gosa;
# 252 "himeno.c"
float s0;
# 252 "himeno.c"
float ss;
# 254 "himeno.c"
for(n = (0); n < nn; ++ n) {
# 255 "himeno.c"
gosa = (0.0);
{
int _XMP_loop_init_k;
int _XMP_loop_cond_k;
int _XMP_loop_step_k;
int _XMP_loop_init_j;
int _XMP_loop_cond_j;
int _XMP_loop_step_j;
int _XMP_loop_init_i;
int _XMP_loop_cond_i;
int _XMP_loop_step_i;
_XMP_sched_loop_template_DUPLICATION(1, kmax - (1), 1, &(_XMP_loop_init_k), &(_XMP_loop_cond_k), &(_XMP_loop_step_k), _XMP_DESC_t, 0);
_XMP_sched_loop_template_BLOCK(1, jmax - (1), 1, &(_XMP_loop_init_j), &(_XMP_loop_cond_j), &(_XMP_loop_step_j), _XMP_DESC_t, 1);
_XMP_sched_loop_template_BLOCK(1, imax - (1), 1, &(_XMP_loop_init_i), &(_XMP_loop_cond_i), &(_XMP_loop_step_i), _XMP_DESC_t, 2);
# 258 "himeno.c"
for(i = _XMP_loop_init_i; i < _XMP_loop_cond_i; i += _XMP_loop_step_i) {
# 259 "himeno.c"
for(j = _XMP_loop_init_j; j < _XMP_loop_cond_j; j += _XMP_loop_step_j) {
# 260 "himeno.c"
#pragma ivdep
for(k = _XMP_loop_init_k; k < _XMP_loop_cond_k; k += _XMP_loop_step_k) {
# 261 "himeno.c"

  // a
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 0, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 0, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 1, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 1, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 2, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 2, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2)) + L1DIST , _MM_HINT_T0);

  // b
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 0, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 0, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 1, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 1, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 2, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 2, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2)) + L1DIST , _MM_HINT_T0);

  // c
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 0, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 0, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 1, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 1, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 2, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 2, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2)) + L1DIST , _MM_HINT_T0);

  // p
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i    ) + 1, (j    ) + 1, k - 1, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i    ) + 1, (j    ) + 1, k - 1, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i    ) + 1, (j + 1) + 1, k - 1, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i    ) + 1, (j + 1) + 1, k - 1, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i    ) + 1, (j - 1) + 1, k - 1, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i    ) + 1, (j - 1) + 1, k - 1, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + 1) + 1, (j    ) + 1, k - 1, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + 1) + 1, (j    ) + 1, k - 1, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + 1) + 1, (j + 1) + 1, k    , _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + 1) + 1, (j + 1) + 1, k    , _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + 1) + 1, (j - 1) + 1, k    , _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + 1) + 1, (j - 1) + 1, k    , _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i - 1) + 1, (j    ) + 1, k - 1, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i - 1) + 1, (j    ) + 1, k - 1, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i - 1) + 1, (j + 1) + 1, k    , _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i - 1) + 1, (j + 1) + 1, k    , _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L1DIST , _MM_HINT_T0);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i - 1) + 1, (j - 1) + 1, k    , _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i - 1) + 1, (j - 1) + 1, k    , _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L1DIST , _MM_HINT_T0);

  // wrk1
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk1, i, j, k, _XMP_GTOL_acc_wrk1_0, _XMP_GTOL_acc_wrk1_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk1, i, j, k, _XMP_GTOL_acc_wrk1_0, _XMP_GTOL_acc_wrk1_1)) + L1DIST , _MM_HINT_T0);

s0 = (((((((((((*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 0, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) * (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + (1)) + (1), j + (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))) + ((*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 1, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) * (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), (j + (1)) + (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))))) + ((*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 2, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2))) * (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), j + (1), k + (1), _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))))) + ((*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 0, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2))) * ((((*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + (1)) + (1), (j + (1)) + (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))) - (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + (1)) + (1), (j + (1)) - (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))) - (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + (1)) - (1), (j + (1)) + (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))) + (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + (1)) - (1), (j + (1)) - (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))))) + ((*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 1, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2))) * ((((*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), (j + (1)) + (1), k + (1), _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))) - (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), (j + (1)) - (1), k + (1), _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))) - (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), (j + (1)) + (1), k - (1), _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))) + (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), (j + (1)) - (1), k - (1), _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))))) + ((*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_b, 2, i, j, k, _XMP_GTOL_acc_b_0, _XMP_GTOL_acc_b_1, _XMP_GTOL_acc_b_2))) * ((((*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + (1)) + (1), j + (1), k + (1), _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))) - (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + (1)) - (1), j + (1), k + (1), _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))) - (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + (1)) + (1), j + (1), k - (1), _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))) + (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + (1)) - (1), j + (1), k - (1), _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))))) + ((*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 0, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2))) * (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i + (1)) - (1), j + (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))))) + ((*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 1, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2))) * (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), (j + (1)) - (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))))) + ((*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_c, 2, i, j, k, _XMP_GTOL_acc_c_0, _XMP_GTOL_acc_c_1, _XMP_GTOL_acc_c_2))) * (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), j + (1), k - (1), _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))))) + (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk1, i, j, k, _XMP_GTOL_acc_wrk1_0, _XMP_GTOL_acc_wrk1_1))));
# 274 "himeno.c"

  // a
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 3, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 3, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2)) + L1DIST , _MM_HINT_T0);

  // bnd
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_bnd, i, j, k, _XMP_GTOL_acc_bnd_0, _XMP_GTOL_acc_bnd_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_bnd, i, j, k, _XMP_GTOL_acc_bnd_0, _XMP_GTOL_acc_bnd_1)) + L1DIST , _MM_HINT_T0);

ss = (((s0 * (*(_XMP_M_GET_ADDR_E_4(_XMP_ADDR_a, 3, i, j, k, _XMP_GTOL_acc_a_0, _XMP_GTOL_acc_a_1, _XMP_GTOL_acc_a_2)))) - (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), j + (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)))) * (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_bnd, i, j, k, _XMP_GTOL_acc_bnd_0, _XMP_GTOL_acc_bnd_1))));
# 275 "himeno.c"
gosa += (ss * ss);
# 277 "himeno.c"

  // wrk2
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk2, i, j, k, _XMP_GTOL_acc_wrk2_0, _XMP_GTOL_acc_wrk2_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk2, i, j, k, _XMP_GTOL_acc_wrk2_0, _XMP_GTOL_acc_wrk2_1)) + L1DIST , _MM_HINT_T0);

(*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk2, i, j, k, _XMP_GTOL_acc_wrk2_0, _XMP_GTOL_acc_wrk2_1))) = ((*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), j + (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))) + (omega * ss));
}
}
}
}
{
int _XMP_loop_init_k;
int _XMP_loop_cond_k;
int _XMP_loop_step_k;
int _XMP_loop_init_j;
int _XMP_loop_cond_j;
int _XMP_loop_step_j;
int _XMP_loop_init_i;
int _XMP_loop_cond_i;
int _XMP_loop_step_i;
_XMP_sched_loop_template_DUPLICATION(1, kmax - (1), 1, &(_XMP_loop_init_k), &(_XMP_loop_cond_k), &(_XMP_loop_step_k), _XMP_DESC_t, 0);
_XMP_sched_loop_template_BLOCK(1, jmax - (1), 1, &(_XMP_loop_init_j), &(_XMP_loop_cond_j), &(_XMP_loop_step_j), _XMP_DESC_t, 1);
_XMP_sched_loop_template_BLOCK(1, imax - (1), 1, &(_XMP_loop_init_i), &(_XMP_loop_cond_i), &(_XMP_loop_step_i), _XMP_DESC_t, 2);
# 281 "himeno.c"
for(i = _XMP_loop_init_i; i < _XMP_loop_cond_i; i += _XMP_loop_step_i) {
# 282 "himeno.c"
for(j = _XMP_loop_init_j; j < _XMP_loop_cond_j; j += _XMP_loop_step_j) {
# 283 "himeno.c"
#pragma ivdep
for(k = _XMP_loop_init_k; k < _XMP_loop_cond_k; k += _XMP_loop_step_k) {
# 284 "himeno.c"

  // p
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i    ) + 1, (j    ) + 1, k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, (i    ) + 1, (j    ) + 1, k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1)) + L1DIST , _MM_HINT_T0);

  // wrk2
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk2, i, j, k, _XMP_GTOL_acc_wrk2_0, _XMP_GTOL_acc_wrk2_1)) + L2DIST, _MM_HINT_T1);
  _mm_prefetch((const char *)(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk2, i, j, k, _XMP_GTOL_acc_wrk2_0, _XMP_GTOL_acc_wrk2_1)) + L1DIST , _MM_HINT_T0);

(*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_p, i + (1), j + (1), k, _XMP_GTOL_acc_p_0, _XMP_GTOL_acc_p_1))) = (*(_XMP_M_GET_ADDR_E_3(_XMP_ADDR_wrk2, i, j, k, _XMP_GTOL_acc_wrk2_0, _XMP_GTOL_acc_wrk2_1)));
}
}
}
}
_XMP_reflect__(_XMP_DESC_p);
_XMP_M_REDUCE_EXEC(&(gosa), 0x000000001ll, 513, 300);
}
# 290 "himeno.c"
return gosa;
}
}
double time()
{
{
# 295 "himeno.c"
struct timeval tv;
# 296 "himeno.c"
gettimeofday(&(tv), (void * )(0));
# 297 "himeno.c"
return ((double)((&(tv))->tv_sec)) + (((double)((&(tv))->tv_usec)) * (1e-6));
}
}
static int xmpc_main(int argc, char * * argv)
{
{
# 85 "himeno.c"
int i;
# 85 "himeno.c"
int j;
# 85 "himeno.c"
int k;
# 85 "himeno.c"
int nn;
# 86 "himeno.c"
int mx;
# 86 "himeno.c"
int my;
# 86 "himeno.c"
int mz;
# 86 "himeno.c"
int it;
# 87 "himeno.c"
float gosa;
# 88 "himeno.c"
double cpu;
# 88 "himeno.c"
double cpu0;
# 88 "himeno.c"
double cpu1;
# 88 "himeno.c"
double flop;
# 88 "himeno.c"
double target;
# 90 "himeno.c"
target = (20.0);
# 91 "himeno.c"
omega = (0.8);
# 92 "himeno.c"
mx = (MX0 - (1));
# 93 "himeno.c"
my = (MY0 - (1));
# 94 "himeno.c"
mz = (MZ0 - (1));
# 95 "himeno.c"
ndx = NDX0;
# 96 "himeno.c"
ndy = NDY0;
# 97 "himeno.c"
ndz = NDZ0;
# 99 "himeno.c"
imax = mx;
# 100 "himeno.c"
jmax = my;
# 101 "himeno.c"
kmax = mz;
# 106 "himeno.c"
initmt();
{
void * _XMP_TASK_desc = (void * )(0);
if(_XMP_exec_task_TEMPLATE_PART(&(_XMP_TASK_desc), _XMP_DESC_t, (int)(0), (long long)(0), (long long)(0), (long long)(1), (int)(0), (long long)(0), (long long)(0), (long long)(1), (int)(0), (long long)(0), (long long)(0), (long long)(1))) {
# 110 "himeno.c"
printf("Sequential version array size\n");
# 111 "himeno.c"
printf(" mimax = %d mjmax = %d mkmax = %d\n", MX0, MY0, MZ0);
# 112 "himeno.c"
printf("Parallel version array size\n");
# 113 "himeno.c"
printf(" mimax = %d mjmax = %d mkmax = %d\n", MIMAX, MJMAX, MKMAX);
# 114 "himeno.c"
printf("imax = %d jmax = %d kmax =%d\n", imax, jmax, kmax);
# 115 "himeno.c"
printf("I-decomp = %d J-decomp = %d K-decomp =%d\n", ndx, ndy, ndz);
_XMP_pop_nodes();
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc);
}
}
# 118 "himeno.c"
nn = (3);
{
void * _XMP_TASK_desc = (void * )(0);
if(_XMP_exec_task_TEMPLATE_PART(&(_XMP_TASK_desc), _XMP_DESC_t, (int)(0), (long long)(0), (long long)(0), (long long)(1), (int)(0), (long long)(0), (long long)(0), (long long)(1), (int)(0), (long long)(0), (long long)(0), (long long)(1))) {
# 122 "himeno.c"
printf(" Start rehearsal measurement process.\n");
# 123 "himeno.c"
printf(" Measure the performance in %d times.\n\n", nn);
_XMP_pop_nodes();
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc);
}
}
_XMP_barrier_EXEC();
# 128 "himeno.c"
cpu0 = (xmp_wtime());
# 132 "himeno.c"
gosa = (jacobi(nn));
# 134 "himeno.c"
cpu1 = (xmp_wtime());
# 138 "himeno.c"
cpu = (cpu1 - cpu0);
_XMP_M_REDUCE_EXEC(&(cpu), 0x000000001ll, 514, 308);
# 141 "himeno.c"
flop = (fflop(mz, my, mx));
{
void * _XMP_TASK_desc = (void * )(0);
if(_XMP_exec_task_TEMPLATE_PART(&(_XMP_TASK_desc), _XMP_DESC_t, (int)(0), (long long)(0), (long long)(0), (long long)(1), (int)(0), (long long)(0), (long long)(0), (long long)(1), (int)(0), (long long)(0), (long long)(0), (long long)(1))) {
# 144 "himeno.c"
printf(" MFLOPS: %f time(s): %f %e\n\n", mflops(nn, cpu, flop), cpu, gosa);
_XMP_pop_nodes();
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc);
}
}
# 147 "himeno.c"
nn = ((int)(target / (cpu / (3.0))));
nn = nn == 0 ? 3 : nn;
{
void * _XMP_TASK_desc = (void * )(0);
if(_XMP_exec_task_TEMPLATE_PART(&(_XMP_TASK_desc), _XMP_DESC_t, (int)(0), (long long)(0), (long long)(0), (long long)(1), (int)(0), (long long)(0), (long long)(0), (long long)(1), (int)(0), (long long)(0), (long long)(0), (long long)(1))) {
# 151 "himeno.c"
printf(" Now, start the actual measurement process.\n");
# 152 "himeno.c"
printf(" The loop will be excuted in %d times\n", nn);
# 153 "himeno.c"
printf(" This will take about one minute.\n");
# 154 "himeno.c"
printf(" Wait for a while\n\n");
_XMP_pop_nodes();
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc);
}
}
_XMP_barrier_EXEC();
# 163 "himeno.c"
cpu0 = (xmp_wtime());
# 167 "himeno.c"
gosa = (jacobi(nn));
# 169 "himeno.c"
cpu1 = (xmp_wtime());
# 173 "himeno.c"
cpu = (cpu1 - cpu0);
_XMP_M_REDUCE_EXEC(&(cpu), 0x000000001ll, 514, 308);
{
void * _XMP_TASK_desc = (void * )(0);
if(_XMP_exec_task_TEMPLATE_PART(&(_XMP_TASK_desc), _XMP_DESC_t, (int)(0), (long long)(0), (long long)(0), (long long)(1), (int)(0), (long long)(0), (long long)(0), (long long)(1), (int)(0), (long long)(0), (long long)(0), (long long)(1))) {
# 178 "himeno.c"
printf("cpu : %f sec.\n", cpu);
# 179 "himeno.c"
printf("Loop executed for %d times\n", nn);
# 180 "himeno.c"
printf("Gosa : %e \n", gosa);
# 181 "himeno.c"
printf("MFLOPS measured : %f\n", mflops(nn, cpu, flop));
# 182 "himeno.c"
printf("Score based on Pentium III 600MHz : %f\n", (mflops(nn, cpu, flop)) / (82.84));
_XMP_pop_nodes();
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc);
}
}
# 186 "himeno.c"
return 0;
}
}
extern void xmpc_module_init()
{
_XMP_init_template_FIXED(&(_XMP_DESC_t), 3, (long long)(0), (long long)(MKMAX - (1)), (long long)(0), (long long)(MJMAX - (1)), (long long)(0), (long long)(MIMAX - (1)));
_XMP_init_nodes_DYNAMIC_GLOBAL(&(_XMP_DESC_n), 2, -1, (int * )(&(_XMP_NODES_SIZE_n_0)), -1, (int * )(&(_XMP_NODES_SIZE_n_1)), (int * )(&(_XMP_NODES_RANK_n_0)), (int * )(&(_XMP_NODES_RANK_n_1)));
_XMP_init_template_chunk(_XMP_DESC_t, _XMP_DESC_n);
_XMP_dist_template_DUPLICATION(_XMP_DESC_t, 0);
_XMP_dist_template_BLOCK(_XMP_DESC_t, 1, 0);
_XMP_dist_template_BLOCK(_XMP_DESC_t, 2, 1);
_XMP_init_array_desc(&(_XMP_DESC_p), _XMP_DESC_t, 3, 513, sizeof(float), (int)(MIMAX), (int)(MJMAX), (int)(MKMAX));
_XMP_align_array_BLOCK(_XMP_DESC_p, 0, 2, 0, &(_XMP_GTOL_temp0_p_0));
_XMP_align_array_BLOCK(_XMP_DESC_p, 1, 1, 0, &(_XMP_GTOL_temp0_p_1));
_XMP_align_array_DUPLICATION(_XMP_DESC_p, 2, 0, 0);
_XMP_init_array_comm(_XMP_DESC_p, 0, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_p);
_XMP_init_array_desc(&(_XMP_DESC_bnd), _XMP_DESC_t, 3, 513, sizeof(float), (int)(MIMAX), (int)(MJMAX), (int)(MKMAX));
_XMP_align_array_BLOCK(_XMP_DESC_bnd, 0, 2, 0, &(_XMP_GTOL_temp0_bnd_0));
_XMP_align_array_BLOCK(_XMP_DESC_bnd, 1, 1, 0, &(_XMP_GTOL_temp0_bnd_1));
_XMP_align_array_DUPLICATION(_XMP_DESC_bnd, 2, 0, 0);
_XMP_init_array_comm(_XMP_DESC_bnd, 0, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_bnd);
_XMP_init_array_desc(&(_XMP_DESC_wrk1), _XMP_DESC_t, 3, 513, sizeof(float), (int)(MIMAX), (int)(MJMAX), (int)(MKMAX));
_XMP_align_array_BLOCK(_XMP_DESC_wrk1, 0, 2, 0, &(_XMP_GTOL_temp0_wrk1_0));
_XMP_align_array_BLOCK(_XMP_DESC_wrk1, 1, 1, 0, &(_XMP_GTOL_temp0_wrk1_1));
_XMP_align_array_DUPLICATION(_XMP_DESC_wrk1, 2, 0, 0);
_XMP_init_array_comm(_XMP_DESC_wrk1, 0, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_wrk1);
_XMP_init_array_desc(&(_XMP_DESC_wrk2), _XMP_DESC_t, 3, 513, sizeof(float), (int)(MIMAX), (int)(MJMAX), (int)(MKMAX));
_XMP_align_array_BLOCK(_XMP_DESC_wrk2, 0, 2, 0, &(_XMP_GTOL_temp0_wrk2_0));
_XMP_align_array_BLOCK(_XMP_DESC_wrk2, 1, 1, 0, &(_XMP_GTOL_temp0_wrk2_1));
_XMP_align_array_DUPLICATION(_XMP_DESC_wrk2, 2, 0, 0);
_XMP_init_array_comm(_XMP_DESC_wrk2, 0, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_wrk2);
_XMP_init_array_desc(&(_XMP_DESC_a), _XMP_DESC_t, 4, 513, sizeof(float), (int)(0x000000004ll), (int)(MIMAX), (int)(MJMAX), (int)(MKMAX));
_XMP_align_array_NOT_ALIGNED(_XMP_DESC_a, 0);
_XMP_align_array_BLOCK(_XMP_DESC_a, 1, 2, 0, &(_XMP_GTOL_temp0_a_1));
_XMP_align_array_BLOCK(_XMP_DESC_a, 2, 1, 0, &(_XMP_GTOL_temp0_a_2));
_XMP_align_array_DUPLICATION(_XMP_DESC_a, 3, 0, 0);
_XMP_init_array_comm(_XMP_DESC_a, 0, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_a);
_XMP_init_array_desc(&(_XMP_DESC_b), _XMP_DESC_t, 4, 513, sizeof(float), (int)(0x000000003ll), (int)(MIMAX), (int)(MJMAX), (int)(MKMAX));
_XMP_align_array_NOT_ALIGNED(_XMP_DESC_b, 0);
_XMP_align_array_BLOCK(_XMP_DESC_b, 1, 2, 0, &(_XMP_GTOL_temp0_b_1));
_XMP_align_array_BLOCK(_XMP_DESC_b, 2, 1, 0, &(_XMP_GTOL_temp0_b_2));
_XMP_align_array_DUPLICATION(_XMP_DESC_b, 3, 0, 0);
_XMP_init_array_comm(_XMP_DESC_b, 0, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_b);
_XMP_init_array_desc(&(_XMP_DESC_c), _XMP_DESC_t, 4, 513, sizeof(float), (int)(0x000000003ll), (int)(MIMAX), (int)(MJMAX), (int)(MKMAX));
_XMP_align_array_NOT_ALIGNED(_XMP_DESC_c, 0);
_XMP_align_array_BLOCK(_XMP_DESC_c, 1, 2, 0, &(_XMP_GTOL_temp0_c_1));
_XMP_align_array_BLOCK(_XMP_DESC_c, 2, 1, 0, &(_XMP_GTOL_temp0_c_2));
_XMP_align_array_DUPLICATION(_XMP_DESC_c, 3, 0, 0);
_XMP_init_array_comm(_XMP_DESC_c, 0, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_c);
_XMP_init_shadow(_XMP_DESC_p, (int)(401), (int)(1), (int)(1), (int)(401), (int)(1), (int)(1), (int)(400));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_p)), _XMP_DESC_p, (unsigned long long * )(&(_XMP_GTOL_acc_p_2)), (unsigned long long * )(&(_XMP_GTOL_acc_p_1)), (unsigned long long * )(&(_XMP_GTOL_acc_p_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_a)), _XMP_DESC_a, (unsigned long long * )(&(_XMP_GTOL_acc_a_3)), (unsigned long long * )(&(_XMP_GTOL_acc_a_2)), (unsigned long long * )(&(_XMP_GTOL_acc_a_1)), (unsigned long long * )(&(_XMP_GTOL_acc_a_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_b)), _XMP_DESC_b, (unsigned long long * )(&(_XMP_GTOL_acc_b_3)), (unsigned long long * )(&(_XMP_GTOL_acc_b_2)), (unsigned long long * )(&(_XMP_GTOL_acc_b_1)), (unsigned long long * )(&(_XMP_GTOL_acc_b_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_c)), _XMP_DESC_c, (unsigned long long * )(&(_XMP_GTOL_acc_c_3)), (unsigned long long * )(&(_XMP_GTOL_acc_c_2)), (unsigned long long * )(&(_XMP_GTOL_acc_c_1)), (unsigned long long * )(&(_XMP_GTOL_acc_c_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_bnd)), _XMP_DESC_bnd, (unsigned long long * )(&(_XMP_GTOL_acc_bnd_2)), (unsigned long long * )(&(_XMP_GTOL_acc_bnd_1)), (unsigned long long * )(&(_XMP_GTOL_acc_bnd_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_wrk1)), _XMP_DESC_wrk1, (unsigned long long * )(&(_XMP_GTOL_acc_wrk1_2)), (unsigned long long * )(&(_XMP_GTOL_acc_wrk1_1)), (unsigned long long * )(&(_XMP_GTOL_acc_wrk1_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_wrk2)), _XMP_DESC_wrk2, (unsigned long long * )(&(_XMP_GTOL_acc_wrk2_2)), (unsigned long long * )(&(_XMP_GTOL_acc_wrk2_1)), (unsigned long long * )(&(_XMP_GTOL_acc_wrk2_0)));
}
extern void xmpc_finalize_file_himeno_5f_2e_5f_c_5f_pp()
{
}
