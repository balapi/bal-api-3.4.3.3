/*
 *  <:Copyright 2016-2019 Broadcom. All rights reserved. 
 *    The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
 *  :>
*/

#ifndef BCMOLT_API_MODEL_API_STRUCTS_H_
#define BCMOLT_API_MODEL_API_STRUCTS_H_

#include <bcmos_system.h>
#include <bcmolt_system_types.h>
#include "bcmolt_msg.h"
#include "bcmolt_api_model_supporting_structs.h"
#include "bcmolt_api_model_supporting_enums.h"
#include "bcmolt_api_model_supporting_typedefs.h"

/** \addtogroup object_model
 * @{
 */

/** access control: key */
typedef struct
{
    bcmolt_access_control_id id; /**< The ID of the ACL object instance being referenced */
} bcmolt_access_control_key;

/** access control: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_classifier classifier; /**< The classifier for this access control instance */
    uint16_t priority; /**< Priority for this access control instance
    Higher value has precedence over lower value. */
    bcmolt_access_control_fwd_action forwarding_action; /**< The action associated with this access control instance */
    bcmolt_access_control_pkt_modifier modifier_action; /**< config for modifying packet headers for vlan tags, dscp etc */
    bcmolt_config_state state; /**< State. */
    bcmolt_control_state statistics_control; /**< statistics control. */
    bcmolt_cookie cookie; /**< Opaque application cookie associated with this access control instance */
    bcmolt_intf_ref_list_u8 interface_refs; /**< list of associated interfaces. */
} bcmolt_access_control_cfg_data;

/* Constants associated with bcmolt_access_control_cfg_data. */
#define BCMOLT_ACCESS_CONTROL_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000DA70ULL

/** Transport message definition for "cfg" group of "access_control" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_access_control_key key; /**< Object key. */
    bcmolt_access_control_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_access_control_cfg;

/** Multi-object message definition for "cfg" group of "access_control" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_access_control_key key; /**< Object key (can include wildcards). */
    bcmolt_access_control_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_access_control_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_access_control_cfg *responses; /**< Responses to the last API call. */

    bcmolt_access_control_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_access_control_multi_cfg;

/** access control: receive_eth_packet */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_intf_ref interface_ref; /**< Interface Reference */
    bcmolt_service_port_id svc_port_id; /**< GEM or LLID of received packet */
    bcmolt_bin_str buffer; /**< Buffer. */
} bcmolt_access_control_receive_eth_packet_data;

/* Constants associated with bcmolt_access_control_receive_eth_packet_data. */
#define BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_PRESENCE_MASK_ALL 0x000000000000000EULL

/** Transport message definition for "receive_eth_packet" group of "access_control" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_access_control_key key; /**< Object key. */
    bcmolt_access_control_receive_eth_packet_data data; /**< All properties that must be set by the user. */
} bcmolt_access_control_receive_eth_packet;

/** access control: update interface reference */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_members_update_command command; /**< command. */
    bcmolt_intf_ref_list_u8 interface_ref_list; /**< interface reference. */
} bcmolt_access_control_interfaces_update_data;

/* Constants associated with bcmolt_access_control_interfaces_update_data. */
#define BCMOLT_ACCESS_CONTROL_INTERFACES_UPDATE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "interfaces_update" group of "access_control" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_access_control_key key; /**< Object key. */
    bcmolt_access_control_interfaces_update_data data; /**< All properties that must be set by the user. */
} bcmolt_access_control_interfaces_update;

/** access control: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool receive_eth_packet; /**< If true, indications of type "receive_eth_packet" will be generated. */
} bcmolt_access_control_auto_cfg_data;

/* Constants associated with bcmolt_access_control_auto_cfg_data. */
#define BCMOLT_ACCESS_CONTROL_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "auto_cfg" group of "access_control" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_access_control_key key; /**< Object key. */
    bcmolt_access_control_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_access_control_auto_cfg;

/** BAL System Globals: key */
typedef struct
{
    bcmolt_bal_system_id id; /**< id. */
} bcmolt_bal_system_key;

/** BAL System Globals: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state config_state; /**< Configuration State. */
    bcmolt_lag_global_parms lag_parms; /**< LAG Global Params. */
} bcmolt_bal_system_cfg_data;

/* Constants associated with bcmolt_bal_system_cfg_data. */
#define BCMOLT_BAL_SYSTEM_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000030ULL

/** Transport message definition for "cfg" group of "bal_system" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_bal_system_key key; /**< Object key. */
    bcmolt_bal_system_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_bal_system_cfg;

/** Multi-object message definition for "cfg" group of "bal_system" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_bal_system_key key; /**< Object key (can include wildcards). */
    bcmolt_bal_system_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_bal_system_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_bal_system_cfg *responses; /**< Responses to the last API call. */

    bcmolt_bal_system_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_bal_system_multi_cfg;

/** Device: key */
typedef struct
{
    bcmolt_ldid device_id; /**< Device ID */
} bcmolt_device_key;

/** Device: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_system_mode system_mode; /**< System mode - this must be set by the host when initially provisioning the system.  Setting this also sets the "nni_speed" property, unless it is overridden. */
    uint32_t keepalive_interval; /**< Keepalive Interval in Seconds  (0 = Disable) */
    uint32_t keepalive_tolerance; /**< How many keepalive messages can be lost before triggering a disconnect sequence */
    bcmolt_firmware_sw_version firmware_sw_version; /**< Firmware SW Version */
    bcmolt_chip_family chip_family; /**< Chip ID */
    bcmolt_device_chip_revision chip_revision; /**< Revision of the BCM68620 device. */
    uint32_t chip_voltage; /**< Chip voltage in mV */
    int32_t chip_temperature; /**< Current die temperature. */
    bcmolt_debug_device_cfg debug; /**< Device configuration debug parameters */
    bcmolt_ext_irq protection_switching_ext_irq; /**< The selected external IRQ for protection switching */
    bcmolt_indication_shaping indication_shaping; /**< Shaping / rate limiting for the indication channel. */
    bcmolt_uart_baudrate tod_uart_baudrate; /**< UART baud rate */
    bcmolt_itu_tod itu_tod; /**< ITU ToD configuration */
    bcmolt_ieee_8021_as_tod ieee_8021_as_tod; /**< 802.1AS (IEEE) ToD configuration */
    bcmolt_embedded_image_entry_list_u8_max_4 embedded_image_list; /**< List of all file images stored in the OLT. */
    bcmos_bool wd_enable; /**< In PCIe out of band management, this field is ignored.
    For in-band systems, the default is for the watchdog to be enabled.
    When enabled the Maple watchdog is patted periodically. */
    uint16_t wd_ip_traffic_timeout; /**< The units are seconds.
    
    The watchdog checks for IP traffic periodically.
    
    The watchdog IP traffic check default period is 5 minutes (300 seconds).
    
    The watchdog  IP traffic check period minimum has to be greater than the product
    of ka interval and (ka tolerance + 1).
    
    The minimum value of ka interval and ka tolerance is 0. In that case the minimum
    comm check period minimum is 5 seconds.
    
    If no IP traffic is received within the configured period. The watchdog will reset the Maple chip. */
    bcmolt_comm_mode comm_mode; /**< The communication mode being used. */
    bcmolt_pcie_conn_data pcie_conn_data; /**< If PCIe communications mode is selected, these parameters may be set. */
    bcmolt_inband_conn_data inband_conn_data; /**< If InBand Communication mode is selected, these parameters must be set. */
    bcmos_bool logger_enable; /**< Set to false to disable all logging in the system */
    bcmolt_inni_config inni_config; /**< INNI configuration */
    bcmolt_ras_ddr_usage_mode ras_ddr_mode; /**< RAS DDR Mode. */
} bcmolt_device_cfg_data;

/* Constants associated with bcmolt_device_cfg_data. */
#define BCMOLT_DEVICE_CFG_DATA_PRESENCE_MASK_ALL 0x00000000783F3EFFULL
#define BCMOLT_DEVICE_CFG_DATA_EMBEDDED_IMAGE_LIST_MIN_LENGTH 0
#define BCMOLT_DEVICE_CFG_DATA_EMBEDDED_IMAGE_LIST_MAX_LENGTH 4

/** Transport message definition for "cfg" group of "device" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_device_cfg;

/** Multi-object message definition for "cfg" group of "device" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key (can include wildcards). */
    bcmolt_device_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_device_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_device_cfg *responses; /**< Responses to the last API call. */

    bcmolt_device_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_device_multi_cfg;

/** Device: Connect */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_system_mode system_mode; /**< System Mode. */
    bcmolt_comm_mode comm_mode; /**< Communication Mode. AKA Management Mode */
    bcmolt_pcie_conn_data pcie_conn_data; /**< If PCIe communications mode is selected, these parameters may be set. */
    bcmolt_inband_conn_data inband_conn_data; /**< If InBand Communication mode is selected, these parameters must be set. */
    bcmolt_inni_config inni_config; /**< INNI configuration */
    bcmolt_ras_ddr_usage_mode ras_ddr_mode; /**< If ITU PON system is used, this parameter states RAS DDR usage mode. For EPON system modes should be set to no_ddr value. */
} bcmolt_device_connect_data;

/* Constants associated with bcmolt_device_connect_data. */
#define BCMOLT_DEVICE_CONNECT_DATA_PRESENCE_MASK_ALL 0x000000000000006FULL

/** Transport message definition for "connect" group of "device" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_connect_data data; /**< All properties that must be set by the user. */
} bcmolt_device_connect;

/** Transport message definition for "disconnect" group of "device" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
} bcmolt_device_disconnect;

/** Transport message definition for "reset" group of "device" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
} bcmolt_device_reset;

/** Device: Host Keep Alive (Internal) */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t sequence_number; /**< sequence number */
    uint32_t time_stamp; /**< time stamp */
} bcmolt_device_host_keep_alive_data;

/* Constants associated with bcmolt_device_host_keep_alive_data. */
#define BCMOLT_DEVICE_HOST_KEEP_ALIVE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "host_keep_alive" group of "device" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_host_keep_alive_data data; /**< All properties that must be set by the user. */
} bcmolt_device_host_keep_alive;

/** Transport message definition for "sw_upgrade_activate" group of "device" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
} bcmolt_device_sw_upgrade_activate;

/** Device: Set ToD String for 802.1AS */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_256 tod_string; /**< The current ToD string to be used for clock transport (EPON only) */
} bcmolt_device_set_8021_as_tod_string_data;

/* Constants associated with bcmolt_device_set_8021_as_tod_string_data. */
#define BCMOLT_DEVICE_SET_8021_AS_TOD_STRING_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "set_8021_as_tod_string" group of "device" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_set_8021_as_tod_string_data data; /**< All properties that must be set by the user. */
} bcmolt_device_set_8021_as_tod_string;

/** Device: Start Image Transfer Operation */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_device_image_type image_type; /**< File type. */
    uint32_t image_size; /**< Size of the file image. Ignored for RRQ operation */
    uint32_t crc32; /**< CRC32 checksum of the entire file image */
    bcmolt_str_64 image_name; /**< Name of the file image. Null-terminated string. This is required for the DPoE ONU only.  DPoE requires the write request OAM contains the name of the file */
} bcmolt_device_image_transfer_start_data;

/* Constants associated with bcmolt_device_image_transfer_start_data. */
#define BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "image_transfer_start" group of "device" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_image_transfer_start_data data; /**< All properties that must be set by the user. */
} bcmolt_device_image_transfer_start;

/** Device: Image Data Transfer Operation (Internal) */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t block_number; /**< Block number. */
    bcmos_bool more_data; /**< Specifies that there are more data to come */
    bcmolt_bin_str data; /**< Data. */
} bcmolt_device_image_transfer_data_data;

/* Constants associated with bcmolt_device_image_transfer_data_data. */
#define BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "image_transfer_data" group of "device" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_image_transfer_data_data data; /**< All properties that must be set by the user. */
} bcmolt_device_image_transfer_data;

/** Device: Run DDR Test */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool cpu; /**< Whether or not to test the CPU DDR */
    bcmos_bool ras_0; /**< Whether or not to test RAS 0 DDR */
    bcmos_bool ras_1; /**< Whether or not to test RAS 1 DDR */
} bcmolt_device_run_ddr_test_data;

/* Constants associated with bcmolt_device_run_ddr_test_data. */
#define BCMOLT_DEVICE_RUN_DDR_TEST_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "run_ddr_test" group of "device" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_run_ddr_test_data data; /**< All properties that must be set by the user. */
} bcmolt_device_run_ddr_test;

/** Device: Device Ready */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_firmware_sw_version firmware_sw_version; /**< Software Version. */
    bcmolt_system_mode system_mode; /**< System Mode. */
    uint32_t keepalive_interval; /**< Keepalive Interval in Seconds (0 = Disable) */
    uint32_t keepalive_tolerance; /**< How many keepalive messages can be lost before triggering a disconnect sequence */
    bcmos_bool standalone; /**< Standalone. */
} bcmolt_device_device_ready_data;

/* Constants associated with bcmolt_device_device_ready_data. */
#define BCMOLT_DEVICE_DEVICE_READY_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL

/** Transport message definition for "device_ready" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_device_ready_data data; /**< All properties that must be set by the user. */
} bcmolt_device_device_ready;

/** Transport message definition for "connection_established" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
} bcmolt_device_connection_established;

/** Device: Device Keep Alive */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t sequence_number; /**< sequence number */
    uint32_t time_stamp; /**< time stamp */
    uint32_t keepalive_interval; /**< Keepalive Interval. */
    uint32_t keepalive_tolerance; /**< Keepalive Tolerance. */
} bcmolt_device_device_keep_alive_data;

/* Constants associated with bcmolt_device_device_keep_alive_data. */
#define BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "device_keep_alive" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_device_keep_alive_data data; /**< All properties that must be set by the user. */
} bcmolt_device_device_keep_alive;

/** Device: Connection Failure */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_host_connection_fail_reason reason; /**< Connection fail reason. */
    bcmos_bool device_in_reset; /**< Whether or not the device was left in reset */
} bcmolt_device_connection_failure_data;

/* Constants associated with bcmolt_device_connection_failure_data. */
#define BCMOLT_DEVICE_CONNECTION_FAILURE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "connection_failure" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_connection_failure_data data; /**< All properties that must be set by the user. */
} bcmolt_device_connection_failure;

/** Device: Connection Complete */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool standalone; /**< If true, the device was previously running in standalone mode before this connection was established. If false, the device was booted from reset with new firmware, etc. */
    bcmolt_system_mode system_mode; /**< System Mode. */
} bcmolt_device_connection_complete_data;

/* Constants associated with bcmolt_device_connection_complete_data. */
#define BCMOLT_DEVICE_CONNECTION_COMPLETE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "connection_complete" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_connection_complete_data data; /**< All properties that must be set by the user. */
} bcmolt_device_connection_complete;

/** Device: Disconnection Complete */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_device_disconnect_reason reason; /**< Device disconnect reason */
} bcmolt_device_disconnection_complete_data;

/* Constants associated with bcmolt_device_disconnection_complete_data. */
#define BCMOLT_DEVICE_DISCONNECTION_COMPLETE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "disconnection_complete" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_disconnection_complete_data data; /**< All properties that must be set by the user. */
} bcmolt_device_disconnection_complete;

/** Device: sw error */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_100 task_name; /**< task name. */
    bcmolt_str_100 file_name; /**< file name. */
    uint32_t line_number; /**< line number. */
    uint8_t pon_ni; /**< pon_ni. */
} bcmolt_device_sw_error_data;

/* Constants associated with bcmolt_device_sw_error_data. */
#define BCMOLT_DEVICE_SW_ERROR_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "sw_error" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_sw_error_data data; /**< All properties that must be set by the user. */
} bcmolt_device_sw_error;

/** Device: sw exception */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t cpu_id; /**< CPU ID. */
    bcmolt_str_2000 text; /**< text. */
} bcmolt_device_sw_exception_data;

/* Constants associated with bcmolt_device_sw_exception_data. */
#define BCMOLT_DEVICE_SW_EXCEPTION_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "sw_exception" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_sw_exception_data data; /**< All properties that must be set by the user. */
} bcmolt_device_sw_exception;

/** Device: Image Transfer Complete */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_device_image_type image_type; /**< Image type. */
    uint32_t block_number; /**< Block number. */
    bcmolt_image_transfer_status status; /**< Image transfer status. */
} bcmolt_device_image_transfer_complete_data;

/* Constants associated with bcmolt_device_image_transfer_complete_data. */
#define BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "image_transfer_complete" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_image_transfer_complete_data data; /**< All properties that must be set by the user. */
} bcmolt_device_image_transfer_complete;

/** Device: DDR Test Complete */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_ddr_test_completed ddr_test; /**< Results of the DDR Test */
} bcmolt_device_ddr_test_complete_data;

/* Constants associated with bcmolt_device_ddr_test_complete_data. */
#define BCMOLT_DEVICE_DDR_TEST_COMPLETE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "ddr_test_complete" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_ddr_test_complete_data data; /**< All properties that must be set by the user. */
} bcmolt_device_ddr_test_complete;

/** Device: Software Health Check Failure */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_100 module_name; /**< Name of the unresponsive module. */
    uint16_t module_id; /**< The module ID of the unresponsive module. */
    bcmolt_status status; /**< status. */
} bcmolt_device_sw_health_check_failure_data;

/* Constants associated with bcmolt_device_sw_health_check_failure_data. */
#define BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "sw_health_check_failure" group of "device" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_sw_health_check_failure_data data; /**< All properties that must be set by the user. */
} bcmolt_device_sw_health_check_failure;

/** Device: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool connection_complete; /**< If true, indications of type "connection_complete" will be generated. */
    bcmos_bool connection_established; /**< If true, indications of type "connection_established" will be generated. */
    bcmos_bool connection_failure; /**< If true, indications of type "connection_failure" will be generated. */
    bcmos_bool ddr_test_complete; /**< If true, indications of type "ddr_test_complete" will be generated. */
    bcmos_bool device_keep_alive; /**< If true, indications of type "device_keep_alive" will be generated. */
    bcmos_bool device_ready; /**< If true, indications of type "device_ready" will be generated. */
    bcmos_bool disconnection_complete; /**< If true, indications of type "disconnection_complete" will be generated. */
    bcmos_bool image_transfer_complete; /**< If true, indications of type "image_transfer_complete" will be generated. */
    bcmos_bool sw_error; /**< If true, indications of type "sw_error" will be generated. */
    bcmos_bool sw_exception; /**< If true, indications of type "sw_exception" will be generated. */
    bcmos_bool sw_health_check_failure; /**< If true, indications of type "sw_health_check_failure" will be generated. */
} bcmolt_device_auto_cfg_data;

/* Constants associated with bcmolt_device_auto_cfg_data. */
#define BCMOLT_DEVICE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x00000000000007FFULL

/** Transport message definition for "auto_cfg" group of "device" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_device_key key; /**< Object key. */
    bcmolt_device_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_device_auto_cfg;

/** ERPS Interface: key */
typedef struct
{
    bcmolt_erps_id id; /**< ID. */
} bcmolt_erps_interface_key;

/** ERPS Interface: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state state; /**< state. */
    bcmolt_intf_ref east_port; /**< NNI or LAG interface Reference */
    bcmolt_intf_ref west_port; /**< NNI or LAG interface Reference and Id */
    bcmolt_vlan_id control_vlan_id; /**< Optional VLAN ID that carrys ERPS R-APS packets on the ring. */
    bcmolt_ring_port_state east_port_state; /**< East Port State. */
    bcmolt_ring_port_state west_port_state; /**< West Port State. */
} bcmolt_erps_interface_cfg_data;

/* Constants associated with bcmolt_erps_interface_cfg_data. */
#define BCMOLT_ERPS_INTERFACE_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000E07ULL

/** Transport message definition for "cfg" group of "erps_interface" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_erps_interface_key key; /**< Object key. */
    bcmolt_erps_interface_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_erps_interface_cfg;

/** Multi-object message definition for "cfg" group of "erps_interface" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_erps_interface_key key; /**< Object key (can include wildcards). */
    bcmolt_erps_interface_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_erps_interface_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_erps_interface_cfg *responses; /**< Responses to the last API call. */

    bcmolt_erps_interface_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_erps_interface_multi_cfg;

/** ERPS Interface: Set Ring Port Control */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_erps_control command; /**< command. */
    bcmolt_ring_port port; /**< port. */
} bcmolt_erps_interface_set_ring_port_control_data;

/* Constants associated with bcmolt_erps_interface_set_ring_port_control_data. */
#define BCMOLT_ERPS_INTERFACE_SET_RING_PORT_CONTROL_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "set_ring_port_control" group of "erps_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_erps_interface_key key; /**< Object key. */
    bcmolt_erps_interface_set_ring_port_control_data data; /**< All properties that must be set by the user. */
} bcmolt_erps_interface_set_ring_port_control;

/** ERPS Interface: Ring Port Control */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_ring_port port_id; /**< port id. */
    bcmolt_erps_control command; /**< Reflects current state of the requested Port */
    bcmolt_ring_port_state port_state; /**< Port State. */
    bcmolt_result result; /**< Result of operation, success or fail. If fail then the ind.hdr.hdr.err will contain the return code.
    The return code is of type bcmos_errno. */
} bcmolt_erps_interface_ring_port_control_data;

/* Constants associated with bcmolt_erps_interface_ring_port_control_data. */
#define BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "ring_port_control" group of "erps_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_erps_interface_key key; /**< Object key. */
    bcmolt_erps_interface_ring_port_control_data data; /**< All properties that must be set by the user. */
} bcmolt_erps_interface_ring_port_control;

/** ERPS Interface: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool ring_port_control; /**< If true, indications of type "ring_port_control" will be generated. */
} bcmolt_erps_interface_auto_cfg_data;

/* Constants associated with bcmolt_erps_interface_auto_cfg_data. */
#define BCMOLT_ERPS_INTERFACE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "auto_cfg" group of "erps_interface" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_erps_interface_key key; /**< Object key. */
    bcmolt_erps_interface_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_erps_interface_auto_cfg;

/** Ethernet OAM: key */
typedef struct
{
    bcmolt_eth_oam_id id; /**< id. */
} bcmolt_eth_oam_key;

/** Ethernet OAM: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state state; /**< Config State. */
    bcmolt_intf_ref intf_ref; /**< NNI port # */
    bcmolt_local_mep local_mep; /**< Tx MEP config */
    bcmolt_remote_mep remote_mep; /**< Rx MEP config */
    bcmolt_meg_cfg meg; /**< Maintenance Entity Group config */
    bcmos_mac_address source_mac; /**< Source Mac - for Tx CCMs */
    bcmos_mac_address dest_mac; /**< Dest Mac - for Rx and Tx CCMs. */
    bcmolt_pkt_tag_type pkt_tag_type; /**< Number of vlan tags in packet, double or single tagged. */
    bcmolt_vlan_id o_vid; /**< Outer VLAN ID. */
    uint8_t o_pbits; /**< Outer VLAN Pbits. */
    uint16_t o_tpid; /**< Outer VLAN TPID. */
    bcmolt_vlan_id i_vid; /**< Inner VLAN ID, only if pkt_tag_type is double. */
    uint8_t i_pbits; /**< Inner VLAN Pbits, only if pkt_tag_type is double. */
    uint16_t i_tpid; /**< Inner VLAN TPID, only if pkt_tag_type is double. */
} bcmolt_eth_oam_cfg_data;

/* Constants associated with bcmolt_eth_oam_cfg_data. */
#define BCMOLT_ETH_OAM_CFG_DATA_PRESENCE_MASK_ALL 0x000000000003FF27ULL

/** Transport message definition for "cfg" group of "eth_oam" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_eth_oam_key key; /**< Object key. */
    bcmolt_eth_oam_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_eth_oam_cfg;

/** Multi-object message definition for "cfg" group of "eth_oam" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_eth_oam_key key; /**< Object key (can include wildcards). */
    bcmolt_eth_oam_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_eth_oam_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_eth_oam_cfg *responses; /**< Responses to the last API call. */

    bcmolt_eth_oam_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_eth_oam_multi_cfg;

/** Ethernet OAM: CFM CCM Event */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_ccm_event event; /**< Received CCM Event */
} bcmolt_eth_oam_ccm_event_data;

/* Constants associated with bcmolt_eth_oam_ccm_event_data. */
#define BCMOLT_ETH_OAM_CCM_EVENT_DATA_PRESENCE_MASK_ALL 0x0000000000000002ULL

/** Transport message definition for "ccm_event" group of "eth_oam" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_eth_oam_key key; /**< Object key. */
    bcmolt_eth_oam_ccm_event_data data; /**< All properties that must be set by the user. */
} bcmolt_eth_oam_ccm_event;

/** Ethernet OAM: Set MEP Control State */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_mep_type type; /**< MEP Type. */
    bcmolt_control_state state; /**< MEP Control State. */
} bcmolt_eth_oam_set_mep_state_data;

/* Constants associated with bcmolt_eth_oam_set_mep_state_data. */
#define BCMOLT_ETH_OAM_SET_MEP_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "set_mep_state" group of "eth_oam" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_eth_oam_key key; /**< Object key. */
    bcmolt_eth_oam_set_mep_state_data data; /**< All properties that must be set by the user. */
} bcmolt_eth_oam_set_mep_state;

/** Ethernet OAM: State Change */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; /**< Command Result. */
    bcmolt_control_state old_state; /**< Old State. */
    bcmolt_control_state new_state; /**< New State. */
} bcmolt_eth_oam_state_change_data;

/* Constants associated with bcmolt_eth_oam_state_change_data. */
#define BCMOLT_ETH_OAM_STATE_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "state_change" group of "eth_oam" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_eth_oam_key key; /**< Object key. */
    bcmolt_eth_oam_state_change_data data; /**< All properties that must be set by the user. */
} bcmolt_eth_oam_state_change;

/** Ethernet OAM: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool ccm_event; /**< If true, indications of type "ccm_event" will be generated. */
    bcmos_bool state_change; /**< If true, indications of type "state_change" will be generated. */
} bcmolt_eth_oam_auto_cfg_data;

/* Constants associated with bcmolt_eth_oam_auto_cfg_data. */
#define BCMOLT_ETH_OAM_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "auto_cfg" group of "eth_oam" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_eth_oam_key key; /**< Object key. */
    bcmolt_eth_oam_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_eth_oam_auto_cfg;

/** BAL Flow: key */
typedef struct
{
    bcmolt_flow_id flow_id; /**< The ID of the flow object instance being referenced */
    bcmolt_flow_type flow_type; /**< The type of the flow, Upstream, Downstream, Broadcast or Multicast */
} bcmolt_flow_key;

/** BAL Flow: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_flow_intf_ref ingress_intf; /**< The ingress tip of the flow */
    bcmolt_flow_intf_ref egress_intf; /**< The engress tip of the flow */
    bcmolt_onu_id onu_id; /**< The ID of the ONU assigned to this flow */
    bcmolt_service_port_id svc_port_id; /**< The ID of the service port (for GPON/XGPON - GEM ID) */
    bcmolt_classifier classifier; /**< The classifier for this flow */
    uint16_t priority; /**< Priority for this flow in case of multiple match.
    Higher value precednece over lower value. */
    bcmolt_action action; /**< The action associated with the flow */
    bcmolt_group_id group_id; /**< RW - The multicast group associated with this flow, valid for type MULTICAST only */
    bcmolt_egress_qos egress_qos; /**< Egress qos. */
    bcmolt_flow_state state; /**< Flow State. */
    bcmolt_control_state local_switching; /**< Utilize Pon to Pon local switching (US Flows Only), enable=Allow / disable=Do not allow (default). */
    bcmolt_control_state statistics; /**< enable/disable flow statistics */
    bcmolt_cookie cookie; /**< Opaque application cookie associated with the flow (not interpreted by Maple) */
} bcmolt_flow_cfg_data;

/* Constants associated with bcmolt_flow_cfg_data. */
#define BCMOLT_FLOW_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000001FFFULL

/** Transport message definition for "cfg" group of "flow" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_flow_key key; /**< Object key. */
    bcmolt_flow_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_flow_cfg;

/** Multi-object message definition for "cfg" group of "flow" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_flow_key key; /**< Object key (can include wildcards). */
    bcmolt_flow_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_flow_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_flow_cfg *responses; /**< Responses to the last API call. */

    bcmolt_flow_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_flow_multi_cfg;

/** BAL Flow: send_eth_packet */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str buffer; /**< buffer. */
} bcmolt_flow_send_eth_packet_data;

/* Constants associated with bcmolt_flow_send_eth_packet_data. */
#define BCMOLT_FLOW_SEND_ETH_PACKET_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "send_eth_packet" group of "flow" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_flow_key key; /**< Object key. */
    bcmolt_flow_send_eth_packet_data data; /**< All properties that must be set by the user. */
} bcmolt_flow_send_eth_packet;

/** GPIO: key */
typedef struct
{
    bcmolt_ldid device_id; /**< Device ID */
    bcmolt_gpio_pin gpio_id; /**< GPIO ID. */
} bcmolt_gpio_key;

/** GPIO: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gpio_pin_dir direction; /**< GPIO PIN direction (input or output) */
    bcmolt_gpio_value value; /**< Value to write. */
} bcmolt_gpio_cfg_data;

/* Constants associated with bcmolt_gpio_cfg_data. */
#define BCMOLT_GPIO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "cfg" group of "gpio" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_gpio_key key; /**< Object key. */
    bcmolt_gpio_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_gpio_cfg;

