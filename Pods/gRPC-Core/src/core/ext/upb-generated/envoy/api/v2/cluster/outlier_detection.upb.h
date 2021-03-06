/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/cluster/outlier_detection.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_CLUSTER_OUTLIER_DETECTION_PROTO_UPB_H_
#define ENVOY_API_V2_CLUSTER_OUTLIER_DETECTION_PROTO_UPB_H_

#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode.h"
#else
  #include  "upb/decode.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/encode.h"
#else
  #include  "upb/encode.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_cluster_OutlierDetection;
typedef struct envoy_api_v2_cluster_OutlierDetection envoy_api_v2_cluster_OutlierDetection;
extern const upb_msglayout envoy_api_v2_cluster_OutlierDetection_msginit;
struct google_protobuf_Duration;
struct google_protobuf_UInt32Value;
extern const upb_msglayout google_protobuf_Duration_msginit;
extern const upb_msglayout google_protobuf_UInt32Value_msginit;


/* envoy.api.v2.cluster.OutlierDetection */

UPB_INLINE envoy_api_v2_cluster_OutlierDetection *envoy_api_v2_cluster_OutlierDetection_new(upb_arena *arena) {
  return (envoy_api_v2_cluster_OutlierDetection *)_upb_msg_new(&envoy_api_v2_cluster_OutlierDetection_msginit, arena);
}
UPB_INLINE envoy_api_v2_cluster_OutlierDetection *envoy_api_v2_cluster_OutlierDetection_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_cluster_OutlierDetection *ret = envoy_api_v2_cluster_OutlierDetection_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_cluster_OutlierDetection_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_cluster_OutlierDetection_serialize(const envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_cluster_OutlierDetection_msginit, arena, len);
}

UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_consecutive_5xx(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(4, 8)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_consecutive_5xx(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_interval(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const struct google_protobuf_Duration* envoy_api_v2_cluster_OutlierDetection_interval(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const struct google_protobuf_Duration*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_base_ejection_time(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24)); }
UPB_INLINE const struct google_protobuf_Duration* envoy_api_v2_cluster_OutlierDetection_base_ejection_time(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct google_protobuf_Duration*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_max_ejection_percent(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(16, 32)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_max_ejection_percent(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_enforcing_consecutive_5xx(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(20, 40)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_enforcing_consecutive_5xx(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(20, 40), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_enforcing_success_rate(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(24, 48)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_enforcing_success_rate(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(24, 48), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_success_rate_minimum_hosts(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(28, 56)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_success_rate_minimum_hosts(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(28, 56), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_success_rate_request_volume(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(32, 64)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_success_rate_request_volume(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(32, 64), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_success_rate_stdev_factor(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(36, 72)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_success_rate_stdev_factor(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(36, 72), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_consecutive_gateway_failure(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(40, 80)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_consecutive_gateway_failure(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(40, 80), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_enforcing_consecutive_gateway_failure(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(44, 88)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_enforcing_consecutive_gateway_failure(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(44, 88), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_split_external_local_origin_errors(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_consecutive_local_origin_failure(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(48, 96)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_consecutive_local_origin_failure(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(48, 96), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_enforcing_consecutive_local_origin_failure(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(52, 104)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_enforcing_consecutive_local_origin_failure(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(52, 104), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_enforcing_local_origin_success_rate(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(56, 112)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_enforcing_local_origin_success_rate(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(56, 112), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_failure_percentage_threshold(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(60, 120)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_failure_percentage_threshold(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(60, 120), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_enforcing_failure_percentage(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(64, 128)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_enforcing_failure_percentage(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(64, 128), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_enforcing_failure_percentage_local_origin(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(68, 136)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_enforcing_failure_percentage_local_origin(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(68, 136), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_failure_percentage_minimum_hosts(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(72, 144)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_failure_percentage_minimum_hosts(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(72, 144), const struct google_protobuf_UInt32Value*); }
UPB_INLINE bool envoy_api_v2_cluster_OutlierDetection_has_failure_percentage_request_volume(const envoy_api_v2_cluster_OutlierDetection *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(76, 152)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_failure_percentage_request_volume(const envoy_api_v2_cluster_OutlierDetection *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(76, 152), const struct google_protobuf_UInt32Value*); }

UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_consecutive_5xx(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_consecutive_5xx(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_consecutive_5xx(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_consecutive_5xx(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_interval(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_Duration* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_api_v2_cluster_OutlierDetection_mutable_interval(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_api_v2_cluster_OutlierDetection_interval(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_msg_new(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_interval(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_base_ejection_time(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_Duration* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_api_v2_cluster_OutlierDetection_mutable_base_ejection_time(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_api_v2_cluster_OutlierDetection_base_ejection_time(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_msg_new(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_base_ejection_time(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_max_ejection_percent(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_max_ejection_percent(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_max_ejection_percent(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_max_ejection_percent(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_enforcing_consecutive_5xx(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(20, 40), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_enforcing_consecutive_5xx(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_enforcing_consecutive_5xx(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_enforcing_consecutive_5xx(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_enforcing_success_rate(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(24, 48), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_enforcing_success_rate(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_enforcing_success_rate(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_enforcing_success_rate(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_success_rate_minimum_hosts(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(28, 56), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_success_rate_minimum_hosts(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_success_rate_minimum_hosts(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_success_rate_minimum_hosts(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_success_rate_request_volume(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(32, 64), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_success_rate_request_volume(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_success_rate_request_volume(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_success_rate_request_volume(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_success_rate_stdev_factor(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(36, 72), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_success_rate_stdev_factor(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_success_rate_stdev_factor(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_success_rate_stdev_factor(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_consecutive_gateway_failure(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(40, 80), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_consecutive_gateway_failure(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_consecutive_gateway_failure(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_consecutive_gateway_failure(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_enforcing_consecutive_gateway_failure(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(44, 88), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_enforcing_consecutive_gateway_failure(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_enforcing_consecutive_gateway_failure(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_enforcing_consecutive_gateway_failure(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_split_external_local_origin_errors(envoy_api_v2_cluster_OutlierDetection *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool) = value;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_consecutive_local_origin_failure(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(48, 96), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_consecutive_local_origin_failure(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_consecutive_local_origin_failure(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_consecutive_local_origin_failure(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_enforcing_consecutive_local_origin_failure(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(52, 104), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_enforcing_consecutive_local_origin_failure(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_enforcing_consecutive_local_origin_failure(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_enforcing_consecutive_local_origin_failure(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_enforcing_local_origin_success_rate(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(56, 112), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_enforcing_local_origin_success_rate(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_enforcing_local_origin_success_rate(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_enforcing_local_origin_success_rate(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_failure_percentage_threshold(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(60, 120), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_failure_percentage_threshold(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_failure_percentage_threshold(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_failure_percentage_threshold(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_enforcing_failure_percentage(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(64, 128), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_enforcing_failure_percentage(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_enforcing_failure_percentage(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_enforcing_failure_percentage(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_enforcing_failure_percentage_local_origin(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(68, 136), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_enforcing_failure_percentage_local_origin(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_enforcing_failure_percentage_local_origin(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_enforcing_failure_percentage_local_origin(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_failure_percentage_minimum_hosts(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(72, 144), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_failure_percentage_minimum_hosts(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_failure_percentage_minimum_hosts(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_failure_percentage_minimum_hosts(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_cluster_OutlierDetection_set_failure_percentage_request_volume(envoy_api_v2_cluster_OutlierDetection *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(76, 152), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_cluster_OutlierDetection_mutable_failure_percentage_request_volume(envoy_api_v2_cluster_OutlierDetection *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_cluster_OutlierDetection_failure_percentage_request_volume(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_cluster_OutlierDetection_set_failure_percentage_request_volume(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_API_V2_CLUSTER_OUTLIER_DETECTION_PROTO_UPB_H_ */
