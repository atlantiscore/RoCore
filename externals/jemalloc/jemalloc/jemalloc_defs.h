/* include/jemalloc/jemalloc_defs.h.  Generated from jemalloc_defs.h.in by configure.  */
#ifndef JEMALLOC_DEFS_H_
#define	JEMALLOC_DEFS_H_

/*
 * If JEMALLOC_PREFIX is defined, it will cause all public APIs to be prefixed.
 * This makes it possible, with some care, to use multiple allocators
 * simultaneously.
 *
 * In many cases it is more convenient to manually prefix allocator function
 * calls than to let macros do it automatically, particularly when using
 * multiple allocators simultaneously.  Define JEMALLOC_MANGLE before
 * #include'ing jemalloc.h in order to cause name mangling that corresponds to
 * the API prefixing.
 */
/* #undef JEMALLOC_PREFIX */
#if (defined(JEMALLOC_PREFIX) && defined(JEMALLOC_MANGLE))
/* #undef JEMALLOC_P */
#endif

/*
 * Hyper-threaded CPUs may need a special instruction inside spin loops in
 * order to yield to another virtual CPU.
 */
#define CPU_SPINWAIT __asm__ volatile("pause")

/* Defined if __attribute__((...)) syntax is supported. */
#define JEMALLOC_HAVE_ATTR 
#ifdef JEMALLOC_HAVE_ATTR
#  define JEMALLOC_ATTR(s) __attribute__((s))
#else
#  define JEMALLOC_ATTR(s)
#endif

/*
 * JEMALLOC_DEBUG enables assertions and other sanity checks, and disables
 * inline functions.
 */
/* #undef JEMALLOC_DEBUG */

/* JEMALLOC_STATS enables statistics calculation. */
/* #undef JEMALLOC_STATS */

/* JEMALLOC_PROF enables allocation profiling. */
/* #undef JEMALLOC_PROF */

/* Use libunwind for profile backtracing if defined. */
/* #undef JEMALLOC_PROF_LIBUNWIND */

/* Use libgcc for profile backtracing if defined. */
/* #undef JEMALLOC_PROF_LIBGCC */

/*
 * JEMALLOC_TINY enables support for tiny objects, which are smaller than one
 * quantum.
 */
#define JEMALLOC_TINY 

/*
 * JEMALLOC_TCACHE enables a thread-specific caching layer for small objects.
 * This makes it possible to allocate/deallocate objects without any locking
 * when the cache is in the steady state.
 */
#define JEMALLOC_TCACHE 

/*
 * JEMALLOC_DSS enables use of sbrk(2) to allocate chunks from the data storage
 * segment (DSS).
 */
/* #undef JEMALLOC_DSS */

/* JEMALLOC_SWAP enables mmap()ed swap file support. */
/* #undef JEMALLOC_SWAP */

/* Support memory filling (junk/zero). */
/* #undef JEMALLOC_FILL */

/* Support optional abort() on OOM. */
/* #undef JEMALLOC_XMALLOC */

/* Support SYSV semantics. */
/* #undef JEMALLOC_SYSV */

/* Support lazy locking (avoid locking unless a second thread is launched). */
#define JEMALLOC_LAZY_LOCK 

/* Determine page size at run time if defined. */
/* #undef DYNAMIC_PAGE_SHIFT */

/* One page is 2^STATIC_PAGE_SHIFT bytes. */
#define STATIC_PAGE_SHIFT 12

/* TLS is used to map arenas and magazine caches to threads. */
/* #undef NO_TLS */

/* sizeof(void *) == 2^LG_SIZEOF_PTR. */
#define LG_SIZEOF_PTR 3

/* sizeof(int) == 2^LG_SIZEOF_INT. */
#define LG_SIZEOF_INT 2

#endif /* JEMALLOC_DEFS_H_ */