/** Multi-object message definition for "cfg" group of "gpio" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_gpio_key key; /**< Object key (can include wildcards). */
    bcmolt_gpio_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_gpio_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_gpio_cfg *responses; /**< Responses to the last API call. */

    bcmolt_gpio_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_gpio_multi_cfg;

/** BAL Group: key */
typedef struct
{
    bcmolt_group_id id; /**< The ID of the group object instance being referenced */
} bcmolt_group_key;

/** BAL Group: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_group_member_info_list_u8 members; /**< The list of members associated with this group, updated using operations */
    bcmolt_cookie cookie; /**< Application cookie */
    bcmolt_group_type type; /**< Type of the group. */
    bcmolt_group_state state; /**< group state. */
    bcmolt_action action; /**< allowed vlan actions */
} bcmolt_group_cfg_data;

/* Constants associated with bcmolt_group_cfg_data. */
#define BCMOLT_GROUP_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL

/** Transport message definition for "cfg" group of "group" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_group_key key; /**< Object key. */
    bcmolt_group_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_group_cfg;

/** Multi-object message definition for "cfg" group of "group" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_group_key key; /**< Object key (can include wildcards). */
    bcmolt_group_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_group_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_group_cfg *responses; /**< Responses to the last API call. */

    bcmolt_group_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_group_multi_cfg;

/** BAL Group: members_update */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_group_members_update_command members_cmd; /**< members_cmd. */
} bcmolt_group_members_update_data;

/* Constants associated with bcmolt_group_members_update_data. */
#define BCMOLT_GROUP_MEMBERS_UPDATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "members_update" group of "group" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_group_key key; /**< Object key. */
    bcmolt_group_members_update_data data; /**< All properties that must be set by the user. */
} bcmolt_group_members_update;

/** BAL Group: complete_members_update */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; /**< result. */
    bcmolt_group_member_update_fail_reason fail_reason; /**< fail reason. */
} bcmolt_group_complete_members_update_data;

/* Constants associated with bcmolt_group_complete_members_update_data. */
#define BCMOLT_GROUP_COMPLETE_MEMBERS_UPDATE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "complete_members_update" group of "group" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_group_key key; /**< Object key. */
    bcmolt_group_complete_members_update_data data; /**< All properties that must be set by the user. */
} bcmolt_group_complete_members_update;

/** BAL Group: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool complete_members_update; /**< If true, indications of type "complete_members_update" will be generated. */
} bcmolt_group_auto_cfg_data;

/* Constants associated with bcmolt_group_auto_cfg_data. */
#define BCMOLT_GROUP_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "auto_cfg" group of "group" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_group_key key; /**< Object key. */
    bcmolt_group_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_group_auto_cfg;

/** BAL Inband Management Channel: key */
typedef struct
{
    bcmolt_inband_mgmt_instance_id id; /**< The ID of the inband management flow object */
} bcmolt_inband_mgmt_channel_key;

/** BAL Inband Management Channel: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_flow_intf_ref nni_intf; /**< The NNI interface Id */
    bcmolt_interface_id nic_intf_id; /**< The logical port from Topology file, facing the NIC card on host */
    uint16_t vlan_id; /**< The classifier for this inband mgmt flow. Vid is always an Outer Vid */
    bcmos_mac_address nic_card_mac; /**< NIC card MAC address. */
    bcmolt_inband_mgmt_action_type action; /**< The action associated with the inband flow */
    bcmolt_inband_mgmt_state state; /**< Inband Mgmt State. */
} bcmolt_inband_mgmt_channel_cfg_data;

/* Constants associated with bcmolt_inband_mgmt_channel_cfg_data. */
#define BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000003FULL

/** Transport message definition for "cfg" group of "inband_mgmt_channel" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_inband_mgmt_channel_key key; /**< Object key. */
    bcmolt_inband_mgmt_channel_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_inband_mgmt_channel_cfg;

/** Multi-object message definition for "cfg" group of "inband_mgmt_channel" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_inband_mgmt_channel_key key; /**< Object key (can include wildcards). */
    bcmolt_inband_mgmt_channel_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_inband_mgmt_channel_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_inband_mgmt_channel_cfg *responses; /**< Responses to the last API call. */

    bcmolt_inband_mgmt_channel_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_inband_mgmt_channel_multi_cfg;

/** Internal NNI: key */
typedef struct
{
    bcmolt_interface pon_ni; /**< Interface Id */
} bcmolt_internal_nni_key;

/** Internal NNI: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_mac_address mac_address; /**< Mac address to be used for this NNI. */
    bcmolt_nni_connection active_nni; /**< Which NNI is currently active. */
    bcmolt_nni_link_status status; /**< NNI status */
    bcmolt_nni_link_status backup_status; /**< Status of the backup NNI. */
    bcmolt_nni_loopback_type loopback_type; /**< Loopback direction, line, remote or none */
    uint32_t status_polling_interval_ms; /**< How often to check the status of the primary and backup NNIs (units: ms). Zero (0) disables status polling. */
    bcmolt_internal_nni_redundancy redundancy; /**< Should firmware automatically switch between primary/backup NNIs when Loss of Link is detected? */
    bcmolt_control_state flow_control; /**< NNI Flow control. */
} bcmolt_internal_nni_cfg_data;

/* Constants associated with bcmolt_internal_nni_cfg_data. */
#define BCMOLT_INTERNAL_NNI_CFG_DATA_PRESENCE_MASK_ALL 0x00000000000003BEULL

/** Transport message definition for "cfg" group of "internal_nni" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_internal_nni_key key; /**< Object key. */
    bcmolt_internal_nni_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_internal_nni_cfg;

/** Multi-object message definition for "cfg" group of "internal_nni" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_internal_nni_key key; /**< Object key (can include wildcards). */
    bcmolt_internal_nni_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_internal_nni_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_internal_nni_cfg *responses; /**< Responses to the last API call. */

    bcmolt_internal_nni_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_internal_nni_multi_cfg;

/** Internal NNI: Status changed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status new_status; /**< New NNI Link Status */
    bcmolt_nni_connection link; /**< Which NNI this indication pertains to. */
    bcmolt_nni_connection previous_active; /**< Which NNI was active before this status change. */
    bcmolt_nni_connection new_active; /**< Which NNI is now active after this status change. */
} bcmolt_internal_nni_status_changed_data;

/* Constants associated with bcmolt_internal_nni_status_changed_data. */
#define BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "status_changed" group of "internal_nni" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_internal_nni_key key; /**< Object key. */
    bcmolt_internal_nni_status_changed_data data; /**< All properties that must be set by the user. */
} bcmolt_internal_nni_status_changed;

/** Internal NNI: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool status_changed; /**< If true, indications of type "status_changed" will be generated. */
} bcmolt_internal_nni_auto_cfg_data;

/* Constants associated with bcmolt_internal_nni_auto_cfg_data. */
#define BCMOLT_INTERNAL_NNI_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "auto_cfg" group of "internal_nni" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_internal_nni_key key; /**< Object key. */
    bcmolt_internal_nni_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_internal_nni_auto_cfg;

/** ITU PON Alloc: key */
typedef struct
{
    bcmolt_interface pon_ni; /**< PON network interface. */
    bcmolt_alloc_id alloc_id; /**< Alloc ID. */
} bcmolt_itupon_alloc_key;

/** ITU PON Alloc: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_activation_state state; /**< Current Alloc ID state */
    bcmolt_pon_alloc_sla sla; /**< Alloc ID SLA */
    bcmolt_onu_id onu_id; /**< ONU ID the alloc ID is assigned to */
} bcmolt_itupon_alloc_cfg_data;

/* Constants associated with bcmolt_itupon_alloc_cfg_data. */
#define BCMOLT_ITUPON_ALLOC_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "cfg" group of "itupon_alloc" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_itupon_alloc_key key; /**< Object key. */
    bcmolt_itupon_alloc_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_itupon_alloc_cfg;

/** Multi-object message definition for "cfg" group of "itupon_alloc" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_itupon_alloc_key key; /**< Object key (can include wildcards). */
    bcmolt_itupon_alloc_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_itupon_alloc_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_itupon_alloc_cfg *responses; /**< Responses to the last API call. */

    bcmolt_itupon_alloc_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_itupon_alloc_multi_cfg;

/** ITU PON Alloc: Configuration Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; /**< status. */
    bcmolt_activation_state new_state; /**< new state. */
} bcmolt_itupon_alloc_configuration_completed_data;

/* Constants associated with bcmolt_itupon_alloc_configuration_completed_data. */
#define BCMOLT_ITUPON_ALLOC_CONFIGURATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "configuration_completed" group of "itupon_alloc" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_itupon_alloc_key key; /**< Object key. */
    bcmolt_itupon_alloc_configuration_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_itupon_alloc_configuration_completed;

/** ITU PON Alloc: Get statistics */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t num_of_cycles; /**< The number of cycles to run statistics collection */
} bcmolt_itupon_alloc_get_stats_data;

/* Constants associated with bcmolt_itupon_alloc_get_stats_data. */
#define BCMOLT_ITUPON_ALLOC_GET_STATS_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "get_stats" group of "itupon_alloc" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_itupon_alloc_key key; /**< Object key. */
    bcmolt_itupon_alloc_get_stats_data data; /**< All properties that must be set by the user. */
} bcmolt_itupon_alloc_get_stats;

/** ITU PON Alloc: Get alloc ID statistics completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; /**< status. */
    uint32_t average_nsr_used; /**< Average NSR used words. */
    uint32_t average_nsr_allocated; /**< Average NSR allocated words. */
    uint32_t average_sr_report; /**< Average SR report. */
} bcmolt_itupon_alloc_get_alloc_stats_completed_data;

/* Constants associated with bcmolt_itupon_alloc_get_alloc_stats_completed_data. */
#define BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "get_alloc_stats_completed" group of "itupon_alloc" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_itupon_alloc_key key; /**< Object key. */
    bcmolt_itupon_alloc_get_alloc_stats_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_itupon_alloc_get_alloc_stats_completed;

/** ITU PON Alloc: Set state */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_alloc_operation state; /**< State. */
} bcmolt_itupon_alloc_set_state_data;

/* Constants associated with bcmolt_itupon_alloc_set_state_data. */
#define BCMOLT_ITUPON_ALLOC_SET_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "set_state" group of "itupon_alloc" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_itupon_alloc_key key; /**< Object key. */
    bcmolt_itupon_alloc_set_state_data data; /**< All properties that must be set by the user. */
} bcmolt_itupon_alloc_set_state;

/** ITU PON Alloc: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool configuration_completed; /**< If true, indications of type "configuration_completed" will be generated. */
    bcmos_bool get_alloc_stats_completed; /**< If true, indications of type "get_alloc_stats_completed" will be generated. */
} bcmolt_itupon_alloc_auto_cfg_data;

/* Constants associated with bcmolt_itupon_alloc_auto_cfg_data. */
#define BCMOLT_ITUPON_ALLOC_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "auto_cfg" group of "itupon_alloc" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_itupon_alloc_key key; /**< Object key. */
    bcmolt_itupon_alloc_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_itupon_alloc_auto_cfg;

/** ITU PON GEM Port: key */
typedef struct
{
    bcmolt_interface pon_ni; /**< PON network interface. */
    bcmolt_gem_port_id gem_port_id; /**< GEM Port ID. */
} bcmolt_itupon_gem_key;

/** ITU PON GEM Port: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gem_port_configuration configuration; /**< GEM port configuration parameters */
    bcmolt_onu_id onu_id; /**< ONU ID this GEM port is assigned to */
    bcmolt_activation_state state; /**< Current GEM port state */
    bcmolt_control_state encryption_mode; /**< Enable/Disable the encryption mode of the GEM Port */
    bcmolt_us_gem_port_destination upstream_destination_queue; /**< The destination queue of the packets arriving on this GEM Port on the upstream direction */
    bcmolt_control_state control; /**< Enable/Disable the GEM Port ID in the OLT */
    uint16_t mac_table_entry_limit; /**< The maximum number of MAC table entries allowed for this GEM port (0 = no limit). */
    bcmolt_debug_flow_config debug_flow_config; /**< debug flow config to support mac only learning */
} bcmolt_itupon_gem_cfg_data;

/* Constants associated with bcmolt_itupon_gem_cfg_data. */
#define BCMOLT_ITUPON_GEM_CFG_DATA_PRESENCE_MASK_ALL 0x00000000000000FFULL

/** Transport message definition for "cfg" group of "itupon_gem" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_itupon_gem_key key; /**< Object key. */
    bcmolt_itupon_gem_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_itupon_gem_cfg;

/** Multi-object message definition for "cfg" group of "itupon_gem" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_itupon_gem_key key; /**< Object key (can include wildcards). */
    bcmolt_itupon_gem_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_itupon_gem_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_itupon_gem_cfg *responses; /**< Responses to the last API call. */

    bcmolt_itupon_gem_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_itupon_gem_multi_cfg;

/** ITU PON GEM Port: Configuration Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; /**< status. */
    bcmolt_activation_state new_state; /**< new state. */
} bcmolt_itupon_gem_configuration_completed_data;

/* Constants associated with bcmolt_itupon_gem_configuration_completed_data. */
#define BCMOLT_ITUPON_GEM_CONFIGURATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "configuration_completed" group of "itupon_gem" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_itupon_gem_key key; /**< Object key. */
    bcmolt_itupon_gem_configuration_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_itupon_gem_configuration_completed;

/** ITU PON GEM Port: Set state */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gem_port_operation state; /**< State. */
} bcmolt_itupon_gem_set_state_data;

/* Constants associated with bcmolt_itupon_gem_set_state_data. */
#define BCMOLT_ITUPON_GEM_SET_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "set_state" group of "itupon_gem" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_itupon_gem_key key; /**< Object key. */
    bcmolt_itupon_gem_set_state_data data; /**< All properties that must be set by the user. */
} bcmolt_itupon_gem_set_state;

/** ITU PON GEM Port: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool configuration_completed; /**< If true, indications of type "configuration_completed" will be generated. */
} bcmolt_itupon_gem_auto_cfg_data;

/* Constants associated with bcmolt_itupon_gem_auto_cfg_data. */
#define BCMOLT_ITUPON_GEM_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "auto_cfg" group of "itupon_gem" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_itupon_gem_key key; /**< Object key. */
    bcmolt_itupon_gem_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_itupon_gem_auto_cfg;

/** LAG interface: key */
typedef struct
{
    bcmolt_lag_interface_id id; /**< id. */
} bcmolt_lag_interface_key;

