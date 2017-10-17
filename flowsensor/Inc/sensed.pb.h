/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Fri Oct  6 12:36:54 2017. */

#ifndef PB_SENSED_PB_H_INCLUDED
#define PB_SENSED_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _Sensed {
    int32_t timestamp;
    int32_t flow;
    int32_t battery;
/* @@protoc_insertion_point(struct:Sensed) */
} Sensed;

/* Default values for struct fields */

/* Initializer values for message structs */
#define Sensed_init_default                      {0, 0, 0}
#define Sensed_init_zero                         {0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define Sensed_timestamp_tag                     1
#define Sensed_flow_tag                          2
#define Sensed_battery_tag                       3

/* Struct field encoding specification for nanopb */
extern const pb_field_t Sensed_fields[4];

/* Maximum encoded size of messages (where known) */
#define Sensed_size                              33

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SENSED_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif