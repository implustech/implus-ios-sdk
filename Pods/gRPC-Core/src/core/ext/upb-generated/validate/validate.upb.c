/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     validate/validate.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/validate/validate.upb.h"
#else
  #include  "validate/validate.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/descriptor.upb.h"
#else
  #include  "google/protobuf/descriptor.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/duration.upb.h"
#else
  #include  "google/protobuf/duration.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/timestamp.upb.h"
#else
  #include  "google/protobuf/timestamp.upb.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

static const upb_msglayout *const validate_FieldRules_submsgs[22] = {
  &validate_AnyRules_msginit,
  &validate_BoolRules_msginit,
  &validate_BytesRules_msginit,
  &validate_DoubleRules_msginit,
  &validate_DurationRules_msginit,
  &validate_EnumRules_msginit,
  &validate_Fixed32Rules_msginit,
  &validate_Fixed64Rules_msginit,
  &validate_FloatRules_msginit,
  &validate_Int32Rules_msginit,
  &validate_Int64Rules_msginit,
  &validate_MapRules_msginit,
  &validate_MessageRules_msginit,
  &validate_RepeatedRules_msginit,
  &validate_SFixed32Rules_msginit,
  &validate_SFixed64Rules_msginit,
  &validate_SInt32Rules_msginit,
  &validate_SInt64Rules_msginit,
  &validate_StringRules_msginit,
  &validate_TimestampRules_msginit,
  &validate_UInt32Rules_msginit,
  &validate_UInt64Rules_msginit,
};

static const upb_msglayout_field validate_FieldRules__fields[22] = {
  {1, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 8, 11, 1},
  {2, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 3, 11, 1},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 9, 11, 1},
  {4, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 10, 11, 1},
  {5, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 20, 11, 1},
  {6, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 21, 11, 1},
  {7, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 16, 11, 1},
  {8, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 17, 11, 1},
  {9, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 6, 11, 1},
  {10, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 7, 11, 1},
  {11, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 14, 11, 1},
  {12, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 15, 11, 1},
  {13, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 1, 11, 1},
  {14, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 18, 11, 1},
  {15, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 2, 11, 1},
  {16, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 5, 11, 1},
  {17, UPB_SIZE(4, 8), 1, 12, 11, 1},
  {18, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 13, 11, 1},
  {19, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 11, 11, 1},
  {20, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, 1},
  {21, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 4, 11, 1},
  {22, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 19, 11, 1},
};

const upb_msglayout validate_FieldRules_msginit = {
  &validate_FieldRules_submsgs[0],
  &validate_FieldRules__fields[0],
  UPB_SIZE(16, 32), 22, false,
};

static const upb_msglayout_field validate_FloatRules__fields[7] = {
  {1, UPB_SIZE(4, 4), 1, 0, 2, 1},
  {2, UPB_SIZE(8, 8), 2, 0, 2, 1},
  {3, UPB_SIZE(12, 12), 3, 0, 2, 1},
  {4, UPB_SIZE(16, 16), 4, 0, 2, 1},
  {5, UPB_SIZE(20, 20), 5, 0, 2, 1},
  {6, UPB_SIZE(24, 24), 0, 0, 2, 3},
  {7, UPB_SIZE(28, 32), 0, 0, 2, 3},
};

const upb_msglayout validate_FloatRules_msginit = {
  NULL,
  &validate_FloatRules__fields[0],
  UPB_SIZE(32, 40), 7, false,
};

static const upb_msglayout_field validate_DoubleRules__fields[7] = {
  {1, UPB_SIZE(8, 8), 1, 0, 1, 1},
  {2, UPB_SIZE(16, 16), 2, 0, 1, 1},
  {3, UPB_SIZE(24, 24), 3, 0, 1, 1},
  {4, UPB_SIZE(32, 32), 4, 0, 1, 1},
  {5, UPB_SIZE(40, 40), 5, 0, 1, 1},
  {6, UPB_SIZE(48, 48), 0, 0, 1, 3},
  {7, UPB_SIZE(52, 56), 0, 0, 1, 3},
};

const upb_msglayout validate_DoubleRules_msginit = {
  NULL,
  &validate_DoubleRules__fields[0],
  UPB_SIZE(56, 64), 7, false,
};

static const upb_msglayout_field validate_Int32Rules__fields[7] = {
  {1, UPB_SIZE(4, 4), 1, 0, 5, 1},
  {2, UPB_SIZE(8, 8), 2, 0, 5, 1},
  {3, UPB_SIZE(12, 12), 3, 0, 5, 1},
  {4, UPB_SIZE(16, 16), 4, 0, 5, 1},
  {5, UPB_SIZE(20, 20), 5, 0, 5, 1},
  {6, UPB_SIZE(24, 24), 0, 0, 5, 3},
  {7, UPB_SIZE(28, 32), 0, 0, 5, 3},
};

const upb_msglayout validate_Int32Rules_msginit = {
  NULL,
  &validate_Int32Rules__fields[0],
  UPB_SIZE(32, 40), 7, false,
};

static const upb_msglayout_field validate_Int64Rules__fields[7] = {
  {1, UPB_SIZE(8, 8), 1, 0, 3, 1},
  {2, UPB_SIZE(16, 16), 2, 0, 3, 1},
  {3, UPB_SIZE(24, 24), 3, 0, 3, 1},
  {4, UPB_SIZE(32, 32), 4, 0, 3, 1},
  {5, UPB_SIZE(40, 40), 5, 0, 3, 1},
  {6, UPB_SIZE(48, 48), 0, 0, 3, 3},
  {7, UPB_SIZE(52, 56), 0, 0, 3, 3},
};

const upb_msglayout validate_Int64Rules_msginit = {
  NULL,
  &validate_Int64Rules__fields[0],
  UPB_SIZE(56, 64), 7, false,
};

static const upb_msglayout_field validate_UInt32Rules__fields[7] = {
  {1, UPB_SIZE(4, 4), 1, 0, 13, 1},
  {2, UPB_SIZE(8, 8), 2, 0, 13, 1},
  {3, UPB_SIZE(12, 12), 3, 0, 13, 1},
  {4, UPB_SIZE(16, 16), 4, 0, 13, 1},
  {5, UPB_SIZE(20, 20), 5, 0, 13, 1},
  {6, UPB_SIZE(24, 24), 0, 0, 13, 3},
  {7, UPB_SIZE(28, 32), 0, 0, 13, 3},
};

const upb_msglayout validate_UInt32Rules_msginit = {
  NULL,
  &validate_UInt32Rules__fields[0],
  UPB_SIZE(32, 40), 7, false,
};

static const upb_msglayout_field validate_UInt64Rules__fields[7] = {
  {1, UPB_SIZE(8, 8), 1, 0, 4, 1},
  {2, UPB_SIZE(16, 16), 2, 0, 4, 1},
  {3, UPB_SIZE(24, 24), 3, 0, 4, 1},
  {4, UPB_SIZE(32, 32), 4, 0, 4, 1},
  {5, UPB_SIZE(40, 40), 5, 0, 4, 1},
  {6, UPB_SIZE(48, 48), 0, 0, 4, 3},
  {7, UPB_SIZE(52, 56), 0, 0, 4, 3},
};

const upb_msglayout validate_UInt64Rules_msginit = {
  NULL,
  &validate_UInt64Rules__fields[0],
  UPB_SIZE(56, 64), 7, false,
};

static const upb_msglayout_field validate_SInt32Rules__fields[7] = {
  {1, UPB_SIZE(4, 4), 1, 0, 17, 1},
  {2, UPB_SIZE(8, 8), 2, 0, 17, 1},
  {3, UPB_SIZE(12, 12), 3, 0, 17, 1},
  {4, UPB_SIZE(16, 16), 4, 0, 17, 1},
  {5, UPB_SIZE(20, 20), 5, 0, 17, 1},
  {6, UPB_SIZE(24, 24), 0, 0, 17, 3},
  {7, UPB_SIZE(28, 32), 0, 0, 17, 3},
};

const upb_msglayout validate_SInt32Rules_msginit = {
  NULL,
  &validate_SInt32Rules__fields[0],
  UPB_SIZE(32, 40), 7, false,
};

static const upb_msglayout_field validate_SInt64Rules__fields[7] = {
  {1, UPB_SIZE(8, 8), 1, 0, 18, 1},
  {2, UPB_SIZE(16, 16), 2, 0, 18, 1},
  {3, UPB_SIZE(24, 24), 3, 0, 18, 1},
  {4, UPB_SIZE(32, 32), 4, 0, 18, 1},
  {5, UPB_SIZE(40, 40), 5, 0, 18, 1},
  {6, UPB_SIZE(48, 48), 0, 0, 18, 3},
  {7, UPB_SIZE(52, 56), 0, 0, 18, 3},
};

const upb_msglayout validate_SInt64Rules_msginit = {
  NULL,
  &validate_SInt64Rules__fields[0],
  UPB_SIZE(56, 64), 7, false,
};

static const upb_msglayout_field validate_Fixed32Rules__fields[7] = {
  {1, UPB_SIZE(4, 4), 1, 0, 7, 1},
  {2, UPB_SIZE(8, 8), 2, 0, 7, 1},
  {3, UPB_SIZE(12, 12), 3, 0, 7, 1},
  {4, UPB_SIZE(16, 16), 4, 0, 7, 1},
  {5, UPB_SIZE(20, 20), 5, 0, 7, 1},
  {6, UPB_SIZE(24, 24), 0, 0, 7, 3},
  {7, UPB_SIZE(28, 32), 0, 0, 7, 3},
};

const upb_msglayout validate_Fixed32Rules_msginit = {
  NULL,
  &validate_Fixed32Rules__fields[0],
  UPB_SIZE(32, 40), 7, false,
};

static const upb_msglayout_field validate_Fixed64Rules__fields[7] = {
  {1, UPB_SIZE(8, 8), 1, 0, 6, 1},
  {2, UPB_SIZE(16, 16), 2, 0, 6, 1},
  {3, UPB_SIZE(24, 24), 3, 0, 6, 1},
  {4, UPB_SIZE(32, 32), 4, 0, 6, 1},
  {5, UPB_SIZE(40, 40), 5, 0, 6, 1},
  {6, UPB_SIZE(48, 48), 0, 0, 6, 3},
  {7, UPB_SIZE(52, 56), 0, 0, 6, 3},
};

const upb_msglayout validate_Fixed64Rules_msginit = {
  NULL,
  &validate_Fixed64Rules__fields[0],
  UPB_SIZE(56, 64), 7, false,
};

static const upb_msglayout_field validate_SFixed32Rules__fields[7] = {
  {1, UPB_SIZE(4, 4), 1, 0, 15, 1},
  {2, UPB_SIZE(8, 8), 2, 0, 15, 1},
  {3, UPB_SIZE(12, 12), 3, 0, 15, 1},
  {4, UPB_SIZE(16, 16), 4, 0, 15, 1},
  {5, UPB_SIZE(20, 20), 5, 0, 15, 1},
  {6, UPB_SIZE(24, 24), 0, 0, 15, 3},
  {7, UPB_SIZE(28, 32), 0, 0, 15, 3},
};

const upb_msglayout validate_SFixed32Rules_msginit = {
  NULL,
  &validate_SFixed32Rules__fields[0],
  UPB_SIZE(32, 40), 7, false,
};

static const upb_msglayout_field validate_SFixed64Rules__fields[7] = {
  {1, UPB_SIZE(8, 8), 1, 0, 16, 1},
  {2, UPB_SIZE(16, 16), 2, 0, 16, 1},
  {3, UPB_SIZE(24, 24), 3, 0, 16, 1},
  {4, UPB_SIZE(32, 32), 4, 0, 16, 1},
  {5, UPB_SIZE(40, 40), 5, 0, 16, 1},
  {6, UPB_SIZE(48, 48), 0, 0, 16, 3},
  {7, UPB_SIZE(52, 56), 0, 0, 16, 3},
};

const upb_msglayout validate_SFixed64Rules_msginit = {
  NULL,
  &validate_SFixed64Rules__fields[0],
  UPB_SIZE(56, 64), 7, false,
};

static const upb_msglayout_field validate_BoolRules__fields[1] = {
  {1, UPB_SIZE(1, 1), 1, 0, 8, 1},
};

const upb_msglayout validate_BoolRules_msginit = {
  NULL,
  &validate_BoolRules__fields[0],
  UPB_SIZE(2, 2), 1, false,
};

static const upb_msglayout_field validate_StringRules__fields[25] = {
  {1, UPB_SIZE(60, 64), 8, 0, 9, 1},
  {2, UPB_SIZE(8, 8), 1, 0, 4, 1},
  {3, UPB_SIZE(16, 16), 2, 0, 4, 1},
  {4, UPB_SIZE(24, 24), 3, 0, 4, 1},
  {5, UPB_SIZE(32, 32), 4, 0, 4, 1},
  {6, UPB_SIZE(68, 80), 9, 0, 9, 1},
  {7, UPB_SIZE(76, 96), 10, 0, 9, 1},
  {8, UPB_SIZE(84, 112), 11, 0, 9, 1},
  {9, UPB_SIZE(92, 128), 12, 0, 9, 1},
  {10, UPB_SIZE(108, 160), 0, 0, 9, 3},
  {11, UPB_SIZE(112, 168), 0, 0, 9, 3},
  {12, UPB_SIZE(120, 176), UPB_SIZE(-129, -185), 0, 8, 1},
  {13, UPB_SIZE(120, 176), UPB_SIZE(-129, -185), 0, 8, 1},
  {14, UPB_SIZE(120, 176), UPB_SIZE(-129, -185), 0, 8, 1},
  {15, UPB_SIZE(120, 176), UPB_SIZE(-129, -185), 0, 8, 1},
  {16, UPB_SIZE(120, 176), UPB_SIZE(-129, -185), 0, 8, 1},
  {17, UPB_SIZE(120, 176), UPB_SIZE(-129, -185), 0, 8, 1},
  {18, UPB_SIZE(120, 176), UPB_SIZE(-129, -185), 0, 8, 1},
  {19, UPB_SIZE(40, 40), 5, 0, 4, 1},
  {20, UPB_SIZE(48, 48), 6, 0, 4, 1},
  {21, UPB_SIZE(120, 176), UPB_SIZE(-129, -185), 0, 8, 1},
  {22, UPB_SIZE(120, 176), UPB_SIZE(-129, -185), 0, 8, 1},
  {23, UPB_SIZE(100, 144), 13, 0, 9, 1},
  {24, UPB_SIZE(120, 176), UPB_SIZE(-129, -185), 0, 14, 1},
  {25, UPB_SIZE(56, 56), 7, 0, 8, 1},
};

const upb_msglayout validate_StringRules_msginit = {
  NULL,
  &validate_StringRules__fields[0],
  UPB_SIZE(136, 192), 25, false,
};

static const upb_msglayout_field validate_BytesRules__fields[13] = {
  {1, UPB_SIZE(32, 32), 4, 0, 12, 1},
  {2, UPB_SIZE(8, 8), 1, 0, 4, 1},
  {3, UPB_SIZE(16, 16), 2, 0, 4, 1},
  {4, UPB_SIZE(40, 48), 5, 0, 9, 1},
  {5, UPB_SIZE(48, 64), 6, 0, 12, 1},
  {6, UPB_SIZE(56, 80), 7, 0, 12, 1},
  {7, UPB_SIZE(64, 96), 8, 0, 12, 1},
  {8, UPB_SIZE(72, 112), 0, 0, 12, 3},
  {9, UPB_SIZE(76, 120), 0, 0, 12, 3},
  {10, UPB_SIZE(80, 128), UPB_SIZE(-85, -133), 0, 8, 1},
  {11, UPB_SIZE(80, 128), UPB_SIZE(-85, -133), 0, 8, 1},
  {12, UPB_SIZE(80, 128), UPB_SIZE(-85, -133), 0, 8, 1},
  {13, UPB_SIZE(24, 24), 3, 0, 4, 1},
};

const upb_msglayout validate_BytesRules_msginit = {
  NULL,
  &validate_BytesRules__fields[0],
  UPB_SIZE(88, 144), 13, false,
};

static const upb_msglayout_field validate_EnumRules__fields[4] = {
  {1, UPB_SIZE(4, 4), 1, 0, 5, 1},
  {2, UPB_SIZE(8, 8), 2, 0, 8, 1},
  {3, UPB_SIZE(12, 16), 0, 0, 5, 3},
  {4, UPB_SIZE(16, 24), 0, 0, 5, 3},
};

const upb_msglayout validate_EnumRules_msginit = {
  NULL,
  &validate_EnumRules__fields[0],
  UPB_SIZE(20, 32), 4, false,
};

static const upb_msglayout_field validate_MessageRules__fields[2] = {
  {1, UPB_SIZE(1, 1), 1, 0, 8, 1},
  {2, UPB_SIZE(2, 2), 2, 0, 8, 1},
};