/** LAG interface: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state config_state; /**< provisioned or not */
    bcmolt_lag_psc_mode psc_mode; /**< port select criteria */
    bcmolt_interface_state state; /**< lag admin enable/disable */
    bcmolt_policer_profile_id policer_profile; /**< port policer profile */
    bcmolt_protection_type protection_type; /**< Provisioned protection type referencing this LAG interface. */
    bcmolt_arr_nni_id_8 nni_ids; /**< list of member ports */
    bcmolt_arr_link_state_8 member_status; /**< link status of members */
    uint8_t member_count; /**< num of members */
    uint8_t member_up_count; /**< num of link up members */
    bcmolt_lag_health lag_health; /**< health of lag */
} bcmolt_lag_interface_cfg_data;

/* Constants associated with bcmolt_lag_interface_cfg_data. */
#define BCMOLT_LAG_INTERFACE_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000001EF3ULL
#define BCMOLT_LAG_INTERFACE_CFG_DATA_NNI_IDS_LENGTH 8
#define BCMOLT_LAG_INTERFACE_CFG_DATA_MEMBER_STATUS_LENGTH 8

/** Transport message definition for "cfg" group of "lag_interface" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_lag_interface_key key; /**< Object key. */
    bcmolt_lag_interface_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_lag_interface_cfg;

/** Multi-object message definition for "cfg" group of "lag_interface" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_lag_interface_key key; /**< Object key (can include wildcards). */
    bcmolt_lag_interface_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_lag_interface_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_lag_interface_cfg *responses; /**< Responses to the last API call. */

    bcmolt_lag_interface_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_lag_interface_multi_cfg;

/** LAG interface: members_update */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_lag_interface_members_update_command members_cmd; /**< members_cmd. */
} bcmolt_lag_interface_members_update_data;

/* Constants associated with bcmolt_lag_interface_members_update_data. */
#define BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "members_update" group of "lag_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_lag_interface_key key; /**< Object key. */
    bcmolt_lag_interface_members_update_data data; /**< All properties that must be set by the user. */
} bcmolt_lag_interface_members_update;

/** LAG interface: complete_members_update */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; /**< result. */
    bcmolt_lag_member_update_fail_reason fail_reason; /**< fail reason. */
} bcmolt_lag_interface_complete_members_update_data;

/* Constants associated with bcmolt_lag_interface_complete_members_update_data. */
#define BCMOLT_LAG_INTERFACE_COMPLETE_MEMBERS_UPDATE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "complete_members_update" group of "lag_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_lag_interface_key key; /**< Object key. */
    bcmolt_lag_interface_complete_members_update_data data; /**< All properties that must be set by the user. */
} bcmolt_lag_interface_complete_members_update;

/** LAG interface: state_update */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_interface_operation lag_state; /**< lag_state. */
} bcmolt_lag_interface_state_update_data;

/* Constants associated with bcmolt_lag_interface_state_update_data. */
#define BCMOLT_LAG_INTERFACE_STATE_UPDATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "state_update" group of "lag_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_lag_interface_key key; /**< Object key. */
    bcmolt_lag_interface_state_update_data data; /**< All properties that must be set by the user. */
} bcmolt_lag_interface_state_update;

/** LAG interface: interface state updated */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_interface_state new_state; /**< current interface state */
    bcmolt_interface_state old_state; /**< previous interface state */
    bcmolt_link_fault_code fault_code; /**< fault_code. */
} bcmolt_lag_interface_state_updated_data;

/* Constants associated with bcmolt_lag_interface_state_updated_data. */
#define BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "state_updated" group of "lag_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_lag_interface_key key; /**< Object key. */
    bcmolt_lag_interface_state_updated_data data; /**< All properties that must be set by the user. */
} bcmolt_lag_interface_state_updated;

/** LAG interface: LAG health change */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_lag_health new_state; /**< LAG health */
    bcmolt_lag_health old_state; /**< old state. */
} bcmolt_lag_interface_lag_health_change_data;

/* Constants associated with bcmolt_lag_interface_lag_health_change_data. */
#define BCMOLT_LAG_INTERFACE_LAG_HEALTH_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "lag_health_change" group of "lag_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_lag_interface_key key; /**< Object key. */
    bcmolt_lag_interface_lag_health_change_data data; /**< All properties that must be set by the user. */
} bcmolt_lag_interface_lag_health_change;

/** LAG interface: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool complete_members_update; /**< If true, indications of type "complete_members_update" will be generated. */
    bcmos_bool lag_health_change; /**< If true, indications of type "lag_health_change" will be generated. */
    bcmos_bool state_updated; /**< If true, indications of type "state_updated" will be generated. */
} bcmolt_lag_interface_auto_cfg_data;

/* Constants associated with bcmolt_lag_interface_auto_cfg_data. */
#define BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "auto_cfg" group of "lag_interface" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_lag_interface_key key; /**< Object key. */
    bcmolt_lag_interface_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_lag_interface_auto_cfg;

/** Log: key */
typedef struct
{
    bcmolt_ldid device_id; /**< Device ID */
    bcmolt_str_100 name; /**< Log name */
} bcmolt_log_key;

/** Log: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_log_type type; /**< Log type */
    bcmolt_log_style style; /**< Log style */
    bcmolt_log_level_per_file level; /**< Log levels for each file */
    bcmolt_log_level_msg_count msg_count; /**< Number of messages per log level */
    uint32_t lost_msg_count; /**< Number of messages lost/dropped */
} bcmolt_log_cfg_data;

/* Constants associated with bcmolt_log_cfg_data. */
#define BCMOLT_LOG_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL

/** Transport message definition for "cfg" group of "log" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_log_key key; /**< Object key. */
    bcmolt_log_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_log_cfg;

/** Multi-object message definition for "cfg" group of "log" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_log_key key; /**< Object key (can include wildcards). */
    bcmolt_log_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_log_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_log_cfg *responses; /**< Responses to the last API call. */

    bcmolt_log_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_log_multi_cfg;

/** Log File: key */
typedef struct
{
    bcmolt_ldid device_id; /**< Device ID */
    bcmolt_log_file_id file_id; /**< Which log file to access */
} bcmolt_log_file_key;

/** Log File: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool wrap_around; /**< Log file wrap-around option. TRUE=wrap around when full. FALSE=stop when full */
    bcmos_bool clear_after_read; /**< Clear log after last record has been read */
    uint32_t msg_count; /**< Number of messages currently in the log */
    uint32_t msgs_read; /**< Number of messages already read */
    uint32_t msgs_remaining; /**< Number of unread messages remaining in the log file */
    bcmolt_str_2048 buffer; /**< Contains a section of the log buffer, one message per line. Reading this field causes it to move to the next section. */
} bcmolt_log_file_cfg_data;

/* Constants associated with bcmolt_log_file_cfg_data. */
#define BCMOLT_LOG_FILE_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000003FULL

/** Transport message definition for "cfg" group of "log_file" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_log_file_key key; /**< Object key. */
    bcmolt_log_file_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_log_file_cfg;

/** Multi-object message definition for "cfg" group of "log_file" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_log_file_key key; /**< Object key (can include wildcards). */
    bcmolt_log_file_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_log_file_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_log_file_cfg *responses; /**< Responses to the last API call. */

    bcmolt_log_file_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_log_file_multi_cfg;

/** Transport message definition for "clear" group of "log_file" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_log_file_key key; /**< Object key. */
} bcmolt_log_file_clear;

/** Transport message definition for "reset_buffer_ptr" group of "log_file" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_log_file_key key; /**< Object key. */
} bcmolt_log_file_reset_buffer_ptr;

/** Channel: key */
typedef struct
{
    bcmolt_interface pon_ni; /**< PON network interface. */
} bcmolt_ngpon2_channel_key;

/** Channel: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_system_profile system_profile; /**< System profile. */
    bcmolt_arr_channel_profile_8 channel_profile; /**< Channel profile. */
} bcmolt_ngpon2_channel_cfg_data;

/* Constants associated with bcmolt_ngpon2_channel_cfg_data. */
#define BCMOLT_NGPON2_CHANNEL_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL
#define BCMOLT_NGPON2_CHANNEL_CFG_DATA_CHANNEL_PROFILE_LENGTH 8

/** Transport message definition for "cfg" group of "ngpon2_channel" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_ngpon2_channel_key key; /**< Object key. */
    bcmolt_ngpon2_channel_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_ngpon2_channel_cfg;

/** Multi-object message definition for "cfg" group of "ngpon2_channel" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_ngpon2_channel_key key; /**< Object key (can include wildcards). */
    bcmolt_ngpon2_channel_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_ngpon2_channel_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_ngpon2_channel_cfg *responses; /**< Responses to the last API call. */

    bcmolt_ngpon2_channel_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_ngpon2_channel_multi_cfg;

/** nni_interface: key */
typedef struct
{
    bcmolt_nni_id id; /**< id */
} bcmolt_nni_interface_key;

/** nni_interface: State Change */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; /**< State Change Request result (Success / Failure). */
    bcmolt_interface_state old_state; /**< Previous Interface state. */
    bcmolt_interface_state new_state; /**< New Interface state. */
} bcmolt_nni_interface_state_change_data;

/* Constants associated with bcmolt_nni_interface_state_change_data. */
#define BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "state_change" group of "nni_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_nni_interface_key key; /**< Object key. */
    bcmolt_nni_interface_state_change_data data; /**< All properties that must be set by the user. */
} bcmolt_nni_interface_state_change;

/** nni_interface: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state config_state; /**< config_state. */
    bcmolt_interface_state state; /**< state. */
    bcmolt_protection_type protection_type; /**< Provisioned protection type on this NNI interface */
    bcmolt_link_state link_state; /**< Current Link State (Link Up or Link Down) */
    bcmolt_link_fault_code link_fault_code; /**< Link Fault Code (Local or Remote Fault) */
    bcmolt_str_48 description; /**< Descriptive string */
    bcmolt_policer_profile_id policer_profile; /**< policer profile. */
} bcmolt_nni_interface_cfg_data;

/* Constants associated with bcmolt_nni_interface_cfg_data. */
#define BCMOLT_NNI_INTERFACE_CFG_DATA_PRESENCE_MASK_ALL 0x00000000000000FBULL

/** Transport message definition for "cfg" group of "nni_interface" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_nni_interface_key key; /**< Object key. */
    bcmolt_nni_interface_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_nni_interface_cfg;

/** Multi-object message definition for "cfg" group of "nni_interface" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_nni_interface_key key; /**< Object key (can include wildcards). */
    bcmolt_nni_interface_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_nni_interface_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_nni_interface_cfg *responses; /**< Responses to the last API call. */

    bcmolt_nni_interface_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_nni_interface_multi_cfg;

/** nni_interface: set_nni_state */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_interface_operation nni_state; /**< nni_state. */
} bcmolt_nni_interface_set_nni_state_data;

/* Constants associated with bcmolt_nni_interface_set_nni_state_data. */
#define BCMOLT_NNI_INTERFACE_SET_NNI_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "set_nni_state" group of "nni_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_nni_interface_key key; /**< Object key. */
    bcmolt_nni_interface_set_nni_state_data data; /**< All properties that must be set by the user. */
} bcmolt_nni_interface_set_nni_state;

/** nni_interface: link_state_change */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_link_state old_state; /**< old_state. */
    bcmolt_link_state new_state; /**< new_state. */
    bcmolt_link_fault_code fault_code; /**< fault_code. */
} bcmolt_nni_interface_link_state_change_data;

/* Constants associated with bcmolt_nni_interface_link_state_change_data. */
#define BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "link_state_change" group of "nni_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_nni_interface_key key; /**< Object key. */
    bcmolt_nni_interface_link_state_change_data data; /**< All properties that must be set by the user. */
} bcmolt_nni_interface_link_state_change;

/** nni_interface: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool link_state_change; /**< If true, indications of type "link_state_change" will be generated. */
    bcmos_bool state_change; /**< If true, indications of type "state_change" will be generated. */
} bcmolt_nni_interface_auto_cfg_data;

/* Constants associated with bcmolt_nni_interface_auto_cfg_data. */
#define BCMOLT_NNI_INTERFACE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "auto_cfg" group of "nni_interface" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_nni_interface_key key; /**< Object key. */
    bcmolt_nni_interface_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_nni_interface_auto_cfg;

/** olt: key */
typedef struct
{
    uint8_t reserved; /**< Reserved (set to 0) */
} bcmolt_olt_key;

/** olt: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_topology topology; /**< Topology as configured in Topology.ini */
    bcmolt_bal_state bal_state; /**< BAL and Switch device state */
    bcmolt_host_sw_version host_sw_version; /**< Host Software version */
} bcmolt_olt_cfg_data;

/* Constants associated with bcmolt_olt_cfg_data. */
#define BCMOLT_OLT_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "cfg" group of "olt" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
    bcmolt_olt_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_olt_cfg;

/** Multi-object message definition for "cfg" group of "olt" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key (can include wildcards). */
    bcmolt_olt_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_olt_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_olt_cfg *responses; /**< Responses to the last API call. */

    bcmolt_olt_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_olt_multi_cfg;

/** Transport message definition for "connect" group of "olt" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
} bcmolt_olt_connect;

/** Transport message definition for "connected" group of "olt" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
} bcmolt_olt_connected;

/** Transport message definition for "disconnect" group of "olt" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
} bcmolt_olt_disconnect;

/** Transport message definition for "bal_reset" group of "olt" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
} bcmolt_olt_bal_reset;

/** olt: disconnected */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_olt_disconnect_reason reason; /**< Disconnect reason */
} bcmolt_olt_disconnected_data;

/* Constants associated with bcmolt_olt_disconnected_data. */
#define BCMOLT_OLT_DISCONNECTED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "disconnected" group of "olt" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
    bcmolt_olt_disconnected_data data; /**< All properties that must be set by the user. */
} bcmolt_olt_disconnected;

/** olt: BAL and/or Switch Failed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bal_fail_reason reason; /**< Disconnect reason */
} bcmolt_olt_bal_failure_data;

/* Constants associated with bcmolt_olt_bal_failure_data. */
#define BCMOLT_OLT_BAL_FAILURE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "bal_failure" group of "olt" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
    bcmolt_olt_bal_failure_data data; /**< All properties that must be set by the user. */
} bcmolt_olt_bal_failure;

/** Transport message definition for "bal_ready" group of "olt" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
} bcmolt_olt_bal_ready;

/** olt: OLT Software error */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_100 task_name; /**< Task Name. */
    bcmolt_str_100 file_name; /**< File Name. */
    uint32_t line_number; /**< Line Number. */
    bcmolt_str_100 error_string; /**< User error string. */
} bcmolt_olt_sw_error_data;

/* Constants associated with bcmolt_olt_sw_error_data. */
#define BCMOLT_OLT_SW_ERROR_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "sw_error" group of "olt" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
    bcmolt_olt_sw_error_data data; /**< All properties that must be set by the user. */
} bcmolt_olt_sw_error;

/** olt: OLT Reset */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_reset_mode mode; /**< Reset Mode. */
} bcmolt_olt_reset_data;

