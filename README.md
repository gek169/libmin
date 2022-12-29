

# Hyper minimal replacement for the libc.

Working on an embedded system with barely any memory, a dubious C Compilation environment, and
no need for most of the clutter of c stdio and environment variables?

Just need the handy string and memory manipulation functions to get going?

Tired of your bloated libc?

THIS IS THE LIBRARY FOR YOU!

This is a C standard library replacement for embedded platforms which as of writing is currently in development.

It provides a minimal set of functions which would be needed for writing the most basic C Code.

The library does not provide any I/O functionality or errno or the like since such is dubious to be supported
on your target platform.

I am planning on implementing the most essential (read: most useful, least deprecated) functions from
the C standard library.

I would also like to implement enough additional functionality to make writing a compiler for a target machine easy,
particular parsing.

This code rests in the public domain. It is my gift to you, beloved. Enjoy.

Let all your things be done with charity. - 1 Cor 16:14