const upb_msglayout validate_MessageRules_msginit = {
  NULL,
  &validate_MessageRules__fields[0],
  UPB_SIZE(3, 3), 2, false,
};

static const upb_msglayout *const validate_RepeatedRules_submsgs[1] = {
  &validate_FieldRules_msginit,
};

static const upb_msglayout_field validate_RepeatedRules__fields[4] = {
  {1, UPB_SIZE(8, 8), 1, 0, 4, 1},
  {2, UPB_SIZE(16, 16), 2, 0, 4, 1},
  {3, UPB_SIZE(24, 24), 3, 0, 8, 1},
  {4, UPB_SIZE(28, 32), 4, 0, 11, 1},
};

const upb_msglayout validate_RepeatedRules_msginit = {
  &validate_RepeatedRules_submsgs[0],
  &validate_RepeatedRules__fields[0],
  UPB_SIZE(32, 40), 4, false,
};

static const upb_msglayout *const validate_MapRules_submsgs[2] = {
  &validate_FieldRules_msginit,
};

static const upb_msglayout_field validate_MapRules__fields[5] = {
  {1, UPB_SIZE(8, 8), 1, 0, 4, 1},
  {2, UPB_SIZE(16, 16), 2, 0, 4, 1},
  {3, UPB_SIZE(24, 24), 3, 0, 8, 1},
  {4, UPB_SIZE(28, 32), 4, 0, 11, 1},
  {5, UPB_SIZE(32, 40), 5, 0, 11, 1},
};

const upb_msglayout validate_MapRules_msginit = {
  &validate_MapRules_submsgs[0],
  &validate_MapRules__fields[0],
  UPB_SIZE(40, 48), 5, false,
};

static const upb_msglayout_field validate_AnyRules__fields[3] = {
  {1, UPB_SIZE(1, 1), 1, 0, 8, 1},
  {2, UPB_SIZE(4, 8), 0, 0, 9, 3},
  {3, UPB_SIZE(8, 16), 0, 0, 9, 3},
};

const upb_msglayout validate_AnyRules_msginit = {
  NULL,
  &validate_AnyRules__fields[0],
  UPB_SIZE(12, 24), 3, false,
};

static const upb_msglayout *const validate_DurationRules_submsgs[7] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field validate_DurationRules__fields[8] = {
  {1, UPB_SIZE(1, 1), 1, 0, 8, 1},
  {2, UPB_SIZE(4, 8), 2, 0, 11, 1},
  {3, UPB_SIZE(8, 16), 3, 0, 11, 1},
  {4, UPB_SIZE(12, 24), 4, 0, 11, 1},
  {5, UPB_SIZE(16, 32), 5, 0, 11, 1},
  {6, UPB_SIZE(20, 40), 6, 0, 11, 1},
  {7, UPB_SIZE(24, 48), 0, 0, 11, 3},
  {8, UPB_SIZE(28, 56), 0, 0, 11, 3},
};

const upb_msglayout validate_DurationRules_msginit = {
  &validate_DurationRules_submsgs[0],
  &validate_DurationRules__fields[0],
  UPB_SIZE(32, 64), 8, false,
};

static const upb_msglayout *const validate_TimestampRules_submsgs[6] = {
  &google_protobuf_Duration_msginit,
  &google_protobuf_Timestamp_msginit,
};

static const upb_msglayout_field validate_TimestampRules__fields[9] = {
  {1, UPB_SIZE(2, 2), 1, 0, 8, 1},
  {2, UPB_SIZE(8, 8), 4, 1, 11, 1},
  {3, UPB_SIZE(12, 16), 5, 1, 11, 1},
  {4, UPB_SIZE(16, 24), 6, 1, 11, 1},
  {5, UPB_SIZE(20, 32), 7, 1, 11, 1},
  {6, UPB_SIZE(24, 40), 8, 1, 11, 1},
  {7, UPB_SIZE(3, 3), 2, 0, 8, 1},
  {8, UPB_SIZE(4, 4), 3, 0, 8, 1},
  {9, UPB_SIZE(28, 48), 9, 0, 11, 1},
};

const upb_msglayout validate_TimestampRules_msginit = {
  &validate_TimestampRules_submsgs[0],
  &validate_TimestampRules__fields[0],
  UPB_SIZE(32, 56), 9, false,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