/* Constants associated with bcmolt_olt_reset_data. */
#define BCMOLT_OLT_RESET_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "reset" group of "olt" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
    bcmolt_olt_reset_data data; /**< All properties that must be set by the user. */
} bcmolt_olt_reset;

/** olt: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool bal_failure; /**< If true, indications of type "bal_failure" will be generated. */
    bcmos_bool bal_ready; /**< If true, indications of type "bal_ready" will be generated. */
    bcmos_bool connected; /**< If true, indications of type "connected" will be generated. */
    bcmos_bool disconnected; /**< If true, indications of type "disconnected" will be generated. */
    bcmos_bool sw_error; /**< If true, indications of type "sw_error" will be generated. */
} bcmolt_olt_auto_cfg_data;

/* Constants associated with bcmolt_olt_auto_cfg_data. */
#define BCMOLT_OLT_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL

/** Transport message definition for "auto_cfg" group of "olt" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_olt_key key; /**< Object key. */
    bcmolt_olt_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_olt_auto_cfg;

/** ONU: key */
typedef struct
{
    bcmolt_interface pon_ni; /**< PON network interface. */
    bcmolt_onu_id onu_id; /**< onu id. */
} bcmolt_onu_key;

/** ONU: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_state onu_state; /**< Current ONU state */
    bcmolt_onu_state onu_old_state; /**< onu old state. */
    bcmolt_onu_rate onu_rate; /**< ONU rate. */
    bcmolt_itu_onu_params itu; /**< ITU ONU Parameters (GPON, XGPON1, NGPON2, XGS PON). */
} bcmolt_onu_cfg_data;

/* Constants associated with bcmolt_onu_cfg_data. */
#define BCMOLT_ONU_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "cfg" group of "onu" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_cfg;

/** Multi-object message definition for "cfg" group of "onu" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key (can include wildcards). */
    bcmolt_onu_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_onu_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_onu_cfg *responses; /**< Responses to the last API call. */

    bcmolt_onu_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_onu_multi_cfg;

/** ONU: Set ONU State */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_operation onu_state; /**< ONU state. */
} bcmolt_onu_set_onu_state_data;

/* Constants associated with bcmolt_onu_set_onu_state_data. */
#define BCMOLT_ONU_SET_ONU_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "set_onu_state" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_set_onu_state_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_set_onu_state;

/** Transport message definition for "rssi_measurement" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
} bcmolt_onu_rssi_measurement;

/** ONU: Request registration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool sma_flag; /**< Is the request registration process is part of the SMA process */
} bcmolt_onu_request_registration_data;

/* Constants associated with bcmolt_onu_request_registration_data. */
#define BCMOLT_ONU_REQUEST_REGISTRATION_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "request_registration" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_request_registration_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_request_registration;

/** ONU: Change power levelling */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_power_levelling_control control; /**< control. */
    uint8_t attenuation; /**< The requested attenuation in steps of 3dB as part of power levelling instruction */
} bcmolt_onu_change_power_levelling_data;

/* Constants associated with bcmolt_onu_change_power_levelling_data. */
#define BCMOLT_ONU_CHANGE_POWER_LEVELLING_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "change_power_levelling" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_change_power_levelling_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_change_power_levelling;

/** Transport message definition for "get_power_level" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
} bcmolt_onu_get_power_level;

/** Transport message definition for "get_power_consumption" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
} bcmolt_onu_get_power_consumption;

/** ONU: Adjust Tx wavelength */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_frequency_adjustment_direction frequency_adjustment_direction; /**< Frequency adjustment direction. */
    uint8_t frequency_adjustment_size; /**< The size of the frequency adjustment in units of 0.1GHz */
} bcmolt_onu_adjust_tx_wavelength_data;

/* Constants associated with bcmolt_onu_adjust_tx_wavelength_data. */
#define BCMOLT_ONU_ADJUST_TX_WAVELENGTH_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "adjust_tx_wavelength" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_adjust_tx_wavelength_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_adjust_tx_wavelength;

/** ONU: Secure mutual authentication */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_aes_key master_key; /**< master key. */
    bcmolt_bin_str buffer; /**< OMCI data buffer. */
    uint32_t mic; /**< mic. */
} bcmolt_onu_secure_mutual_authentication_data;

/* Constants associated with bcmolt_onu_secure_mutual_authentication_data. */
#define BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "secure_mutual_authentication" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_secure_mutual_authentication_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_secure_mutual_authentication;

/** Transport message definition for "tuning_in" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
} bcmolt_onu_tuning_in;

/** ONU: ONU Tuning out */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_pon_id target_ds_pon_id; /**< target ds pon id. */
    bcmolt_pon_id target_us_pon_id; /**< target us pon id. */
    uint32_t time_to_switch; /**< Time to switch in ms */
    bcmos_bool rollback; /**< rollback. */
    bcmolt_status status; /**< on- to start tuning out off- to stop tuning out */
} bcmolt_onu_tuning_out_data;

/* Constants associated with bcmolt_onu_tuning_out_data. */
#define BCMOLT_ONU_TUNING_OUT_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL

/** Transport message definition for "tuning_out" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_tuning_out_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_tuning_out;

/** ONU: XGPON ONU Alarm */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_xgpon_onu_alarms xgpon_onu_alarm; /**< xgpon onu alarm. */
} bcmolt_onu_xgpon_alarm_data;

/* Constants associated with bcmolt_onu_xgpon_alarm_data. */
#define BCMOLT_ONU_XGPON_ALARM_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "xgpon_alarm" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_xgpon_alarm_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_xgpon_alarm;

/** ONU: GPON ONU Alarm */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gpon_onu_alarms gpon_onu_alarm; /**< gpon onu alarm. */
} bcmolt_onu_gpon_alarm_data;

/* Constants associated with bcmolt_onu_gpon_alarm_data. */
#define BCMOLT_ONU_GPON_ALARM_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "gpon_alarm" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_gpon_alarm_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_gpon_alarm;

/** ONU: Drift of Window of ONUi */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< Alarm status. */
    int32_t drift_value; /**< Calculated amount of drift (positive + negative as a signed value). */
    uint32_t new_eqd; /**< New EQD after drift is corrected (only valid if status is 'on'). */
} bcmolt_onu_dowi_data;

/* Constants associated with bcmolt_onu_dowi_data. */
#define BCMOLT_ONU_DOWI_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "dowi" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_dowi_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_dowi;

/** ONU: Signal Fail of ONUi */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< alarm status. */
    uint32_t ber; /**< Inverse bit error rate (e.g. if this number is 1000, the BER is 1/1000). */
} bcmolt_onu_sfi_data;

/* Constants associated with bcmolt_onu_sfi_data. */
#define BCMOLT_ONU_SFI_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "sfi" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_sfi_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_sfi;

/** ONU: Signal Degraded of ONUi */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< alarm status. */
    uint32_t ber; /**< Inverse bit error rate (e.g. if this number is 1000, the BER is 1/1000). */
} bcmolt_onu_sdi_data;

/* Constants associated with bcmolt_onu_sdi_data. */
#define BCMOLT_ONU_SDI_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "sdi" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_sdi_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_sdi;

/** ONU: Receive Dying-Gasp of ONUi */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< alarm status. */
} bcmolt_onu_dfi_data;

/* Constants associated with bcmolt_onu_dfi_data. */
#define BCMOLT_ONU_DFI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "dfi" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_dfi_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_dfi;

/** ONU: ploam queue status */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< alarm status. */
} bcmolt_onu_pqsi_data;

/* Constants associated with bcmolt_onu_pqsi_data. */
#define BCMOLT_ONU_PQSI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "pqsi" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_pqsi_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_pqsi;

/** ONU: SUFi */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< alarm status. */
} bcmolt_onu_sufi_data;

/* Constants associated with bcmolt_onu_sufi_data. */
#define BCMOLT_ONU_SUFI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "sufi" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_sufi_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_sufi;

/** ONU: Transmission Interference Warning */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< Alarm status. */
    int32_t drift_value; /**< Calculated amount of drift (positive + negative as a signed value). */
} bcmolt_onu_tiwi_data;

/* Constants associated with bcmolt_onu_tiwi_data. */
#define BCMOLT_ONU_TIWI_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "tiwi" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_tiwi_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_tiwi;

/** ONU: LOOCi */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< alarm status. */
} bcmolt_onu_looci_data;

/* Constants associated with bcmolt_onu_looci_data. */
#define BCMOLT_ONU_LOOCI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "looci" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_looci_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_looci;

/** ONU: LOAi */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< alarm status. */
} bcmolt_onu_loai_data;

/* Constants associated with bcmolt_onu_loai_data. */
#define BCMOLT_ONU_LOAI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "loai" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_loai_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_loai;

/** ONU: Receive Dying-Gasp of ONUi */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< alarm status. */
} bcmolt_onu_dgi_data;

/* Constants associated with bcmolt_onu_dgi_data. */
#define BCMOLT_ONU_DGI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "dgi" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_dgi_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_dgi;

/** ONU: PEE */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< alarm status. */
} bcmolt_onu_pee_data;

/* Constants associated with bcmolt_onu_pee_data. */
#define BCMOLT_ONU_PEE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "pee" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_pee_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_pee;

/** ONU: PST */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t link_number; /**< link number. */
    uint8_t k1; /**< K1. */
    uint8_t k2; /**< K2. */
} bcmolt_onu_pst_data;

/* Constants associated with bcmolt_onu_pst_data. */
#define BCMOLT_ONU_PST_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "pst" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_pst_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_pst;

/** ONU: Ranging Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; /**< status. */
    bcmolt_ranging_fail_reason fail_reason; /**< fail reason. */
    uint32_t eqd; /**< EQD. */
    uint8_t number_of_ploams; /**< number of ploams. */
} bcmolt_onu_ranging_completed_data;

/* Constants associated with bcmolt_onu_ranging_completed_data. */
#define BCMOLT_ONU_RANGING_COMPLETED_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "ranging_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_ranging_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_ranging_completed;

/** ONU: ONU Activation Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; /**< status. */
    bcmolt_activation_fail_reason fail_reason; /**< fail reason. */
    bcmolt_bin_str_36 registration_id; /**< registration id. */
    bcmolt_xgpon_onu_registration_keys registration_encryption_keys; /**< registration encryption keys. */
} bcmolt_onu_onu_activation_completed_data;

/* Constants associated with bcmolt_onu_onu_activation_completed_data. */
#define BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL
#define BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_REGISTRATION_ID_MAX_LENGTH 36
#define BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_REGISTRATION_ID_LENGTH 36

/** Transport message definition for "onu_activation_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_onu_activation_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_onu_activation_completed;

/** ONU: ONU Deactivation Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; /**< Status. */
    bcmolt_deactivation_fail_reason fail_reason; /**< fail reason. */
} bcmolt_onu_onu_deactivation_completed_data;

/* Constants associated with bcmolt_onu_onu_deactivation_completed_data. */
#define BCMOLT_ONU_ONU_DEACTIVATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "onu_deactivation_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_onu_deactivation_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_onu_deactivation_completed;

/** ONU: ONU Enable Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_serial_number serial_number; /**< serial number. */
} bcmolt_onu_onu_enable_completed_data;

/* Constants associated with bcmolt_onu_onu_enable_completed_data. */
#define BCMOLT_ONU_ONU_ENABLE_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "onu_enable_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_onu_enable_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_onu_enable_completed;

/** ONU: ONU Disable Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_serial_number serial_number; /**< serial number. */
    bcmolt_deactivation_fail_reason fail_reason; /**< fail reason. */
    bcmolt_result status; /**< status. */
} bcmolt_onu_onu_disable_completed_data;

/* Constants associated with bcmolt_onu_onu_disable_completed_data. */
#define BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "onu_disable_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_onu_disable_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_onu_disable_completed;

/** ONU: RSSI Measurement Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; /**< status. */
    bcmolt_rssi_measurement_fail_reason fail_reason; /**< fail reason. */
} bcmolt_onu_rssi_measurement_completed_data;

/* Constants associated with bcmolt_onu_rssi_measurement_completed_data. */
#define BCMOLT_ONU_RSSI_MEASUREMENT_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "rssi_measurement_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_rssi_measurement_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_rssi_measurement_completed;

/** ONU: Invalid DBRu Report */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_alloc_id alloc_id; /**< Alloc-ID. */
} bcmolt_onu_invalid_dbru_report_data;

/* Constants associated with bcmolt_onu_invalid_dbru_report_data. */
#define BCMOLT_ONU_INVALID_DBRU_REPORT_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "invalid_dbru_report" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_invalid_dbru_report_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_invalid_dbru_report;

/** ONU: Key Exchange Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_itupon_onu_aes_key new_key; /**< new key. */
} bcmolt_onu_key_exchange_completed_data;

/* Constants associated with bcmolt_onu_key_exchange_completed_data. */
#define BCMOLT_ONU_KEY_EXCHANGE_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "key_exchange_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_key_exchange_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_key_exchange_completed;

/** Transport message definition for "key_exchange_key_request_timeout" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
} bcmolt_onu_key_exchange_key_request_timeout;

/** Transport message definition for "key_exchange_cycle_skipped" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
} bcmolt_onu_key_exchange_cycle_skipped;

/** ONU: Key Exchange Key Mismatch */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_aes_key expected_key; /**< expected key. */
    bcmolt_aes_key received_key; /**< received key. */
} bcmolt_onu_key_exchange_key_mismatch_data;

/* Constants associated with bcmolt_onu_key_exchange_key_mismatch_data. */
#define BCMOLT_ONU_KEY_EXCHANGE_KEY_MISMATCH_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "key_exchange_key_mismatch" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_key_exchange_key_mismatch_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_key_exchange_key_mismatch;

/** Transport message definition for "optical_reflection" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
} bcmolt_onu_optical_reflection;

/** ONU: LOki */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< alarm status. */
} bcmolt_onu_loki_data;

/* Constants associated with bcmolt_onu_loki_data. */
#define BCMOLT_ONU_LOKI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "loki" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_loki_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_loki;

/** ONU: MEMi */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_13 ploam_buffer; /**< PLOAM buffer. */
} bcmolt_onu_memi_data;

/* Constants associated with bcmolt_onu_memi_data. */
#define BCMOLT_ONU_MEMI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_ONU_MEMI_DATA_PLOAM_BUFFER_MAX_LENGTH 13
#define BCMOLT_ONU_MEMI_DATA_PLOAM_BUFFER_LENGTH 13

/** Transport message definition for "memi" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_memi_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_memi;

/** ONU: OMCI PORT ID Configuration Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_gem_port_id gem_port; /**< GEM Port ID. */
    bcmolt_result status; /**< status. */
    bcmolt_omci_port_id_operation operation; /**< Operation. */
} bcmolt_onu_omci_port_id_configuration_completed_data;

