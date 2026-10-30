/* Problem reports (report.c): crash reports and the player's report key. */
#ifndef REPORT_H
#define REPORT_H
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
enum { REPORT_PROBLEM, REPORT_CRASH };
void report_install_crash_handler(void);
void report_boot_save(const unsigned char *sram);
void report_input(long frame, int keys);          /* every frame: the buttons */
void report_note(const char *fmt, ...);           /* a line for the report's recent log */
void report_snapshot(void);                       /* picture + memory now (when the report key is pressed) */
const char *report_write(int kind, const char *message);   /* → the zip's path (or NULL) */
void report_open_issue(int kind, const char *message, const char *zip);
const char *report_pending_crash(char *msg, size_t n);     /* last run's crash zip, or NULL */
void report_clear_pending_crash(void);
const char *report_folder(void);
#ifdef __cplusplus
}
#endif
#endif
