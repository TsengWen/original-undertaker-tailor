#include <recursive-expression.h>
/*
 * check-name: recursive #include
 * check-command: undertaker -j cpppc -Iinclude $file
 * check-output-start
( B0 <-> (CONFIG_B) )
&& ( B1 <-> B0 && (CONFIG_A) )
&& B00
 * check-output-end
 */