/* Constants associated with bcmolt_onu_omci_port_id_configuration_completed_data. */
#define BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "omci_port_id_configuration_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_omci_port_id_configuration_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_omci_port_id_configuration_completed;

/** ONU: BER Interval Configuration Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_ber_interval ber_interval; /**< BER interval in ms. */
    bcmolt_result result; /**< Result. */
} bcmolt_onu_ber_interval_configuration_completed_data;

/* Constants associated with bcmolt_onu_ber_interval_configuration_completed_data. */
#define BCMOLT_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "ber_interval_configuration_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_ber_interval_configuration_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_ber_interval_configuration_completed;

/** ONU: ERR */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t bip8_errors; /**< BIP8 errors. */
} bcmolt_onu_err_data;

/* Constants associated with bcmolt_onu_err_data. */
#define BCMOLT_ONU_ERR_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "err" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_err_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_err;

/** ONU: Password Authentication Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; /**< status. */
    bcmolt_password_authentication_fail_reason fail_reason; /**< fail reason. */
    bcmolt_bin_str_10 password; /**< password. */
} bcmolt_onu_password_authentication_completed_data;

/* Constants associated with bcmolt_onu_password_authentication_completed_data. */
#define BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL
#define BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_PASSWORD_MAX_LENGTH 10
#define BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_PASSWORD_LENGTH 10

/** Transport message definition for "password_authentication_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_password_authentication_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_password_authentication_completed;

/** ONU: Key Exchange Unconsecutive Index */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t expected_index; /**< expected index. */
    uint32_t actual_index; /**< actual index. */
} bcmolt_onu_key_exchange_unconsecutive_index_data;

/* Constants associated with bcmolt_onu_key_exchange_unconsecutive_index_data. */
#define BCMOLT_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "key_exchange_unconsecutive_index" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_key_exchange_unconsecutive_index_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_key_exchange_unconsecutive_index;

/** ONU: Key Exchange Decrypt Required */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_aes_key new_key; /**< new key. */
} bcmolt_onu_key_exchange_decrypt_required_data;

/* Constants associated with bcmolt_onu_key_exchange_decrypt_required_data. */
#define BCMOLT_ONU_KEY_EXCHANGE_DECRYPT_REQUIRED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "key_exchange_decrypt_required" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_key_exchange_decrypt_required_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_key_exchange_decrypt_required;

/** ONU: onu activation standby completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; /**< result. */
} bcmolt_onu_onu_activation_standby_completed_data;

/* Constants associated with bcmolt_onu_onu_activation_standby_completed_data. */
#define BCMOLT_ONU_ONU_ACTIVATION_STANDBY_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "onu_activation_standby_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_onu_activation_standby_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_onu_activation_standby_completed;

/** ONU: Power Management State Change */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_state old_state; /**< The state the ONU was previously in. */
    bcmolt_onu_state new_state; /**< The state the ONU is currently in. */
    bcmolt_power_management_transition_reason reason; /**< The reason for the state change. */
} bcmolt_onu_power_management_state_change_data;

/* Constants associated with bcmolt_onu_power_management_state_change_data. */
#define BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "power_management_state_change" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_power_management_state_change_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_power_management_state_change;

/** ONU: Possible Drift */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status alarm_status; /**< On: estimated drift has exceeded the configured threshold. */
    int32_t estimated_drift; /**< If status is on, the estimated drift value, otherwise zero (0). */
} bcmolt_onu_possible_drift_data;

/* Constants associated with bcmolt_onu_possible_drift_data. */
#define BCMOLT_ONU_POSSIBLE_DRIFT_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "possible_drift" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_possible_drift_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_possible_drift;

/** ONU: Registration ID */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_36 registration_id; /**< Registration ID. */
    bcmolt_result request_registration_status; /**< request registration status. */
    bcmolt_request_registration_fail_reason request_registration_fail_reason; /**< request registration fail reason. */
} bcmolt_onu_registration_id_data;

/* Constants associated with bcmolt_onu_registration_id_data. */
#define BCMOLT_ONU_REGISTRATION_ID_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL
#define BCMOLT_ONU_REGISTRATION_ID_DATA_REGISTRATION_ID_MAX_LENGTH 36
#define BCMOLT_ONU_REGISTRATION_ID_DATA_REGISTRATION_ID_LENGTH 36

/** Transport message definition for "registration_id" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_registration_id_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_registration_id;

/** ONU: Power level report */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t attenuation; /**< Attenuation. */
    uint8_t power_levelling_capability; /**< Power levelling capability. */
} bcmolt_onu_power_level_report_data;

/* Constants associated with bcmolt_onu_power_level_report_data. */
#define BCMOLT_ONU_POWER_LEVEL_REPORT_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "power_level_report" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_power_level_report_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_power_level_report;

/** ONU: Power consumption report */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_arr_power_consumption_channel_report_8 power_consumption_report; /**< power consumption report. */
} bcmolt_onu_power_consumption_report_data;

/* Constants associated with bcmolt_onu_power_consumption_report_data. */
#define BCMOLT_ONU_POWER_CONSUMPTION_REPORT_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_ONU_POWER_CONSUMPTION_REPORT_DATA_POWER_CONSUMPTION_REPORT_LENGTH 8

/** Transport message definition for "power_consumption_report" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_power_consumption_report_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_power_consumption_report;

/** ONU: secure mutual authentication failure */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result status; /**< status. */
    bcmolt_secure_mutual_authentication_fail_reason fail_reason; /**< secure mutual authentication fail reason. */
} bcmolt_onu_secure_mutual_authentication_failure_data;

/* Constants associated with bcmolt_onu_secure_mutual_authentication_failure_data. */
#define BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "secure_mutual_authentication_failure" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_secure_mutual_authentication_failure_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_secure_mutual_authentication_failure;

/** ONU: ONU Tuning out completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; /**< result. */
    bcmolt_tune_out_fail_reason fail_reason; /**< fail reason. */
} bcmolt_onu_onu_tuning_out_completed_data;

/* Constants associated with bcmolt_onu_onu_tuning_out_completed_data. */
#define BCMOLT_ONU_ONU_TUNING_OUT_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "onu_tuning_out_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_onu_tuning_out_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_onu_tuning_out_completed;

/** ONU: ONU Tuning in completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; /**< result. */
    bcmolt_tune_in_fail_reason fail_reason; /**< fail reason. */
} bcmolt_onu_onu_tuning_in_completed_data;

/* Constants associated with bcmolt_onu_onu_tuning_in_completed_data. */
#define BCMOLT_ONU_ONU_TUNING_IN_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "onu_tuning_in_completed" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_onu_tuning_in_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_onu_tuning_in_completed;

/** ONU: Tuning response */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool ack; /**< is tuning response received with ack or nack */
    bcmolt_result result; /**< result. */
} bcmolt_onu_tuning_response_data;

/* Constants associated with bcmolt_onu_tuning_response_data. */
#define BCMOLT_ONU_TUNING_RESPONSE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "tuning_response" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_tuning_response_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_tuning_response;

/** ONU: PLOAM Packet */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool default_key; /**< default key. */
    bcmolt_bin_str_40 ploam; /**< ploam. */
} bcmolt_onu_ploam_packet_data;

/* Constants associated with bcmolt_onu_ploam_packet_data. */
#define BCMOLT_ONU_PLOAM_PACKET_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL
#define BCMOLT_ONU_PLOAM_PACKET_DATA_PLOAM_MAX_LENGTH 40
#define BCMOLT_ONU_PLOAM_PACKET_DATA_PLOAM_LENGTH 40

/** Transport message definition for "ploam_packet" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_ploam_packet_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_ploam_packet;

/** ONU: XGPON CPU packets */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_packet_type packet_type; /**< packet type. */
    bcmos_bool calc_crc; /**< calc crc. */
    uint8_t number_of_packets; /**< number of packets. */
    uint16_t packet_size; /**< Single packet size. */
    bcmolt_bin_str buffer; /**< buffer. */
} bcmolt_onu_cpu_packets_data;

/* Constants associated with bcmolt_onu_cpu_packets_data. */
#define BCMOLT_ONU_CPU_PACKETS_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL

/** Transport message definition for "cpu_packets" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_cpu_packets_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_cpu_packets;

/** ONU: XGPON CPU packet */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint16_t port_id; /**< port id. */
    bcmos_bool crc_ok; /**< crc ok. */
    uint32_t packet_size; /**< packet size. */
    bcmolt_bin_str buffer; /**< buffer. */
} bcmolt_onu_cpu_packet_data;

/* Constants associated with bcmolt_onu_cpu_packet_data. */
#define BCMOLT_ONU_CPU_PACKET_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "cpu_packet" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_cpu_packet_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_cpu_packet;

/** ONU: XGPON OMCI packet */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint16_t port_id; /**< port id. */
    bcmos_bool crc_ok; /**< crc ok. */
    uint32_t packet_size; /**< packet size. */
    bcmolt_bin_str buffer; /**< buffer. */
} bcmolt_onu_omci_packet_data;

/* Constants associated with bcmolt_onu_omci_packet_data. */
#define BCMOLT_ONU_OMCI_PACKET_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "omci_packet" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_omci_packet_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_omci_packet;

/** Transport message definition for "onu_ready_for_data_grant" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
} bcmolt_onu_onu_ready_for_data_grant;

/** ONU: REI */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t bip8_errors; /**< BIP8 errors. */
} bcmolt_onu_rei_data;

/* Constants associated with bcmolt_onu_rei_data. */
#define BCMOLT_ONU_REI_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "rei" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_rei_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_rei;

/** Transport message definition for "force_deactivation" group of "onu" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
} bcmolt_onu_force_deactivation;

/** ONU: State Change */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_operation new_onu_state; /**< New ONU state. */
} bcmolt_onu_state_change_data;

/* Constants associated with bcmolt_onu_state_change_data. */
#define BCMOLT_ONU_STATE_CHANGE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "state_change" group of "onu" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_state_change_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_state_change;

/** ONU: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool ber_interval_configuration_completed; /**< If true, indications of type "ber_interval_configuration_completed" will be generated. */
    bcmos_bool cpu_packet; /**< If true, indications of type "cpu_packet" will be generated. */
    bcmos_bool dfi; /**< If true, indications of type "dfi" will be generated. */
    bcmos_bool dgi; /**< If true, indications of type "dgi" will be generated. */
    bcmos_bool dowi; /**< If true, indications of type "dowi" will be generated. */
    bcmos_bool err; /**< If true, indications of type "err" will be generated. */
    bcmos_bool gpon_alarm; /**< If true, indications of type "gpon_alarm" will be generated. */
    bcmos_bool invalid_dbru_report; /**< If true, indications of type "invalid_dbru_report" will be generated. */
    bcmos_bool key_exchange_completed; /**< If true, indications of type "key_exchange_completed" will be generated. */
    bcmos_bool key_exchange_cycle_skipped; /**< If true, indications of type "key_exchange_cycle_skipped" will be generated. */
    bcmos_bool key_exchange_decrypt_required; /**< If true, indications of type "key_exchange_decrypt_required" will be generated. */
    bcmos_bool key_exchange_key_mismatch; /**< If true, indications of type "key_exchange_key_mismatch" will be generated. */
    bcmos_bool key_exchange_key_request_timeout; /**< If true, indications of type "key_exchange_key_request_timeout" will be generated. */
    bcmos_bool key_exchange_unconsecutive_index; /**< If true, indications of type "key_exchange_unconsecutive_index" will be generated. */
    bcmos_bool loai; /**< If true, indications of type "loai" will be generated. */
    bcmos_bool loki; /**< If true, indications of type "loki" will be generated. */
    bcmos_bool looci; /**< If true, indications of type "looci" will be generated. */
    bcmos_bool memi; /**< If true, indications of type "memi" will be generated. */
    bcmos_bool omci_packet; /**< If true, indications of type "omci_packet" will be generated. */
    bcmos_bool omci_port_id_configuration_completed; /**< If true, indications of type "omci_port_id_configuration_completed" will be generated. */
    bcmos_bool onu_activation_completed; /**< If true, indications of type "onu_activation_completed" will be generated. */
    bcmos_bool onu_activation_standby_completed; /**< If true, indications of type "onu_activation_standby_completed" will be generated. */
    bcmos_bool onu_deactivation_completed; /**< If true, indications of type "onu_deactivation_completed" will be generated. */
    bcmos_bool onu_disable_completed; /**< If true, indications of type "onu_disable_completed" will be generated. */
    bcmos_bool onu_enable_completed; /**< If true, indications of type "onu_enable_completed" will be generated. */
    bcmos_bool onu_ready_for_data_grant; /**< If true, indications of type "onu_ready_for_data_grant" will be generated. */
    bcmos_bool onu_tuning_in_completed; /**< If true, indications of type "onu_tuning_in_completed" will be generated. */
    bcmos_bool onu_tuning_out_completed; /**< If true, indications of type "onu_tuning_out_completed" will be generated. */
    bcmos_bool optical_reflection; /**< If true, indications of type "optical_reflection" will be generated. */
    bcmos_bool password_authentication_completed; /**< If true, indications of type "password_authentication_completed" will be generated. */
    bcmos_bool pee; /**< If true, indications of type "pee" will be generated. */
    bcmos_bool possible_drift; /**< If true, indications of type "possible_drift" will be generated. */
    bcmos_bool power_consumption_report; /**< If true, indications of type "power_consumption_report" will be generated. */
    bcmos_bool power_level_report; /**< If true, indications of type "power_level_report" will be generated. */
    bcmos_bool power_management_state_change; /**< If true, indications of type "power_management_state_change" will be generated. */
    bcmos_bool pqsi; /**< If true, indications of type "pqsi" will be generated. */
    bcmos_bool pst; /**< If true, indications of type "pst" will be generated. */
    bcmos_bool ranging_completed; /**< If true, indications of type "ranging_completed" will be generated. */
    bcmos_bool registration_id; /**< If true, indications of type "registration_id" will be generated. */
    bcmos_bool rei; /**< If true, indications of type "rei" will be generated. */
    bcmos_bool rssi_measurement_completed; /**< If true, indications of type "rssi_measurement_completed" will be generated. */
    bcmos_bool sdi; /**< If true, indications of type "sdi" will be generated. */
    bcmos_bool secure_mutual_authentication_failure; /**< If true, indications of type "secure_mutual_authentication_failure" will be generated. */
    bcmos_bool sfi; /**< If true, indications of type "sfi" will be generated. */
    bcmos_bool state_change; /**< If true, indications of type "state_change" will be generated. */
    bcmos_bool sufi; /**< If true, indications of type "sufi" will be generated. */
    bcmos_bool tiwi; /**< If true, indications of type "tiwi" will be generated. */
    bcmos_bool tuning_response; /**< If true, indications of type "tuning_response" will be generated. */
    bcmos_bool xgpon_alarm; /**< If true, indications of type "xgpon_alarm" will be generated. */
} bcmolt_onu_auto_cfg_data;

/* Constants associated with bcmolt_onu_auto_cfg_data. */
#define BCMOLT_ONU_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0001FFFFFFFFFFFFULL

/** Transport message definition for "auto_cfg" group of "onu" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_onu_key key; /**< Object key. */
    bcmolt_onu_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_onu_auto_cfg;

/** pbit_to_tc: key */
typedef struct
{
    uint16_t id; /**< id */
    bcmolt_tm_sched_dir dir; /**< dir. */
} bcmolt_pbit_to_tc_key;

/** pbit_to_tc: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_8 tc; /**< tc (0..7) set for a pbit 0..7 */
} bcmolt_pbit_to_tc_cfg_data;

/* Constants associated with bcmolt_pbit_to_tc_cfg_data. */
#define BCMOLT_PBIT_TO_TC_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_PBIT_TO_TC_CFG_DATA_TC_MAX_LENGTH 8
#define BCMOLT_PBIT_TO_TC_CFG_DATA_TC_LENGTH 8

/** Transport message definition for "cfg" group of "pbit_to_tc" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_pbit_to_tc_key key; /**< Object key. */
    bcmolt_pbit_to_tc_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_pbit_to_tc_cfg;

/** Multi-object message definition for "cfg" group of "pbit_to_tc" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_pbit_to_tc_key key; /**< Object key (can include wildcards). */
    bcmolt_pbit_to_tc_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_pbit_to_tc_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_pbit_to_tc_cfg *responses; /**< Responses to the last API call. */

    bcmolt_pbit_to_tc_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_pbit_to_tc_multi_cfg;

/** policer (aka meter) profile: key */
typedef struct
{
    bcmolt_policer_profile_id id; /**< id. */
} bcmolt_policer_profile_key;

/** policer (aka meter) profile: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state state; /**< not_configured => entry not used */
    bcmolt_policer_type type; /**< meter type - single rate, two color, etc. */
    bcmolt_policer_app target_object; /**< type of object (port, flow, etc.) to police */
    bcmolt_traffic_type traffic_type; /**< type of traffic (Unk Uni, Broadcast, etc.) to police */
    uint32_t cir_kbps; /**< commited rate in kbps */
    uint32_t pir_kbps; /**< peak rate in kbps */
    uint32_t cbs_kb; /**< committed burst in kb */
    uint32_t pbs_kb; /**< peak burst in kb */
    bcmos_bool color_awareness; /**< enable color reading from input packet. method is spec'd in input tm_cmp for port */
    bcmos_bool color_marking; /**< enable color marking to outgoing packet. method is spec'd in output tm_cmp for port */
} bcmolt_policer_profile_cfg_data;

/* Constants associated with bcmolt_policer_profile_cfg_data. */
#define BCMOLT_POLICER_PROFILE_CFG_DATA_PRESENCE_MASK_ALL 0x00000000000003FFULL

/** Transport message definition for "cfg" group of "policer_profile" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_policer_profile_key key; /**< Object key. */
    bcmolt_policer_profile_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_policer_profile_cfg;

/** Multi-object message definition for "cfg" group of "policer_profile" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_policer_profile_key key; /**< Object key (can include wildcards). */
    bcmolt_policer_profile_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_policer_profile_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_policer_profile_cfg *responses; /**< Responses to the last API call. */

    bcmolt_policer_profile_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_policer_profile_multi_cfg;

/** pon interface: key */
typedef struct
{
    bcmolt_interface pon_ni; /**< Interface Id */
} bcmolt_pon_interface_key;

/** pon interface: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_interface_state state; /**< Interface state */
    bcmolt_status los_status; /**< LoS Status */
    bcmolt_status los_initial_value; /**< LOS initial value following PON activation */
    bcmolt_service_discovery discovery; /**< Serial Number process configuration */
    bcmolt_itu_pon_params itu; /**< ITU PON Attributes */
    bcmolt_pon_distance pon_distance; /**< PON distance */
    uint16_t number_of_active_onus; /**< Number of active ONUs on the PON */
    uint16_t number_of_active_standby_onus; /**< Number of active standby ONUs on the PON */
    bcmolt_gpon_trx gpon_trx; /**< gpon transceiver parameters */
    bcmolt_xgpon_trx xgpon_trx; /**< xgpon transceiver parameters */
    bcmolt_xgpon_trx xgs_ngpon2_trx; /**< xgs or ngpon2 transceiver params */
} bcmolt_pon_interface_cfg_data;

/* Constants associated with bcmolt_pon_interface_cfg_data. */
#define BCMOLT_PON_INTERFACE_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000003F3DULL

/** Transport message definition for "cfg" group of "pon_interface" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_cfg;

/** Multi-object message definition for "cfg" group of "pon_interface" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key (can include wildcards). */
    bcmolt_pon_interface_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_pon_interface_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_pon_interface_cfg *responses; /**< Responses to the last API call. */

    bcmolt_pon_interface_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_pon_interface_multi_cfg;

/** pon interface: Set PON Interface State */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_interface_operation operation; /**< PON interface operation. */
} bcmolt_pon_interface_set_pon_interface_state_data;

/* Constants associated with bcmolt_pon_interface_set_pon_interface_state_data. */
#define BCMOLT_PON_INTERFACE_SET_PON_INTERFACE_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "set_pon_interface_state" group of "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_set_pon_interface_state_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_set_pon_interface_state;

/** pon interface: Set ONU State */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_operation onu_state; /**< New operation state of all ONUs.  The default operation may be configured by the XGPON NI configuration object : xgpon_ni.cfg.sn_acquisition. */
} bcmolt_pon_interface_set_onu_state_data;

/* Constants associated with bcmolt_pon_interface_set_onu_state_data. */
#define BCMOLT_PON_INTERFACE_SET_ONU_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "set_onu_state" group of "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_set_onu_state_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_set_onu_state;

/** Transport message definition for "reset" group of "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_reset;

/** pon interface: Disable Serial Number */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_disable_serial_number_control control; /**< control. */
    bcmolt_serial_number serial_number; /**< serial number. */
} bcmolt_pon_interface_disable_serial_number_data;

/* Constants associated with bcmolt_pon_interface_disable_serial_number_data. */
#define BCMOLT_PON_INTERFACE_DISABLE_SERIAL_NUMBER_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "disable_serial_number" group of "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_disable_serial_number_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_disable_serial_number;

/** Transport message definition for "single_request_standby_pon_monitoring" group of "pon_interface"
  * object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_single_request_standby_pon_monitoring;

/** pon interface: Run Special BW Map */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint8_t number_of_cycle; /**< number of cycle. */
    uint8_t allocation_number; /**< allocation number. */
    uint8_t bw_map_array; /**< bw map array. */
} bcmolt_pon_interface_run_special_bw_map_data;

/* Constants associated with bcmolt_pon_interface_run_special_bw_map_data. */
#define BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "run_special_bw_map" group of "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_run_special_bw_map_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_run_special_bw_map;

/** Transport message definition for "tod_request" group of "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_tod_request;

/** pon interface: Start ONU Firmware Upgrade */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_onu_id_list_u32 list_of_onu_ids; /**< List of ONU IDs to upgrade the firmware. */
} bcmolt_pon_interface_start_onu_upgrade_data;

/* Constants associated with bcmolt_pon_interface_start_onu_upgrade_data. */
#define BCMOLT_PON_INTERFACE_START_ONU_UPGRADE_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "start_onu_upgrade" group of "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_start_onu_upgrade_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_start_onu_upgrade;

/** Transport message definition for "abort_onu_upgrade" group of "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_abort_onu_upgrade;

/** pon interface: protection switching type c set multiple onu state */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_switch_over_type_c_onu_state onu_state; /**< onu state. */
    bcmolt_onu_id_list_u32 onu_list; /**< onu list. */
} bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data;

/* Constants associated with bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data. */
#define BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "protection_switching_type_c_set_multiple_onu_state" group of
  * "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state;

/** pon interface: Protection switching apply re-range delta (IEEE) */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t rerange_delta; /**< Re-range delta. */
} bcmolt_pon_interface_protection_switching_apply_rerange_delta_data;

/* Constants associated with bcmolt_pon_interface_protection_switching_apply_rerange_delta_data. */
#define BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "protection_switching_apply_rerange_delta" group of
  * "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_protection_switching_apply_rerange_delta_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_protection_switching_apply_rerange_delta;

/** pon interface: XGPON CPU packets */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_packet_type packet_type; /**< packet type. */
    bcmos_bool calc_crc; /**< calc crc. */
    bcmolt_gem_port_id_list_u8_max_16 gem_port_list; /**< gem port list. */
    bcmolt_bin_str buffer; /**< buffer. */
} bcmolt_pon_interface_cpu_packets_data;

/* Constants associated with bcmolt_pon_interface_cpu_packets_data. */
#define BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL
#define BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_GEM_PORT_LIST_MIN_LENGTH 0
#define BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_GEM_PORT_LIST_MAX_LENGTH 16

/** Transport message definition for "cpu_packets" group of "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_cpu_packets_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_cpu_packets;

/** pon interface: Broadcast PLOAM Packet */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_bin_str_40 ploam; /**< ploam. */
} bcmolt_pon_interface_broadcast_ploam_packet_data;

/* Constants associated with bcmolt_pon_interface_broadcast_ploam_packet_data. */
#define BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_PLOAM_MAX_LENGTH 40
#define BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_PLOAM_LENGTH 40

/** Transport message definition for "broadcast_ploam_packet" group of "pon_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_broadcast_ploam_packet_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_broadcast_ploam_packet;

/** pon interface: State Change Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; /**< Result. */
    bcmolt_interface_state previous_state; /**< Previous state. */
    bcmolt_interface_state new_state; /**< new state. */
} bcmolt_pon_interface_state_change_completed_data;

/* Constants associated with bcmolt_pon_interface_state_change_completed_data. */
#define BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL

/** Transport message definition for "state_change_completed" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_state_change_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_state_change_completed;

/** pon interface: TOD request completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_str_64 tod_string; /**< tod_string. */
    uint64_t sfc; /**< sfc. */
    uint64_t rtc_offset_sec; /**< rtc_offset_sec. */
    uint32_t rtc_offset_nsec; /**< rtc_offset_nsec. */
    bcmolt_result status; /**< status. */
} bcmolt_pon_interface_tod_request_completed_data;

/* Constants associated with bcmolt_pon_interface_tod_request_completed_data. */
#define BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_PRESENCE_MASK_ALL 0x000000000000001FULL

/** Transport message definition for "tod_request_completed" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_tod_request_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_tod_request_completed;

/** pon interface: LOS */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_status status; /**< status. */
} bcmolt_pon_interface_los_data;

/* Constants associated with bcmolt_pon_interface_los_data. */
#define BCMOLT_PON_INTERFACE_LOS_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "los" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_los_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_los;

/** Transport message definition for "serial_number_acquisition_cycle_start" group of "pon_interface"
  * object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_serial_number_acquisition_cycle_start;

/** pon interface: Protection Switching Traffic Resume */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_traffic_resume_result result; /**< Result. */
} bcmolt_pon_interface_protection_switching_traffic_resume_data;

/* Constants associated with bcmolt_pon_interface_protection_switching_traffic_resume_data. */
#define BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TRAFFIC_RESUME_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "protection_switching_traffic_resume" group of "pon_interface"
  * object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_protection_switching_traffic_resume_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_protection_switching_traffic_resume;

/** pon interface: Protection Switching ONUs Ranged */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_itupon_onu_eqd_list_u32 onus; /**< ONUs. */
} bcmolt_pon_interface_protection_switching_onus_ranged_data;

/* Constants associated with bcmolt_pon_interface_protection_switching_onus_ranged_data. */
#define BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_ONUS_RANGED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "protection_switching_onus_ranged" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_protection_switching_onus_ranged_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_protection_switching_onus_ranged;

/** Transport message definition for "protection_switching_rerange_failure" group of "pon_interface"
  * object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_protection_switching_rerange_failure;

/** pon interface: Protection Switching Switchover Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_result result; /**< Result. */
} bcmolt_pon_interface_protection_switching_switchover_completed_data;

/* Constants associated with bcmolt_pon_interface_protection_switching_switchover_completed_data. */
#define BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "protection_switching_switchover_completed" group of
  * "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_protection_switching_switchover_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_protection_switching_switchover_completed;

/** pon interface: Standby PON Monitoring Cycle Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t number_of_detected_delimiter; /**< number of detected delimiter. */
    bcmolt_status energy_detect_signal; /**< energy detect signal. */
} bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data;

/* Constants associated with bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data. */
#define BCMOLT_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "standby_pon_monitoring_cycle_completed" group of "pon_interface"
  * object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_standby_pon_monitoring_cycle_completed;

/** pon interface: ONU Discovered */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_serial_number serial_number; /**< serial number. */
    uint32_t ranging_time; /**< ranging time. */
    bcmolt_onu_id onu_id; /**< onu_id. */
    bcmolt_upstream_line_rate_capabilities upstream_line_rate_capabilities; /**< Upstream line rate capabilities */
    uint8_t current_downstream_pon_id; /**< The PON-ID received by the ONU in its current downstream wavelength channel */
    uint8_t current_upstream_pon_id; /**< The PON-ID of the Channel Profile containing the descriptor of the upstream wavelength channel in which the ONU is transmitting */
    bcmolt_arr_calibration_record_8 calibration_record; /**< Calibration record */
    uint8_t tuning_granularity; /**< The tuning granularity of the ONU transmitted expressed in units of 1Ghz. Value of 0 indicates that the ONU does not support fine tuning / dithering */
    uint8_t step_tuning_time; /**< The value of the tuning time for a single granularity step, expressed in unit of PHY frames. The value 0 indicates that the ONU does not support fine tuning / dithering */
    uint8_t attenuation; /**< The ONU attenuation in steps of 3dB at the time of the message transmission as part of the power levelling report. Value of 0 represents un-attenuated transmission */
    uint8_t power_levelling_capabilities; /**< The ONU supports attenuation level in step of 3dB */
} bcmolt_pon_interface_onu_discovered_data;

/* Constants associated with bcmolt_pon_interface_onu_discovered_data. */
#define BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_PRESENCE_MASK_ALL 0x00000000000007FFULL
#define BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_CALIBRATION_RECORD_LENGTH 8

/** Transport message definition for "onu_discovered" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_onu_discovered_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_onu_discovered;

/** pon interface: CPU Packets Failure */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_packet_injection_error error; /**< The error that was encountered. */
    bcmolt_gem_port_id gem_port_id; /**< The GEM port that caused the error. */
} bcmolt_pon_interface_cpu_packets_failure_data;

/* Constants associated with bcmolt_pon_interface_cpu_packets_failure_data. */
#define BCMOLT_PON_INTERFACE_CPU_PACKETS_FAILURE_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "cpu_packets_failure" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_cpu_packets_failure_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_cpu_packets_failure;

/** Transport message definition for "deactivate_all_onus_completed" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_deactivate_all_onus_completed;

/** Transport message definition for "disable_all_onus_completed" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_disable_all_onus_completed;

/** Transport message definition for "activate_all_onus_completed" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_activate_all_onus_completed;

/** Transport message definition for "enable_all_onus_completed" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_enable_all_onus_completed;

/** pon interface: ONU Upgrade Complete */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_pon_ni_onu_upgrade_status_code overall_status; /**< Overall status of the ONU upgrade (success or failure). */
    uint32_t file_size_in_bytes; /**< Total size of the file to send in bytes. */
    bcmolt_onu_upgrade_status_list_u32_max_128 onu_status; /**< Status for each ONU that is part of the upgrade process. */
} bcmolt_pon_interface_onu_upgrade_complete_data;

/* Constants associated with bcmolt_pon_interface_onu_upgrade_complete_data. */
#define BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_PRESENCE_MASK_ALL 0x0000000000000007ULL
#define BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ONU_STATUS_MAX_LENGTH 128

/** Transport message definition for "onu_upgrade_complete" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_onu_upgrade_complete_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_onu_upgrade_complete;

/** Transport message definition for "ieee_rogue_detection_completed" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
} bcmolt_pon_interface_ieee_rogue_detection_completed;

/** pon interface: MPCP Timestamp Changed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    uint32_t mpcp_timestamp; /**< The MPCP time at which the pulse was received. */
} bcmolt_pon_interface_mpcp_timestamp_changed_data;

/* Constants associated with bcmolt_pon_interface_mpcp_timestamp_changed_data. */
#define BCMOLT_PON_INTERFACE_MPCP_TIMESTAMP_CHANGED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "mpcp_timestamp_changed" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_mpcp_timestamp_changed_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_mpcp_timestamp_changed;

/** pon interface: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool activate_all_onus_completed; /**< If true, indications of type "activate_all_onus_completed" will be generated. */
    bcmos_bool cpu_packets_failure; /**< If true, indications of type "cpu_packets_failure" will be generated. */
    bcmos_bool deactivate_all_onus_completed; /**< If true, indications of type "deactivate_all_onus_completed" will be generated. */
    bcmos_bool disable_all_onus_completed; /**< If true, indications of type "disable_all_onus_completed" will be generated. */
    bcmos_bool enable_all_onus_completed; /**< If true, indications of type "enable_all_onus_completed" will be generated. */
    bcmos_bool ieee_rogue_detection_completed; /**< If true, indications of type "ieee_rogue_detection_completed" will be generated. */
    bcmos_bool los; /**< If true, indications of type "los" will be generated. */
    bcmos_bool mpcp_timestamp_changed; /**< If true, indications of type "mpcp_timestamp_changed" will be generated. */
    bcmos_bool onu_discovered; /**< If true, indications of type "onu_discovered" will be generated. */
    bcmos_bool onu_upgrade_complete; /**< If true, indications of type "onu_upgrade_complete" will be generated. */
    bcmos_bool protection_switching_onus_ranged; /**< If true, indications of type "protection_switching_onus_ranged" will be generated. */
    bcmos_bool protection_switching_rerange_failure; /**< If true, indications of type "protection_switching_rerange_failure" will be generated. */
    bcmos_bool protection_switching_switchover_completed; /**< If true, indications of type "protection_switching_switchover_completed" will be generated. */
    bcmos_bool protection_switching_traffic_resume; /**< If true, indications of type "protection_switching_traffic_resume" will be generated. */
    bcmos_bool serial_number_acquisition_cycle_start; /**< If true, indications of type "serial_number_acquisition_cycle_start" will be generated. */
    bcmos_bool standby_pon_monitoring_cycle_completed; /**< If true, indications of type "standby_pon_monitoring_cycle_completed" will be generated. */
    bcmos_bool state_change_completed; /**< If true, indications of type "state_change_completed" will be generated. */
    bcmos_bool tod_request_completed; /**< If true, indications of type "tod_request_completed" will be generated. */
} bcmolt_pon_interface_auto_cfg_data;

/* Constants associated with bcmolt_pon_interface_auto_cfg_data. */
#define BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x000000000003FFFFULL

/** Transport message definition for "auto_cfg" group of "pon_interface" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_pon_interface_key key; /**< Object key. */
    bcmolt_pon_interface_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_pon_interface_auto_cfg;

/** Protection Interface: key */
typedef struct
{
    bcmolt_protection_interface_id id; /**< Id used to represent virtual Protection Interface Objects */
} bcmolt_protection_interface_key;

/** Protection Interface: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state state; /**< Not Configured or Configured */
    bcmolt_intf_ref primary_interface; /**< Primary Interface Reference with type */
    bcmolt_intf_ref secondary_interface; /**< Secondary Interface Reference with type */
    bcmolt_active_interface active_interface; /**< Currently active interface in protection interface pair (Primary or Secondary) */
} bcmolt_protection_interface_cfg_data;

/* Constants associated with bcmolt_protection_interface_cfg_data. */
#define BCMOLT_PROTECTION_INTERFACE_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL

/** Transport message definition for "cfg" group of "protection_interface" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_protection_interface_key key; /**< Object key. */
    bcmolt_protection_interface_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_protection_interface_cfg;

/** Multi-object message definition for "cfg" group of "protection_interface" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_protection_interface_key key; /**< Object key (can include wildcards). */
    bcmolt_protection_interface_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_protection_interface_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_protection_interface_cfg *responses; /**< Responses to the last API call. */

    bcmolt_protection_interface_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_protection_interface_multi_cfg;

/** Transport message definition for "protection_switch" group of "protection_interface" object. */
typedef struct
{
    bcmolt_oper hdr; /**< Transport header. */
    bcmolt_protection_interface_key key; /**< Object key. */
} bcmolt_protection_interface_protection_switch;

/** Protection Interface: Protection Switch Completed */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_active_interface active_interface; /**< Newly active Interface (Primary or Secondary) */
} bcmolt_protection_interface_protection_switch_completed_data;

/* Constants associated with bcmolt_protection_interface_protection_switch_completed_data. */
#define BCMOLT_PROTECTION_INTERFACE_PROTECTION_SWITCH_COMPLETED_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "protection_switch_completed" group of "protection_interface"
  * object. */
typedef struct
{
    bcmolt_auto hdr; /**< Transport header. */
    bcmolt_protection_interface_key key; /**< Object key. */
    bcmolt_protection_interface_protection_switch_completed_data data; /**< All properties that must be set by the user. */
} bcmolt_protection_interface_protection_switch_completed;

/** Protection Interface: Indication Configuration */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmos_bool protection_switch_completed; /**< If true, indications of type "protection_switch_completed" will be generated. */
} bcmolt_protection_interface_auto_cfg_data;

/* Constants associated with bcmolt_protection_interface_auto_cfg_data. */
#define BCMOLT_PROTECTION_INTERFACE_AUTO_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "auto_cfg" group of "protection_interface" object. */
typedef struct
{
    bcmolt_auto_cfg hdr; /**< Transport header. */
    bcmolt_protection_interface_key key; /**< Object key. */
    bcmolt_protection_interface_auto_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_protection_interface_auto_cfg;

/** Software Error: key */
typedef struct
{
    bcmolt_ldid device_id; /**< Device ID */
    uint32_t idx; /**< SW error table index */
} bcmolt_software_error_key;

/** Software Error: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_sw_error entry; /**< Entry. */
} bcmolt_software_error_cfg_data;

/* Constants associated with bcmolt_software_error_cfg_data. */
#define BCMOLT_SOFTWARE_ERROR_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL

/** Transport message definition for "cfg" group of "software_error" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_software_error_key key; /**< Object key. */
    bcmolt_software_error_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_software_error_cfg;

/** Multi-object message definition for "cfg" group of "software_error" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_software_error_key key; /**< Object key (can include wildcards). */
    bcmolt_software_error_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_software_error_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_software_error_cfg *responses; /**< Responses to the last API call. */

    bcmolt_software_error_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_software_error_multi_cfg;

/** switch inni: key */
typedef struct
{
    bcmolt_switch_inni_id id; /**< id. */
} bcmolt_switch_inni_key;

/** switch inni: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state config_state; /**< config state. */
    bcmolt_policer_profile_id policer_profile; /**< policer profile id. */
} bcmolt_switch_inni_cfg_data;

/* Constants associated with bcmolt_switch_inni_cfg_data. */
#define BCMOLT_SWITCH_INNI_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000003ULL

/** Transport message definition for "cfg" group of "switch_inni" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_switch_inni_key key; /**< Object key. */
    bcmolt_switch_inni_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_switch_inni_cfg;

/** Multi-object message definition for "cfg" group of "switch_inni" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_switch_inni_key key; /**< Object key (can include wildcards). */
    bcmolt_switch_inni_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_switch_inni_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_switch_inni_cfg *responses; /**< Responses to the last API call. */

    bcmolt_switch_inni_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_switch_inni_multi_cfg;

/** tc_to_queue: key */
typedef struct
{
    uint16_t id; /**< id. */
    bcmolt_tm_sched_dir dir; /**< dir. */
} bcmolt_tc_to_queue_key;

/** tc_to_queue: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_arr_tm_queue_ref_8 queue; /**< queue ref for each tc 0..7 */
} bcmolt_tc_to_queue_cfg_data;

/* Constants associated with bcmolt_tc_to_queue_cfg_data. */
#define BCMOLT_TC_TO_QUEUE_CFG_DATA_PRESENCE_MASK_ALL 0x0000000000000001ULL
#define BCMOLT_TC_TO_QUEUE_CFG_DATA_QUEUE_LENGTH 8

/** Transport message definition for "cfg" group of "tc_to_queue" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_tc_to_queue_key key; /**< Object key. */
    bcmolt_tc_to_queue_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_tc_to_queue_cfg;

/** Multi-object message definition for "cfg" group of "tc_to_queue" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_tc_to_queue_key key; /**< Object key (can include wildcards). */
    bcmolt_tc_to_queue_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_tc_to_queue_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_tc_to_queue_cfg *responses; /**< Responses to the last API call. */

    bcmolt_tc_to_queue_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_tc_to_queue_multi_cfg;

/** tm_qmp: key */
typedef struct
{
    bcmolt_tm_qmp_id id; /**< id. */
} bcmolt_tm_qmp_key;

/** tm_qmp: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_tm_qmp_type type; /**< type. */
    bcmolt_arr_u8_8 pbits_to_tmq_id; /**< pbits_to_tmq_id. */
    uint16_t ref_count; /**< ref_count. */
    bcmolt_config_state state; /**< state. */
} bcmolt_tm_qmp_cfg_data;

/* Constants associated with bcmolt_tm_qmp_cfg_data. */
#define BCMOLT_TM_QMP_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000000FULL
#define BCMOLT_TM_QMP_CFG_DATA_PBITS_TO_TMQ_ID_LENGTH 8

/** Transport message definition for "cfg" group of "tm_qmp" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_tm_qmp_key key; /**< Object key. */
    bcmolt_tm_qmp_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_tm_qmp_cfg;

/** Multi-object message definition for "cfg" group of "tm_qmp" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_tm_qmp_key key; /**< Object key (can include wildcards). */
    bcmolt_tm_qmp_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_tm_qmp_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_tm_qmp_cfg *responses; /**< Responses to the last API call. */

    bcmolt_tm_qmp_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_tm_qmp_multi_cfg;

/** tm_queue: key */
typedef struct
{
    bcmolt_tm_sched_id sched_id; /**< Scheduler that owns the queue */
    bcmolt_tm_queue_set_id tm_q_set_id; /**< TM Queue Set Id */
    bcmolt_tm_queue_id id; /**< Queue id */
} bcmolt_tm_queue_key;

/** tm_queue: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_config_state state; /**< State. */
    bcmolt_tm_sched_param tm_sched_param; /**< Scheduling priority */
    bcmolt_tm_shaping rate; /**< Rate shaping parameters */
    uint16_t ref_count; /**< reference count (flows) */
} bcmolt_tm_queue_cfg_data;

/* Constants associated with bcmolt_tm_queue_cfg_data. */
#define BCMOLT_TM_QUEUE_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000001BULL

/** Transport message definition for "cfg" group of "tm_queue" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_tm_queue_key key; /**< Object key. */
    bcmolt_tm_queue_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_tm_queue_cfg;

/** Multi-object message definition for "cfg" group of "tm_queue" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_tm_queue_key key; /**< Object key (can include wildcards). */
    bcmolt_tm_queue_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_tm_queue_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_tm_queue_cfg *responses; /**< Responses to the last API call. */

    bcmolt_tm_queue_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_tm_queue_multi_cfg;

/** tm_sched: key */
typedef struct
{
    bcmolt_tm_sched_id id; /**< ID */
} bcmolt_tm_sched_key;

/** tm_sched: cfg */
typedef struct
{
    bcmolt_presence_mask presence_mask;
    bcmolt_tm_sched_attachment_point attachment_point; /**< The output of the tm_sched object instance */
    bcmolt_tm_sched_type sched_type; /**< Scheduler type */
    uint8_t num_priorities; /**< Max number of strict priority scheduling elements */
    bcmolt_tm_shaping rate; /**< Rate shaping parameters */
    bcmolt_config_state state; /**< Current state of object. (Not Configured or Active) */
} bcmolt_tm_sched_cfg_data;

/* Constants associated with bcmolt_tm_sched_cfg_data. */
#define BCMOLT_TM_SCHED_CFG_DATA_PRESENCE_MASK_ALL 0x000000000000002FULL

/** Transport message definition for "cfg" group of "tm_sched" object. */
typedef struct
{
    bcmolt_cfg hdr; /**< Transport header. */
    bcmolt_tm_sched_key key; /**< Object key. */
    bcmolt_tm_sched_cfg_data data; /**< All properties that must be set by the user. */
} bcmolt_tm_sched_cfg;

/** Multi-object message definition for "cfg" group of "tm_sched" object. */
typedef struct
{
    bcmolt_multi_cfg hdr; /**< Transport header. */
    bcmolt_tm_sched_key key; /**< Object key (can include wildcards). */
    bcmolt_tm_sched_cfg_data filter; /**< Only include responses that match these values. */
    bcmolt_tm_sched_cfg_data request; /**< Responses will include all present fields. */

    bcmos_bool more; /**< BCMOS_TRUE if not all responses were retreived by the last API call. */
    uint16_t num_responses; /**< Number of responses to the last API call. */
    bcmolt_tm_sched_cfg *responses; /**< Responses to the last API call. */

    bcmolt_tm_sched_key next_key; /**< Key iterator (do not set manually). */
} bcmolt_tm_sched_multi_cfg;



/** @} */

#endif
