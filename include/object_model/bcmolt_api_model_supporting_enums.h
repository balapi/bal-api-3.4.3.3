/*
 *  <:Copyright 2016-2019 Broadcom. All rights reserved. 
 *    The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
 *  :>
*/

#ifndef BCMOLT_API_MODEL_SUPPORTING_ENUMS_H_
#define BCMOLT_API_MODEL_SUPPORTING_ENUMS_H_

#include <bcmos_system.h>

/** \addtogroup object_model
 * @{
 */

/** access control forwarding action type. */
typedef enum
{
    BCMOLT_ACCESS_CONTROL_FWD_ACTION_TYPE__BEGIN = 0,
    BCMOLT_ACCESS_CONTROL_FWD_ACTION_TYPE_INVALID = 0, /**< this can not be set, just the init value of the field in object */
    BCMOLT_ACCESS_CONTROL_FWD_ACTION_TYPE_TRAP_TO_HOST = 1, /**< trap matching packets to host */
    BCMOLT_ACCESS_CONTROL_FWD_ACTION_TYPE_DROP = 2, /**< drop matching packets */
    BCMOLT_ACCESS_CONTROL_FWD_ACTION_TYPE_REDIRECT = 3, /**< redirect matching packet to a destination port */
    BCMOLT_ACCESS_CONTROL_FWD_ACTION_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_access_control_fwd_action_type;

/** action_cmd_id. */
typedef enum
{
    BCMOLT_ACTION_CMD_ID_NONE = 0,
    BCMOLT_ACTION_CMD_ID_ADD_OUTER_TAG = 0x0001, /**< Add outer tag. */
    BCMOLT_ACTION_CMD_ID_REMOVE_OUTER_TAG = 0x0002, /**< Remove outer tag. */
    BCMOLT_ACTION_CMD_ID_XLATE_OUTER_TAG = 0x0004, /**< Translate outer tag. */
    BCMOLT_ACTION_CMD_ID_ADD_INNER_TAG = 0x0010, /**< Add inner tag. */
    BCMOLT_ACTION_CMD_ID_REMOVE_INNER_TAG = 0x0020, /**< Remove inner tag. */
    BCMOLT_ACTION_CMD_ID_XLATE_INNER_TAG = 0x0040, /**< Translate inner tag. */
    BCMOLT_ACTION_CMD_ID_REMARK_OUTER_PBITS = 0x0100, /**< Remark outer pbits. */
    BCMOLT_ACTION_CMD_ID_REMARK_INNER_PBITS = 0x0200, /**< Remark inner pbits. */
} bcmolt_action_cmd_id;

/** ACL pkt modifier IDs. */
typedef enum
{
    BCMOLT_ACTION_CONTROL_PKT_MODIFIERS_NONE = 0,
    BCMOLT_ACTION_CONTROL_PKT_MODIFIERS_PUSH_TAG = 0x0001, /**< Push VLAN Id */
    BCMOLT_ACTION_CONTROL_PKT_MODIFIERS_POP_TAG = 0x0002, /**< Pop Outer Vlan Tag */
    BCMOLT_ACTION_CONTROL_PKT_MODIFIERS_MODIFY_OUTER_VID = 0x0004, /**< Modify Outer VID */
    BCMOLT_ACTION_CONTROL_PKT_MODIFIERS_MODIFY_INNER_VID = 0x0008, /**< Modify Inner VID */
    BCMOLT_ACTION_CONTROL_PKT_MODIFIERS_REMARK_OUTER_PBITS = 0x0010, /**< Remark Outer PBits */
    BCMOLT_ACTION_CONTROL_PKT_MODIFIERS_REMARK_INNER_PBITS = 0x0020, /**< Remark Inner PBits */
    BCMOLT_ACTION_CONTROL_PKT_MODIFIERS_REMARK_DSCP = 0x0040, /**< Remark DSCP */
    BCMOLT_ACTION_CONTROL_PKT_MODIFIERS_REWRITE_TTL = 0x0080, /**< Rewrite TTL */
} bcmolt_action_control_pkt_modifiers;

/** action_tag_format. */
typedef enum
{
    BCMOLT_ACTION_TAG_FORMAT__BEGIN = 0,
    BCMOLT_ACTION_TAG_FORMAT_DOT_1_Q = 0, /**< 802.1q. */
    BCMOLT_ACTION_TAG_FORMAT_Q_IN_Q = 1, /**< 802.1ad. */
    BCMOLT_ACTION_TAG_FORMAT__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_action_tag_format;

/** activation fail reason. */
typedef enum
{
    BCMOLT_ACTIVATION_FAIL_REASON__BEGIN = 0,
    BCMOLT_ACTIVATION_FAIL_REASON_NONE = 0, /**< None. */
    BCMOLT_ACTIVATION_FAIL_REASON_RANGING = 1, /**< Ranging. */
    BCMOLT_ACTIVATION_FAIL_REASON_PASSWORD_AUTHENTICATION = 2, /**< Password authentication. */
    BCMOLT_ACTIVATION_FAIL_REASON_LOS = 3, /**< LOS. */
    BCMOLT_ACTIVATION_FAIL_REASON_ONU_ALARM = 4, /**< ONU Alarm. */
    BCMOLT_ACTIVATION_FAIL_REASON_SWITCH_OVER = 5, /**< protection switch over. */
    BCMOLT_ACTIVATION_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_activation_fail_reason;

/** gem port/alloc/ flow activation state */
typedef enum
{
    BCMOLT_ACTIVATION_STATE__BEGIN = 0,
    BCMOLT_ACTIVATION_STATE_NOT_CONFIGURED = 0, /**< Not configured. */
    BCMOLT_ACTIVATION_STATE_INACTIVE = 1, /**< Inactive. */
    BCMOLT_ACTIVATION_STATE_PROCESSING = 2, /**< Processing. */
    BCMOLT_ACTIVATION_STATE_ACTIVE = 3, /**< Active. */
    BCMOLT_ACTIVATION_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_activation_state;

/** Currently active interface in protection interface pair (Primary or Secondary) */
typedef enum
{
    BCMOLT_ACTIVE_INTERFACE__BEGIN = 0,
    BCMOLT_ACTIVE_INTERFACE_UNASSIGNED = 0, /**< No Active Interface */
    BCMOLT_ACTIVE_INTERFACE_PRIMARY = 1, /**< Primary Interface is active in protection pair */
    BCMOLT_ACTIVE_INTERFACE_SECONDARY = 2, /**< Secondary Interface is active in protection pair */
    BCMOLT_ACTIVE_INTERFACE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_active_interface;

/** Additional BW eligibility. */
typedef enum
{
    BCMOLT_ADDITIONAL_BW_ELIGIBILITY__BEGIN = 0,
    BCMOLT_ADDITIONAL_BW_ELIGIBILITY_NONE = 0, /**< None. */
    BCMOLT_ADDITIONAL_BW_ELIGIBILITY_NON_ASSURED = 1, /**< Non Assured. */
    BCMOLT_ADDITIONAL_BW_ELIGIBILITY_BEST_EFFORT = 2, /**< Best Effort. */
    BCMOLT_ADDITIONAL_BW_ELIGIBILITY__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_additional_bw_eligibility;

/** Alloc operation. */
typedef enum
{
    BCMOLT_ALLOC_OPERATION__BEGIN = 0,
    BCMOLT_ALLOC_OPERATION_ACTIVATE = 0, /**< Activate. */
    BCMOLT_ALLOC_OPERATION_DEACTIVATE = 1, /**< Deactivate. */
    BCMOLT_ALLOC_OPERATION__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_alloc_operation;

/** Alloc Type. */
typedef enum
{
    BCMOLT_ALLOC_TYPE__BEGIN = 0,
    BCMOLT_ALLOC_TYPE_NONE = 0, /**< None. */
    BCMOLT_ALLOC_TYPE_NSR = 1, /**< Non Status Report. */
    BCMOLT_ALLOC_TYPE_SR = 2, /**< Status Report. */
    BCMOLT_ALLOC_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_alloc_type;

/** deactivation reason. */
typedef enum
{
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON__BEGIN = 0,
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_NONE = 0, /**< none. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_DEACTIVATION = 1, /**< deactivation. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_ACK_TIMEOUT = 2, /**< ack timeout. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_SFI = 3, /**< sfi alarm. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_TIWI = 4, /**< tiwi. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_PASSWORD_AUTHENTICATION = 5, /**< password authentication. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_ONU_ALARM = 6, /**< onu alarm. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_LOS = 7, /**< los. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_LOKI = 8, /**< loki. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_RERANGE_FAILURE = 9, /**< re-range failure. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON_FORCE_DEACTIVATION = 10, /**< force deactivation. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_automatic_onu_deactivation_reason;

/** BAL and/or Switch fail reason. */
typedef enum
{
    BCMOLT_BAL_FAIL_REASON__BEGIN = 1,
    BCMOLT_BAL_FAIL_REASON_SWITCH_TIMED_OUT = 1, /**< Switch timed out during initialization. */
    BCMOLT_BAL_FAIL_REASON_SWITCH_INTERNAL_ERROR = 2, /**< Switch internal error during initialization. */
    BCMOLT_BAL_FAIL_REASON_BAL_TIMED_OUT = 3, /**< BAL initialization timed out. */
    BCMOLT_BAL_FAIL_REASON_BAL_INTERNAL_ERROR = 4, /**< BAL internal error during initialization. */
    BCMOLT_BAL_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_bal_fail_reason;

/** The overall state of OLT Object instance */
typedef enum
{
    BCMOLT_BAL_STATE__BEGIN = 0,
    BCMOLT_BAL_STATE_BAL_STARTING = 0, /**< BAL initialization in progress */
    BCMOLT_BAL_STATE_SWITCH_FAILED = 1, /**< Switch device initialization failed */
    BCMOLT_BAL_STATE_SWITCH_READY = 2, /**< switch device initialized successfully */
    BCMOLT_BAL_STATE_BAL_FAILED = 3, /**< BAL initialization failed */
    BCMOLT_BAL_STATE_BAL_READY = 4, /**< BAL initialized successfully */
    BCMOLT_BAL_STATE_BAL_AND_SWITCH_READY = 5, /**< BAL and switch device both initialized successfully */
    BCMOLT_BAL_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_bal_state;

/** Type of burst profile - ranging or data */
typedef enum
{
    BCMOLT_BURST_PROFILE_TYPE__BEGIN = 0,
    BCMOLT_BURST_PROFILE_TYPE_RANGING = 0, /**< Ranging burst profile type */
    BCMOLT_BURST_PROFILE_TYPE_DATA = 1, /**< Data burst profile type */
    BCMOLT_BURST_PROFILE_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_burst_profile_type;

/** Calibration Record. */
typedef enum
{
    BCMOLT_CALIBRATION_RECORD__BEGIN = 0,
    BCMOLT_CALIBRATION_RECORD_UNSPECIFIED = 0, /**< Unspecified. */
    BCMOLT_CALIBRATION_RECORD_UNCALIBRATED = 1, /**< Uncalibrated. */
    BCMOLT_CALIBRATION_RECORD_LOOSE = 2, /**< Loose. */
    BCMOLT_CALIBRATION_RECORD_SUFFICIENT = 3, /**< Sufficient. */
    BCMOLT_CALIBRATION_RECORD__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_calibration_record;

/** CCM Event. */
typedef enum
{
    BCMOLT_CCM_EVENT__BEGIN = 0,
    BCMOLT_CCM_EVENT_UNASSIGNED = 0, /**< Unassigned event type */
    BCMOLT_CCM_EVENT_LOC_ON = 1, /**< CCM timeout */
    BCMOLT_CCM_EVENT_LOC_OFF = 2, /**< CCM recovery */
    BCMOLT_CCM_EVENT_RDI_SET = 3, /**< RDI Set received */
    BCMOLT_CCM_EVENT_RDI_RESET = 4, /**< RDI de-asserted received */
    BCMOLT_CCM_EVENT_PORT_UP = 5, /**< Local port is down */
    BCMOLT_CCM_EVENT_PORT_DOWN = 6, /**< Local port is back up */
    BCMOLT_CCM_EVENT__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_ccm_event;

/** CCM Interval. */
typedef enum
{
    BCMOLT_CCM_INTERVAL__BEGIN = 3,
    BCMOLT_CCM_INTERVAL_RATE_3_3MS = 3, /**< 3.3 MS */
    BCMOLT_CCM_INTERVAL_RATE_10_MS = 10, /**< 10 MS */
    BCMOLT_CCM_INTERVAL_RATE_100_MS = 100, /**< 100 MS */
    BCMOLT_CCM_INTERVAL_RATE_1_SEC = 1000, /**< 1 SECOND */
    BCMOLT_CCM_INTERVAL_RATE_10_SEC = 10000, /**< 10 SECONDS */
    BCMOLT_CCM_INTERVAL_RATE_60_SEC = 60000UL, /**< 1 MINUTE */
    BCMOLT_CCM_INTERVAL_RATE_600_SEC = 600000UL, /**< 10 MINUTES */
    BCMOLT_CCM_INTERVAL__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_ccm_interval;

/** Chip Family. */
typedef enum
{
    BCMOLT_CHIP_FAMILY__BEGIN = 0,
    BCMOLT_CHIP_FAMILY_UNKNOWN = 0, /**< Unknown. */
    BCMOLT_CHIP_FAMILY_CHIP_FAMILY_6862_X = 1, /**< Maple */
    BCMOLT_CHIP_FAMILY_CHIP_FAMILY_6865_X = 2, /**< Aspen */
    BCMOLT_CHIP_FAMILY__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_chip_family;

/** Communication Mode AKA Management Mode */
typedef enum
{
    BCMOLT_COMM_MODE__BEGIN = 0,
    BCMOLT_COMM_MODE_PCIE = 0, /**< Out of Band PCIe Management Communication */
    BCMOLT_COMM_MODE_IN_BAND = 1, /**< In Band Management Communication */
    BCMOLT_COMM_MODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_comm_mode;

/** Object state: Not Configured or Configured */
typedef enum
{
    BCMOLT_CONFIG_STATE__BEGIN = 0,
    BCMOLT_CONFIG_STATE_NOT_CONFIGURED = 0, /**< Not Configured. */
    BCMOLT_CONFIG_STATE_CONFIGURED = 1, /**< Configured. */
    BCMOLT_CONFIG_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_config_state;

/** control state. */
typedef enum
{
    BCMOLT_CONTROL_STATE__BEGIN = 0,
    BCMOLT_CONTROL_STATE_DISABLE = 0, /**< Disabled. */
    BCMOLT_CONTROL_STATE_ENABLE = 1, /**< Enabled. */
    BCMOLT_CONTROL_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_control_state;

/** dba mode. */
typedef enum
{
    BCMOLT_DBA_MODE__BEGIN = 0,
    BCMOLT_DBA_MODE_NORMAL = 0, /**< normal. */
    BCMOLT_DBA_MODE_EXTENDED = 1, /**< extended. */
    BCMOLT_DBA_MODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_dba_mode;

/** DDR Test Result. */
typedef enum
{
    BCMOLT_DDR_TEST_RESULT__BEGIN = 0,
    BCMOLT_DDR_TEST_RESULT_SUCCESS = 0, /**< Success. */
    BCMOLT_DDR_TEST_RESULT_PHY_INIT_ERROR = 1, /**< PHY Init Error. */
    BCMOLT_DDR_TEST_RESULT_DRAM_INIT_ERROR = 2, /**< DRAM Init Error. */
    BCMOLT_DDR_TEST_RESULT_SHMOO_ERROR = 3, /**< SHMOO Error. */
    BCMOLT_DDR_TEST_RESULT_EDIS_TEST_ERROR = 4, /**< EDIS Test Error. */
    BCMOLT_DDR_TEST_RESULT_MEM_TEST_ERROR = 5, /**< Mem Test Error. */
    BCMOLT_DDR_TEST_RESULT_NOT_TESTED = 127, /**< Not Tested. */
    BCMOLT_DDR_TEST_RESULT__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_ddr_test_result;

/** DDR Test Status. */
typedef enum
{
    BCMOLT_DDR_TEST_STATUS__BEGIN = 0,
    BCMOLT_DDR_TEST_STATUS_COMPLETED = 0, /**< The DDR test ran to completion */
    BCMOLT_DDR_TEST_STATUS_CONNECTION_FAILED = 1, /**< The DDR test failed due to an issue loading the bootloader */
    BCMOLT_DDR_TEST_STATUS_TIMEOUT = 2, /**< The DDR test failed to complete within the expected time */
    BCMOLT_DDR_TEST_STATUS__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_ddr_test_status;

/** deactivation fail reason. */
typedef enum
{
    BCMOLT_DEACTIVATION_FAIL_REASON__BEGIN = 0,
    BCMOLT_DEACTIVATION_FAIL_REASON_NONE = 0, /**< None. */
    BCMOLT_DEACTIVATION_FAIL_REASON_FAIL = 1, /**< general_fail. */
    BCMOLT_DEACTIVATION_FAIL_REASON_SWITCH_OVER = 2, /**< protection switch over. */
    BCMOLT_DEACTIVATION_FAIL_REASON_FORCE_DEACTIVATION = 3, /**< force deactivation. */
    BCMOLT_DEACTIVATION_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_deactivation_fail_reason;

/** Revision of the BCM68620 device. */
typedef enum
{
    BCMOLT_DEVICE_CHIP_REVISION__BEGIN = 160,
    BCMOLT_DEVICE_CHIP_REVISION_A0 = 160, /**< A0. */
    BCMOLT_DEVICE_CHIP_REVISION_A1 = 161, /**< A1. */
    BCMOLT_DEVICE_CHIP_REVISION_B0 = 176, /**< B0. */
    BCMOLT_DEVICE_CHIP_REVISION__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_device_chip_revision;

/** Device disconnect reason. */
typedef enum
{
    BCMOLT_DEVICE_DISCONNECT_REASON__BEGIN = 0,
    BCMOLT_DEVICE_DISCONNECT_REASON_FAILED_TO_CONNECT = 0, /**< failed_to_connect. */
    BCMOLT_DEVICE_DISCONNECT_REASON_DISCONNECT_REQUEST = 1, /**< disconnect_request. */
    BCMOLT_DEVICE_DISCONNECT_REASON_RESET_REQUEST = 2, /**< reset_request. */
    BCMOLT_DEVICE_DISCONNECT_REASON_KA_FAILURE = 3, /**< ka_failure. */
    BCMOLT_DEVICE_DISCONNECT_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_device_disconnect_reason;

/** Device Image Type. */
typedef enum
{
    BCMOLT_DEVICE_IMAGE_TYPE__BEGIN = 0,
    BCMOLT_DEVICE_IMAGE_TYPE_BOOTLOADER = 0, /**< Bootloader. */
    BCMOLT_DEVICE_IMAGE_TYPE_APPLICATION = 1, /**< Application. */
    BCMOLT_DEVICE_IMAGE_TYPE_ITU_PON_ONU_FIRMWARE = 2, /**< ITU PON ONU firmware. */
    BCMOLT_DEVICE_IMAGE_TYPE_EPON_ONU_FIRMWARE = 3, /**< EPON ONU firmware. */
    BCMOLT_DEVICE_IMAGE_TYPE_DDR_PHY = 4, /**< Aspen DDR PHY image. */
    BCMOLT_DEVICE_IMAGE_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_device_image_type;

/** Disable Serial Number Control. */
typedef enum
{
    BCMOLT_DISABLE_SERIAL_NUMBER_CONTROL__BEGIN = 0,
    BCMOLT_DISABLE_SERIAL_NUMBER_CONTROL_UNICAST_DISABLE = 0, /**< Unicast Disable. */
    BCMOLT_DISABLE_SERIAL_NUMBER_CONTROL_UNICAST_ENABLE = 1, /**< Unicast Enable. */
    BCMOLT_DISABLE_SERIAL_NUMBER_CONTROL_BROADCAST_ENABLE = 2, /**< Broadcast Enable. */
    BCMOLT_DISABLE_SERIAL_NUMBER_CONTROL_BROADCAST_DISABLE = 3, /**< Broadcast Disable. */
    BCMOLT_DISABLE_SERIAL_NUMBER_CONTROL_DISABLE_DISCOVERY = 4, /**< Disable Discovery. */
    BCMOLT_DISABLE_SERIAL_NUMBER_CONTROL__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_disable_serial_number_control;

/** egress_qos_type. */
typedef enum
{
    BCMOLT_EGRESS_QOS_TYPE__BEGIN = 0,
    BCMOLT_EGRESS_QOS_TYPE_FIXED_QUEUE = 0, /**< fixed queue */
    BCMOLT_EGRESS_QOS_TYPE_TC_TO_QUEUE = 1, /**< fixed tc base */
    BCMOLT_EGRESS_QOS_TYPE_PBIT_TO_TC = 2, /**< pbit to tc based */
    BCMOLT_EGRESS_QOS_TYPE_NONE = 3, /**< No egress qos */
    BCMOLT_EGRESS_QOS_TYPE_PRIORITY_TO_QUEUE = 4, /**< priority_to_queue. */
    BCMOLT_EGRESS_QOS_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_egress_qos_type;

/** embedded image transfer status. */
typedef enum
{
    BCMOLT_EMBEDDED_IMAGE_TRANSFER_STATUS__BEGIN = 0,
    BCMOLT_EMBEDDED_IMAGE_TRANSFER_STATUS_NONE = 0, /**< No file.  Transfer has never started for this entry. */
    BCMOLT_EMBEDDED_IMAGE_TRANSFER_STATUS_IN_PROGRESS = 1, /**< Transfer has started and not finished. */
    BCMOLT_EMBEDDED_IMAGE_TRANSFER_STATUS_SUCCESS = 2, /**< Transfer has finished successfully. */
    BCMOLT_EMBEDDED_IMAGE_TRANSFER_STATUS_FAILURE = 3, /**< Transfer failed.  Typically due to CRC error. */
    BCMOLT_EMBEDDED_IMAGE_TRANSFER_STATUS__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_embedded_image_transfer_status;

/** erps_control. */
typedef enum
{
    BCMOLT_ERPS_CONTROL__BEGIN = 0,
    BCMOLT_ERPS_CONTROL_UNASSIGNED = 0, /**< unassigned. */
    BCMOLT_ERPS_CONTROL_BLOCK_PORT_RX = 1, /**< Block Port Rx. */
    BCMOLT_ERPS_CONTROL_BLOCK_PORT_TX = 2, /**< Block Port Tx. */
    BCMOLT_ERPS_CONTROL_UNBLOCK_PORT_RX = 3, /**< UnBlock Port Rx. */
    BCMOLT_ERPS_CONTROL_UNBLOCK_PORT_TX = 4, /**< Unblock Port Tx. */
    BCMOLT_ERPS_CONTROL_FLUSH_PORT = 5, /**< Flush Port. */
    BCMOLT_ERPS_CONTROL__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_erps_control;

/** External IRQ. */
typedef enum
{
    BCMOLT_EXT_IRQ_EXT_IRQ0 = 0, /**< External IRQ 0. */
    BCMOLT_EXT_IRQ_EXT_IRQ1 = 1, /**< External IRQ 1. */
    BCMOLT_EXT_IRQ_EXT_IRQ2 = 2, /**< External IRQ 2. */
    BCMOLT_EXT_IRQ_EXT_IRQ3 = 3, /**< External IRQ 3. */
    BCMOLT_EXT_IRQ_EXT_IRQ4 = 4, /**< External IRQ 4. */
    BCMOLT_EXT_IRQ_EXT_IRQ5 = 5, /**< External IRQ 5. */
    BCMOLT_EXT_IRQ_UNCONFIGURED = 255, /**< Unconfigured external IRQ. */
} bcmolt_ext_irq;

/** flow interface type */
typedef enum
{
    BCMOLT_FLOW_INTERFACE_TYPE_PON = 10, /**< flow pon interface */
    BCMOLT_FLOW_INTERFACE_TYPE_NNI = 11, /**< flow network interface */
    BCMOLT_FLOW_INTERFACE_TYPE_HOST = 12, /**< flow host interface */
    BCMOLT_FLOW_INTERFACE_TYPE_ERPS = 13, /**< flow erps */
    BCMOLT_FLOW_INTERFACE_TYPE_PROTECTION = 14, /**< flow protection pair */
    BCMOLT_FLOW_INTERFACE_TYPE_LAG = 15, /**< flow lag interface */
    BCMOLT_FLOW_INTERFACE_TYPE_UNASSIGNED = 255, /**< flow invalid interface */
} bcmolt_flow_interface_type;

/** Flow State. */
typedef enum
{
    BCMOLT_FLOW_STATE__BEGIN = 0,
    BCMOLT_FLOW_STATE_NOT_CONFIGURED = 0, /**< not_configured. */
    BCMOLT_FLOW_STATE_DISABLE = 1, /**< disable. */
    BCMOLT_FLOW_STATE_ENABLE = 2, /**< enable. */
    BCMOLT_FLOW_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_flow_state;

/** Flow Type. */
typedef enum
{
    BCMOLT_FLOW_TYPE__BEGIN = 0,
    BCMOLT_FLOW_TYPE_UPSTREAM = 0, /**< Upstream flow */
    BCMOLT_FLOW_TYPE_DOWNSTREAM = 1, /**< Downstream Flow */
    BCMOLT_FLOW_TYPE_MULTICAST = 2, /**< Multicast Flow */
    BCMOLT_FLOW_TYPE_XCONNECT = 3, /**< Specific flow uses the Cross Connect construct in the switch. Used for ERPS nni to nni flows. */
    BCMOLT_FLOW_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_flow_type;

/** Frequency adjustment direction */
typedef enum
{
    BCMOLT_FREQUENCY_ADJUSTMENT_DIRECTION__BEGIN = 0,
    BCMOLT_FREQUENCY_ADJUSTMENT_DIRECTION_LOWER = 0, /**< Lower */
    BCMOLT_FREQUENCY_ADJUSTMENT_DIRECTION_HIGHER = 1, /**< Higher */
    BCMOLT_FREQUENCY_ADJUSTMENT_DIRECTION__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_frequency_adjustment_direction;

/** GEM port ID direction. */
typedef enum
{
    BCMOLT_GEM_PORT_DIRECTION__BEGIN = 0,
    BCMOLT_GEM_PORT_DIRECTION_DOWNSTREAM = 0, /**< downstream port ID. */
    BCMOLT_GEM_PORT_DIRECTION_UPSTREAM = 1, /**< upstream port ID. */
    BCMOLT_GEM_PORT_DIRECTION_BIDIRECTIONAL = 2, /**< bidirectional port  ID. */
    BCMOLT_GEM_PORT_DIRECTION__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_gem_port_direction;

/** GEM port operation. */
typedef enum
{
    BCMOLT_GEM_PORT_OPERATION__BEGIN = 0,
    BCMOLT_GEM_PORT_OPERATION_ACTIVATE = 0, /**< Activate. */
    BCMOLT_GEM_PORT_OPERATION_DEACTIVATE = 1, /**< Deactivate. */
    BCMOLT_GEM_PORT_OPERATION__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_gem_port_operation;

/** GEM port type. */
typedef enum
{
    BCMOLT_GEM_PORT_TYPE__BEGIN = 0,
    BCMOLT_GEM_PORT_TYPE_UNICAST = 0, /**< unicast port ID. */
    BCMOLT_GEM_PORT_TYPE_MULTICAST = 1, /**< multicast port ID. */
    BCMOLT_GEM_PORT_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_gem_port_type;

/** GPIO pin number. */
typedef enum
{
    BCMOLT_GPIO_PIN_PIN0 = 0, /**< GPIO pin 0. */
    BCMOLT_GPIO_PIN_PIN1 = 1, /**< GPIO pin 1. */
    BCMOLT_GPIO_PIN_PIN2 = 2, /**< GPIO pin 2. */
    BCMOLT_GPIO_PIN_PIN3 = 3, /**< GPIO pin 3. */
    BCMOLT_GPIO_PIN_PIN4 = 4, /**< GPIO pin 4. */
    BCMOLT_GPIO_PIN_PIN5 = 5, /**< GPIO pin 5. */
    BCMOLT_GPIO_PIN_PIN6 = 6, /**< GPIO pin 6. */
    BCMOLT_GPIO_PIN_PIN7 = 7, /**< GPIO pin 7. */
    BCMOLT_GPIO_PIN_PIN8 = 8, /**< GPIO pin 8. */
    BCMOLT_GPIO_PIN_PIN9 = 9, /**< GPIO pin 9. */
    BCMOLT_GPIO_PIN_PIN10 = 10, /**< GPIO pin 10. */
    BCMOLT_GPIO_PIN_PIN11 = 11, /**< GPIO pin 11. */
    BCMOLT_GPIO_PIN_PIN12 = 12, /**< GPIO pin 12. */
    BCMOLT_GPIO_PIN_PIN13 = 13, /**< GPIO pin 13. */
    BCMOLT_GPIO_PIN_PIN14 = 14, /**< GPIO pin 14. */
    BCMOLT_GPIO_PIN_PIN15 = 15, /**< GPIO pin 15. */
    BCMOLT_GPIO_PIN_PIN16 = 16, /**< GPIO pin 16. */
    BCMOLT_GPIO_PIN_PIN17 = 17, /**< GPIO pin 17. */
    BCMOLT_GPIO_PIN_PIN18 = 18, /**< GPIO pin 18. */
    BCMOLT_GPIO_PIN_PIN19 = 19, /**< GPIO pin 19. */
    BCMOLT_GPIO_PIN_PIN20 = 20, /**< GPIO pin 20. */
    BCMOLT_GPIO_PIN_PIN21 = 21, /**< GPIO pin 21. */
    BCMOLT_GPIO_PIN_PIN22 = 22, /**< GPIO pin 22. */
    BCMOLT_GPIO_PIN_PIN23 = 23, /**< GPIO pin 23. */
    BCMOLT_GPIO_PIN_PIN24 = 24, /**< GPIO pin 24. */
    BCMOLT_GPIO_PIN_PIN25 = 25, /**< GPIO pin 25. */
    BCMOLT_GPIO_PIN_PIN26 = 26, /**< GPIO pin 26. */
    BCMOLT_GPIO_PIN_PIN27 = 27, /**< GPIO pin 27. */
    BCMOLT_GPIO_PIN_PIN28 = 28, /**< GPIO pin 28. */
    BCMOLT_GPIO_PIN_PIN29 = 29, /**< GPIO pin 29. */
    BCMOLT_GPIO_PIN_PIN30 = 30, /**< GPIO pin 30. */
    BCMOLT_GPIO_PIN_PIN31 = 31, /**< GPIO pin 31. */
    BCMOLT_GPIO_PIN_PIN32 = 32, /**< GPIO pin 32. */
    BCMOLT_GPIO_PIN_PIN33 = 33, /**< GPIO pin 33. */
    BCMOLT_GPIO_PIN_PIN34 = 34, /**< GPIO pin 34. */
    BCMOLT_GPIO_PIN_PIN35 = 35, /**< GPIO pin 35. */
    BCMOLT_GPIO_PIN_PIN36 = 36, /**< GPIO pin 36. */
    BCMOLT_GPIO_PIN_PIN37 = 37, /**< GPIO pin 37. */
    BCMOLT_GPIO_PIN_PIN38 = 38, /**< GPIO pin 38. */
    BCMOLT_GPIO_PIN_PIN39 = 39, /**< GPIO pin 39. */
    BCMOLT_GPIO_PIN_PIN40 = 40, /**< GPIO pin 40. */
    BCMOLT_GPIO_PIN_PIN41 = 41, /**< GPIO pin 41. */
    BCMOLT_GPIO_PIN_PIN42 = 42, /**< GPIO pin 42. */
    BCMOLT_GPIO_PIN_PIN43 = 43, /**< GPIO pin 43. */
    BCMOLT_GPIO_PIN_PIN44 = 44, /**< GPIO pin 44. */
    BCMOLT_GPIO_PIN_PIN45 = 45, /**< GPIO pin 45. */
    BCMOLT_GPIO_PIN_PIN46 = 46, /**< GPIO pin 46. */
    BCMOLT_GPIO_PIN_PIN47 = 47, /**< GPIO pin 47. */
    BCMOLT_GPIO_PIN_PIN48 = 48, /**< GPIO pin 48. */
    BCMOLT_GPIO_PIN_PIN49 = 49, /**< GPIO pin 49. */
    BCMOLT_GPIO_PIN_PIN50 = 50, /**< GPIO pin 50. */
    BCMOLT_GPIO_PIN_PIN51 = 51, /**< GPIO pin 51. */
    BCMOLT_GPIO_PIN_PIN52 = 52, /**< GPIO pin 52. */
    BCMOLT_GPIO_PIN_PIN53 = 53, /**< GPIO pin 53. */
    BCMOLT_GPIO_PIN_PIN54 = 54, /**< GPIO pin 54. */
    BCMOLT_GPIO_PIN_PIN55 = 55, /**< GPIO pin 55. */
    BCMOLT_GPIO_PIN_PIN56 = 56, /**< GPIO pin 56. */
    BCMOLT_GPIO_PIN_PIN57 = 57, /**< GPIO pin 57. */
    BCMOLT_GPIO_PIN_PIN58 = 58, /**< GPIO pin 58. */
    BCMOLT_GPIO_PIN_PIN59 = 59, /**< GPIO pin 59. */
    BCMOLT_GPIO_PIN_PIN60 = 60, /**< GPIO pin 60. */
    BCMOLT_GPIO_PIN_PIN61 = 61, /**< GPIO pin 61. */
    BCMOLT_GPIO_PIN_PIN62 = 62, /**< GPIO pin 62. */
    BCMOLT_GPIO_PIN_PIN63 = 63, /**< GPIO pin 63. */
    BCMOLT_GPIO_PIN_PIN64 = 64, /**< GPIO pin 64. */
    BCMOLT_GPIO_PIN_PIN65 = 65, /**< GPIO pin 65. */
    BCMOLT_GPIO_PIN_PIN66 = 66, /**< GPIO pin 66. */
    BCMOLT_GPIO_PIN_PIN67 = 67, /**< GPIO pin 67. */
    BCMOLT_GPIO_PIN_PIN68 = 68, /**< GPIO pin 68. */
    BCMOLT_GPIO_PIN_PIN69 = 69, /**< GPIO pin 69. */
    BCMOLT_GPIO_PIN_PIN70 = 70, /**< GPIO pin 70. */
    BCMOLT_GPIO_PIN_PIN71 = 71, /**< GPIO pin 71. */
    BCMOLT_GPIO_PIN_PIN72 = 72, /**< GPIO pin 72. */
    BCMOLT_GPIO_PIN_PIN73 = 73, /**< GPIO pin 73. */
    BCMOLT_GPIO_PIN_PIN74 = 74, /**< GPIO pin 74. */
    BCMOLT_GPIO_PIN_PIN75 = 75, /**< GPIO pin 75. */
    BCMOLT_GPIO_PIN_PIN76 = 76, /**< GPIO pin 76. */
    BCMOLT_GPIO_PIN_PIN77 = 77, /**< GPIO pin 77. */
    BCMOLT_GPIO_PIN_PIN78 = 78, /**< GPIO pin 78. */
    BCMOLT_GPIO_PIN_PIN79 = 79, /**< GPIO pin 79. */
    BCMOLT_GPIO_PIN_PIN80 = 80, /**< GPIO pin 80. */
    BCMOLT_GPIO_PIN_PIN81 = 81, /**< GPIO pin 81. */
    BCMOLT_GPIO_PIN_PIN82 = 82, /**< GPIO pin 82. */
    BCMOLT_GPIO_PIN_PIN83 = 83, /**< GPIO pin 83. */
    BCMOLT_GPIO_PIN_PIN84 = 84, /**< GPIO pin 84. */
    BCMOLT_GPIO_PIN_PIN85 = 85, /**< GPIO pin 85. */
    BCMOLT_GPIO_PIN_PIN86 = 86, /**< GPIO pin 86. */
    BCMOLT_GPIO_PIN_PIN87 = 87, /**< GPIO pin 87. */
    BCMOLT_GPIO_PIN_PIN88 = 88, /**< GPIO pin 88. */
    BCMOLT_GPIO_PIN_PIN89 = 89, /**< GPIO pin 89. */
    BCMOLT_GPIO_PIN_PIN90 = 90, /**< GPIO pin 90. */
    BCMOLT_GPIO_PIN_PIN91 = 91, /**< GPIO pin 91. */
    BCMOLT_GPIO_PIN_PIN92 = 92, /**< GPIO pin 92. */
    BCMOLT_GPIO_PIN_PIN93 = 93, /**< GPIO pin 93. */
    BCMOLT_GPIO_PIN_PIN94 = 94, /**< GPIO pin 94. */
    BCMOLT_GPIO_PIN_PIN95 = 95, /**< GPIO pin 95. */
    BCMOLT_GPIO_PIN_PIN96 = 96, /**< GPIO pin 96. */
    BCMOLT_GPIO_PIN_PIN97 = 97, /**< GPIO pin 97. */
    BCMOLT_GPIO_PIN_PIN98 = 98, /**< GPIO pin 98. */
    BCMOLT_GPIO_PIN_PIN99 = 99, /**< GPIO pin 99. */
    BCMOLT_GPIO_PIN_PIN100 = 100, /**< GPIO pin 100. */
    BCMOLT_GPIO_PIN_PIN101 = 101, /**< GPIO pin 101. */
    BCMOLT_GPIO_PIN_PIN102 = 102, /**< GPIO pin 102. */
    BCMOLT_GPIO_PIN_PIN103 = 103, /**< GPIO pin 103. */
    BCMOLT_GPIO_PIN_PIN104 = 104, /**< GPIO pin 104. */
    BCMOLT_GPIO_PIN_PIN105 = 105, /**< GPIO pin 105. */
    BCMOLT_GPIO_PIN_PIN106 = 106, /**< GPIO pin 106. */
    BCMOLT_GPIO_PIN_UNCONFIGURED = 255, /**< Unconfigured GPIO pin. */
} bcmolt_gpio_pin;

/** GPIO PIN Direction. */
typedef enum
{
    BCMOLT_GPIO_PIN_DIR__BEGIN = 0,
    BCMOLT_GPIO_PIN_DIR_INPUT = 0, /**< Input. */
    BCMOLT_GPIO_PIN_DIR_OUTPUT = 1, /**< Output. */
    BCMOLT_GPIO_PIN_DIR__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_gpio_pin_dir;

/** GPIO Value. */
typedef enum
{
    BCMOLT_GPIO_VALUE__BEGIN = 0,
    BCMOLT_GPIO_VALUE_CLEAR = 0, /**< Clear. */
    BCMOLT_GPIO_VALUE_SET = 1, /**< Set. */
    BCMOLT_GPIO_VALUE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_gpio_value;

/** Key exchange mode. */
typedef enum
{
    BCMOLT_GPON_KEY_EXCHANGE_MODE__BEGIN = 0,
    BCMOLT_GPON_KEY_EXCHANGE_MODE_NORMAL = 0, /**< Normal. */
    BCMOLT_GPON_KEY_EXCHANGE_MODE_ENHANCED = 1, /**< Enhanced. */
    BCMOLT_GPON_KEY_EXCHANGE_MODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_gpon_key_exchange_mode;

/** group_member_update_fail_reaso */
typedef enum
{
    BCMOLT_GROUP_MEMBER_UPDATE_FAIL_REASON__BEGIN = 0,
    BCMOLT_GROUP_MEMBER_UPDATE_FAIL_REASON_NONE = 0, /**< none */
    BCMOLT_GROUP_MEMBER_UPDATE_FAIL_REASON_PARM = 1, /**< invalid  parameter */
    BCMOLT_GROUP_MEMBER_UPDATE_FAIL_REASON_INTERNAL = 2, /**< internal */
    BCMOLT_GROUP_MEMBER_UPDATE_FAIL_REASON_SW = 3, /**< fail in switch configuration */
    BCMOLT_GROUP_MEMBER_UPDATE_FAIL_REASON_MAC = 4, /**< fail in mac configuration */
    BCMOLT_GROUP_MEMBER_UPDATE_FAIL_REASON_SVC_PORT_MISS_MATCH = 5, /**< svc port id type miss match */
    BCMOLT_GROUP_MEMBER_UPDATE_FAIL_REASON_QOS = 6, /**< qos set invalid */
    BCMOLT_GROUP_MEMBER_UPDATE_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_group_member_update_fail_reason;

/** group state */
typedef enum
{
    BCMOLT_GROUP_STATE__BEGIN = 0,
    BCMOLT_GROUP_STATE_NOT_CONFIGURED = 0, /**< not_configured */
    BCMOLT_GROUP_STATE_CONFIGURED = 1, /**< configured */
    BCMOLT_GROUP_STATE_ACTIVE = 2, /**< active */
    BCMOLT_GROUP_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_group_state;

/** type of a group */
typedef enum
{
    BCMOLT_GROUP_TYPE__BEGIN = 0,
    BCMOLT_GROUP_TYPE_NONE = 0, /**< type not set */
    BCMOLT_GROUP_TYPE_MULTICAST = 1, /**< multicast group */
    BCMOLT_GROUP_TYPE_N_TO_1 = 2, /**< N:1 Group */
    BCMOLT_GROUP_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_group_type;

/** Reasons why the connection between the host and the device failed */
typedef enum
{
    BCMOLT_HOST_CONNECTION_FAIL_REASON__BEGIN = 0,
    BCMOLT_HOST_CONNECTION_FAIL_REASON_TIMEOUT = 0, /**< The connection process has timed out. */
    BCMOLT_HOST_CONNECTION_FAIL_REASON_KEEPALIVE = 1, /**< Too much time has passed between keepalive messages from the device. */
    BCMOLT_HOST_CONNECTION_FAIL_REASON_SOFTWARE_VERSION_MISMATCH = 2, /**< The software version on the running device doesn't match the version in the host software.  Only the revision number is allowed to differ - major/minor/model must match. */
    BCMOLT_HOST_CONNECTION_FAIL_REASON_CONNECTION_PARAM_MISMATCH = 3, /**< Connection parameter (system mode or inni config) cannot be changed when reconnecting. */
    BCMOLT_HOST_CONNECTION_FAIL_REASON_RECONNECT_TIMEOUT = 4, /**< A running device didn't respond to the request to reconnect. */
    BCMOLT_HOST_CONNECTION_FAIL_REASON_INTERNAL_ERROR = 5, /**< An unspecified internal error occurred - check the log output for details. */
    BCMOLT_HOST_CONNECTION_FAIL_REASON_SYSTEM_MODE_NOT_SUPPORTED = 6, /**< The given system mode is not supported on this device. */
    BCMOLT_HOST_CONNECTION_FAIL_REASON_PARAMETER = 7, /**< One of the initial connection parameters was incorrect. */
    BCMOLT_HOST_CONNECTION_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_host_connection_fail_reason;

/** Image transfer status. */
typedef enum
{
    BCMOLT_IMAGE_TRANSFER_STATUS__BEGIN = 0,
    BCMOLT_IMAGE_TRANSFER_STATUS_SUCCESS = 0, /**< Success. */
    BCMOLT_IMAGE_TRANSFER_STATUS_MEMORY_ALLOCATION_FAILURE = 1, /**< Memory allocation failure. */
    BCMOLT_IMAGE_TRANSFER_STATUS_UNSUPPORTED_FILE_TYPE = 2, /**< Unsupported file type. */
    BCMOLT_IMAGE_TRANSFER_STATUS_CRC_ERROR = 3, /**< CRC checksum error. */
    BCMOLT_IMAGE_TRANSFER_STATUS_BLOCK_OUT_OF_SYNC = 4, /**< Block out of sync. */
    BCMOLT_IMAGE_TRANSFER_STATUS_INTERNAL_ERROR = 5, /**< Internal error. */
    BCMOLT_IMAGE_TRANSFER_STATUS_INVALID_STATE = 6, /**< Invalid state. */
    BCMOLT_IMAGE_TRANSFER_STATUS_PREMATURE_TERMINATION = 7, /**< Premature termination. */
    BCMOLT_IMAGE_TRANSFER_STATUS_ACK_TIMEOUT = 8, /**< ACK timeout. */
    BCMOLT_IMAGE_TRANSFER_STATUS__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_image_transfer_status;

/** Action on Inband Mgmt Vlan Tag. */
typedef enum
{
    BCMOLT_INBAND_MGMT_ACTION_TYPE__BEGIN = 0,
    BCMOLT_INBAND_MGMT_ACTION_TYPE_NONE = 0, /**< no action (transparent pass through for matching Vlan tag). */
    BCMOLT_INBAND_MGMT_ACTION_TYPE_REMOVE_ADD_OUTER_TAG = 1, /**< remove Vlan on downstream / conversely Add Vlan tag on Upstream. */
    BCMOLT_INBAND_MGMT_ACTION_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_inband_mgmt_action_type;

/** State of the inband management channel. */
typedef enum
{
    BCMOLT_INBAND_MGMT_STATE__BEGIN = 0,
    BCMOLT_INBAND_MGMT_STATE_NOT_CONFIGURED = 0, /**< not configured. */
    BCMOLT_INBAND_MGMT_STATE_CONFIGURED = 1, /**< configured. */
    BCMOLT_INBAND_MGMT_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_inband_mgmt_state;

/** The FEC mode that the INNI should use.  Options are:
  * 1.  mode default - use the default mode for the rate and physical layer
  * 2.  RS FEC (CL91/CL108)
  * 3.  FC FEC (CL74)
  * 4.  Use auto negotiation to select a mode. */
typedef enum
{
    BCMOLT_INNI_FEC_MODES__BEGIN = 0,
    BCMOLT_INNI_FEC_MODES_NONE = 0, /**< No FEC */
    BCMOLT_INNI_FEC_MODES_RS_FEC = 1, /**< Clause 91/108 FEC */
    BCMOLT_INNI_FEC_MODES_FC_FEC = 2, /**< CLause 74 FEC */
    BCMOLT_INNI_FEC_MODES_AUTO_NEGOTIATE = 3, /**< Select FEC using CL73 Auto Negotiation */
    BCMOLT_INNI_FEC_MODES__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_inni_fec_modes;

/** Interface Operation. */
typedef enum
{
    BCMOLT_INTERFACE_OPERATION__BEGIN = 0,
    BCMOLT_INTERFACE_OPERATION_INACTIVE = 0, /**< Inactive. */
    BCMOLT_INTERFACE_OPERATION_ACTIVE_WORKING = 1, /**< Active Working. */
    BCMOLT_INTERFACE_OPERATION_ACTIVE_STANDBY = 2, /**< Active Standby. */
    BCMOLT_INTERFACE_OPERATION__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_interface_operation;

/** Interface state. */
typedef enum
{
    BCMOLT_INTERFACE_STATE__BEGIN = 0,
    BCMOLT_INTERFACE_STATE_INACTIVE = 0, /**< Inactive. */
    BCMOLT_INTERFACE_STATE_PROCESSING = 1, /**< Processing. */
    BCMOLT_INTERFACE_STATE_ACTIVE_WORKING = 2, /**< Active Working. */
    BCMOLT_INTERFACE_STATE_ACTIVE_STANDBY = 3, /**< Active Standby. */
    BCMOLT_INTERFACE_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_interface_state;

/** Interface Type */
typedef enum
{
    BCMOLT_INTERFACE_TYPE__BEGIN = 0,
    BCMOLT_INTERFACE_TYPE_PON = 0, /**< ITU PON Access Interface */
    BCMOLT_INTERFACE_TYPE_NNI = 1, /**< NNI */
    BCMOLT_INTERFACE_TYPE_HOST = 2, /**< Host */
    BCMOLT_INTERFACE_TYPE_ERPS = 5, /**< ERPS Ring Interface */
    BCMOLT_INTERFACE_TYPE_LAG = 6, /**< NNI LAG group */
    BCMOLT_INTERFACE_TYPE_PROTECTION = 7, /**< PON, NNI or LAG 1 to 1 Redundancy Pair, subtype indicated in underlying protection_interface intf_ref fields */
    BCMOLT_INTERFACE_TYPE_UNASSIGNED = 8, /**< No Type Assigned */
    BCMOLT_INTERFACE_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_interface_type;

/** Internal NNI Redundancy. */
typedef enum
{
    BCMOLT_INTERNAL_NNI_REDUNDANCY__BEGIN = 0,
    BCMOLT_INTERNAL_NNI_REDUNDANCY_NONE = 0, /**< No Redundancy. */
    BCMOLT_INTERNAL_NNI_REDUNDANCY_MANUAL = 1, /**< Redundancy with Manual Switching. */
    BCMOLT_INTERNAL_NNI_REDUNDANCY_AUTOSWITCH = 2, /**< Automatically switch between primary/backup NNIs when Loss of Link is detected. */
    BCMOLT_INTERNAL_NNI_REDUNDANCY__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_internal_nni_redundancy;

/** LAG hash field flags. */
typedef enum
{
    BCMOLT_LAG_HASH_FIELD_FLAGS_NONE = 0,
    BCMOLT_LAG_HASH_FIELD_FLAGS_DEST_MAC = 0x0001, /**< dest mac. */
    BCMOLT_LAG_HASH_FIELD_FLAGS_SRC_MAC = 0x0002, /**< src mac. */
    BCMOLT_LAG_HASH_FIELD_FLAGS_VLAN = 0x0004, /**< vlan. */
    BCMOLT_LAG_HASH_FIELD_FLAGS_ETHERTYPE = 0x0008, /**< ethertype. */
} bcmolt_lag_hash_field_flags;

/** LAG Hash Polynomial. */
typedef enum
{
    BCMOLT_LAG_HASH_POLYNOMIAL__BEGIN = 22,
    BCMOLT_LAG_HASH_POLYNOMIAL_CRC16_0X8003 = 22, /**< crc 16 calculation with bits 16,2,1 xored. */
    BCMOLT_LAG_HASH_POLYNOMIAL_CRC16_0X8101 = 25, /**< crc 16 calculation with bits 16,9,1 xored. */
    BCMOLT_LAG_HASH_POLYNOMIAL_CRC16_0X84A1 = 26, /**< crc 16 calculation with bits 16,11,8,6,1 xored. */
    BCMOLT_LAG_HASH_POLYNOMIAL_CRC16_0X9019 = 27, /**< crc 16 calculation with bits 16,13,4,3,1 xored. */
    BCMOLT_LAG_HASH_POLYNOMIAL__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_lag_hash_polynomial;

/** LAG health. */
typedef enum
{
    BCMOLT_LAG_HEALTH__BEGIN = 0,
    BCMOLT_LAG_HEALTH_DOWN = 0, /**< Down. */
    BCMOLT_LAG_HEALTH_DEGRADED = 1, /**< Degraded. */
    BCMOLT_LAG_HEALTH_UP = 2, /**< Up. */
    BCMOLT_LAG_HEALTH__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_lag_health;

/** group_member_update_fail_reaso */
typedef enum
{
    BCMOLT_LAG_MEMBER_UPDATE_FAIL_REASON__BEGIN = 0,
    BCMOLT_LAG_MEMBER_UPDATE_FAIL_REASON_NONE = 0, /**< none */
    BCMOLT_LAG_MEMBER_UPDATE_FAIL_REASON_PARM = 1, /**< invalid  parameter */
    BCMOLT_LAG_MEMBER_UPDATE_FAIL_REASON_INTERNAL = 2, /**< internal */
    BCMOLT_LAG_MEMBER_UPDATE_FAIL_REASON_SW = 3, /**< fail in switch configuration */
    BCMOLT_LAG_MEMBER_UPDATE_FAIL_REASON_IN_USE = 4, /**< lag has use counts */
    BCMOLT_LAG_MEMBER_UPDATE_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_lag_member_update_fail_reason;

/** LAG PSC Mode. */
typedef enum
{
    BCMOLT_LAG_PSC_MODE__BEGIN = 0,
    BCMOLT_LAG_PSC_MODE_ROUND_ROBIN = 0, /**< Round Robin. */
    BCMOLT_LAG_PSC_MODE_SMOOTH_DIVISION = 1, /**< Smooth Division. */
    BCMOLT_LAG_PSC_MODE_MULTIPLICATION = 2, /**< Multiplication. */
    BCMOLT_LAG_PSC_MODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_lag_psc_mode;

/** Link Fault Code (Local or Remote Fault) */
typedef enum
{
    BCMOLT_LINK_FAULT_CODE_NONE = 0,
    BCMOLT_LINK_FAULT_CODE_LOCAL_FAULT = 0x1, /**< Local Fault detected. */
    BCMOLT_LINK_FAULT_CODE_REMOTE_FAULT = 0x2, /**< Remote Fault detected. */
} bcmolt_link_fault_code;

/** Current Link State (Link Up or Link Down) */
typedef enum
{
    BCMOLT_LINK_STATE__BEGIN = 0,
    BCMOLT_LINK_STATE_LINK_DOWN = 0, /**< Link Down */
    BCMOLT_LINK_STATE_LINK_UP = 1, /**< Link Up */
    BCMOLT_LINK_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_link_state;

/** Link type. */
typedef enum
{
    BCMOLT_LINK_TYPE__BEGIN = 0,
    BCMOLT_LINK_TYPE_UNSPECIFIED = 0, /**< Link type unspecified */
    BCMOLT_LINK_TYPE_B = 1, /**< Link type A is not supported, link type B is supported */
    BCMOLT_LINK_TYPE_A = 2, /**< Link type A is supported, link type B is not supported */
    BCMOLT_LINK_TYPE_A_AND_B = 3, /**< Both link types A and B are supported */
    BCMOLT_LINK_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_link_type;

/** loc_clear_threshold. */
typedef enum
{
    BCMOLT_LOC_CLEAR_THRESHOLD__BEGIN = 1,
    BCMOLT_LOC_CLEAR_THRESHOLD_CCM_INTERVAL = 1, /**< threshold = ccm_interval */
    BCMOLT_LOC_CLEAR_THRESHOLD_CCM_INTERVAL_TIMES_2 = 2, /**< threshold = ccm_interval * 2 */
    BCMOLT_LOC_CLEAR_THRESHOLD_CCM_INTERVAL_TIMES_3 = 3, /**< threshold = ccm_interval * 3 */
    BCMOLT_LOC_CLEAR_THRESHOLD__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_loc_clear_threshold;

/** Log File ID. */
typedef enum
{
    BCMOLT_LOG_FILE_ID__BEGIN = 0,
    BCMOLT_LOG_FILE_ID_SRAM = 0, /**< SRAM. */
    BCMOLT_LOG_FILE_ID_DDR = 1, /**< DDR. */
    BCMOLT_LOG_FILE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_log_file_id;

/** Log verbosity level */
typedef enum
{
    BCMOLT_LOG_LEVEL__BEGIN = 0,
    BCMOLT_LOG_LEVEL_NO_LOG = 0, /**< No log output at all */
    BCMOLT_LOG_LEVEL_FATAL = 1, /**< Fatal errors only */
    BCMOLT_LOG_LEVEL_ERROR = 2, /**< All errors */
    BCMOLT_LOG_LEVEL_WARNING = 3, /**< All warnings and errors */
    BCMOLT_LOG_LEVEL_INFO = 4, /**< Informational messages, warnings and errors */
    BCMOLT_LOG_LEVEL_DEBUG = 5, /**< All messages */
    BCMOLT_LOG_LEVEL__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_log_level;

/** log style. */
typedef enum
{
    BCMOLT_LOG_STYLE__BEGIN = 0,
    BCMOLT_LOG_STYLE_NORMAL = 0, /**< normal. */
    BCMOLT_LOG_STYLE_BOLD = 1, /**< bold. */
    BCMOLT_LOG_STYLE_UNDERLINE = 2, /**< underline. */
    BCMOLT_LOG_STYLE_BLINK = 3, /**< blink. */
    BCMOLT_LOG_STYLE_REVERSE_VIDEO = 4, /**< reverse video. */
    BCMOLT_LOG_STYLE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_log_style;

/** log type. */
typedef enum
{
    BCMOLT_LOG_TYPE__BEGIN = 0,
    BCMOLT_LOG_TYPE_NONE = 0, /**< dont show log */
    BCMOLT_LOG_TYPE_PRINT = 1, /**< print. */
    BCMOLT_LOG_TYPE_SAVE = 2, /**< save. */
    BCMOLT_LOG_TYPE_BOTH = 3, /**< both. */
    BCMOLT_LOG_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_log_type;

/** MEG Id Format. */
typedef enum
{
    BCMOLT_MEG_FORMAT__BEGIN = 1,
    BCMOLT_MEG_FORMAT_IEEE_8021_AG_1 = 1, /**< IEEE 802.1ag_1. */
    BCMOLT_MEG_FORMAT_ICC = 32, /**< Consists of 2 subfileds: ITU carrier Code(ICC) / Unique MEG ID code (UMC). */
    BCMOLT_MEG_FORMAT__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_meg_format;

/** MEG Level. */
typedef enum
{
    BCMOLT_MEG_LEVEL__BEGIN = 0,
    BCMOLT_MEG_LEVEL_LEVEL_0 = 0, /**< Level_0. */
    BCMOLT_MEG_LEVEL_LEVEL_1 = 1, /**< Level_1. */
    BCMOLT_MEG_LEVEL_LEVEL_2 = 2, /**< Level_2. */
    BCMOLT_MEG_LEVEL_LEVEL_3 = 3, /**< Level_3. */
    BCMOLT_MEG_LEVEL_LEVEL_4 = 4, /**< Level_4. */
    BCMOLT_MEG_LEVEL_LEVEL_5 = 5, /**< Level_5. */
    BCMOLT_MEG_LEVEL_LEVEL_6 = 6, /**< Level_6. */
    BCMOLT_MEG_LEVEL_LEVEL_7 = 7, /**< Level_7. */
    BCMOLT_MEG_LEVEL__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_meg_level;

/** members_update_command. */
typedef enum
{
    BCMOLT_MEMBERS_UPDATE_COMMAND__BEGIN = 0,
    BCMOLT_MEMBERS_UPDATE_COMMAND_ADD = 0, /**< add members */
    BCMOLT_MEMBERS_UPDATE_COMMAND_REMOVE = 1, /**< remove members */
    BCMOLT_MEMBERS_UPDATE_COMMAND_SET = 2, /**< set members */
    BCMOLT_MEMBERS_UPDATE_COMMAND__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_members_update_command;

/** mep type */
typedef enum
{
    BCMOLT_MEP_TYPE__BEGIN = 1,
    BCMOLT_MEP_TYPE_MEP = 1, /**< Local MEP = tx endpoint */
    BCMOLT_MEP_TYPE_RMEP = 2, /**< Remote MEP = rx endpoint */
    BCMOLT_MEP_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_mep_type;

/** MPCP discovery info. */
typedef enum
{
    BCMOLT_MPCP_DISCOVERY_INFO_NONE = 0,
    BCMOLT_MPCP_DISCOVERY_INFO_ONE_G_CAPABLE = 0x01, /**< 1G Capable. */
    BCMOLT_MPCP_DISCOVERY_INFO_TEN_G_CAPABLE = 0x02, /**< 10G Capable. */
    BCMOLT_MPCP_DISCOVERY_INFO_TWENTY_FIVE_G_CAPABLE = 0x04, /**< 25G Capable. */
    BCMOLT_MPCP_DISCOVERY_INFO_ONE_G_WINDOW = 0x10, /**< 1G window. */
    BCMOLT_MPCP_DISCOVERY_INFO_TEN_G_WINDOW = 0x20, /**< 10G window. */
    BCMOLT_MPCP_DISCOVERY_INFO_TWENTY_FIVE_G_WINDOW = 0x40, /**< 25G window. */
} bcmolt_mpcp_discovery_info;

/** NNI Connection. */
typedef enum
{
    BCMOLT_NNI_CONNECTION__BEGIN = 0,
    BCMOLT_NNI_CONNECTION_PRIMARY = 0, /**< Primary. */
    BCMOLT_NNI_CONNECTION_BACKUP = 1, /**< Backup. */
    BCMOLT_NNI_CONNECTION__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_nni_connection;

/** Loopback Type. */
typedef enum
{
    BCMOLT_NNI_LOOPBACK_TYPE__BEGIN = 0,
    BCMOLT_NNI_LOOPBACK_TYPE_NONE = 0, /**< No Looback. */
    BCMOLT_NNI_LOOPBACK_TYPE_LINE = 1, /**< Incoming packets coming from the NNI interface to the PM and going back towards the NNI interface */
    BCMOLT_NNI_LOOPBACK_TYPE_REMOTE = 2, /**< Incoming packets coming from the PON (upstream) and going back to the PON (Downstream) */
    BCMOLT_NNI_LOOPBACK_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_nni_loopback_type;

/** NNI Protection Mode */
typedef enum
{
    BCMOLT_NNI_PROTECTION_MODE__BEGIN = 0,
    BCMOLT_NNI_PROTECTION_MODE_UNASSIGNED = 0, /**< Unused */
    BCMOLT_NNI_PROTECTION_MODE_ERPS = 1, /**< ERPS Ring Protection */
    BCMOLT_NNI_PROTECTION_MODE_NNI = 2, /**< NNI or LAG 1:1 Link Redundancy */
    BCMOLT_NNI_PROTECTION_MODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_nni_protection_mode;

/** ODN Class. */
typedef enum
{
    BCMOLT_ODN_CLASS__BEGIN = 0,
    BCMOLT_ODN_CLASS_N1 = 0, /**< N1. */
    BCMOLT_ODN_CLASS_N2 = 1, /**< N2. */
    BCMOLT_ODN_CLASS_E1 = 3, /**< E1. */
    BCMOLT_ODN_CLASS_E2 = 4, /**< E2. */
    BCMOLT_ODN_CLASS__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_odn_class;

/** OLT Disconnect Reason. */
typedef enum
{
    BCMOLT_OLT_DISCONNECT_REASON__BEGIN = 0,
    BCMOLT_OLT_DISCONNECT_REASON_CONNECTED = 0, /**< This value is used when connection manager is connected with device management daemon */
    BCMOLT_OLT_DISCONNECT_REASON_KA_FAILURE = 1, /**< Keep Alive Failure. */
    BCMOLT_OLT_DISCONNECT_REASON_DAEMON_RESTART = 2, /**< Device Management Daemon Restart. */
    BCMOLT_OLT_DISCONNECT_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_olt_disconnect_reason;

/** OMCI Device ID. */
typedef enum
{
    BCMOLT_OMCI_DEVICE_ID__BEGIN = 10,
    BCMOLT_OMCI_DEVICE_ID_BASELINE = 10, /**< Baseline. */
    BCMOLT_OMCI_DEVICE_ID_EXTENDED = 11, /**< Extended. */
    BCMOLT_OMCI_DEVICE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_omci_device_id;

/** OMCI Port ID operation. */
typedef enum
{
    BCMOLT_OMCI_PORT_ID_OPERATION__BEGIN = 0,
    BCMOLT_OMCI_PORT_ID_OPERATION_CONFIGURE = 0, /**< configure. */
    BCMOLT_OMCI_PORT_ID_OPERATION_REMOVE = 1, /**< remove. */
    BCMOLT_OMCI_PORT_ID_OPERATION__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_omci_port_id_operation;

/** ONU operation. */
typedef enum
{
    BCMOLT_ONU_OPERATION__BEGIN = 0,
    BCMOLT_ONU_OPERATION_INACTIVE = 0, /**< Inactive. */
    BCMOLT_ONU_OPERATION_ACTIVE = 1, /**< Active. */
    BCMOLT_ONU_OPERATION_DISABLE = 2, /**< Disable. */
    BCMOLT_ONU_OPERATION_ENABLE = 3, /**< Enable. */
    BCMOLT_ONU_OPERATION_ACTIVE_STANDBY = 4, /**< Active Standby. */
    BCMOLT_ONU_OPERATION_AWAKE_FREE = 5, /**< Transitions the ONU to an active state with power management enabled. Allowed in inactive, disabled, and active states. */
    BCMOLT_ONU_OPERATION__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_onu_operation;

/** ONU post discovery mode. */
typedef enum
{
    BCMOLT_ONU_POST_DISCOVERY_MODE__BEGIN = 0,
    BCMOLT_ONU_POST_DISCOVERY_MODE_NONE = 0, /**< Send an indication to the host, all the host to decide the next step. */
    BCMOLT_ONU_POST_DISCOVERY_MODE_ACTIVATE = 1, /**< Automatically activate if the service is known in the database. */
    BCMOLT_ONU_POST_DISCOVERY_MODE_DISABLE = 2, /**< Send an indication to the host, and disable the ONU. */
    BCMOLT_ONU_POST_DISCOVERY_MODE_PROVISION_AND_ACTIVATE = 3, /**< Automatically active upon discovery, applying default provisioning as necessary */
    BCMOLT_ONU_POST_DISCOVERY_MODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_onu_post_discovery_mode;

/** The upstream/downstream rates for this ONU */
typedef enum
{
    BCMOLT_ONU_RATE__BEGIN = 0,
    BCMOLT_ONU_RATE_RATE_10G_DS_10G_US = 0, /**< 10G Bidirectional ONU rate */
    BCMOLT_ONU_RATE_RATE_10G_DS_2P5G_US = 1, /**< 10G downstream, 2.5G Upstream ONU rate */
    BCMOLT_ONU_RATE_RATE_10G_DS_1G_US = 2, /**< 10G downstream, 1G Upstream ONU rate */
    BCMOLT_ONU_RATE_RATE_2P5G_DS_1P25G_US = 3, /**< 2.5G downstream, 1.25G Upstream ONU rate */
    BCMOLT_ONU_RATE_RATE_1G_DS_1G_US = 4, /**< 1G downstream, 1G Upstream ONU rate */
    BCMOLT_ONU_RATE_RATE_25_G_DS_25_G_US = 5, /**< 25G downstream, 25G upstream ONU rate. */
    BCMOLT_ONU_RATE_RATE_25_G_DS_10_G_US = 6, /**< 25G downstream, 10G upstream ONU rate. */
    BCMOLT_ONU_RATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_onu_rate;

/** ONU state. */
typedef enum
{
    BCMOLT_ONU_STATE__BEGIN = 0,
    BCMOLT_ONU_STATE_NOT_CONFIGURED = 0, /**< not_configured. */
    BCMOLT_ONU_STATE_INACTIVE = 1, /**< inactive. */
    BCMOLT_ONU_STATE_ACTIVE = 2, /**< active. */
    BCMOLT_ONU_STATE_ACTIVE_STANDBY = 3, /**< active standby. */
    BCMOLT_ONU_STATE_DISABLED = 4, /**< disabled. */
    BCMOLT_ONU_STATE_AWAKE_FREE = 5, /**< ONU is active, but power management is enabled. ONU is allowed to enter low power states at its own discretion. */
    BCMOLT_ONU_STATE_PROCESSING = 7, /**< processing. */
    BCMOLT_ONU_STATE_LOW_POWER_DOZE = 8, /**< ONU has entered the Doze low power state. */
    BCMOLT_ONU_STATE_LOW_POWER_SLEEP = 9, /**< ONU has entered the Sleep low power state. */
    BCMOLT_ONU_STATE_LOW_POWER_WATCH = 10, /**< ONU has entered the Watchful Sleep low power state. */
    BCMOLT_ONU_STATE_UNAWARE = 11, /**< ONU is added to data base but no bws is saved */
    BCMOLT_ONU_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_onu_state;

/** ONU Upgrade Status Code. */
typedef enum
{
    BCMOLT_ONU_UPGRADE_STATUS_CODE__BEGIN = 0,
    BCMOLT_ONU_UPGRADE_STATUS_CODE_TRANSFERRING_IMAGE = 0, /**< In the process of transferring the software image to the ONU. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_FINALIZING_TRANSFER = 1, /**< Sending the last packet / finalizing the software image transfer. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_ACTIVATING = 2, /**< Activating the ONU. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_SUCCESS = 3, /**< Upgrade succeeded. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_INTERNAL_ERROR = 4, /**< Internal error. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_ONU_RESPONSE_TIMEOUT = 5, /**< ONU did not respond to a message within the time specified by the "Write request timeout". */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_MESSAGE_SEND_FAILED = 6, /**< Failed to send an OAM/OMCI message to the ONU. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_SYNC_ERROR = 7, /**< Block number sync error. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_COMMIT_FAILED = 8, /**< Commit software command failed. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_PARSE_ERROR = 9, /**< Unable to parse the ONU response. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_TCI_MISMATCH = 10, /**< Transaction ID mismatch. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_GET_IMAGE_FAILED = 11, /**< Get Image Info command failed. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_ACTIVATION_FAILED = 12, /**< Activation software command failed. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_OMCI_PROCESSING_ERROR = 20, /**< Command processing error.
    Possible causes:
    1) CRC mismatches the End Software Download OMCI message.
    2) Downloaded image format is not supported or invalid. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_OMCI_NOT_SUPPORTED = 21, /**< Command not supported, or not applicable for End software download message. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_OMCI_PARAMETER_ERROR = 22, /**< Parameter error, or not applicable for End software download message.
    Exception: Oren ONU returns this error for the CRC mismatch. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_OMCI_UNKNOWN_MANAGED_ENTITY = 23, /**< Unknown managed entity. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_OMCI_UNKNOWN_MANAGED_ENTITY_INSTANCE = 24, /**< Unknown managed entity instance. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_OMCI_DEVICE_BUSY = 25, /**< Device busy. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_UNDEFINED = 30, /**< Unknown error, or one not covered elsewhere. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_NOT_FOUND = 31, /**< Read requested file that is not available. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_NO_ACCESS = 32, /**< Access permissions do not allow the requested read/write. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_FULL = 33, /**< Storage is full, and cannot hold the written file. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_ILLEGAL_OPERATION = 34, /**< Cannot perform requested operation in current state. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_UNKNOWN_ID = 35, /**< Requested file ID is not supported by this device. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_BAD_BLOCK = 36, /**< Block received in error. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_TIMEOUT = 37, /**< No block received before timer expiration. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_BUSY = 38, /**< Cannot perform requested action due to other activity. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_INCOMPATIBLE_FILE = 39, /**< Received file is incompatible with this device. File incompatibility is determined by the device vendor. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_DPOE_CORRUPTED_FILE = 40, /**< File was received corrupted and is unusable by this device. File integrity is determined by the device vendor. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_CTC_ERROR_NOT_DEFINED = 50, /**< ONU returned ERROR PDU: Undefined error code. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_CTC_ERROR_ALLOC_EXCEEDED = 51, /**< ONU returned ERROR PDU: Disk full or allocation exceeded. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_CTC_ERROR_ILLEGAL_OP = 52, /**< ONU returned ERROR PDU: Illegal TFTP operation. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_CTC_ERROR_FILE_EXISTS = 53, /**< ONU returned ERROR PDU: Mirror file already exists. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_CTC_END_WRITING_NVS = 54, /**< ONU returned END RESPONSE PDU with error: Writing file to NVS */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_CTC_END_CRC_ERROR = 55, /**< ONU returned END RESPONSE PDU with error: CRC32 error */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_CTC_END_PARAMETER_ERROR = 56, /**< ONU returned END RESPONSE PDU with error: Parameter error */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_CTC_END_COMMAND_NOT_SUPPORTED = 57, /**< ONU returned END RESPONSE PDU with error: Command not supported */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_BRCM_OAM_OK = 70, /**< BRCM OAM: OK. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_BRCM_OAM_UNDEFINED = 71, /**< BRCM OAM: Undefined. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_BRCM_OAM_NOT_FOUND = 72, /**< BRCM OAM: Not Found. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_BRCM_OAM_NO_ACCESS = 73, /**< BRCM OAM: No Access. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_BRCM_OAM_FULL = 74, /**< BRCM OAM: Full. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_BRCM_OAM_ILLEGAL_OP = 75, /**< BRCM OAM: Illegal Op. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_BRCM_OAM_UNKNOWN_ID = 76, /**< BRCM OAM: Unknown ID. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_BRCM_OAM_BAD_BLOCK = 77, /**< BRCM OAM: Bad Block. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_BRCM_OAM_TIMEOUT = 78, /**< BRCM OAM: Timeout. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE_BRCM_OAM_BUSY = 79, /**< BRCM OAM: Busy. */
    BCMOLT_ONU_UPGRADE_STATUS_CODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_onu_upgrade_status_code;

/** Packet Injection Error. */
typedef enum
{
    BCMOLT_PACKET_INJECTION_ERROR__BEGIN = 0,
    BCMOLT_PACKET_INJECTION_ERROR_GEM_PORT_NOT_ACTIVE = 0, /**< GEM Port Not Active. */
    BCMOLT_PACKET_INJECTION_ERROR__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_packet_injection_error;

/** packet type. */
typedef enum
{
    BCMOLT_PACKET_TYPE__BEGIN = 0,
    BCMOLT_PACKET_TYPE_ETH = 0, /**< ethernet. */
    BCMOLT_PACKET_TYPE_OMCI = 1, /**< OMCI. */
    BCMOLT_PACKET_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_packet_type;

/** Password authentication fail reason. */
typedef enum
{
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON__BEGIN = 0,
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON_NONE = 0, /**< none. */
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON_PASSWORD_INCONSISTENCY = 1, /**< Password inconsistency. */
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON_PASSWORD_MISMATCH = 2, /**< Password mismatch. */
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON_PASSWORD_AUTHENTICATION_TIMEOUT = 3, /**< Password authentication timeout. */
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON_ONU_ALARM = 4, /**< onu alarm. */
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON_LOS_EVENT = 5, /**< los event. */
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON_DISABLE_EVENT = 6, /**< disable event. */
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON_SWITCH_OVER = 7, /**< switch over event. */
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON_FORCE_DEACTIVATION = 8, /**< force deactivation. */
    BCMOLT_PASSWORD_AUTHENTICATION_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_password_authentication_fail_reason;

/** Packet tag type. */
typedef enum
{
    BCMOLT_PKT_TAG_TYPE_NONE = 0,
    BCMOLT_PKT_TAG_TYPE_UNTAGGED = 0x0001, /**< Untagged. */
    BCMOLT_PKT_TAG_TYPE_SINGLE_TAG = 0x0002, /**< Single tag. */
    BCMOLT_PKT_TAG_TYPE_DOUBLE_TAG = 0x0004, /**< Double tag. */
} bcmolt_pkt_tag_type;

/** policer app. */
typedef enum
{
    BCMOLT_POLICER_APP__BEGIN = 0,
    BCMOLT_POLICER_APP_NONE = 0, /**< needed if CoS policing only used on this object */
    BCMOLT_POLICER_APP_FLOW = 1, /**< flow. */
    BCMOLT_POLICER_APP_COS = 2, /**< CoS. */
    BCMOLT_POLICER_APP_TM_SCHED = 3, /**< tm_sched. */
    BCMOLT_POLICER_APP_PORT = 4, /**< port. */
    BCMOLT_POLICER_APP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_policer_app;

/** policer type. */
typedef enum
{
    BCMOLT_POLICER_TYPE__BEGIN = 0,
    BCMOLT_POLICER_TYPE_SR_TCM = 0, /**< magic number do not change */
    BCMOLT_POLICER_TYPE_TR_TCM_RFC2698 = 3, /**< magic number do not change */
    BCMOLT_POLICER_TYPE_TR_TCM_RFC4115 = 4, /**< magic number - do not change */
    BCMOLT_POLICER_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_policer_type;

/** PON NI ONU Upgrade Status Code */
typedef enum
{
    BCMOLT_PON_NI_ONU_UPGRADE_STATUS_CODE__BEGIN = 0,
    BCMOLT_PON_NI_ONU_UPGRADE_STATUS_CODE_NOT_STARTED = 0, /**< No upgrade has been started yet on this PON NI. */
    BCMOLT_PON_NI_ONU_UPGRADE_STATUS_CODE_IN_PROGRESS = 1, /**< An upgrade operation is in progress. */
    BCMOLT_PON_NI_ONU_UPGRADE_STATUS_CODE_SUCCESS = 2, /**< The last ONU upgrade was successful and no upgrade is in progress. */
    BCMOLT_PON_NI_ONU_UPGRADE_STATUS_CODE_FAILURE = 3, /**< At least one ONU failed the last upgrade and no upgrade is in progress. */
    BCMOLT_PON_NI_ONU_UPGRADE_STATUS_CODE_ABORTED = 4, /**< The upgrade was aborted prematurely. */
    BCMOLT_PON_NI_ONU_UPGRADE_STATUS_CODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_pon_ni_onu_upgrade_status_code;

/** PON Protection Switching Options. */
typedef enum
{
    BCMOLT_PON_PROTECTION_SWITCHING_OPTIONS_NONE = 0,
    BCMOLT_PON_PROTECTION_SWITCHING_OPTIONS_SWIFT_POPUP = 0x0001, /**< If set, switchovers will utilize the Swift_POPUP and Ranging_Adjustment PLOAMs added in G.984 annex D. */
    BCMOLT_PON_PROTECTION_SWITCHING_OPTIONS_FAST_RANGING = 0x0002, /**< If set, ONU EQDs will not be calculated as part of a switchover.  Instead, each ONU's new EQD will be equal to its last EQD when the PON NI was in active-working state.  This provides a fast switchover, but can only be used if the trunk distance never changes. */
} bcmolt_pon_protection_switching_options;

/** power levelling control. */
typedef enum
{
    BCMOLT_POWER_LEVELLING_CONTROL__BEGIN = 0,
    BCMOLT_POWER_LEVELLING_CONTROL_DIRECT = 0, /**< Direct. */
    BCMOLT_POWER_LEVELLING_CONTROL_DECREASE = 1, /**< Decrease. */
    BCMOLT_POWER_LEVELLING_CONTROL_INCREASE = 2, /**< Increase. */
    BCMOLT_POWER_LEVELLING_CONTROL__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_power_levelling_control;

/** The reason that a power management state change occurred. */
typedef enum
{
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON__BEGIN = 0,
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON_POWER_MANAGEMENT_ENABLED = 0, /**< Host requested power management enable. */
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON_POWER_MANAGEMENT_DISABLED = 1, /**< Host requested power management disable. */
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON_SLEEP_REQUEST_AWAKE = 2, /**< Received sleep request PLOAM from ONU. */
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON_SLEEP_REQUEST_DOZE = 3, /**< Received sleep request PLOAM from ONU. */
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON_SLEEP_REQUEST_SLEEP = 4, /**< Received sleep request PLOAM from ONU. */
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON_SLEEP_REQUEST_WATCH = 5, /**< Received sleep request PLOAM from ONU. */
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON_TERI_EXPIRED = 6, /**< Teri timer expired. It has been too long since we have received an upstream burst from an ONU in a low power state. */
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON_TALERTED_EXPIRED = 7, /**< Talerted timer expired. It has been too long since the ONU was requested to wake up with no idication that it has complied. */
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON_ALARM = 8, /**< A LOSi/LOFi/LOBi alarm has ben raised against the ONU. */
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON_FORCE_DEACTIVATION = 9, /**< Force Deactivation. */
    BCMOLT_POWER_MANAGEMENT_TRANSITION_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_power_management_transition_reason;

/** PRBS checker mode. */
typedef enum
{
    BCMOLT_PRBS_CHECKER_MODE__BEGIN = 0,
    BCMOLT_PRBS_CHECKER_MODE_SELF_SYNC = 0, /**< Self-sync mode w/ hysteresis. PRBS seed register is continuously seeded with previous received bits.  This mode results in faster locking, but bit errors are counted multiple times (often by 3x). */
    BCMOLT_PRBS_CHECKER_MODE_INITIAL_SEED_MODE = 1, /**< Initial seed mode w/ hysteresis. PRBS seed registers is seeded with previous received bits only till PRBS lock is  acquired and then they run locally independently from the received data until the checker goes out of PRBS lock. */
    BCMOLT_PRBS_CHECKER_MODE_INITIAL_SEED_MODE_2 = 2, /**< Initial seed mode w/o hysteresis. Similar to mode 1 above except once locked it stays locked until PRBS is disabled. */
    BCMOLT_PRBS_CHECKER_MODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_prbs_checker_mode;

/** PRBS Lock State. */
typedef enum
{
    BCMOLT_PRBS_LOCK_STATE__BEGIN = 0,
    BCMOLT_PRBS_LOCK_STATE_UNLOCKED = 0, /**< PRBS Checker is out of LOCK state and state machine is searching for a LOCK */
    BCMOLT_PRBS_LOCK_STATE_LOCKED = 1, /**< PRBS Checker is in LOCKED state */
    BCMOLT_PRBS_LOCK_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_prbs_lock_state;

/** PRBS Polynomial. */
typedef enum
{
    BCMOLT_PRBS_POLYNOMIAL__BEGIN = 0,
    BCMOLT_PRBS_POLYNOMIAL_PRBS_7 = 0, /**< PRBS_7. */
    BCMOLT_PRBS_POLYNOMIAL_PRBS_9 = 1, /**< PRBS_9. */
    BCMOLT_PRBS_POLYNOMIAL_PRBS_11 = 2, /**< PRBS_11. */
    BCMOLT_PRBS_POLYNOMIAL_PRBS_15 = 3, /**< PRBS_15. */
    BCMOLT_PRBS_POLYNOMIAL_PRBS_23 = 4, /**< PRBS_23. */
    BCMOLT_PRBS_POLYNOMIAL_PRBS_31 = 5, /**< PRBS_31. */
    BCMOLT_PRBS_POLYNOMIAL_PRBS_58 = 6, /**< PRBS_58. */
    BCMOLT_PRBS_POLYNOMIAL__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_prbs_polynomial;

/** Ranging fail reason. */
typedef enum
{
    BCMOLT_RANGING_FAIL_REASON__BEGIN = 0,
    BCMOLT_RANGING_FAIL_REASON_NONE = 0, /**< none. */
    BCMOLT_RANGING_FAIL_REASON_RANGING_ACK_TIMEOUT = 1, /**< ranging ack timeout. */
    BCMOLT_RANGING_FAIL_REASON_PLOAM_DATA_MISMATCH = 2, /**< ploam data mismatch. */
    BCMOLT_RANGING_FAIL_REASON_PLOAM_TYPE_MISMATCH = 3, /**< ploam type mismatch. */
    BCMOLT_RANGING_FAIL_REASON_PLOAM_ONU_ID_MISMATCH = 4, /**< ploam onu id mismatch. */
    BCMOLT_RANGING_FAIL_REASON_DRIFT_EXCEEDED = 5, /**< drift exceeded. */
    BCMOLT_RANGING_FAIL_REASON_NO_PLOAM_RECEIVED = 6, /**< no ploam received. */
    BCMOLT_RANGING_FAIL_REASON_LOS = 7, /**< los. */
    BCMOLT_RANGING_FAIL_REASON_ALARMS = 8, /**< alarms. */
    BCMOLT_RANGING_FAIL_REASON_FORCE_DEACTIVATE = 9, /**< force deactivate. */
    BCMOLT_RANGING_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_ranging_fail_reason;

/** Usage mode of RAS DDRs (no DDR is used, 1, 2 or 4 DDRs are used) */
typedef enum
{
    BCMOLT_RAS_DDR_USAGE_MODE__BEGIN = 0,
    BCMOLT_RAS_DDR_USAGE_MODE_NO_DDR = 0, /**< No DDR is used (applicable for all EPON system modes) */
    BCMOLT_RAS_DDR_USAGE_MODE_ONE_DDR = 1, /**< One DDR is used in the system (applicable for ITU PON system modes) */
    BCMOLT_RAS_DDR_USAGE_MODE_TWO_DDRS = 2, /**< Two DDRS are used in the system (applicable for ITU PON system modes) */
    BCMOLT_RAS_DDR_USAGE_MODE_FOUR_DDRS = 3, /**< Four DDRs are used in the system (applicable for ITU PON system modes) */
    BCMOLT_RAS_DDR_USAGE_MODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_ras_ddr_usage_mode;

/** request registration fail reason. */
typedef enum
{
    BCMOLT_REQUEST_REGISTRATION_FAIL_REASON__BEGIN = 0,
    BCMOLT_REQUEST_REGISTRATION_FAIL_REASON_NONE = 0, /**< None. */
    BCMOLT_REQUEST_REGISTRATION_FAIL_REASON_REGISTRATION_PLOAM_TIMEOUT = 1, /**< registration ploam timeout. */
    BCMOLT_REQUEST_REGISTRATION_FAIL_REASON_ONU_ALARM = 2, /**< onu alarm. */
    BCMOLT_REQUEST_REGISTRATION_FAIL_REASON_DEACTIVATION = 3, /**< deactivation. */
    BCMOLT_REQUEST_REGISTRATION_FAIL_REASON_DISABLE = 4, /**< disable. */
    BCMOLT_REQUEST_REGISTRATION_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_request_registration_fail_reason;

/** Options for the reset operation. */
typedef enum
{
    BCMOLT_RESET_MODE__BEGIN = 1,
    BCMOLT_RESET_MODE_HOST = 1, /**< Reset the host processor. */
    BCMOLT_RESET_MODE_ALL = 2, /**< Turn off all embedded devices' processor and reset the host processor. */
    BCMOLT_RESET_MODE_HOST_ISSU = 3, /**< Warm restart */
    BCMOLT_RESET_MODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_reset_mode;

/** Result. */
typedef enum
{
    BCMOLT_RESULT__BEGIN = 0,
    BCMOLT_RESULT_SUCCESS = 0, /**< Success. */
    BCMOLT_RESULT_FAIL = 1, /**< Fail. */
    BCMOLT_RESULT__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_result;

/** ERPS Ring Instance Id. */
typedef enum
{
    BCMOLT_RING_INSTANCE_INVALID = 65534U, /**< Invalid. */
    BCMOLT_RING_INSTANCE_UNASSIGNED = 65535U, /**< Unassigned. */
} bcmolt_ring_instance;

/** Ring Port. */
typedef enum
{
    BCMOLT_RING_PORT__BEGIN = 0,
    BCMOLT_RING_PORT_UNASSIGNED = 0, /**< No Ring Ports assigned yet */
    BCMOLT_RING_PORT_WEST = 1, /**< ERPSRing West Ring Port */
    BCMOLT_RING_PORT_EAST = 2, /**< ERPS Ring East Ring Port */
    BCMOLT_RING_PORT__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_ring_port;

/** Ring Port State. */
typedef enum
{
    BCMOLT_RING_PORT_STATE__BEGIN = 0,
    BCMOLT_RING_PORT_STATE_UNASSIGNED = 0, /**< Unassigned. */
    BCMOLT_RING_PORT_STATE_BLOCKED = 1, /**< Blocked. */
    BCMOLT_RING_PORT_STATE_UNBLOCKED = 2, /**< Unblocked. */
    BCMOLT_RING_PORT_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_ring_port_state;

/** RSSI measurement fail reason. */
typedef enum
{
    BCMOLT_RSSI_MEASUREMENT_FAIL_REASON__BEGIN = 0,
    BCMOLT_RSSI_MEASUREMENT_FAIL_REASON_NONE = 0, /**< None. */
    BCMOLT_RSSI_MEASUREMENT_FAIL_REASON_NO_DELIMITER = 1, /**< No delimiter. */
    BCMOLT_RSSI_MEASUREMENT_FAIL_REASON_NO_ACCESS = 2, /**< No access. */
    BCMOLT_RSSI_MEASUREMENT_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_rssi_measurement_fail_reason;

/** secure mutual authentication fail reason. */
typedef enum
{
    BCMOLT_SECURE_MUTUAL_AUTHENTICATION_FAIL_REASON__BEGIN = 0,
    BCMOLT_SECURE_MUTUAL_AUTHENTICATION_FAIL_REASON_TIMEOUT = 0, /**< secure mutual authentication timeout. */
    BCMOLT_SECURE_MUTUAL_AUTHENTICATION_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_secure_mutual_authentication_fail_reason;

/** sign. */
typedef enum
{
    BCMOLT_SIGN__BEGIN = 0,
    BCMOLT_SIGN_POSITIVE = 0, /**< Positive. */
    BCMOLT_SIGN_NEGATIVE = 1, /**< Negative. */
    BCMOLT_SIGN__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_sign;

/** All possible statistic alarm trigger conditions. */
typedef enum
{
    BCMOLT_STAT_CONDITION_TYPE__BEGIN = 0,
    BCMOLT_STAT_CONDITION_TYPE_NONE = 0, /**< The alarm is disabled. */
    BCMOLT_STAT_CONDITION_TYPE_RATE_THRESHOLD = 1, /**< The alarm is triggered if the stats delta value between samples crosses the configured threshold boundary. */
    BCMOLT_STAT_CONDITION_TYPE_RATE_RANGE = 2, /**< The alarm is triggered if the stats delta value between samples deviates from the configured range. */
    BCMOLT_STAT_CONDITION_TYPE_VALUE_THRESHOLD = 3, /**< The alarm is raised if the stats sample value becomes greater than this level.  The alarm is cleared when the host read the stats. */
    BCMOLT_STAT_CONDITION_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_stat_condition_type;

/** Status. */
typedef enum
{
    BCMOLT_STATUS__BEGIN = 0,
    BCMOLT_STATUS_OFF = 0, /**< Status is off. */
    BCMOLT_STATUS_ON = 1, /**< Status is on. */
    BCMOLT_STATUS_NO_CHANGE = 2, /**< Status should not be changed (valid for SET API calls only). */
    BCMOLT_STATUS__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_status;

/** Switch over type c onu state. */
typedef enum
{
    BCMOLT_SWITCH_OVER_TYPE_C_ONU_STATE__BEGIN = 0,
    BCMOLT_SWITCH_OVER_TYPE_C_ONU_STATE_ACTIVE = 0, /**< Active. */
    BCMOLT_SWITCH_OVER_TYPE_C_ONU_STATE_ACTIVE_STANDBY = 1, /**< Active standby. */
    BCMOLT_SWITCH_OVER_TYPE_C_ONU_STATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_switch_over_type_c_onu_state;

/** System working mode (GPON/EPON etc.) */
typedef enum
{
    BCMOLT_SYSTEM_MODE__BEGIN = 12,
    BCMOLT_SYSTEM_MODE_GPON__16_X = 12, /**< 16x GPON */
    BCMOLT_SYSTEM_MODE_XGPON__2_X = 13, /**< 2x XGPON */
    BCMOLT_SYSTEM_MODE_XGPON__8_X = 15, /**< 8x XGPON */
    BCMOLT_SYSTEM_MODE_XGS__2_X = 18, /**< 2x XGS-PON (10/10) */
    BCMOLT_SYSTEM_MODE_XGS__16_X = 19, /**< 16x XGS-PON (10/10) */
    BCMOLT_SYSTEM_MODE_XGS_XGPON__2_X_COEX_TDMA = 20, /**< 2x XGS and XGPON TDMA coexistence */
    BCMOLT_SYSTEM_MODE_NGPON2__2_X_10G = 21, /**< 2x NGPON2 (10/10) */
    BCMOLT_SYSTEM_MODE_XGS__8_X_GPON__8_X_WDMA = 38, /**< 8x XGS 8x GPON wdma */
    BCMOLT_SYSTEM_MODE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_system_mode;

/** TC layer protocol. */
typedef enum
{
    BCMOLT_TC_PROTOCOL__BEGIN = 0,
    BCMOLT_TC_PROTOCOL_TC_LAYER_PROTOCOL_G_987_P_3 = 0, /**< TC layer protocol G.987.3 */
    BCMOLT_TC_PROTOCOL_TC_LAYER_PROTOCOL_G_989_P_3 = 1, /**< TC layer protocol G.989.3 */
    BCMOLT_TC_PROTOCOL__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_tc_protocol;

/** tm_qmp_type. */
typedef enum
{
    BCMOLT_TM_QMP_TYPE__BEGIN = 0,
    BCMOLT_TM_QMP_TYPE_PBITS = 0, /**< pbits. */
    BCMOLT_TM_QMP_TYPE_DSCP = 1, /**< dscp. */
    BCMOLT_TM_QMP_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_tm_qmp_type;

/** Traffic Direction */
typedef enum
{
    BCMOLT_TM_SCHED_DIR__BEGIN = 1,
    BCMOLT_TM_SCHED_DIR_US = 1, /**< Upstream */
    BCMOLT_TM_SCHED_DIR_DS = 2, /**< Downstream */
    BCMOLT_TM_SCHED_DIR__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_tm_sched_dir;

/** TM Scheduler Output Type */
typedef enum
{
    BCMOLT_TM_SCHED_OUTPUT_TYPE__BEGIN = 0,
    BCMOLT_TM_SCHED_OUTPUT_TYPE_UNDEFINED = 0, /**< Undefined */
    BCMOLT_TM_SCHED_OUTPUT_TYPE_INTERFACE = 1, /**< Interface */
    BCMOLT_TM_SCHED_OUTPUT_TYPE_TM_SCHED = 2, /**< Other tm scheduler */
    BCMOLT_TM_SCHED_OUTPUT_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_tm_sched_output_type;

/** TM Sched Param Type. */
typedef enum
{
    BCMOLT_TM_SCHED_PARAM_TYPE__BEGIN = 0,
    BCMOLT_TM_SCHED_PARAM_TYPE_PRIORITY = 0, /**< Priority. */
    BCMOLT_TM_SCHED_PARAM_TYPE_WEIGHT = 1, /**< Weight. */
    BCMOLT_TM_SCHED_PARAM_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_tm_sched_param_type;

/** Scheduler Type */
typedef enum
{
    BCMOLT_TM_SCHED_TYPE__BEGIN = 0,
    BCMOLT_TM_SCHED_TYPE_UNDEFINED = 0, /**< Undefined */
    BCMOLT_TM_SCHED_TYPE_WFQ = 1, /**< Weighted Fair Queue (WFQ) */
    BCMOLT_TM_SCHED_TYPE_SP = 2, /**< Strict Priority */
    BCMOLT_TM_SCHED_TYPE_SP_WFQ = 3, /**< Hybrid SP + WFQ */
    BCMOLT_TM_SCHED_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_tm_sched_type;

/** Traffic resume result. */
typedef enum
{
    BCMOLT_TRAFFIC_RESUME_RESULT__BEGIN = 0,
    BCMOLT_TRAFFIC_RESUME_RESULT_SUCCESS = 0, /**< Success. */
    BCMOLT_TRAFFIC_RESUME_RESULT_FAILURE = 1, /**< Failure. */
    BCMOLT_TRAFFIC_RESUME_RESULT_SUSPECTED_LOS = 2, /**< suspected_los. */
    BCMOLT_TRAFFIC_RESUME_RESULT__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_traffic_resume_result;

/** Traffic type. */
typedef enum
{
    BCMOLT_TRAFFIC_TYPE__BEGIN = 0,
    BCMOLT_TRAFFIC_TYPE_BROADCAST = 0, /**< Broadcast. */
    BCMOLT_TRAFFIC_TYPE_UNICAST = 1, /**< Unicast. */
    BCMOLT_TRAFFIC_TYPE_UNK_UNICAST = 2, /**< unk_unicast. */
    BCMOLT_TRAFFIC_TYPE_MULTICAST = 3, /**< Multicast. */
    BCMOLT_TRAFFIC_TYPE_UNK_MULTICAST = 4, /**< unk multicast. */
    BCMOLT_TRAFFIC_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_traffic_type;

/** Trivalent. */
typedef enum
{
    BCMOLT_TRIVALENT__BEGIN = 0,
    BCMOLT_TRIVALENT_FALSE = 0, /**< False. */
    BCMOLT_TRIVALENT_TRUE = 1, /**< True. */
    BCMOLT_TRIVALENT_NOT_APPLICABLE = 2, /**< Not Applicable. */
    BCMOLT_TRIVALENT__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_trivalent;

/** TRX type. */
typedef enum
{
    BCMOLT_TRX_TYPE__BEGIN = 0,
    BCMOLT_TRX_TYPE_SPS_43_48_H_HP_CDE_SD_2013 = 0, /**< SourcePhotonics - SPS-43-48H-HP-CDE-SD Reset is required BEFORE, TRX is Squelched. till 2013 rev. */
    BCMOLT_TRX_TYPE_SOG_4321_PSGB = 1, /**< Superxon B+ type */
    BCMOLT_TRX_TYPE_LTE_3680_M = 2, /**< LIGENT LTE3680M. */
    BCMOLT_TRX_TYPE_SOURCE_PHOTONICS = 3, /**< Source Photonics. */
    BCMOLT_TRX_TYPE_LTE_3680_P_TYPE_C_PLUS = 4, /**< LIGENT LTE3680P_TYPE_C_PLUS. */
    BCMOLT_TRX_TYPE_ANY = 5, /**< Any. */
    BCMOLT_TRX_TYPE_WTD_RTXM_167_526_CPLUS = 8, /**< WTD RTXM167 526 C+. */
    BCMOLT_TRX_TYPE_WTD_RTXM_167_522_BPLUS = 9, /**< WTD RTXM167 522 B+. */
    BCMOLT_TRX_TYPE_LTE_3680_P_BC = 10, /**< LIGENT HiSense LTE3680P-BC. */
    BCMOLT_TRX_TYPE_SOGQ_4321_PSGB_C_PLUS = 11, /**< Superxon C+ type */
    BCMOLT_TRX_TYPE_WTD_RTXM167_521 = 12, /**< WTD RTXM167_521. */
    BCMOLT_TRX_TYPE_LTE3678 = 13, /**< LTE3678. */
    BCMOLT_TRX_TYPE_LTH_5308 = 26, /**< XGS / GPON Combo Trx */
    BCMOLT_TRX_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_trx_type;

/** Tune in fail reason. */
typedef enum
{
    BCMOLT_TUNE_IN_FAIL_REASON__BEGIN = 0,
    BCMOLT_TUNE_IN_FAIL_REASON_NONE = 0, /**< none. */
    BCMOLT_TUNE_IN_FAIL_REASON_NO_TUNING_RESPONSE_PLOAM_RECEIVED = 1, /**< No tuning response ploam received. */
    BCMOLT_TUNE_IN_FAIL_REASON_ONU_ACTIVATION_FAILED = 2, /**< onu activation failed. */
    BCMOLT_TUNE_IN_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_tune_in_fail_reason;

/** Tune out fail reason. */
typedef enum
{
    BCMOLT_TUNE_OUT_FAIL_REASON__BEGIN = 0,
    BCMOLT_TUNE_OUT_FAIL_REASON_NONE = 0, /**< none. */
    BCMOLT_TUNE_OUT_FAIL_REASON_NACK_PLOAM_RECEIVED = 1, /**< NACK ploam received. */
    BCMOLT_TUNE_OUT_FAIL_REASON_NO_TUNING_RESPONSE_PLOAM_RECEIVED = 2, /**< no tuning response ploam received. */
    BCMOLT_TUNE_OUT_FAIL_REASON_TSOURCE_TIMEOUT = 3, /**< tsource timeout. */
    BCMOLT_TUNE_OUT_FAIL_REASON_ROLLBACK_REQUEST = 4, /**< rollback request. */
    BCMOLT_TUNE_OUT_FAIL_REASON_SWITCH_OVER = 5, /**< protection switch over. */
    BCMOLT_TUNE_OUT_FAIL_REASON_FORCE_DEACTIVATE = 6, /**< force deactivate. */
    BCMOLT_TUNE_OUT_FAIL_REASON__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_tune_out_fail_reason;

/** UART baud rate. */
typedef enum
{
    BCMOLT_UART_BAUDRATE__BEGIN = 0,
    BCMOLT_UART_BAUDRATE_UART_RATE_4800 = 0, /**< UART rate 4800. */
    BCMOLT_UART_BAUDRATE_UART_RATE_9600 = 1, /**< UART rate 9600. */
    BCMOLT_UART_BAUDRATE_UART_RATE_14400 = 2, /**< UART rate 14400. */
    BCMOLT_UART_BAUDRATE_UART_RATE_19200 = 3, /**< UART rate 19200. */
    BCMOLT_UART_BAUDRATE_UART_RATE_38400 = 4, /**< UART rate 38400. */
    BCMOLT_UART_BAUDRATE_UART_RATE_57600 = 5, /**< UART rate 57600. */
    BCMOLT_UART_BAUDRATE_UART_RATE_115200 = 6, /**< UART rate 115200. */
    BCMOLT_UART_BAUDRATE_UART_RATE_230400 = 7, /**< UART rate 230400. */
    BCMOLT_UART_BAUDRATE_UART_RATE_380400 = 8, /**< UART rate 380400. */
    BCMOLT_UART_BAUDRATE_UART_RATE_460800 = 9, /**< UART rate 460800. */
    BCMOLT_UART_BAUDRATE_UART_RATE_921600 = 10, /**< UART rate 921600. */
    BCMOLT_UART_BAUDRATE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_uart_baudrate;

/** XGPON ni upstream line rate capabilities */
typedef enum
{
    BCMOLT_UPSTREAM_LINE_RATE_CAPABILITIES__BEGIN = 0,
    BCMOLT_UPSTREAM_LINE_RATE_CAPABILITIES_RATE_2_P_5_G = 0, /**< 2.5G Upstream line rate capability */
    BCMOLT_UPSTREAM_LINE_RATE_CAPABILITIES_RATE_10_G = 1, /**< 10G Upstream line rate capability */
    BCMOLT_UPSTREAM_LINE_RATE_CAPABILITIES_RATE_1_G = 2, /**< 1G Upstream line rate capability */
    BCMOLT_UPSTREAM_LINE_RATE_CAPABILITIES_RATE_DUAL_2_P_5_G_AND_10_G = 3, /**< dual 2.5G and 10G upstream line rate capability. */
    BCMOLT_UPSTREAM_LINE_RATE_CAPABILITIES__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_upstream_line_rate_capabilities;

/** us_gem_port_destination. */
typedef enum
{
    BCMOLT_US_GEM_PORT_DESTINATION__BEGIN = 0,
    BCMOLT_US_GEM_PORT_DESTINATION_DATA = 0, /**< data. */
    BCMOLT_US_GEM_PORT_DESTINATION_CPU = 1, /**< cpu. */
    BCMOLT_US_GEM_PORT_DESTINATION_OMCI = 2, /**< omci. */
    BCMOLT_US_GEM_PORT_DESTINATION__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_us_gem_port_destination;

/** US operating wavelength bands. */
typedef enum
{
    BCMOLT_US_OPERATING_WAVELENGTH_BANDS__BEGIN = 0,
    BCMOLT_US_OPERATING_WAVELENGTH_BANDS_EXPANDED_SPECTRUM_WIDE_BAND = 0, /**< Expanded spectrum wide band option */
    BCMOLT_US_OPERATING_WAVELENGTH_BANDS_EXPANDED_SPECTRUM_REDUCED_BAND = 1, /**< Expanded spectrum reduced band option */
    BCMOLT_US_OPERATING_WAVELENGTH_BANDS_EXPANDED_SPECTRUM_NARROW_BAND = 2, /**< Expanded spectrum reduced band option */
    BCMOLT_US_OPERATING_WAVELENGTH_BANDS_SHARED_SPECTRUM_WIDE_BAND = 16, /**< Shared spectrum wide band option */
    BCMOLT_US_OPERATING_WAVELENGTH_BANDS_SHARED_SPECTRUM_REDUCED_BAND = 17, /**< Shared spectrum reduced band option */
    BCMOLT_US_OPERATING_WAVELENGTH_BANDS_SHARED_SPECTRUM_NARROW_BAND = 18, /**< Shared spectrum wide narrow option */
    BCMOLT_US_OPERATING_WAVELENGTH_BANDS__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_us_operating_wavelength_bands;

/** XGPON TRX type. */
typedef enum
{
    BCMOLT_XGPON_TRX_TYPE__BEGIN = 0,
    BCMOLT_XGPON_TRX_TYPE_LTH_7222_PC = 0, /**< Ligent LTH 7222-PC. */
    BCMOLT_XGPON_TRX_TYPE_WTD_RTXM266_702 = 2, /**< WTD_RTXM266_702. */
    BCMOLT_XGPON_TRX_TYPE_LTH_7222_BC_PLUS = 3, /**< SFP+ */
    BCMOLT_XGPON_TRX_TYPE_LTH_7226_PC = 4, /**< XGS */
    BCMOLT_XGPON_TRX_TYPE_LTH_5302_PC = 5, /**< 10G EPON for XGS mode */
    BCMOLT_XGPON_TRX_TYPE_LTW_627_X_PC = 8, /**< Supports NGPON2 TRx for various channels */
    BCMOLT_XGPON_TRX_TYPE_XPP_XE_R_3_CDFB = 9, /**< 10G EPON for XGS mode */
    BCMOLT_XGPON_TRX_TYPE_LTH_7226_A_PC_PLUS = 10, /**< for XGS XGPON coex TDMA mode */
    BCMOLT_XGPON_TRX_TYPE_D272RR_SSCB_DM = 11, /**< xgs muiti mode TRX */
    BCMOLT_XGPON_TRX_TYPE_LTH_5308 = 12, /**< XGS / GPON Combo Trx */
    BCMOLT_XGPON_TRX_TYPE__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_xgpon_trx_type;

/** Identifiers for all objects in the system. */
typedef enum
{
    BCMOLT_OBJ_ID__BEGIN = 1,
    BCMOLT_OBJ_ID_DEVICE = 1, /**< Device. */
    BCMOLT_OBJ_ID_FLOW = 4, /**< BAL Flow. */
    BCMOLT_OBJ_ID_GPIO = 5, /**< GPIO. */
    BCMOLT_OBJ_ID_GROUP = 6, /**< BAL Group. */
    BCMOLT_OBJ_ID_INTERNAL_NNI = 7, /**< Internal NNI. */
    BCMOLT_OBJ_ID_ITUPON_ALLOC = 8, /**< ITU PON Alloc. */
    BCMOLT_OBJ_ID_ITUPON_GEM = 9, /**< ITU PON GEM Port. */
    BCMOLT_OBJ_ID_LOG = 15, /**< Log. */
    BCMOLT_OBJ_ID_LOG_FILE = 16, /**< Log File. */
    BCMOLT_OBJ_ID_NGPON2_CHANNEL = 17, /**< Channel. */
    BCMOLT_OBJ_ID_NNI_INTERFACE = 18, /**< nni_interface. */
    BCMOLT_OBJ_ID_OLT = 19, /**< olt. */
    BCMOLT_OBJ_ID_ONU = 20, /**< ONU. */
    BCMOLT_OBJ_ID_PBIT_TO_TC = 21, /**< pbit_to_tc. */
    BCMOLT_OBJ_ID_PON_INTERFACE = 22, /**< pon interface. */
    BCMOLT_OBJ_ID_SOFTWARE_ERROR = 23, /**< Software Error. */
    BCMOLT_OBJ_ID_TC_TO_QUEUE = 24, /**< tc_to_queue. */
    BCMOLT_OBJ_ID_TM_QUEUE = 25, /**< tm_queue. */
    BCMOLT_OBJ_ID_TM_SCHED = 26, /**< tm_sched. */
    BCMOLT_OBJ_ID_INBAND_MGMT_CHANNEL = 31, /**< BAL Inband Management Channel. */
    BCMOLT_OBJ_ID_ERPS_INTERFACE = 33, /**< ERPS Interface. */
    BCMOLT_OBJ_ID_PROTECTION_INTERFACE = 34, /**< Protection Interface. */
    BCMOLT_OBJ_ID_TM_QMP = 35, /**< tm_qmp. */
    BCMOLT_OBJ_ID_ETH_OAM = 36, /**< Ethernet OAM. */
    BCMOLT_OBJ_ID_POLICER_PROFILE = 39, /**< policer (aka meter) profile. */
    BCMOLT_OBJ_ID_ACCESS_CONTROL = 40, /**< access control. */
    BCMOLT_OBJ_ID_SWITCH_INNI = 41, /**< switch inni. */
    BCMOLT_OBJ_ID_LAG_INTERFACE = 42, /**< LAG interface. */
    BCMOLT_OBJ_ID_BAL_SYSTEM = 43, /**< BAL System Globals. */
    BCMOLT_OBJ_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_obj_id__begin BCMOLT_OBJ_ID__BEGIN
#define bcmolt_obj_id_device BCMOLT_OBJ_ID_DEVICE
#define bcmolt_obj_id_flow BCMOLT_OBJ_ID_FLOW
#define bcmolt_obj_id_gpio BCMOLT_OBJ_ID_GPIO
#define bcmolt_obj_id_group BCMOLT_OBJ_ID_GROUP
#define bcmolt_obj_id_internal_nni BCMOLT_OBJ_ID_INTERNAL_NNI
#define bcmolt_obj_id_itupon_alloc BCMOLT_OBJ_ID_ITUPON_ALLOC
#define bcmolt_obj_id_itupon_gem BCMOLT_OBJ_ID_ITUPON_GEM
#define bcmolt_obj_id_log BCMOLT_OBJ_ID_LOG
#define bcmolt_obj_id_log_file BCMOLT_OBJ_ID_LOG_FILE
#define bcmolt_obj_id_ngpon2_channel BCMOLT_OBJ_ID_NGPON2_CHANNEL
#define bcmolt_obj_id_nni_interface BCMOLT_OBJ_ID_NNI_INTERFACE
#define bcmolt_obj_id_olt BCMOLT_OBJ_ID_OLT
#define bcmolt_obj_id_onu BCMOLT_OBJ_ID_ONU
#define bcmolt_obj_id_pbit_to_tc BCMOLT_OBJ_ID_PBIT_TO_TC
#define bcmolt_obj_id_pon_interface BCMOLT_OBJ_ID_PON_INTERFACE
#define bcmolt_obj_id_software_error BCMOLT_OBJ_ID_SOFTWARE_ERROR
#define bcmolt_obj_id_tc_to_queue BCMOLT_OBJ_ID_TC_TO_QUEUE
#define bcmolt_obj_id_tm_queue BCMOLT_OBJ_ID_TM_QUEUE
#define bcmolt_obj_id_tm_sched BCMOLT_OBJ_ID_TM_SCHED
#define bcmolt_obj_id_inband_mgmt_channel BCMOLT_OBJ_ID_INBAND_MGMT_CHANNEL
#define bcmolt_obj_id_erps_interface BCMOLT_OBJ_ID_ERPS_INTERFACE
#define bcmolt_obj_id_protection_interface BCMOLT_OBJ_ID_PROTECTION_INTERFACE
#define bcmolt_obj_id_tm_qmp BCMOLT_OBJ_ID_TM_QMP
#define bcmolt_obj_id_eth_oam BCMOLT_OBJ_ID_ETH_OAM
#define bcmolt_obj_id_policer_profile BCMOLT_OBJ_ID_POLICER_PROFILE
#define bcmolt_obj_id_access_control BCMOLT_OBJ_ID_ACCESS_CONTROL
#define bcmolt_obj_id_switch_inni BCMOLT_OBJ_ID_SWITCH_INNI
#define bcmolt_obj_id_lag_interface BCMOLT_OBJ_ID_LAG_INTERFACE
#define bcmolt_obj_id_bal_system BCMOLT_OBJ_ID_BAL_SYSTEM
#define bcmolt_obj_id__num_of BCMOLT_OBJ_ID__NUM_OF
#define bcmolt_obj_id_all_properties 0xFFFF
#define bcmolt_obj_id_full_mask 0xF9E87FF83F2

} bcmolt_obj_id;

/** Identifiers for all possible groups under all objects in the system. */
typedef enum
{
    BCMOLT_API_GROUP_ID__BEGIN = 0,
    BCMOLT_API_GROUP_ID_ACCESS_CONTROL_KEY = 0, /**< access control - key. */
    BCMOLT_API_GROUP_ID_ACCESS_CONTROL_CFG = 1, /**< access control - cfg. */
    BCMOLT_API_GROUP_ID_ACCESS_CONTROL_RECEIVE_ETH_PACKET = 2, /**< access control - receive_eth_packet. */
    BCMOLT_API_GROUP_ID_ACCESS_CONTROL_INTERFACES_UPDATE = 3, /**< access control - update interface reference. */
    BCMOLT_API_GROUP_ID_ACCESS_CONTROL_AUTO_CFG = 4, /**< access control - Indication Configuration. */
    BCMOLT_API_GROUP_ID_BAL_SYSTEM_CFG = 5, /**< BAL System Globals - cfg. */
    BCMOLT_API_GROUP_ID_BAL_SYSTEM_KEY = 6, /**< BAL System Globals - key. */
    BCMOLT_API_GROUP_ID_DEVICE_KEY = 7, /**< Device - key. */
    BCMOLT_API_GROUP_ID_DEVICE_CFG = 8, /**< Device - cfg. */
    BCMOLT_API_GROUP_ID_DEVICE_CONNECT = 9, /**< Device - Connect. */
    BCMOLT_API_GROUP_ID_DEVICE_DISCONNECT = 10, /**< Device - Device Disconnect. */
    BCMOLT_API_GROUP_ID_DEVICE_RESET = 11, /**< Device - Device Reset. */
    BCMOLT_API_GROUP_ID_DEVICE_HOST_KEEP_ALIVE = 12, /**< Device - Host Keep Alive (Internal). */
    BCMOLT_API_GROUP_ID_DEVICE_SW_UPGRADE_ACTIVATE = 13, /**< Device - SW upgrade activate. */
    BCMOLT_API_GROUP_ID_DEVICE_SET_8021_AS_TOD_STRING = 14, /**< Device - Set ToD String for 802.1AS. */
    BCMOLT_API_GROUP_ID_DEVICE_IMAGE_TRANSFER_START = 15, /**< Device - Start Image Transfer Operation. */
    BCMOLT_API_GROUP_ID_DEVICE_IMAGE_TRANSFER_DATA = 16, /**< Device - Image Data Transfer Operation (Internal). */
    BCMOLT_API_GROUP_ID_DEVICE_RUN_DDR_TEST = 17, /**< Device - Run DDR Test. */
    BCMOLT_API_GROUP_ID_DEVICE_DEVICE_READY = 18, /**< Device - Device Ready. */
    BCMOLT_API_GROUP_ID_DEVICE_CONNECTION_ESTABLISHED = 19, /**< Device - Connection Established. */
    BCMOLT_API_GROUP_ID_DEVICE_DEVICE_KEEP_ALIVE = 20, /**< Device - Device Keep Alive. */
    BCMOLT_API_GROUP_ID_DEVICE_CONNECTION_FAILURE = 21, /**< Device - Connection Failure. */
    BCMOLT_API_GROUP_ID_DEVICE_CONNECTION_COMPLETE = 22, /**< Device - Connection Complete. */
    BCMOLT_API_GROUP_ID_DEVICE_DISCONNECTION_COMPLETE = 23, /**< Device - Disconnection Complete. */
    BCMOLT_API_GROUP_ID_DEVICE_SW_ERROR = 24, /**< Device - sw error. */
    BCMOLT_API_GROUP_ID_DEVICE_SW_EXCEPTION = 25, /**< Device - sw exception. */
    BCMOLT_API_GROUP_ID_DEVICE_IMAGE_TRANSFER_COMPLETE = 26, /**< Device - Image Transfer Complete. */
    BCMOLT_API_GROUP_ID_DEVICE_DDR_TEST_COMPLETE = 27, /**< Device - DDR Test Complete. */
    BCMOLT_API_GROUP_ID_DEVICE_SW_HEALTH_CHECK_FAILURE = 28, /**< Device - Software Health Check Failure. */
    BCMOLT_API_GROUP_ID_DEVICE_AUTO_CFG = 29, /**< Device - Indication Configuration. */
    BCMOLT_API_GROUP_ID_ERPS_INTERFACE_KEY = 30, /**< ERPS Interface - key. */
    BCMOLT_API_GROUP_ID_ERPS_INTERFACE_CFG = 31, /**< ERPS Interface - cfg. */
    BCMOLT_API_GROUP_ID_ERPS_INTERFACE_SET_RING_PORT_CONTROL = 32, /**< ERPS Interface - Set Ring Port Control. */
    BCMOLT_API_GROUP_ID_ERPS_INTERFACE_RING_PORT_CONTROL = 33, /**< ERPS Interface - Ring Port Control. */
    BCMOLT_API_GROUP_ID_ERPS_INTERFACE_AUTO_CFG = 34, /**< ERPS Interface - Indication Configuration. */
    BCMOLT_API_GROUP_ID_ETH_OAM_KEY = 35, /**< Ethernet OAM - key. */
    BCMOLT_API_GROUP_ID_ETH_OAM_CFG = 36, /**< Ethernet OAM - cfg. */
    BCMOLT_API_GROUP_ID_ETH_OAM_CCM_EVENT = 37, /**< Ethernet OAM - CFM CCM Event. */
    BCMOLT_API_GROUP_ID_ETH_OAM_SET_MEP_STATE = 38, /**< Ethernet OAM - Set MEP Control State. */
    BCMOLT_API_GROUP_ID_ETH_OAM_STATE_CHANGE = 39, /**< Ethernet OAM - State Change. */
    BCMOLT_API_GROUP_ID_ETH_OAM_AUTO_CFG = 40, /**< Ethernet OAM - Indication Configuration. */
    BCMOLT_API_GROUP_ID_FLOW_CFG = 41, /**< BAL Flow - cfg. */
    BCMOLT_API_GROUP_ID_FLOW_KEY = 42, /**< BAL Flow - key. */
    BCMOLT_API_GROUP_ID_FLOW_SEND_ETH_PACKET = 43, /**< BAL Flow - send_eth_packet. */
    BCMOLT_API_GROUP_ID_GPIO_KEY = 44, /**< GPIO - key. */
    BCMOLT_API_GROUP_ID_GPIO_CFG = 45, /**< GPIO - cfg. */
    BCMOLT_API_GROUP_ID_GROUP_CFG = 46, /**< BAL Group - cfg. */
    BCMOLT_API_GROUP_ID_GROUP_KEY = 47, /**< BAL Group - key. */
    BCMOLT_API_GROUP_ID_GROUP_MEMBERS_UPDATE = 48, /**< BAL Group - members_update. */
    BCMOLT_API_GROUP_ID_GROUP_COMPLETE_MEMBERS_UPDATE = 49, /**< BAL Group - complete_members_update. */
    BCMOLT_API_GROUP_ID_GROUP_AUTO_CFG = 50, /**< BAL Group - Indication Configuration. */
    BCMOLT_API_GROUP_ID_INBAND_MGMT_CHANNEL_CFG = 51, /**< BAL Inband Management Channel - cfg. */
    BCMOLT_API_GROUP_ID_INBAND_MGMT_CHANNEL_KEY = 52, /**< BAL Inband Management Channel - key. */
    BCMOLT_API_GROUP_ID_INTERNAL_NNI_KEY = 53, /**< Internal NNI - key. */
    BCMOLT_API_GROUP_ID_INTERNAL_NNI_CFG = 54, /**< Internal NNI - cfg. */
    BCMOLT_API_GROUP_ID_INTERNAL_NNI_STATUS_CHANGED = 55, /**< Internal NNI - Status changed. */
    BCMOLT_API_GROUP_ID_INTERNAL_NNI_AUTO_CFG = 56, /**< Internal NNI - Indication Configuration. */
    BCMOLT_API_GROUP_ID_ITUPON_ALLOC_KEY = 57, /**< ITU PON Alloc - key. */
    BCMOLT_API_GROUP_ID_ITUPON_ALLOC_CFG = 58, /**< ITU PON Alloc - cfg. */
    BCMOLT_API_GROUP_ID_ITUPON_ALLOC_CONFIGURATION_COMPLETED = 59, /**< ITU PON Alloc - Configuration Completed. */
    BCMOLT_API_GROUP_ID_ITUPON_ALLOC_GET_STATS = 60, /**< ITU PON Alloc - Get statistics. */
    BCMOLT_API_GROUP_ID_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED = 61, /**< ITU PON Alloc - Get alloc ID statistics completed. */
    BCMOLT_API_GROUP_ID_ITUPON_ALLOC_SET_STATE = 62, /**< ITU PON Alloc - Set state. */
    BCMOLT_API_GROUP_ID_ITUPON_ALLOC_AUTO_CFG = 63, /**< ITU PON Alloc - Indication Configuration. */
    BCMOLT_API_GROUP_ID_ITUPON_GEM_KEY = 64, /**< ITU PON GEM Port - key. */
    BCMOLT_API_GROUP_ID_ITUPON_GEM_CFG = 65, /**< ITU PON GEM Port - cfg. */
    BCMOLT_API_GROUP_ID_ITUPON_GEM_CONFIGURATION_COMPLETED = 66, /**< ITU PON GEM Port - Configuration Completed. */
    BCMOLT_API_GROUP_ID_ITUPON_GEM_SET_STATE = 67, /**< ITU PON GEM Port - Set state. */
    BCMOLT_API_GROUP_ID_ITUPON_GEM_AUTO_CFG = 68, /**< ITU PON GEM Port - Indication Configuration. */
    BCMOLT_API_GROUP_ID_LAG_INTERFACE_KEY = 69, /**< LAG interface - key. */
    BCMOLT_API_GROUP_ID_LAG_INTERFACE_CFG = 70, /**< LAG interface - cfg. */
    BCMOLT_API_GROUP_ID_LAG_INTERFACE_MEMBERS_UPDATE = 71, /**< LAG interface - members_update. */
    BCMOLT_API_GROUP_ID_LAG_INTERFACE_COMPLETE_MEMBERS_UPDATE = 72, /**< LAG interface - complete_members_update. */
    BCMOLT_API_GROUP_ID_LAG_INTERFACE_STATE_UPDATE = 73, /**< LAG interface - state_update. */
    BCMOLT_API_GROUP_ID_LAG_INTERFACE_STATE_UPDATED = 74, /**< LAG interface - interface state updated. */
    BCMOLT_API_GROUP_ID_LAG_INTERFACE_LAG_HEALTH_CHANGE = 75, /**< LAG interface - LAG health change. */
    BCMOLT_API_GROUP_ID_LAG_INTERFACE_AUTO_CFG = 76, /**< LAG interface - Indication Configuration. */
    BCMOLT_API_GROUP_ID_LOG_KEY = 77, /**< Log - key. */
    BCMOLT_API_GROUP_ID_LOG_CFG = 78, /**< Log - cfg. */
    BCMOLT_API_GROUP_ID_LOG_FILE_KEY = 79, /**< Log File - key. */
    BCMOLT_API_GROUP_ID_LOG_FILE_CFG = 80, /**< Log File - cfg. */
    BCMOLT_API_GROUP_ID_LOG_FILE_CLEAR = 81, /**< Log File - Clear. */
    BCMOLT_API_GROUP_ID_LOG_FILE_RESET_BUFFER_PTR = 82, /**< Log File - Reset Buffer Pointer. */
    BCMOLT_API_GROUP_ID_NGPON2_CHANNEL_KEY = 83, /**< Channel - key. */
    BCMOLT_API_GROUP_ID_NGPON2_CHANNEL_CFG = 84, /**< Channel - cfg. */
    BCMOLT_API_GROUP_ID_NNI_INTERFACE_KEY = 85, /**< nni_interface - key. */
    BCMOLT_API_GROUP_ID_NNI_INTERFACE_STATE_CHANGE = 86, /**< nni_interface - State Change. */
    BCMOLT_API_GROUP_ID_NNI_INTERFACE_CFG = 87, /**< nni_interface - cfg. */
    BCMOLT_API_GROUP_ID_NNI_INTERFACE_SET_NNI_STATE = 88, /**< nni_interface - set_nni_state. */
    BCMOLT_API_GROUP_ID_NNI_INTERFACE_LINK_STATE_CHANGE = 89, /**< nni_interface - link_state_change. */
    BCMOLT_API_GROUP_ID_NNI_INTERFACE_AUTO_CFG = 90, /**< nni_interface - Indication Configuration. */
    BCMOLT_API_GROUP_ID_OLT_KEY = 91, /**< olt - key. */
    BCMOLT_API_GROUP_ID_OLT_CFG = 92, /**< olt - cfg. */
    BCMOLT_API_GROUP_ID_OLT_CONNECT = 93, /**< olt - connect. */
    BCMOLT_API_GROUP_ID_OLT_CONNECTED = 94, /**< olt - connected. */
    BCMOLT_API_GROUP_ID_OLT_DISCONNECT = 95, /**< olt - disconnect. */
    BCMOLT_API_GROUP_ID_OLT_BAL_RESET = 96, /**< olt - Reset BAL and Switch. */
    BCMOLT_API_GROUP_ID_OLT_DISCONNECTED = 97, /**< olt - disconnected. */
    BCMOLT_API_GROUP_ID_OLT_BAL_FAILURE = 98, /**< olt - BAL and/or Switch Failed. */
    BCMOLT_API_GROUP_ID_OLT_BAL_READY = 99, /**< olt - BAL and Switch Ready. */
    BCMOLT_API_GROUP_ID_OLT_SW_ERROR = 100, /**< olt - OLT Software error. */
    BCMOLT_API_GROUP_ID_OLT_RESET = 101, /**< olt - OLT Reset. */
    BCMOLT_API_GROUP_ID_OLT_AUTO_CFG = 102, /**< olt - Indication Configuration. */
    BCMOLT_API_GROUP_ID_ONU_KEY = 103, /**< ONU - key. */
    BCMOLT_API_GROUP_ID_ONU_CFG = 104, /**< ONU - cfg. */
    BCMOLT_API_GROUP_ID_ONU_SET_ONU_STATE = 105, /**< ONU - Set ONU State. */
    BCMOLT_API_GROUP_ID_ONU_RSSI_MEASUREMENT = 106, /**< ONU - RSSI Measurement. */
    BCMOLT_API_GROUP_ID_ONU_REQUEST_REGISTRATION = 107, /**< ONU - Request registration. */
    BCMOLT_API_GROUP_ID_ONU_CHANGE_POWER_LEVELLING = 108, /**< ONU - Change power levelling. */
    BCMOLT_API_GROUP_ID_ONU_GET_POWER_LEVEL = 109, /**< ONU - Get power level. */
    BCMOLT_API_GROUP_ID_ONU_GET_POWER_CONSUMPTION = 110, /**< ONU - Get power consumption. */
    BCMOLT_API_GROUP_ID_ONU_ADJUST_TX_WAVELENGTH = 111, /**< ONU - Adjust Tx wavelength. */
    BCMOLT_API_GROUP_ID_ONU_SECURE_MUTUAL_AUTHENTICATION = 112, /**< ONU - Secure mutual authentication. */
    BCMOLT_API_GROUP_ID_ONU_TUNING_IN = 113, /**< ONU - ONU Tuning in. */
    BCMOLT_API_GROUP_ID_ONU_TUNING_OUT = 114, /**< ONU - ONU Tuning out. */
    BCMOLT_API_GROUP_ID_ONU_XGPON_ALARM = 115, /**< ONU - XGPON ONU Alarm. */
    BCMOLT_API_GROUP_ID_ONU_GPON_ALARM = 116, /**< ONU - GPON ONU Alarm. */
    BCMOLT_API_GROUP_ID_ONU_DOWI = 117, /**< ONU - Drift of Window of ONUi. */
    BCMOLT_API_GROUP_ID_ONU_SFI = 118, /**< ONU - Signal Fail of ONUi. */
    BCMOLT_API_GROUP_ID_ONU_SDI = 119, /**< ONU - Signal Degraded of ONUi. */
    BCMOLT_API_GROUP_ID_ONU_DFI = 120, /**< ONU - Receive Dying-Gasp of ONUi. */
    BCMOLT_API_GROUP_ID_ONU_PQSI = 121, /**< ONU - ploam queue status. */
    BCMOLT_API_GROUP_ID_ONU_SUFI = 122, /**< ONU - SUFi. */
    BCMOLT_API_GROUP_ID_ONU_TIWI = 123, /**< ONU - Transmission Interference Warning. */
    BCMOLT_API_GROUP_ID_ONU_LOOCI = 124, /**< ONU - LOOCi. */
    BCMOLT_API_GROUP_ID_ONU_LOAI = 125, /**< ONU - LOAi. */
    BCMOLT_API_GROUP_ID_ONU_DGI = 126, /**< ONU - Receive Dying-Gasp of ONUi. */
    BCMOLT_API_GROUP_ID_ONU_PEE = 127, /**< ONU - PEE. */
    BCMOLT_API_GROUP_ID_ONU_PST = 128, /**< ONU - PST. */
    BCMOLT_API_GROUP_ID_ONU_RANGING_COMPLETED = 129, /**< ONU - Ranging Completed. */
    BCMOLT_API_GROUP_ID_ONU_ONU_ACTIVATION_COMPLETED = 130, /**< ONU - ONU Activation Completed. */
    BCMOLT_API_GROUP_ID_ONU_ONU_DEACTIVATION_COMPLETED = 131, /**< ONU - ONU Deactivation Completed. */
    BCMOLT_API_GROUP_ID_ONU_ONU_ENABLE_COMPLETED = 132, /**< ONU - ONU Enable Completed. */
    BCMOLT_API_GROUP_ID_ONU_ONU_DISABLE_COMPLETED = 133, /**< ONU - ONU Disable Completed. */
    BCMOLT_API_GROUP_ID_ONU_RSSI_MEASUREMENT_COMPLETED = 134, /**< ONU - RSSI Measurement Completed. */
    BCMOLT_API_GROUP_ID_ONU_INVALID_DBRU_REPORT = 135, /**< ONU - Invalid DBRu Report. */
    BCMOLT_API_GROUP_ID_ONU_KEY_EXCHANGE_COMPLETED = 136, /**< ONU - Key Exchange Completed. */
    BCMOLT_API_GROUP_ID_ONU_KEY_EXCHANGE_KEY_REQUEST_TIMEOUT = 137, /**< ONU - Key Exchange Key Request Timeout. */
    BCMOLT_API_GROUP_ID_ONU_KEY_EXCHANGE_CYCLE_SKIPPED = 138, /**< ONU - Key Exchange Cycle Skipped. */
    BCMOLT_API_GROUP_ID_ONU_KEY_EXCHANGE_KEY_MISMATCH = 139, /**< ONU - Key Exchange Key Mismatch. */
    BCMOLT_API_GROUP_ID_ONU_OPTICAL_REFLECTION = 140, /**< ONU - Optical Reflection. */
    BCMOLT_API_GROUP_ID_ONU_LOKI = 141, /**< ONU - LOki. */
    BCMOLT_API_GROUP_ID_ONU_MEMI = 142, /**< ONU - MEMi. */
    BCMOLT_API_GROUP_ID_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED = 143, /**< ONU - OMCI PORT ID Configuration Completed. */
    BCMOLT_API_GROUP_ID_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED = 144, /**< ONU - BER Interval Configuration Completed. */
    BCMOLT_API_GROUP_ID_ONU_ERR = 145, /**< ONU - ERR. */
    BCMOLT_API_GROUP_ID_ONU_PASSWORD_AUTHENTICATION_COMPLETED = 146, /**< ONU - Password Authentication Completed. */
    BCMOLT_API_GROUP_ID_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX = 147, /**< ONU - Key Exchange Unconsecutive Index. */
    BCMOLT_API_GROUP_ID_ONU_KEY_EXCHANGE_DECRYPT_REQUIRED = 148, /**< ONU - Key Exchange Decrypt Required. */
    BCMOLT_API_GROUP_ID_ONU_ONU_ACTIVATION_STANDBY_COMPLETED = 149, /**< ONU - onu activation standby completed. */
    BCMOLT_API_GROUP_ID_ONU_POWER_MANAGEMENT_STATE_CHANGE = 150, /**< ONU - Power Management State Change. */
    BCMOLT_API_GROUP_ID_ONU_POSSIBLE_DRIFT = 151, /**< ONU - Possible Drift. */
    BCMOLT_API_GROUP_ID_ONU_REGISTRATION_ID = 152, /**< ONU - Registration ID. */
    BCMOLT_API_GROUP_ID_ONU_POWER_LEVEL_REPORT = 153, /**< ONU - Power level report. */
    BCMOLT_API_GROUP_ID_ONU_POWER_CONSUMPTION_REPORT = 154, /**< ONU - Power consumption report. */
    BCMOLT_API_GROUP_ID_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE = 155, /**< ONU - secure mutual authentication failure. */
    BCMOLT_API_GROUP_ID_ONU_ONU_TUNING_OUT_COMPLETED = 156, /**< ONU - ONU Tuning out completed. */
    BCMOLT_API_GROUP_ID_ONU_ONU_TUNING_IN_COMPLETED = 157, /**< ONU - ONU Tuning in completed. */
    BCMOLT_API_GROUP_ID_ONU_TUNING_RESPONSE = 158, /**< ONU - Tuning response. */
    BCMOLT_API_GROUP_ID_ONU_PLOAM_PACKET = 159, /**< ONU - PLOAM Packet. */
    BCMOLT_API_GROUP_ID_ONU_CPU_PACKETS = 160, /**< ONU - XGPON CPU packets. */
    BCMOLT_API_GROUP_ID_ONU_CPU_PACKET = 161, /**< ONU - XGPON CPU packet. */
    BCMOLT_API_GROUP_ID_ONU_OMCI_PACKET = 162, /**< ONU - XGPON OMCI packet. */
    BCMOLT_API_GROUP_ID_ONU_ONU_READY_FOR_DATA_GRANT = 163, /**< ONU - ONU is ready to be granted data accesses. */
    BCMOLT_API_GROUP_ID_ONU_REI = 164, /**< ONU - REI. */
    BCMOLT_API_GROUP_ID_ONU_FORCE_DEACTIVATION = 165, /**< ONU - Force deactivation. */
    BCMOLT_API_GROUP_ID_ONU_STATE_CHANGE = 166, /**< ONU - State Change. */
    BCMOLT_API_GROUP_ID_ONU_AUTO_CFG = 167, /**< ONU - Indication Configuration. */
    BCMOLT_API_GROUP_ID_PBIT_TO_TC_KEY = 168, /**< pbit_to_tc - key. */
    BCMOLT_API_GROUP_ID_PBIT_TO_TC_CFG = 169, /**< pbit_to_tc - cfg. */
    BCMOLT_API_GROUP_ID_POLICER_PROFILE_KEY = 170, /**< policer (aka meter) profile - key. */
    BCMOLT_API_GROUP_ID_POLICER_PROFILE_CFG = 171, /**< policer (aka meter) profile - cfg. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_KEY = 172, /**< pon interface - key. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_CFG = 173, /**< pon interface - cfg. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_SET_PON_INTERFACE_STATE = 174, /**< pon interface - Set PON Interface State. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_SET_ONU_STATE = 175, /**< pon interface - Set ONU State. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_RESET = 176, /**< pon interface - Reset. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_DISABLE_SERIAL_NUMBER = 177, /**< pon interface - Disable Serial Number. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_SINGLE_REQUEST_STANDBY_PON_MONITORING = 178, /**< pon interface - Single request standby PON Monitoring. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_RUN_SPECIAL_BW_MAP = 179, /**< pon interface - Run Special BW Map. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_TOD_REQUEST = 180, /**< pon interface - TOD request. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_START_ONU_UPGRADE = 181, /**< pon interface - Start ONU Firmware Upgrade. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_ABORT_ONU_UPGRADE = 182, /**< pon interface - Abort ONU Firmware Upgrade. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE = 183, /**< pon interface - protection switching type c set multiple onu state. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA = 184, /**< pon interface - Protection switching apply re-range delta (IEEE). */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_CPU_PACKETS = 185, /**< pon interface - XGPON CPU packets. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_BROADCAST_PLOAM_PACKET = 186, /**< pon interface - Broadcast PLOAM Packet. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_STATE_CHANGE_COMPLETED = 187, /**< pon interface - State Change Completed. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_TOD_REQUEST_COMPLETED = 188, /**< pon interface - TOD request completed. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_LOS = 189, /**< pon interface - LOS. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_SERIAL_NUMBER_ACQUISITION_CYCLE_START = 190, /**< pon interface - Serial Number Acquisition Cycle Start. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_PROTECTION_SWITCHING_TRAFFIC_RESUME = 191, /**< pon interface - Protection Switching Traffic Resume. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_PROTECTION_SWITCHING_ONUS_RANGED = 192, /**< pon interface - Protection Switching ONUs Ranged. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_PROTECTION_SWITCHING_RERANGE_FAILURE = 193, /**< pon interface - Protection Switching Re-range failure  (IEEE). */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED = 194, /**< pon interface - Protection Switching Switchover Completed. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED = 195, /**< pon interface - Standby PON Monitoring Cycle Completed. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_ONU_DISCOVERED = 196, /**< pon interface - ONU Discovered. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_CPU_PACKETS_FAILURE = 197, /**< pon interface - CPU Packets Failure. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_DEACTIVATE_ALL_ONUS_COMPLETED = 198, /**< pon interface - deactivate all onus completed. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_DISABLE_ALL_ONUS_COMPLETED = 199, /**< pon interface - disable all onus completed. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_ACTIVATE_ALL_ONUS_COMPLETED = 200, /**< pon interface - activate all onus completed. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_ENABLE_ALL_ONUS_COMPLETED = 201, /**< pon interface - enable all onus completed. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_ONU_UPGRADE_COMPLETE = 202, /**< pon interface - ONU Upgrade Complete. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_IEEE_ROGUE_DETECTION_COMPLETED = 203, /**< pon interface - IEEE Rogue Detection Completed. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_MPCP_TIMESTAMP_CHANGED = 204, /**< pon interface - MPCP Timestamp Changed. */
    BCMOLT_API_GROUP_ID_PON_INTERFACE_AUTO_CFG = 205, /**< pon interface - Indication Configuration. */
    BCMOLT_API_GROUP_ID_PROTECTION_INTERFACE_KEY = 206, /**< Protection Interface - key. */
    BCMOLT_API_GROUP_ID_PROTECTION_INTERFACE_CFG = 207, /**< Protection Interface - cfg. */
    BCMOLT_API_GROUP_ID_PROTECTION_INTERFACE_PROTECTION_SWITCH = 208, /**< Protection Interface - Protection Switch. */
    BCMOLT_API_GROUP_ID_PROTECTION_INTERFACE_PROTECTION_SWITCH_COMPLETED = 209, /**< Protection Interface - Protection Switch Completed. */
    BCMOLT_API_GROUP_ID_PROTECTION_INTERFACE_AUTO_CFG = 210, /**< Protection Interface - Indication Configuration. */
    BCMOLT_API_GROUP_ID_SOFTWARE_ERROR_KEY = 211, /**< Software Error - key. */
    BCMOLT_API_GROUP_ID_SOFTWARE_ERROR_CFG = 212, /**< Software Error - cfg. */
    BCMOLT_API_GROUP_ID_SWITCH_INNI_KEY = 213, /**< switch inni - key. */
    BCMOLT_API_GROUP_ID_SWITCH_INNI_CFG = 214, /**< switch inni - cfg. */
    BCMOLT_API_GROUP_ID_TC_TO_QUEUE_KEY = 215, /**< tc_to_queue - key. */
    BCMOLT_API_GROUP_ID_TC_TO_QUEUE_CFG = 216, /**< tc_to_queue - cfg. */
    BCMOLT_API_GROUP_ID_TM_QMP_KEY = 217, /**< tm_qmp - key. */
    BCMOLT_API_GROUP_ID_TM_QMP_CFG = 218, /**< tm_qmp - cfg. */
    BCMOLT_API_GROUP_ID_TM_QUEUE_KEY = 219, /**< tm_queue - key. */
    BCMOLT_API_GROUP_ID_TM_QUEUE_CFG = 220, /**< tm_queue - cfg. */
    BCMOLT_API_GROUP_ID_TM_SCHED_KEY = 221, /**< tm_sched - key. */
    BCMOLT_API_GROUP_ID_TM_SCHED_CFG = 222, /**< tm_sched - cfg. */
    BCMOLT_API_GROUP_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */
} bcmolt_api_group_id;

/** List of all access_control groups of type auto. */
typedef enum
{
    BCMOLT_ACCESS_CONTROL_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_ACCESS_CONTROL_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ACCESS_CONTROL_AUTO_SUBGROUP_RECEIVE_ETH_PACKET = 1, /**< receive_eth_packet. */
    BCMOLT_ACCESS_CONTROL_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_access_control_auto_subgroup__begin BCMOLT_ACCESS_CONTROL_AUTO_SUBGROUP__BEGIN
#define bcmolt_access_control_auto_subgroup_all BCMOLT_ACCESS_CONTROL_AUTO_SUBGROUP_ALL
#define bcmolt_access_control_auto_subgroup_receive_eth_packet BCMOLT_ACCESS_CONTROL_AUTO_SUBGROUP_RECEIVE_ETH_PACKET
#define bcmolt_access_control_auto_subgroup__num_of BCMOLT_ACCESS_CONTROL_AUTO_SUBGROUP__NUM_OF
#define bcmolt_access_control_auto_subgroup_all_properties 0xFFFF
#define bcmolt_access_control_auto_subgroup_full_mask 0x3

} bcmolt_access_control_auto_subgroup;

/** List of all access_control groups of type oper. */
typedef enum
{
    BCMOLT_ACCESS_CONTROL_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_ACCESS_CONTROL_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ACCESS_CONTROL_OPER_SUBGROUP_INTERFACES_UPDATE = 1, /**< update interface reference. */
    BCMOLT_ACCESS_CONTROL_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_access_control_oper_subgroup__begin BCMOLT_ACCESS_CONTROL_OPER_SUBGROUP__BEGIN
#define bcmolt_access_control_oper_subgroup_all BCMOLT_ACCESS_CONTROL_OPER_SUBGROUP_ALL
#define bcmolt_access_control_oper_subgroup_interfaces_update BCMOLT_ACCESS_CONTROL_OPER_SUBGROUP_INTERFACES_UPDATE
#define bcmolt_access_control_oper_subgroup__num_of BCMOLT_ACCESS_CONTROL_OPER_SUBGROUP__NUM_OF
#define bcmolt_access_control_oper_subgroup_all_properties 0xFFFF
#define bcmolt_access_control_oper_subgroup_full_mask 0x3

} bcmolt_access_control_oper_subgroup;

/** List of all device groups of type auto. */
typedef enum
{
    BCMOLT_DEVICE_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_DEVICE_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_DEVICE_AUTO_SUBGROUP_CONNECTION_COMPLETE = 1, /**< Connection Complete. */
    BCMOLT_DEVICE_AUTO_SUBGROUP_CONNECTION_ESTABLISHED = 2, /**< Connection Established. */
    BCMOLT_DEVICE_AUTO_SUBGROUP_CONNECTION_FAILURE = 3, /**< Connection Failure. */
    BCMOLT_DEVICE_AUTO_SUBGROUP_DDR_TEST_COMPLETE = 4, /**< DDR Test Complete. */
    BCMOLT_DEVICE_AUTO_SUBGROUP_DEVICE_KEEP_ALIVE = 5, /**< Device Keep Alive. */
    BCMOLT_DEVICE_AUTO_SUBGROUP_DEVICE_READY = 6, /**< Device Ready. */
    BCMOLT_DEVICE_AUTO_SUBGROUP_DISCONNECTION_COMPLETE = 7, /**< Disconnection Complete. */
    BCMOLT_DEVICE_AUTO_SUBGROUP_IMAGE_TRANSFER_COMPLETE = 8, /**< Image Transfer Complete. */
    BCMOLT_DEVICE_AUTO_SUBGROUP_SW_ERROR = 9, /**< sw error. */
    BCMOLT_DEVICE_AUTO_SUBGROUP_SW_EXCEPTION = 10, /**< sw exception. */
    BCMOLT_DEVICE_AUTO_SUBGROUP_SW_HEALTH_CHECK_FAILURE = 11, /**< Software Health Check Failure. */
    BCMOLT_DEVICE_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_auto_subgroup__begin BCMOLT_DEVICE_AUTO_SUBGROUP__BEGIN
#define bcmolt_device_auto_subgroup_all BCMOLT_DEVICE_AUTO_SUBGROUP_ALL
#define bcmolt_device_auto_subgroup_connection_complete BCMOLT_DEVICE_AUTO_SUBGROUP_CONNECTION_COMPLETE
#define bcmolt_device_auto_subgroup_connection_established BCMOLT_DEVICE_AUTO_SUBGROUP_CONNECTION_ESTABLISHED
#define bcmolt_device_auto_subgroup_connection_failure BCMOLT_DEVICE_AUTO_SUBGROUP_CONNECTION_FAILURE
#define bcmolt_device_auto_subgroup_ddr_test_complete BCMOLT_DEVICE_AUTO_SUBGROUP_DDR_TEST_COMPLETE
#define bcmolt_device_auto_subgroup_device_keep_alive BCMOLT_DEVICE_AUTO_SUBGROUP_DEVICE_KEEP_ALIVE
#define bcmolt_device_auto_subgroup_device_ready BCMOLT_DEVICE_AUTO_SUBGROUP_DEVICE_READY
#define bcmolt_device_auto_subgroup_disconnection_complete BCMOLT_DEVICE_AUTO_SUBGROUP_DISCONNECTION_COMPLETE
#define bcmolt_device_auto_subgroup_image_transfer_complete BCMOLT_DEVICE_AUTO_SUBGROUP_IMAGE_TRANSFER_COMPLETE
#define bcmolt_device_auto_subgroup_sw_error BCMOLT_DEVICE_AUTO_SUBGROUP_SW_ERROR
#define bcmolt_device_auto_subgroup_sw_exception BCMOLT_DEVICE_AUTO_SUBGROUP_SW_EXCEPTION
#define bcmolt_device_auto_subgroup_sw_health_check_failure BCMOLT_DEVICE_AUTO_SUBGROUP_SW_HEALTH_CHECK_FAILURE
#define bcmolt_device_auto_subgroup__num_of BCMOLT_DEVICE_AUTO_SUBGROUP__NUM_OF
#define bcmolt_device_auto_subgroup_all_properties 0xFFFF
#define bcmolt_device_auto_subgroup_full_mask 0xFFF

} bcmolt_device_auto_subgroup;

/** List of all device groups of type oper. */
typedef enum
{
    BCMOLT_DEVICE_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_DEVICE_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_DEVICE_OPER_SUBGROUP_CONNECT = 1, /**< Connect. */
    BCMOLT_DEVICE_OPER_SUBGROUP_DISCONNECT = 2, /**< Device Disconnect. */
    BCMOLT_DEVICE_OPER_SUBGROUP_HOST_KEEP_ALIVE = 3, /**< Host Keep Alive (Internal). */
    BCMOLT_DEVICE_OPER_SUBGROUP_IMAGE_TRANSFER_DATA = 4, /**< Image Data Transfer Operation (Internal). */
    BCMOLT_DEVICE_OPER_SUBGROUP_IMAGE_TRANSFER_START = 5, /**< Start Image Transfer Operation. */
    BCMOLT_DEVICE_OPER_SUBGROUP_RESET = 6, /**< Device Reset. */
    BCMOLT_DEVICE_OPER_SUBGROUP_RUN_DDR_TEST = 7, /**< Run DDR Test. */
    BCMOLT_DEVICE_OPER_SUBGROUP_SET_8021_AS_TOD_STRING = 8, /**< Set ToD String for 802.1AS. */
    BCMOLT_DEVICE_OPER_SUBGROUP_SW_UPGRADE_ACTIVATE = 9, /**< SW upgrade activate. */
    BCMOLT_DEVICE_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_oper_subgroup__begin BCMOLT_DEVICE_OPER_SUBGROUP__BEGIN
#define bcmolt_device_oper_subgroup_all BCMOLT_DEVICE_OPER_SUBGROUP_ALL
#define bcmolt_device_oper_subgroup_connect BCMOLT_DEVICE_OPER_SUBGROUP_CONNECT
#define bcmolt_device_oper_subgroup_disconnect BCMOLT_DEVICE_OPER_SUBGROUP_DISCONNECT
#define bcmolt_device_oper_subgroup_host_keep_alive BCMOLT_DEVICE_OPER_SUBGROUP_HOST_KEEP_ALIVE
#define bcmolt_device_oper_subgroup_image_transfer_data BCMOLT_DEVICE_OPER_SUBGROUP_IMAGE_TRANSFER_DATA
#define bcmolt_device_oper_subgroup_image_transfer_start BCMOLT_DEVICE_OPER_SUBGROUP_IMAGE_TRANSFER_START
#define bcmolt_device_oper_subgroup_reset BCMOLT_DEVICE_OPER_SUBGROUP_RESET
#define bcmolt_device_oper_subgroup_run_ddr_test BCMOLT_DEVICE_OPER_SUBGROUP_RUN_DDR_TEST
#define bcmolt_device_oper_subgroup_set_8021_as_tod_string BCMOLT_DEVICE_OPER_SUBGROUP_SET_8021_AS_TOD_STRING
#define bcmolt_device_oper_subgroup_sw_upgrade_activate BCMOLT_DEVICE_OPER_SUBGROUP_SW_UPGRADE_ACTIVATE
#define bcmolt_device_oper_subgroup__num_of BCMOLT_DEVICE_OPER_SUBGROUP__NUM_OF
#define bcmolt_device_oper_subgroup_all_properties 0xFFFF
#define bcmolt_device_oper_subgroup_full_mask 0x3FF

} bcmolt_device_oper_subgroup;

/** List of all erps_interface groups of type auto. */
typedef enum
{
    BCMOLT_ERPS_INTERFACE_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_ERPS_INTERFACE_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ERPS_INTERFACE_AUTO_SUBGROUP_RING_PORT_CONTROL = 1, /**< Ring Port Control. */
    BCMOLT_ERPS_INTERFACE_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_erps_interface_auto_subgroup__begin BCMOLT_ERPS_INTERFACE_AUTO_SUBGROUP__BEGIN
#define bcmolt_erps_interface_auto_subgroup_all BCMOLT_ERPS_INTERFACE_AUTO_SUBGROUP_ALL
#define bcmolt_erps_interface_auto_subgroup_ring_port_control BCMOLT_ERPS_INTERFACE_AUTO_SUBGROUP_RING_PORT_CONTROL
#define bcmolt_erps_interface_auto_subgroup__num_of BCMOLT_ERPS_INTERFACE_AUTO_SUBGROUP__NUM_OF
#define bcmolt_erps_interface_auto_subgroup_all_properties 0xFFFF
#define bcmolt_erps_interface_auto_subgroup_full_mask 0x3

} bcmolt_erps_interface_auto_subgroup;

/** List of all erps_interface groups of type oper. */
typedef enum
{
    BCMOLT_ERPS_INTERFACE_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_ERPS_INTERFACE_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ERPS_INTERFACE_OPER_SUBGROUP_SET_RING_PORT_CONTROL = 1, /**< Set Ring Port Control. */
    BCMOLT_ERPS_INTERFACE_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_erps_interface_oper_subgroup__begin BCMOLT_ERPS_INTERFACE_OPER_SUBGROUP__BEGIN
#define bcmolt_erps_interface_oper_subgroup_all BCMOLT_ERPS_INTERFACE_OPER_SUBGROUP_ALL
#define bcmolt_erps_interface_oper_subgroup_set_ring_port_control BCMOLT_ERPS_INTERFACE_OPER_SUBGROUP_SET_RING_PORT_CONTROL
#define bcmolt_erps_interface_oper_subgroup__num_of BCMOLT_ERPS_INTERFACE_OPER_SUBGROUP__NUM_OF
#define bcmolt_erps_interface_oper_subgroup_all_properties 0xFFFF
#define bcmolt_erps_interface_oper_subgroup_full_mask 0x3

} bcmolt_erps_interface_oper_subgroup;

/** List of all eth_oam groups of type auto. */
typedef enum
{
    BCMOLT_ETH_OAM_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_ETH_OAM_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ETH_OAM_AUTO_SUBGROUP_CCM_EVENT = 1, /**< CFM CCM Event. */
    BCMOLT_ETH_OAM_AUTO_SUBGROUP_STATE_CHANGE = 2, /**< State Change. */
    BCMOLT_ETH_OAM_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_eth_oam_auto_subgroup__begin BCMOLT_ETH_OAM_AUTO_SUBGROUP__BEGIN
#define bcmolt_eth_oam_auto_subgroup_all BCMOLT_ETH_OAM_AUTO_SUBGROUP_ALL
#define bcmolt_eth_oam_auto_subgroup_ccm_event BCMOLT_ETH_OAM_AUTO_SUBGROUP_CCM_EVENT
#define bcmolt_eth_oam_auto_subgroup_state_change BCMOLT_ETH_OAM_AUTO_SUBGROUP_STATE_CHANGE
#define bcmolt_eth_oam_auto_subgroup__num_of BCMOLT_ETH_OAM_AUTO_SUBGROUP__NUM_OF
#define bcmolt_eth_oam_auto_subgroup_all_properties 0xFFFF
#define bcmolt_eth_oam_auto_subgroup_full_mask 0x7

} bcmolt_eth_oam_auto_subgroup;

/** List of all eth_oam groups of type oper. */
typedef enum
{
    BCMOLT_ETH_OAM_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_ETH_OAM_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ETH_OAM_OPER_SUBGROUP_SET_MEP_STATE = 1, /**< Set MEP Control State. */
    BCMOLT_ETH_OAM_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_eth_oam_oper_subgroup__begin BCMOLT_ETH_OAM_OPER_SUBGROUP__BEGIN
#define bcmolt_eth_oam_oper_subgroup_all BCMOLT_ETH_OAM_OPER_SUBGROUP_ALL
#define bcmolt_eth_oam_oper_subgroup_set_mep_state BCMOLT_ETH_OAM_OPER_SUBGROUP_SET_MEP_STATE
#define bcmolt_eth_oam_oper_subgroup__num_of BCMOLT_ETH_OAM_OPER_SUBGROUP__NUM_OF
#define bcmolt_eth_oam_oper_subgroup_all_properties 0xFFFF
#define bcmolt_eth_oam_oper_subgroup_full_mask 0x3

} bcmolt_eth_oam_oper_subgroup;

/** List of all flow groups of type oper. */
typedef enum
{
    BCMOLT_FLOW_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_FLOW_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_FLOW_OPER_SUBGROUP_SEND_ETH_PACKET = 1, /**< send_eth_packet. */
    BCMOLT_FLOW_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_flow_oper_subgroup__begin BCMOLT_FLOW_OPER_SUBGROUP__BEGIN
#define bcmolt_flow_oper_subgroup_all BCMOLT_FLOW_OPER_SUBGROUP_ALL
#define bcmolt_flow_oper_subgroup_send_eth_packet BCMOLT_FLOW_OPER_SUBGROUP_SEND_ETH_PACKET
#define bcmolt_flow_oper_subgroup__num_of BCMOLT_FLOW_OPER_SUBGROUP__NUM_OF
#define bcmolt_flow_oper_subgroup_all_properties 0xFFFF
#define bcmolt_flow_oper_subgroup_full_mask 0x3

} bcmolt_flow_oper_subgroup;

/** List of all group groups of type auto. */
typedef enum
{
    BCMOLT_GROUP_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_GROUP_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_GROUP_AUTO_SUBGROUP_COMPLETE_MEMBERS_UPDATE = 1, /**< complete_members_update. */
    BCMOLT_GROUP_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_group_auto_subgroup__begin BCMOLT_GROUP_AUTO_SUBGROUP__BEGIN
#define bcmolt_group_auto_subgroup_all BCMOLT_GROUP_AUTO_SUBGROUP_ALL
#define bcmolt_group_auto_subgroup_complete_members_update BCMOLT_GROUP_AUTO_SUBGROUP_COMPLETE_MEMBERS_UPDATE
#define bcmolt_group_auto_subgroup__num_of BCMOLT_GROUP_AUTO_SUBGROUP__NUM_OF
#define bcmolt_group_auto_subgroup_all_properties 0xFFFF
#define bcmolt_group_auto_subgroup_full_mask 0x3

} bcmolt_group_auto_subgroup;

/** List of all group groups of type oper. */
typedef enum
{
    BCMOLT_GROUP_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_GROUP_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_GROUP_OPER_SUBGROUP_MEMBERS_UPDATE = 1, /**< members_update. */
    BCMOLT_GROUP_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_group_oper_subgroup__begin BCMOLT_GROUP_OPER_SUBGROUP__BEGIN
#define bcmolt_group_oper_subgroup_all BCMOLT_GROUP_OPER_SUBGROUP_ALL
#define bcmolt_group_oper_subgroup_members_update BCMOLT_GROUP_OPER_SUBGROUP_MEMBERS_UPDATE
#define bcmolt_group_oper_subgroup__num_of BCMOLT_GROUP_OPER_SUBGROUP__NUM_OF
#define bcmolt_group_oper_subgroup_all_properties 0xFFFF
#define bcmolt_group_oper_subgroup_full_mask 0x3

} bcmolt_group_oper_subgroup;

/** List of all internal_nni groups of type auto. */
typedef enum
{
    BCMOLT_INTERNAL_NNI_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_INTERNAL_NNI_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_INTERNAL_NNI_AUTO_SUBGROUP_STATUS_CHANGED = 1, /**< Status changed. */
    BCMOLT_INTERNAL_NNI_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_internal_nni_auto_subgroup__begin BCMOLT_INTERNAL_NNI_AUTO_SUBGROUP__BEGIN
#define bcmolt_internal_nni_auto_subgroup_all BCMOLT_INTERNAL_NNI_AUTO_SUBGROUP_ALL
#define bcmolt_internal_nni_auto_subgroup_status_changed BCMOLT_INTERNAL_NNI_AUTO_SUBGROUP_STATUS_CHANGED
#define bcmolt_internal_nni_auto_subgroup__num_of BCMOLT_INTERNAL_NNI_AUTO_SUBGROUP__NUM_OF
#define bcmolt_internal_nni_auto_subgroup_all_properties 0xFFFF
#define bcmolt_internal_nni_auto_subgroup_full_mask 0x3

} bcmolt_internal_nni_auto_subgroup;

/** List of all itupon_alloc groups of type auto. */
typedef enum
{
    BCMOLT_ITUPON_ALLOC_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_ITUPON_ALLOC_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ITUPON_ALLOC_AUTO_SUBGROUP_CONFIGURATION_COMPLETED = 1, /**< Configuration Completed. */
    BCMOLT_ITUPON_ALLOC_AUTO_SUBGROUP_GET_ALLOC_STATS_COMPLETED = 2, /**< Get alloc ID statistics completed. */
    BCMOLT_ITUPON_ALLOC_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_alloc_auto_subgroup__begin BCMOLT_ITUPON_ALLOC_AUTO_SUBGROUP__BEGIN
#define bcmolt_itupon_alloc_auto_subgroup_all BCMOLT_ITUPON_ALLOC_AUTO_SUBGROUP_ALL
#define bcmolt_itupon_alloc_auto_subgroup_configuration_completed BCMOLT_ITUPON_ALLOC_AUTO_SUBGROUP_CONFIGURATION_COMPLETED
#define bcmolt_itupon_alloc_auto_subgroup_get_alloc_stats_completed BCMOLT_ITUPON_ALLOC_AUTO_SUBGROUP_GET_ALLOC_STATS_COMPLETED
#define bcmolt_itupon_alloc_auto_subgroup__num_of BCMOLT_ITUPON_ALLOC_AUTO_SUBGROUP__NUM_OF
#define bcmolt_itupon_alloc_auto_subgroup_all_properties 0xFFFF
#define bcmolt_itupon_alloc_auto_subgroup_full_mask 0x7

} bcmolt_itupon_alloc_auto_subgroup;

/** List of all itupon_alloc groups of type oper. */
typedef enum
{
    BCMOLT_ITUPON_ALLOC_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_ITUPON_ALLOC_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ITUPON_ALLOC_OPER_SUBGROUP_GET_STATS = 1, /**< Get statistics. */
    BCMOLT_ITUPON_ALLOC_OPER_SUBGROUP_SET_STATE = 2, /**< Set state. */
    BCMOLT_ITUPON_ALLOC_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_alloc_oper_subgroup__begin BCMOLT_ITUPON_ALLOC_OPER_SUBGROUP__BEGIN
#define bcmolt_itupon_alloc_oper_subgroup_all BCMOLT_ITUPON_ALLOC_OPER_SUBGROUP_ALL
#define bcmolt_itupon_alloc_oper_subgroup_get_stats BCMOLT_ITUPON_ALLOC_OPER_SUBGROUP_GET_STATS
#define bcmolt_itupon_alloc_oper_subgroup_set_state BCMOLT_ITUPON_ALLOC_OPER_SUBGROUP_SET_STATE
#define bcmolt_itupon_alloc_oper_subgroup__num_of BCMOLT_ITUPON_ALLOC_OPER_SUBGROUP__NUM_OF
#define bcmolt_itupon_alloc_oper_subgroup_all_properties 0xFFFF
#define bcmolt_itupon_alloc_oper_subgroup_full_mask 0x7

} bcmolt_itupon_alloc_oper_subgroup;

/** List of all itupon_gem groups of type auto. */
typedef enum
{
    BCMOLT_ITUPON_GEM_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_ITUPON_GEM_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ITUPON_GEM_AUTO_SUBGROUP_CONFIGURATION_COMPLETED = 1, /**< Configuration Completed. */
    BCMOLT_ITUPON_GEM_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_gem_auto_subgroup__begin BCMOLT_ITUPON_GEM_AUTO_SUBGROUP__BEGIN
#define bcmolt_itupon_gem_auto_subgroup_all BCMOLT_ITUPON_GEM_AUTO_SUBGROUP_ALL
#define bcmolt_itupon_gem_auto_subgroup_configuration_completed BCMOLT_ITUPON_GEM_AUTO_SUBGROUP_CONFIGURATION_COMPLETED
#define bcmolt_itupon_gem_auto_subgroup__num_of BCMOLT_ITUPON_GEM_AUTO_SUBGROUP__NUM_OF
#define bcmolt_itupon_gem_auto_subgroup_all_properties 0xFFFF
#define bcmolt_itupon_gem_auto_subgroup_full_mask 0x3

} bcmolt_itupon_gem_auto_subgroup;

/** List of all itupon_gem groups of type oper. */
typedef enum
{
    BCMOLT_ITUPON_GEM_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_ITUPON_GEM_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ITUPON_GEM_OPER_SUBGROUP_SET_STATE = 1, /**< Set state. */
    BCMOLT_ITUPON_GEM_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_gem_oper_subgroup__begin BCMOLT_ITUPON_GEM_OPER_SUBGROUP__BEGIN
#define bcmolt_itupon_gem_oper_subgroup_all BCMOLT_ITUPON_GEM_OPER_SUBGROUP_ALL
#define bcmolt_itupon_gem_oper_subgroup_set_state BCMOLT_ITUPON_GEM_OPER_SUBGROUP_SET_STATE
#define bcmolt_itupon_gem_oper_subgroup__num_of BCMOLT_ITUPON_GEM_OPER_SUBGROUP__NUM_OF
#define bcmolt_itupon_gem_oper_subgroup_all_properties 0xFFFF
#define bcmolt_itupon_gem_oper_subgroup_full_mask 0x3

} bcmolt_itupon_gem_oper_subgroup;

/** List of all lag_interface groups of type auto. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP_COMPLETE_MEMBERS_UPDATE = 1, /**< complete_members_update. */
    BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP_LAG_HEALTH_CHANGE = 2, /**< LAG health change. */
    BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP_STATE_UPDATED = 3, /**< interface state updated. */
    BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_auto_subgroup__begin BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP__BEGIN
#define bcmolt_lag_interface_auto_subgroup_all BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP_ALL
#define bcmolt_lag_interface_auto_subgroup_complete_members_update BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP_COMPLETE_MEMBERS_UPDATE
#define bcmolt_lag_interface_auto_subgroup_lag_health_change BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP_LAG_HEALTH_CHANGE
#define bcmolt_lag_interface_auto_subgroup_state_updated BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP_STATE_UPDATED
#define bcmolt_lag_interface_auto_subgroup__num_of BCMOLT_LAG_INTERFACE_AUTO_SUBGROUP__NUM_OF
#define bcmolt_lag_interface_auto_subgroup_all_properties 0xFFFF
#define bcmolt_lag_interface_auto_subgroup_full_mask 0xF

} bcmolt_lag_interface_auto_subgroup;

/** List of all lag_interface groups of type oper. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_LAG_INTERFACE_OPER_SUBGROUP_MEMBERS_UPDATE = 1, /**< members_update. */
    BCMOLT_LAG_INTERFACE_OPER_SUBGROUP_STATE_UPDATE = 2, /**< state_update. */
    BCMOLT_LAG_INTERFACE_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_oper_subgroup__begin BCMOLT_LAG_INTERFACE_OPER_SUBGROUP__BEGIN
#define bcmolt_lag_interface_oper_subgroup_all BCMOLT_LAG_INTERFACE_OPER_SUBGROUP_ALL
#define bcmolt_lag_interface_oper_subgroup_members_update BCMOLT_LAG_INTERFACE_OPER_SUBGROUP_MEMBERS_UPDATE
#define bcmolt_lag_interface_oper_subgroup_state_update BCMOLT_LAG_INTERFACE_OPER_SUBGROUP_STATE_UPDATE
#define bcmolt_lag_interface_oper_subgroup__num_of BCMOLT_LAG_INTERFACE_OPER_SUBGROUP__NUM_OF
#define bcmolt_lag_interface_oper_subgroup_all_properties 0xFFFF
#define bcmolt_lag_interface_oper_subgroup_full_mask 0x7

} bcmolt_lag_interface_oper_subgroup;

/** List of all log_file groups of type oper. */
typedef enum
{
    BCMOLT_LOG_FILE_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_LOG_FILE_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_LOG_FILE_OPER_SUBGROUP_CLEAR = 1, /**< Clear. */
    BCMOLT_LOG_FILE_OPER_SUBGROUP_RESET_BUFFER_PTR = 2, /**< Reset Buffer Pointer. */
    BCMOLT_LOG_FILE_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_log_file_oper_subgroup__begin BCMOLT_LOG_FILE_OPER_SUBGROUP__BEGIN
#define bcmolt_log_file_oper_subgroup_all BCMOLT_LOG_FILE_OPER_SUBGROUP_ALL
#define bcmolt_log_file_oper_subgroup_clear BCMOLT_LOG_FILE_OPER_SUBGROUP_CLEAR
#define bcmolt_log_file_oper_subgroup_reset_buffer_ptr BCMOLT_LOG_FILE_OPER_SUBGROUP_RESET_BUFFER_PTR
#define bcmolt_log_file_oper_subgroup__num_of BCMOLT_LOG_FILE_OPER_SUBGROUP__NUM_OF
#define bcmolt_log_file_oper_subgroup_all_properties 0xFFFF
#define bcmolt_log_file_oper_subgroup_full_mask 0x7

} bcmolt_log_file_oper_subgroup;

/** List of all nni_interface groups of type auto. */
typedef enum
{
    BCMOLT_NNI_INTERFACE_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_NNI_INTERFACE_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_NNI_INTERFACE_AUTO_SUBGROUP_LINK_STATE_CHANGE = 1, /**< link_state_change. */
    BCMOLT_NNI_INTERFACE_AUTO_SUBGROUP_STATE_CHANGE = 2, /**< State Change. */
    BCMOLT_NNI_INTERFACE_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_nni_interface_auto_subgroup__begin BCMOLT_NNI_INTERFACE_AUTO_SUBGROUP__BEGIN
#define bcmolt_nni_interface_auto_subgroup_all BCMOLT_NNI_INTERFACE_AUTO_SUBGROUP_ALL
#define bcmolt_nni_interface_auto_subgroup_link_state_change BCMOLT_NNI_INTERFACE_AUTO_SUBGROUP_LINK_STATE_CHANGE
#define bcmolt_nni_interface_auto_subgroup_state_change BCMOLT_NNI_INTERFACE_AUTO_SUBGROUP_STATE_CHANGE
#define bcmolt_nni_interface_auto_subgroup__num_of BCMOLT_NNI_INTERFACE_AUTO_SUBGROUP__NUM_OF
#define bcmolt_nni_interface_auto_subgroup_all_properties 0xFFFF
#define bcmolt_nni_interface_auto_subgroup_full_mask 0x7

} bcmolt_nni_interface_auto_subgroup;

/** List of all nni_interface groups of type oper. */
typedef enum
{
    BCMOLT_NNI_INTERFACE_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_NNI_INTERFACE_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_NNI_INTERFACE_OPER_SUBGROUP_SET_NNI_STATE = 1, /**< set_nni_state. */
    BCMOLT_NNI_INTERFACE_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_nni_interface_oper_subgroup__begin BCMOLT_NNI_INTERFACE_OPER_SUBGROUP__BEGIN
#define bcmolt_nni_interface_oper_subgroup_all BCMOLT_NNI_INTERFACE_OPER_SUBGROUP_ALL
#define bcmolt_nni_interface_oper_subgroup_set_nni_state BCMOLT_NNI_INTERFACE_OPER_SUBGROUP_SET_NNI_STATE
#define bcmolt_nni_interface_oper_subgroup__num_of BCMOLT_NNI_INTERFACE_OPER_SUBGROUP__NUM_OF
#define bcmolt_nni_interface_oper_subgroup_all_properties 0xFFFF
#define bcmolt_nni_interface_oper_subgroup_full_mask 0x3

} bcmolt_nni_interface_oper_subgroup;

/** List of all olt groups of type auto. */
typedef enum
{
    BCMOLT_OLT_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_OLT_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_OLT_AUTO_SUBGROUP_BAL_FAILURE = 1, /**< BAL and/or Switch Failed. */
    BCMOLT_OLT_AUTO_SUBGROUP_BAL_READY = 2, /**< BAL and Switch Ready. */
    BCMOLT_OLT_AUTO_SUBGROUP_CONNECTED = 3, /**< connected. */
    BCMOLT_OLT_AUTO_SUBGROUP_DISCONNECTED = 4, /**< disconnected. */
    BCMOLT_OLT_AUTO_SUBGROUP_SW_ERROR = 5, /**< OLT Software error. */
    BCMOLT_OLT_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_olt_auto_subgroup__begin BCMOLT_OLT_AUTO_SUBGROUP__BEGIN
#define bcmolt_olt_auto_subgroup_all BCMOLT_OLT_AUTO_SUBGROUP_ALL
#define bcmolt_olt_auto_subgroup_bal_failure BCMOLT_OLT_AUTO_SUBGROUP_BAL_FAILURE
#define bcmolt_olt_auto_subgroup_bal_ready BCMOLT_OLT_AUTO_SUBGROUP_BAL_READY
#define bcmolt_olt_auto_subgroup_connected BCMOLT_OLT_AUTO_SUBGROUP_CONNECTED
#define bcmolt_olt_auto_subgroup_disconnected BCMOLT_OLT_AUTO_SUBGROUP_DISCONNECTED
#define bcmolt_olt_auto_subgroup_sw_error BCMOLT_OLT_AUTO_SUBGROUP_SW_ERROR
#define bcmolt_olt_auto_subgroup__num_of BCMOLT_OLT_AUTO_SUBGROUP__NUM_OF
#define bcmolt_olt_auto_subgroup_all_properties 0xFFFF
#define bcmolt_olt_auto_subgroup_full_mask 0x3F

} bcmolt_olt_auto_subgroup;

/** List of all olt groups of type oper. */
typedef enum
{
    BCMOLT_OLT_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_OLT_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_OLT_OPER_SUBGROUP_BAL_RESET = 1, /**< Reset BAL and Switch. */
    BCMOLT_OLT_OPER_SUBGROUP_CONNECT = 2, /**< connect. */
    BCMOLT_OLT_OPER_SUBGROUP_DISCONNECT = 3, /**< disconnect. */
    BCMOLT_OLT_OPER_SUBGROUP_RESET = 4, /**< OLT Reset. */
    BCMOLT_OLT_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_olt_oper_subgroup__begin BCMOLT_OLT_OPER_SUBGROUP__BEGIN
#define bcmolt_olt_oper_subgroup_all BCMOLT_OLT_OPER_SUBGROUP_ALL
#define bcmolt_olt_oper_subgroup_bal_reset BCMOLT_OLT_OPER_SUBGROUP_BAL_RESET
#define bcmolt_olt_oper_subgroup_connect BCMOLT_OLT_OPER_SUBGROUP_CONNECT
#define bcmolt_olt_oper_subgroup_disconnect BCMOLT_OLT_OPER_SUBGROUP_DISCONNECT
#define bcmolt_olt_oper_subgroup_reset BCMOLT_OLT_OPER_SUBGROUP_RESET
#define bcmolt_olt_oper_subgroup__num_of BCMOLT_OLT_OPER_SUBGROUP__NUM_OF
#define bcmolt_olt_oper_subgroup_all_properties 0xFFFF
#define bcmolt_olt_oper_subgroup_full_mask 0x1F

} bcmolt_olt_oper_subgroup;

/** List of all onu groups of type auto. */
typedef enum
{
    BCMOLT_ONU_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_ONU_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ONU_AUTO_SUBGROUP_BER_INTERVAL_CONFIGURATION_COMPLETED = 1, /**< BER Interval Configuration Completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_CPU_PACKET = 2, /**< XGPON CPU packet. */
    BCMOLT_ONU_AUTO_SUBGROUP_DFI = 3, /**< Receive Dying-Gasp of ONUi. */
    BCMOLT_ONU_AUTO_SUBGROUP_DGI = 4, /**< Receive Dying-Gasp of ONUi. */
    BCMOLT_ONU_AUTO_SUBGROUP_DOWI = 5, /**< Drift of Window of ONUi. */
    BCMOLT_ONU_AUTO_SUBGROUP_ERR = 6, /**< ERR. */
    BCMOLT_ONU_AUTO_SUBGROUP_GPON_ALARM = 7, /**< GPON ONU Alarm. */
    BCMOLT_ONU_AUTO_SUBGROUP_INVALID_DBRU_REPORT = 8, /**< Invalid DBRu Report. */
    BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_COMPLETED = 9, /**< Key Exchange Completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_CYCLE_SKIPPED = 10, /**< Key Exchange Cycle Skipped. */
    BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_DECRYPT_REQUIRED = 11, /**< Key Exchange Decrypt Required. */
    BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_KEY_MISMATCH = 12, /**< Key Exchange Key Mismatch. */
    BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_KEY_REQUEST_TIMEOUT = 13, /**< Key Exchange Key Request Timeout. */
    BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_UNCONSECUTIVE_INDEX = 14, /**< Key Exchange Unconsecutive Index. */
    BCMOLT_ONU_AUTO_SUBGROUP_LOAI = 15, /**< LOAi. */
    BCMOLT_ONU_AUTO_SUBGROUP_LOKI = 16, /**< LOki. */
    BCMOLT_ONU_AUTO_SUBGROUP_LOOCI = 17, /**< LOOCi. */
    BCMOLT_ONU_AUTO_SUBGROUP_MEMI = 18, /**< MEMi. */
    BCMOLT_ONU_AUTO_SUBGROUP_OMCI_PACKET = 19, /**< XGPON OMCI packet. */
    BCMOLT_ONU_AUTO_SUBGROUP_OMCI_PORT_ID_CONFIGURATION_COMPLETED = 20, /**< OMCI PORT ID Configuration Completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_ONU_ACTIVATION_COMPLETED = 21, /**< ONU Activation Completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_ONU_ACTIVATION_STANDBY_COMPLETED = 22, /**< onu activation standby completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_ONU_DEACTIVATION_COMPLETED = 23, /**< ONU Deactivation Completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_ONU_DISABLE_COMPLETED = 24, /**< ONU Disable Completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_ONU_ENABLE_COMPLETED = 25, /**< ONU Enable Completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_ONU_READY_FOR_DATA_GRANT = 26, /**< ONU is ready to be granted data accesses. */
    BCMOLT_ONU_AUTO_SUBGROUP_ONU_TUNING_IN_COMPLETED = 27, /**< ONU Tuning in completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_ONU_TUNING_OUT_COMPLETED = 28, /**< ONU Tuning out completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_OPTICAL_REFLECTION = 29, /**< Optical Reflection. */
    BCMOLT_ONU_AUTO_SUBGROUP_PASSWORD_AUTHENTICATION_COMPLETED = 30, /**< Password Authentication Completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_PEE = 31, /**< PEE. */
    BCMOLT_ONU_AUTO_SUBGROUP_POSSIBLE_DRIFT = 32, /**< Possible Drift. */
    BCMOLT_ONU_AUTO_SUBGROUP_POWER_CONSUMPTION_REPORT = 33, /**< Power consumption report. */
    BCMOLT_ONU_AUTO_SUBGROUP_POWER_LEVEL_REPORT = 34, /**< Power level report. */
    BCMOLT_ONU_AUTO_SUBGROUP_POWER_MANAGEMENT_STATE_CHANGE = 35, /**< Power Management State Change. */
    BCMOLT_ONU_AUTO_SUBGROUP_PQSI = 36, /**< ploam queue status. */
    BCMOLT_ONU_AUTO_SUBGROUP_PST = 37, /**< PST. */
    BCMOLT_ONU_AUTO_SUBGROUP_RANGING_COMPLETED = 38, /**< Ranging Completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_REGISTRATION_ID = 39, /**< Registration ID. */
    BCMOLT_ONU_AUTO_SUBGROUP_REI = 40, /**< REI. */
    BCMOLT_ONU_AUTO_SUBGROUP_RSSI_MEASUREMENT_COMPLETED = 41, /**< RSSI Measurement Completed. */
    BCMOLT_ONU_AUTO_SUBGROUP_SDI = 42, /**< Signal Degraded of ONUi. */
    BCMOLT_ONU_AUTO_SUBGROUP_SECURE_MUTUAL_AUTHENTICATION_FAILURE = 43, /**< secure mutual authentication failure. */
    BCMOLT_ONU_AUTO_SUBGROUP_SFI = 44, /**< Signal Fail of ONUi. */
    BCMOLT_ONU_AUTO_SUBGROUP_STATE_CHANGE = 45, /**< State Change. */
    BCMOLT_ONU_AUTO_SUBGROUP_SUFI = 46, /**< SUFi. */
    BCMOLT_ONU_AUTO_SUBGROUP_TIWI = 47, /**< Transmission Interference Warning. */
    BCMOLT_ONU_AUTO_SUBGROUP_TUNING_RESPONSE = 48, /**< Tuning response. */
    BCMOLT_ONU_AUTO_SUBGROUP_XGPON_ALARM = 49, /**< XGPON ONU Alarm. */
    BCMOLT_ONU_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_auto_subgroup__begin BCMOLT_ONU_AUTO_SUBGROUP__BEGIN
#define bcmolt_onu_auto_subgroup_all BCMOLT_ONU_AUTO_SUBGROUP_ALL
#define bcmolt_onu_auto_subgroup_ber_interval_configuration_completed BCMOLT_ONU_AUTO_SUBGROUP_BER_INTERVAL_CONFIGURATION_COMPLETED
#define bcmolt_onu_auto_subgroup_cpu_packet BCMOLT_ONU_AUTO_SUBGROUP_CPU_PACKET
#define bcmolt_onu_auto_subgroup_dfi BCMOLT_ONU_AUTO_SUBGROUP_DFI
#define bcmolt_onu_auto_subgroup_dgi BCMOLT_ONU_AUTO_SUBGROUP_DGI
#define bcmolt_onu_auto_subgroup_dowi BCMOLT_ONU_AUTO_SUBGROUP_DOWI
#define bcmolt_onu_auto_subgroup_err BCMOLT_ONU_AUTO_SUBGROUP_ERR
#define bcmolt_onu_auto_subgroup_gpon_alarm BCMOLT_ONU_AUTO_SUBGROUP_GPON_ALARM
#define bcmolt_onu_auto_subgroup_invalid_dbru_report BCMOLT_ONU_AUTO_SUBGROUP_INVALID_DBRU_REPORT
#define bcmolt_onu_auto_subgroup_key_exchange_completed BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_COMPLETED
#define bcmolt_onu_auto_subgroup_key_exchange_cycle_skipped BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_CYCLE_SKIPPED
#define bcmolt_onu_auto_subgroup_key_exchange_decrypt_required BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_DECRYPT_REQUIRED
#define bcmolt_onu_auto_subgroup_key_exchange_key_mismatch BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_KEY_MISMATCH
#define bcmolt_onu_auto_subgroup_key_exchange_key_request_timeout BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_KEY_REQUEST_TIMEOUT
#define bcmolt_onu_auto_subgroup_key_exchange_unconsecutive_index BCMOLT_ONU_AUTO_SUBGROUP_KEY_EXCHANGE_UNCONSECUTIVE_INDEX
#define bcmolt_onu_auto_subgroup_loai BCMOLT_ONU_AUTO_SUBGROUP_LOAI
#define bcmolt_onu_auto_subgroup_loki BCMOLT_ONU_AUTO_SUBGROUP_LOKI
#define bcmolt_onu_auto_subgroup_looci BCMOLT_ONU_AUTO_SUBGROUP_LOOCI
#define bcmolt_onu_auto_subgroup_memi BCMOLT_ONU_AUTO_SUBGROUP_MEMI
#define bcmolt_onu_auto_subgroup_omci_packet BCMOLT_ONU_AUTO_SUBGROUP_OMCI_PACKET
#define bcmolt_onu_auto_subgroup_omci_port_id_configuration_completed BCMOLT_ONU_AUTO_SUBGROUP_OMCI_PORT_ID_CONFIGURATION_COMPLETED
#define bcmolt_onu_auto_subgroup_onu_activation_completed BCMOLT_ONU_AUTO_SUBGROUP_ONU_ACTIVATION_COMPLETED
#define bcmolt_onu_auto_subgroup_onu_activation_standby_completed BCMOLT_ONU_AUTO_SUBGROUP_ONU_ACTIVATION_STANDBY_COMPLETED
#define bcmolt_onu_auto_subgroup_onu_deactivation_completed BCMOLT_ONU_AUTO_SUBGROUP_ONU_DEACTIVATION_COMPLETED
#define bcmolt_onu_auto_subgroup_onu_disable_completed BCMOLT_ONU_AUTO_SUBGROUP_ONU_DISABLE_COMPLETED
#define bcmolt_onu_auto_subgroup_onu_enable_completed BCMOLT_ONU_AUTO_SUBGROUP_ONU_ENABLE_COMPLETED
#define bcmolt_onu_auto_subgroup_onu_ready_for_data_grant BCMOLT_ONU_AUTO_SUBGROUP_ONU_READY_FOR_DATA_GRANT
#define bcmolt_onu_auto_subgroup_onu_tuning_in_completed BCMOLT_ONU_AUTO_SUBGROUP_ONU_TUNING_IN_COMPLETED
#define bcmolt_onu_auto_subgroup_onu_tuning_out_completed BCMOLT_ONU_AUTO_SUBGROUP_ONU_TUNING_OUT_COMPLETED
#define bcmolt_onu_auto_subgroup_optical_reflection BCMOLT_ONU_AUTO_SUBGROUP_OPTICAL_REFLECTION
#define bcmolt_onu_auto_subgroup_password_authentication_completed BCMOLT_ONU_AUTO_SUBGROUP_PASSWORD_AUTHENTICATION_COMPLETED
#define bcmolt_onu_auto_subgroup_pee BCMOLT_ONU_AUTO_SUBGROUP_PEE
#define bcmolt_onu_auto_subgroup_possible_drift BCMOLT_ONU_AUTO_SUBGROUP_POSSIBLE_DRIFT
#define bcmolt_onu_auto_subgroup_power_consumption_report BCMOLT_ONU_AUTO_SUBGROUP_POWER_CONSUMPTION_REPORT
#define bcmolt_onu_auto_subgroup_power_level_report BCMOLT_ONU_AUTO_SUBGROUP_POWER_LEVEL_REPORT
#define bcmolt_onu_auto_subgroup_power_management_state_change BCMOLT_ONU_AUTO_SUBGROUP_POWER_MANAGEMENT_STATE_CHANGE
#define bcmolt_onu_auto_subgroup_pqsi BCMOLT_ONU_AUTO_SUBGROUP_PQSI
#define bcmolt_onu_auto_subgroup_pst BCMOLT_ONU_AUTO_SUBGROUP_PST
#define bcmolt_onu_auto_subgroup_ranging_completed BCMOLT_ONU_AUTO_SUBGROUP_RANGING_COMPLETED
#define bcmolt_onu_auto_subgroup_registration_id BCMOLT_ONU_AUTO_SUBGROUP_REGISTRATION_ID
#define bcmolt_onu_auto_subgroup_rei BCMOLT_ONU_AUTO_SUBGROUP_REI
#define bcmolt_onu_auto_subgroup_rssi_measurement_completed BCMOLT_ONU_AUTO_SUBGROUP_RSSI_MEASUREMENT_COMPLETED
#define bcmolt_onu_auto_subgroup_sdi BCMOLT_ONU_AUTO_SUBGROUP_SDI
#define bcmolt_onu_auto_subgroup_secure_mutual_authentication_failure BCMOLT_ONU_AUTO_SUBGROUP_SECURE_MUTUAL_AUTHENTICATION_FAILURE
#define bcmolt_onu_auto_subgroup_sfi BCMOLT_ONU_AUTO_SUBGROUP_SFI
#define bcmolt_onu_auto_subgroup_state_change BCMOLT_ONU_AUTO_SUBGROUP_STATE_CHANGE
#define bcmolt_onu_auto_subgroup_sufi BCMOLT_ONU_AUTO_SUBGROUP_SUFI
#define bcmolt_onu_auto_subgroup_tiwi BCMOLT_ONU_AUTO_SUBGROUP_TIWI
#define bcmolt_onu_auto_subgroup_tuning_response BCMOLT_ONU_AUTO_SUBGROUP_TUNING_RESPONSE
#define bcmolt_onu_auto_subgroup_xgpon_alarm BCMOLT_ONU_AUTO_SUBGROUP_XGPON_ALARM
#define bcmolt_onu_auto_subgroup__num_of BCMOLT_ONU_AUTO_SUBGROUP__NUM_OF
#define bcmolt_onu_auto_subgroup_all_properties 0xFFFF
#define bcmolt_onu_auto_subgroup_full_mask 0x3FFFFFFFFFFFF

} bcmolt_onu_auto_subgroup;

/** List of all onu groups of type oper. */
typedef enum
{
    BCMOLT_ONU_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_ONU_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_ONU_OPER_SUBGROUP_ADJUST_TX_WAVELENGTH = 1, /**< Adjust Tx wavelength. */
    BCMOLT_ONU_OPER_SUBGROUP_CHANGE_POWER_LEVELLING = 2, /**< Change power levelling. */
    BCMOLT_ONU_OPER_SUBGROUP_CPU_PACKETS = 3, /**< XGPON CPU packets. */
    BCMOLT_ONU_OPER_SUBGROUP_FORCE_DEACTIVATION = 4, /**< Force deactivation. */
    BCMOLT_ONU_OPER_SUBGROUP_GET_POWER_CONSUMPTION = 5, /**< Get power consumption. */
    BCMOLT_ONU_OPER_SUBGROUP_GET_POWER_LEVEL = 6, /**< Get power level. */
    BCMOLT_ONU_OPER_SUBGROUP_PLOAM_PACKET = 7, /**< PLOAM Packet. */
    BCMOLT_ONU_OPER_SUBGROUP_REQUEST_REGISTRATION = 8, /**< Request registration. */
    BCMOLT_ONU_OPER_SUBGROUP_RSSI_MEASUREMENT = 9, /**< RSSI Measurement. */
    BCMOLT_ONU_OPER_SUBGROUP_SECURE_MUTUAL_AUTHENTICATION = 10, /**< Secure mutual authentication. */
    BCMOLT_ONU_OPER_SUBGROUP_SET_ONU_STATE = 11, /**< Set ONU State. */
    BCMOLT_ONU_OPER_SUBGROUP_TUNING_IN = 12, /**< ONU Tuning in. */
    BCMOLT_ONU_OPER_SUBGROUP_TUNING_OUT = 13, /**< ONU Tuning out. */
    BCMOLT_ONU_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_oper_subgroup__begin BCMOLT_ONU_OPER_SUBGROUP__BEGIN
#define bcmolt_onu_oper_subgroup_all BCMOLT_ONU_OPER_SUBGROUP_ALL
#define bcmolt_onu_oper_subgroup_adjust_tx_wavelength BCMOLT_ONU_OPER_SUBGROUP_ADJUST_TX_WAVELENGTH
#define bcmolt_onu_oper_subgroup_change_power_levelling BCMOLT_ONU_OPER_SUBGROUP_CHANGE_POWER_LEVELLING
#define bcmolt_onu_oper_subgroup_cpu_packets BCMOLT_ONU_OPER_SUBGROUP_CPU_PACKETS
#define bcmolt_onu_oper_subgroup_force_deactivation BCMOLT_ONU_OPER_SUBGROUP_FORCE_DEACTIVATION
#define bcmolt_onu_oper_subgroup_get_power_consumption BCMOLT_ONU_OPER_SUBGROUP_GET_POWER_CONSUMPTION
#define bcmolt_onu_oper_subgroup_get_power_level BCMOLT_ONU_OPER_SUBGROUP_GET_POWER_LEVEL
#define bcmolt_onu_oper_subgroup_ploam_packet BCMOLT_ONU_OPER_SUBGROUP_PLOAM_PACKET
#define bcmolt_onu_oper_subgroup_request_registration BCMOLT_ONU_OPER_SUBGROUP_REQUEST_REGISTRATION
#define bcmolt_onu_oper_subgroup_rssi_measurement BCMOLT_ONU_OPER_SUBGROUP_RSSI_MEASUREMENT
#define bcmolt_onu_oper_subgroup_secure_mutual_authentication BCMOLT_ONU_OPER_SUBGROUP_SECURE_MUTUAL_AUTHENTICATION
#define bcmolt_onu_oper_subgroup_set_onu_state BCMOLT_ONU_OPER_SUBGROUP_SET_ONU_STATE
#define bcmolt_onu_oper_subgroup_tuning_in BCMOLT_ONU_OPER_SUBGROUP_TUNING_IN
#define bcmolt_onu_oper_subgroup_tuning_out BCMOLT_ONU_OPER_SUBGROUP_TUNING_OUT
#define bcmolt_onu_oper_subgroup__num_of BCMOLT_ONU_OPER_SUBGROUP__NUM_OF
#define bcmolt_onu_oper_subgroup_all_properties 0xFFFF
#define bcmolt_onu_oper_subgroup_full_mask 0x3FFF

} bcmolt_onu_oper_subgroup;

/** List of all pon_interface groups of type auto. */
typedef enum
{
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_ACTIVATE_ALL_ONUS_COMPLETED = 1, /**< activate all onus completed. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_CPU_PACKETS_FAILURE = 2, /**< CPU Packets Failure. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_DEACTIVATE_ALL_ONUS_COMPLETED = 3, /**< deactivate all onus completed. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_DISABLE_ALL_ONUS_COMPLETED = 4, /**< disable all onus completed. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_ENABLE_ALL_ONUS_COMPLETED = 5, /**< enable all onus completed. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_IEEE_ROGUE_DETECTION_COMPLETED = 6, /**< IEEE Rogue Detection Completed. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_LOS = 7, /**< LOS. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_MPCP_TIMESTAMP_CHANGED = 8, /**< MPCP Timestamp Changed. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_ONU_DISCOVERED = 9, /**< ONU Discovered. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_ONU_UPGRADE_COMPLETE = 10, /**< ONU Upgrade Complete. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_PROTECTION_SWITCHING_ONUS_RANGED = 11, /**< Protection Switching ONUs Ranged. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_PROTECTION_SWITCHING_RERANGE_FAILURE = 12, /**< Protection Switching Re-range failure  (IEEE). */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED = 13, /**< Protection Switching Switchover Completed. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_PROTECTION_SWITCHING_TRAFFIC_RESUME = 14, /**< Protection Switching Traffic Resume. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_SERIAL_NUMBER_ACQUISITION_CYCLE_START = 15, /**< Serial Number Acquisition Cycle Start. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_STANDBY_PON_MONITORING_CYCLE_COMPLETED = 16, /**< Standby PON Monitoring Cycle Completed. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_STATE_CHANGE_COMPLETED = 17, /**< State Change Completed. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_TOD_REQUEST_COMPLETED = 18, /**< TOD request completed. */
    BCMOLT_PON_INTERFACE_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_auto_subgroup__begin BCMOLT_PON_INTERFACE_AUTO_SUBGROUP__BEGIN
#define bcmolt_pon_interface_auto_subgroup_all BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_ALL
#define bcmolt_pon_interface_auto_subgroup_activate_all_onus_completed BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_ACTIVATE_ALL_ONUS_COMPLETED
#define bcmolt_pon_interface_auto_subgroup_cpu_packets_failure BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_CPU_PACKETS_FAILURE
#define bcmolt_pon_interface_auto_subgroup_deactivate_all_onus_completed BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_DEACTIVATE_ALL_ONUS_COMPLETED
#define bcmolt_pon_interface_auto_subgroup_disable_all_onus_completed BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_DISABLE_ALL_ONUS_COMPLETED
#define bcmolt_pon_interface_auto_subgroup_enable_all_onus_completed BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_ENABLE_ALL_ONUS_COMPLETED
#define bcmolt_pon_interface_auto_subgroup_ieee_rogue_detection_completed BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_IEEE_ROGUE_DETECTION_COMPLETED
#define bcmolt_pon_interface_auto_subgroup_los BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_LOS
#define bcmolt_pon_interface_auto_subgroup_mpcp_timestamp_changed BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_MPCP_TIMESTAMP_CHANGED
#define bcmolt_pon_interface_auto_subgroup_onu_discovered BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_ONU_DISCOVERED
#define bcmolt_pon_interface_auto_subgroup_onu_upgrade_complete BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_ONU_UPGRADE_COMPLETE
#define bcmolt_pon_interface_auto_subgroup_protection_switching_onus_ranged BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_PROTECTION_SWITCHING_ONUS_RANGED
#define bcmolt_pon_interface_auto_subgroup_protection_switching_rerange_failure BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_PROTECTION_SWITCHING_RERANGE_FAILURE
#define bcmolt_pon_interface_auto_subgroup_protection_switching_switchover_completed BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED
#define bcmolt_pon_interface_auto_subgroup_protection_switching_traffic_resume BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_PROTECTION_SWITCHING_TRAFFIC_RESUME
#define bcmolt_pon_interface_auto_subgroup_serial_number_acquisition_cycle_start BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_SERIAL_NUMBER_ACQUISITION_CYCLE_START
#define bcmolt_pon_interface_auto_subgroup_standby_pon_monitoring_cycle_completed BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_STANDBY_PON_MONITORING_CYCLE_COMPLETED
#define bcmolt_pon_interface_auto_subgroup_state_change_completed BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_STATE_CHANGE_COMPLETED
#define bcmolt_pon_interface_auto_subgroup_tod_request_completed BCMOLT_PON_INTERFACE_AUTO_SUBGROUP_TOD_REQUEST_COMPLETED
#define bcmolt_pon_interface_auto_subgroup__num_of BCMOLT_PON_INTERFACE_AUTO_SUBGROUP__NUM_OF
#define bcmolt_pon_interface_auto_subgroup_all_properties 0xFFFF
#define bcmolt_pon_interface_auto_subgroup_full_mask 0x7FFFF

} bcmolt_pon_interface_auto_subgroup;

/** List of all pon_interface groups of type oper. */
typedef enum
{
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_ABORT_ONU_UPGRADE = 1, /**< Abort ONU Firmware Upgrade. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_BROADCAST_PLOAM_PACKET = 2, /**< Broadcast PLOAM Packet. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_CPU_PACKETS = 3, /**< XGPON CPU packets. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_DISABLE_SERIAL_NUMBER = 4, /**< Disable Serial Number. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA = 5, /**< Protection switching apply re-range delta (IEEE). */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE = 6, /**< protection switching type c set multiple onu state. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_RESET = 7, /**< Reset. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_RUN_SPECIAL_BW_MAP = 8, /**< Run Special BW Map. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_SET_ONU_STATE = 9, /**< Set ONU State. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_SET_PON_INTERFACE_STATE = 10, /**< Set PON Interface State. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_SINGLE_REQUEST_STANDBY_PON_MONITORING = 11, /**< Single request standby PON Monitoring. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_START_ONU_UPGRADE = 12, /**< Start ONU Firmware Upgrade. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP_TOD_REQUEST = 13, /**< TOD request. */
    BCMOLT_PON_INTERFACE_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_oper_subgroup__begin BCMOLT_PON_INTERFACE_OPER_SUBGROUP__BEGIN
#define bcmolt_pon_interface_oper_subgroup_all BCMOLT_PON_INTERFACE_OPER_SUBGROUP_ALL
#define bcmolt_pon_interface_oper_subgroup_abort_onu_upgrade BCMOLT_PON_INTERFACE_OPER_SUBGROUP_ABORT_ONU_UPGRADE
#define bcmolt_pon_interface_oper_subgroup_broadcast_ploam_packet BCMOLT_PON_INTERFACE_OPER_SUBGROUP_BROADCAST_PLOAM_PACKET
#define bcmolt_pon_interface_oper_subgroup_cpu_packets BCMOLT_PON_INTERFACE_OPER_SUBGROUP_CPU_PACKETS
#define bcmolt_pon_interface_oper_subgroup_disable_serial_number BCMOLT_PON_INTERFACE_OPER_SUBGROUP_DISABLE_SERIAL_NUMBER
#define bcmolt_pon_interface_oper_subgroup_protection_switching_apply_rerange_delta BCMOLT_PON_INTERFACE_OPER_SUBGROUP_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA
#define bcmolt_pon_interface_oper_subgroup_protection_switching_type_c_set_multiple_onu_state BCMOLT_PON_INTERFACE_OPER_SUBGROUP_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE
#define bcmolt_pon_interface_oper_subgroup_reset BCMOLT_PON_INTERFACE_OPER_SUBGROUP_RESET
#define bcmolt_pon_interface_oper_subgroup_run_special_bw_map BCMOLT_PON_INTERFACE_OPER_SUBGROUP_RUN_SPECIAL_BW_MAP
#define bcmolt_pon_interface_oper_subgroup_set_onu_state BCMOLT_PON_INTERFACE_OPER_SUBGROUP_SET_ONU_STATE
#define bcmolt_pon_interface_oper_subgroup_set_pon_interface_state BCMOLT_PON_INTERFACE_OPER_SUBGROUP_SET_PON_INTERFACE_STATE
#define bcmolt_pon_interface_oper_subgroup_single_request_standby_pon_monitoring BCMOLT_PON_INTERFACE_OPER_SUBGROUP_SINGLE_REQUEST_STANDBY_PON_MONITORING
#define bcmolt_pon_interface_oper_subgroup_start_onu_upgrade BCMOLT_PON_INTERFACE_OPER_SUBGROUP_START_ONU_UPGRADE
#define bcmolt_pon_interface_oper_subgroup_tod_request BCMOLT_PON_INTERFACE_OPER_SUBGROUP_TOD_REQUEST
#define bcmolt_pon_interface_oper_subgroup__num_of BCMOLT_PON_INTERFACE_OPER_SUBGROUP__NUM_OF
#define bcmolt_pon_interface_oper_subgroup_all_properties 0xFFFF
#define bcmolt_pon_interface_oper_subgroup_full_mask 0x3FFF

} bcmolt_pon_interface_oper_subgroup;

/** List of all protection_interface groups of type auto. */
typedef enum
{
    BCMOLT_PROTECTION_INTERFACE_AUTO_SUBGROUP__BEGIN = 0,
    BCMOLT_PROTECTION_INTERFACE_AUTO_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_PROTECTION_INTERFACE_AUTO_SUBGROUP_PROTECTION_SWITCH_COMPLETED = 1, /**< Protection Switch Completed. */
    BCMOLT_PROTECTION_INTERFACE_AUTO_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_protection_interface_auto_subgroup__begin BCMOLT_PROTECTION_INTERFACE_AUTO_SUBGROUP__BEGIN
#define bcmolt_protection_interface_auto_subgroup_all BCMOLT_PROTECTION_INTERFACE_AUTO_SUBGROUP_ALL
#define bcmolt_protection_interface_auto_subgroup_protection_switch_completed BCMOLT_PROTECTION_INTERFACE_AUTO_SUBGROUP_PROTECTION_SWITCH_COMPLETED
#define bcmolt_protection_interface_auto_subgroup__num_of BCMOLT_PROTECTION_INTERFACE_AUTO_SUBGROUP__NUM_OF
#define bcmolt_protection_interface_auto_subgroup_all_properties 0xFFFF
#define bcmolt_protection_interface_auto_subgroup_full_mask 0x3

} bcmolt_protection_interface_auto_subgroup;

/** List of all protection_interface groups of type oper. */
typedef enum
{
    BCMOLT_PROTECTION_INTERFACE_OPER_SUBGROUP__BEGIN = 0,
    BCMOLT_PROTECTION_INTERFACE_OPER_SUBGROUP_ALL = 0, /**< Subscribe to all subgroups (reserved value). */
    BCMOLT_PROTECTION_INTERFACE_OPER_SUBGROUP_PROTECTION_SWITCH = 1, /**< Protection Switch. */
    BCMOLT_PROTECTION_INTERFACE_OPER_SUBGROUP__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_protection_interface_oper_subgroup__begin BCMOLT_PROTECTION_INTERFACE_OPER_SUBGROUP__BEGIN
#define bcmolt_protection_interface_oper_subgroup_all BCMOLT_PROTECTION_INTERFACE_OPER_SUBGROUP_ALL
#define bcmolt_protection_interface_oper_subgroup_protection_switch BCMOLT_PROTECTION_INTERFACE_OPER_SUBGROUP_PROTECTION_SWITCH
#define bcmolt_protection_interface_oper_subgroup__num_of BCMOLT_PROTECTION_INTERFACE_OPER_SUBGROUP__NUM_OF
#define bcmolt_protection_interface_oper_subgroup_all_properties 0xFFFF
#define bcmolt_protection_interface_oper_subgroup_full_mask 0x3

} bcmolt_protection_interface_oper_subgroup;

/** Identifiers for all fields in a 'access_control_fwd_action'. */
typedef enum
{
    BCMOLT_ACCESS_CONTROL_FWD_ACTION_ID__BEGIN = 0,
    BCMOLT_ACCESS_CONTROL_FWD_ACTION_ID_ACTION = 0, /**< action. */
    BCMOLT_ACCESS_CONTROL_FWD_ACTION_ID_REDIRECT_INTF_REF = 1, /**< redirect interface. */
    BCMOLT_ACCESS_CONTROL_FWD_ACTION_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_access_control_fwd_action_id__begin BCMOLT_ACCESS_CONTROL_FWD_ACTION_ID__BEGIN
#define bcmolt_access_control_fwd_action_id_action BCMOLT_ACCESS_CONTROL_FWD_ACTION_ID_ACTION
#define bcmolt_access_control_fwd_action_id_redirect_intf_ref BCMOLT_ACCESS_CONTROL_FWD_ACTION_ID_REDIRECT_INTF_REF
#define bcmolt_access_control_fwd_action_id__num_of BCMOLT_ACCESS_CONTROL_FWD_ACTION_ID__NUM_OF
#define bcmolt_access_control_fwd_action_id_all_properties 0xFF
#define bcmolt_access_control_fwd_action_id_full_mask 0x3

} bcmolt_access_control_fwd_action_id;

/** Identifiers for all fields in a 'access_control_pkt_modifier'. */
typedef enum
{
    BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID__BEGIN = 0,
    BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_PKT_MODIFIER_BIT_MASK = 0, /**< Packet modifer Bit mask. */
    BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_O_VID = 1, /**< Push Outer VID or Modify Outer VID. */
    BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_I_VID = 2, /**< Modify Inner Vlan Id. */
    BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_O_PBITS = 3, /**< Remark Outer PBits. */
    BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_I_PBITS = 4, /**< Remark Inner PBits. */
    BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_DSCP = 5, /**< Remark DSCP value. */
    BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_TTL = 6, /**< Rewrite TTL value. */
    BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_access_control_pkt_modifier_id__begin BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID__BEGIN
#define bcmolt_access_control_pkt_modifier_id_pkt_modifier_bit_mask BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_PKT_MODIFIER_BIT_MASK
#define bcmolt_access_control_pkt_modifier_id_o_vid BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_O_VID
#define bcmolt_access_control_pkt_modifier_id_i_vid BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_I_VID
#define bcmolt_access_control_pkt_modifier_id_o_pbits BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_O_PBITS
#define bcmolt_access_control_pkt_modifier_id_i_pbits BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_I_PBITS
#define bcmolt_access_control_pkt_modifier_id_dscp BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_DSCP
#define bcmolt_access_control_pkt_modifier_id_ttl BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID_TTL
#define bcmolt_access_control_pkt_modifier_id__num_of BCMOLT_ACCESS_CONTROL_PKT_MODIFIER_ID__NUM_OF
#define bcmolt_access_control_pkt_modifier_id_all_properties 0xFF
#define bcmolt_access_control_pkt_modifier_id_full_mask 0x7F

} bcmolt_access_control_pkt_modifier_id;

/** Identifiers for all fields in a 'action'. */
typedef enum
{
    BCMOLT_ACTION_ID__BEGIN = 0,
    BCMOLT_ACTION_ID_CMDS_BITMASK = 0, /**< Commands bitmask. */
    BCMOLT_ACTION_ID_O_VID = 1, /**< Outer vid. */
    BCMOLT_ACTION_ID_O_PBITS = 2, /**< Outer pbits. */
    BCMOLT_ACTION_ID_I_VID = 3, /**< Inner vid. */
    BCMOLT_ACTION_ID_I_PBITS = 4, /**< Inner pbits. */
    BCMOLT_ACTION_ID_TAG_FORMAT = 5, /**< vlan tags format. */
    BCMOLT_ACTION_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_action_id__begin BCMOLT_ACTION_ID__BEGIN
#define bcmolt_action_id_cmds_bitmask BCMOLT_ACTION_ID_CMDS_BITMASK
#define bcmolt_action_id_o_vid BCMOLT_ACTION_ID_O_VID
#define bcmolt_action_id_o_pbits BCMOLT_ACTION_ID_O_PBITS
#define bcmolt_action_id_i_vid BCMOLT_ACTION_ID_I_VID
#define bcmolt_action_id_i_pbits BCMOLT_ACTION_ID_I_PBITS
#define bcmolt_action_id_tag_format BCMOLT_ACTION_ID_TAG_FORMAT
#define bcmolt_action_id__num_of BCMOLT_ACTION_ID__NUM_OF
#define bcmolt_action_id_all_properties 0xFF
#define bcmolt_action_id_full_mask 0x3F

} bcmolt_action_id;

/** Identifiers for all fields in a 'aes_key'. */
typedef enum
{
    BCMOLT_AES_KEY_ID__BEGIN = 0,
    BCMOLT_AES_KEY_ID_BYTES = 0, /**< Bytes. */
    BCMOLT_AES_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_aes_key_id__begin BCMOLT_AES_KEY_ID__BEGIN
#define bcmolt_aes_key_id_bytes BCMOLT_AES_KEY_ID_BYTES
#define bcmolt_aes_key_id__num_of BCMOLT_AES_KEY_ID__NUM_OF
#define bcmolt_aes_key_id_all_properties 0xFF
#define bcmolt_aes_key_id_full_mask 0x1

} bcmolt_aes_key_id;

/** Identifiers for all fields in a 'automatic_onu_deactivation'. */
typedef enum
{
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID__BEGIN = 0,
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_LOS = 0, /**< LOS. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_ONU_ALARMS = 1, /**< ONU alarms. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_TIWI = 2, /**< Tiwi. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_ACK_TIMEOUT = 3, /**< ACK timeout. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_SFI = 4, /**< SFi. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_LOKI = 5, /**< Loki. */
    BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_automatic_onu_deactivation_id__begin BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID__BEGIN
#define bcmolt_automatic_onu_deactivation_id_los BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_LOS
#define bcmolt_automatic_onu_deactivation_id_onu_alarms BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_ONU_ALARMS
#define bcmolt_automatic_onu_deactivation_id_tiwi BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_TIWI
#define bcmolt_automatic_onu_deactivation_id_ack_timeout BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_ACK_TIMEOUT
#define bcmolt_automatic_onu_deactivation_id_sfi BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_SFI
#define bcmolt_automatic_onu_deactivation_id_loki BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID_LOKI
#define bcmolt_automatic_onu_deactivation_id__num_of BCMOLT_AUTOMATIC_ONU_DEACTIVATION_ID__NUM_OF
#define bcmolt_automatic_onu_deactivation_id_all_properties 0xFF
#define bcmolt_automatic_onu_deactivation_id_full_mask 0x3F

} bcmolt_automatic_onu_deactivation_id;

/** Identifiers for all fields in a 'ber_monitor_params'. */
typedef enum
{
    BCMOLT_BER_MONITOR_PARAMS_ID__BEGIN = 0,
    BCMOLT_BER_MONITOR_PARAMS_ID_US_BER_INTERVAL = 0, /**< US BER interval in ms. */
    BCMOLT_BER_MONITOR_PARAMS_ID_SF_THRESHOLD = 1, /**< SF threshold. */
    BCMOLT_BER_MONITOR_PARAMS_ID_SD_THRESHOLD = 2, /**< SD threshold. */
    BCMOLT_BER_MONITOR_PARAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ber_monitor_params_id__begin BCMOLT_BER_MONITOR_PARAMS_ID__BEGIN
#define bcmolt_ber_monitor_params_id_us_ber_interval BCMOLT_BER_MONITOR_PARAMS_ID_US_BER_INTERVAL
#define bcmolt_ber_monitor_params_id_sf_threshold BCMOLT_BER_MONITOR_PARAMS_ID_SF_THRESHOLD
#define bcmolt_ber_monitor_params_id_sd_threshold BCMOLT_BER_MONITOR_PARAMS_ID_SD_THRESHOLD
#define bcmolt_ber_monitor_params_id__num_of BCMOLT_BER_MONITOR_PARAMS_ID__NUM_OF
#define bcmolt_ber_monitor_params_id_all_properties 0xFF
#define bcmolt_ber_monitor_params_id_full_mask 0x7

} bcmolt_ber_monitor_params_id;

/** Identifiers for all fields in a 'cbr_rt_allocation_profile'. */
typedef enum
{
    BCMOLT_CBR_RT_ALLOCATION_PROFILE_ID__BEGIN = 0,
    BCMOLT_CBR_RT_ALLOCATION_PROFILE_ID_MA_7 = 0, /**< MA_7. */
    BCMOLT_CBR_RT_ALLOCATION_PROFILE_ID_MA_3 = 1, /**< MA_3. */
    BCMOLT_CBR_RT_ALLOCATION_PROFILE_ID_MA_1 = 2, /**< MA_1. */
    BCMOLT_CBR_RT_ALLOCATION_PROFILE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_cbr_rt_allocation_profile_id__begin BCMOLT_CBR_RT_ALLOCATION_PROFILE_ID__BEGIN
#define bcmolt_cbr_rt_allocation_profile_id_ma_7 BCMOLT_CBR_RT_ALLOCATION_PROFILE_ID_MA_7
#define bcmolt_cbr_rt_allocation_profile_id_ma_3 BCMOLT_CBR_RT_ALLOCATION_PROFILE_ID_MA_3
#define bcmolt_cbr_rt_allocation_profile_id_ma_1 BCMOLT_CBR_RT_ALLOCATION_PROFILE_ID_MA_1
#define bcmolt_cbr_rt_allocation_profile_id__num_of BCMOLT_CBR_RT_ALLOCATION_PROFILE_ID__NUM_OF
#define bcmolt_cbr_rt_allocation_profile_id_all_properties 0xFF
#define bcmolt_cbr_rt_allocation_profile_id_full_mask 0x7

} bcmolt_cbr_rt_allocation_profile_id;

/** Identifiers for all fields in a 'channel_profile'. */
typedef enum
{
    BCMOLT_CHANNEL_PROFILE_ID__BEGIN = 0,
    BCMOLT_CHANNEL_PROFILE_ID_VERSION = 0, /**< Channel profile version. */
    BCMOLT_CHANNEL_PROFILE_ID_CHANNEL_INDEX = 1, /**< Channel profile index. */
    BCMOLT_CHANNEL_PROFILE_ID_DS_FREQUENCY_OFFSET = 2, /**< DS frequency offset. */
    BCMOLT_CHANNEL_PROFILE_ID_CHANNEL_PARTITION = 3, /**< Channel partition. */
    BCMOLT_CHANNEL_PROFILE_ID_UWLCH_ID = 4, /**< UWLCH ID. */
    BCMOLT_CHANNEL_PROFILE_ID_US_FREQUENCY = 5, /**< US frequency. */
    BCMOLT_CHANNEL_PROFILE_ID_US_RATE = 6, /**< US rate. */
    BCMOLT_CHANNEL_PROFILE_ID_DEFAULT_ONU_ATTENUATION = 7, /**< default ONU attenuation. */
    BCMOLT_CHANNEL_PROFILE_ID_RESPONSE_THRESHOLD = 8, /**< Response threshold. */
    BCMOLT_CHANNEL_PROFILE_ID_US_LINK_TYPE = 9, /**< US link type. */
    BCMOLT_CHANNEL_PROFILE_ID_IS_VALID = 10, /**< is valid. */
    BCMOLT_CHANNEL_PROFILE_ID_PON_ID = 11, /**< pon_id. */
    BCMOLT_CHANNEL_PROFILE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_channel_profile_id__begin BCMOLT_CHANNEL_PROFILE_ID__BEGIN
#define bcmolt_channel_profile_id_version BCMOLT_CHANNEL_PROFILE_ID_VERSION
#define bcmolt_channel_profile_id_channel_index BCMOLT_CHANNEL_PROFILE_ID_CHANNEL_INDEX
#define bcmolt_channel_profile_id_ds_frequency_offset BCMOLT_CHANNEL_PROFILE_ID_DS_FREQUENCY_OFFSET
#define bcmolt_channel_profile_id_channel_partition BCMOLT_CHANNEL_PROFILE_ID_CHANNEL_PARTITION
#define bcmolt_channel_profile_id_uwlch_id BCMOLT_CHANNEL_PROFILE_ID_UWLCH_ID
#define bcmolt_channel_profile_id_us_frequency BCMOLT_CHANNEL_PROFILE_ID_US_FREQUENCY
#define bcmolt_channel_profile_id_us_rate BCMOLT_CHANNEL_PROFILE_ID_US_RATE
#define bcmolt_channel_profile_id_default_onu_attenuation BCMOLT_CHANNEL_PROFILE_ID_DEFAULT_ONU_ATTENUATION
#define bcmolt_channel_profile_id_response_threshold BCMOLT_CHANNEL_PROFILE_ID_RESPONSE_THRESHOLD
#define bcmolt_channel_profile_id_us_link_type BCMOLT_CHANNEL_PROFILE_ID_US_LINK_TYPE
#define bcmolt_channel_profile_id_is_valid BCMOLT_CHANNEL_PROFILE_ID_IS_VALID
#define bcmolt_channel_profile_id_pon_id BCMOLT_CHANNEL_PROFILE_ID_PON_ID
#define bcmolt_channel_profile_id__num_of BCMOLT_CHANNEL_PROFILE_ID__NUM_OF
#define bcmolt_channel_profile_id_all_properties 0xFF
#define bcmolt_channel_profile_id_full_mask 0xFFF

} bcmolt_channel_profile_id;

/** Identifiers for all fields in a 'classifier'. */
typedef enum
{
    BCMOLT_CLASSIFIER_ID__BEGIN = 0,
    BCMOLT_CLASSIFIER_ID_O_VID = 0, /**< Outer vid. */
    BCMOLT_CLASSIFIER_ID_I_VID = 1, /**< Inner vid. */
    BCMOLT_CLASSIFIER_ID_O_PBITS = 2, /**< Outer Pbits. */
    BCMOLT_CLASSIFIER_ID_I_PBITS = 3, /**< Inner Pbits. */
    BCMOLT_CLASSIFIER_ID_ETHER_TYPE = 4, /**< Ether type. */
    BCMOLT_CLASSIFIER_ID_DST_MAC = 5, /**< Destination mac. */
    BCMOLT_CLASSIFIER_ID_SRC_MAC = 6, /**< Source mac. */
    BCMOLT_CLASSIFIER_ID_IP_PROTO = 7, /**< IP Protocol. */
    BCMOLT_CLASSIFIER_ID_DST_IP = 8, /**< Destination IP address. */
    BCMOLT_CLASSIFIER_ID_SRC_IP = 9, /**< Source IP address. */
    BCMOLT_CLASSIFIER_ID_SRC_PORT = 10, /**< Source port. */
    BCMOLT_CLASSIFIER_ID_DST_PORT = 11, /**< Destination port. */
    BCMOLT_CLASSIFIER_ID_PKT_TAG_TYPE = 12, /**< Packet tag type. */
    BCMOLT_CLASSIFIER_ID_CLASSIFIER_BITMAP = 13, /**< Classifier Bitmap. */
    BCMOLT_CLASSIFIER_ID_DST_IP_MASK = 16, /**< Destination IP address mask. */
    BCMOLT_CLASSIFIER_ID_SRC_IP_MASK = 17, /**< Source IP address mask. */
    BCMOLT_CLASSIFIER_ID_SRC_PORT_RANGE = 19, /**< Source port range. */
    BCMOLT_CLASSIFIER_ID_DST_PORT_RANGE = 21, /**< Destination port range. */
    BCMOLT_CLASSIFIER_ID_IP_V_6 = 22, /**< IPv6 related classifier. */
    BCMOLT_CLASSIFIER_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_classifier_id__begin BCMOLT_CLASSIFIER_ID__BEGIN
#define bcmolt_classifier_id_o_vid BCMOLT_CLASSIFIER_ID_O_VID
#define bcmolt_classifier_id_i_vid BCMOLT_CLASSIFIER_ID_I_VID
#define bcmolt_classifier_id_o_pbits BCMOLT_CLASSIFIER_ID_O_PBITS
#define bcmolt_classifier_id_i_pbits BCMOLT_CLASSIFIER_ID_I_PBITS
#define bcmolt_classifier_id_ether_type BCMOLT_CLASSIFIER_ID_ETHER_TYPE
#define bcmolt_classifier_id_dst_mac BCMOLT_CLASSIFIER_ID_DST_MAC
#define bcmolt_classifier_id_src_mac BCMOLT_CLASSIFIER_ID_SRC_MAC
#define bcmolt_classifier_id_ip_proto BCMOLT_CLASSIFIER_ID_IP_PROTO
#define bcmolt_classifier_id_dst_ip BCMOLT_CLASSIFIER_ID_DST_IP
#define bcmolt_classifier_id_src_ip BCMOLT_CLASSIFIER_ID_SRC_IP
#define bcmolt_classifier_id_src_port BCMOLT_CLASSIFIER_ID_SRC_PORT
#define bcmolt_classifier_id_dst_port BCMOLT_CLASSIFIER_ID_DST_PORT
#define bcmolt_classifier_id_pkt_tag_type BCMOLT_CLASSIFIER_ID_PKT_TAG_TYPE
#define bcmolt_classifier_id_classifier_bitmap BCMOLT_CLASSIFIER_ID_CLASSIFIER_BITMAP
#define bcmolt_classifier_id_dst_ip_mask BCMOLT_CLASSIFIER_ID_DST_IP_MASK
#define bcmolt_classifier_id_src_ip_mask BCMOLT_CLASSIFIER_ID_SRC_IP_MASK
#define bcmolt_classifier_id_src_port_range BCMOLT_CLASSIFIER_ID_SRC_PORT_RANGE
#define bcmolt_classifier_id_dst_port_range BCMOLT_CLASSIFIER_ID_DST_PORT_RANGE
#define bcmolt_classifier_id_ip_v_6 BCMOLT_CLASSIFIER_ID_IP_V_6
#define bcmolt_classifier_id__num_of BCMOLT_CLASSIFIER_ID__NUM_OF
#define bcmolt_classifier_id_all_properties 0xFF
#define bcmolt_classifier_id_full_mask 0x6B3FFF

} bcmolt_classifier_id;

/** Identifiers for all fields in a 'classifier_ip_v_6'. */
typedef enum
{
    BCMOLT_CLASSIFIER_IP_V_6_ID__BEGIN = 0,
    BCMOLT_CLASSIFIER_IP_V_6_ID_CLASSIFIER_IP_V_6_BITMAP = 0, /**< classifier bitmap for ipv6. */
    BCMOLT_CLASSIFIER_IP_V_6_ID_MATCH_MLD_PKTS = 1, /**< match MLD packets. */
    BCMOLT_CLASSIFIER_IP_V_6_ID_DST_IP_V_6 = 2, /**< Destination IPv6 address. */
    BCMOLT_CLASSIFIER_IP_V_6_ID_DST_IP_V_6_MASK = 3, /**< Destination IPv6 address mask. */
    BCMOLT_CLASSIFIER_IP_V_6_ID_SRC_IP_V_6 = 4, /**< Source IPv6 Address. */
    BCMOLT_CLASSIFIER_IP_V_6_ID_SRC_IP_V_6_MASK = 5, /**< Source IPv6 Address mask. */
    BCMOLT_CLASSIFIER_IP_V_6_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_classifier_ip_v_6_id__begin BCMOLT_CLASSIFIER_IP_V_6_ID__BEGIN
#define bcmolt_classifier_ip_v_6_id_classifier_ip_v_6_bitmap BCMOLT_CLASSIFIER_IP_V_6_ID_CLASSIFIER_IP_V_6_BITMAP
#define bcmolt_classifier_ip_v_6_id_match_mld_pkts BCMOLT_CLASSIFIER_IP_V_6_ID_MATCH_MLD_PKTS
#define bcmolt_classifier_ip_v_6_id_dst_ip_v_6 BCMOLT_CLASSIFIER_IP_V_6_ID_DST_IP_V_6
#define bcmolt_classifier_ip_v_6_id_dst_ip_v_6_mask BCMOLT_CLASSIFIER_IP_V_6_ID_DST_IP_V_6_MASK
#define bcmolt_classifier_ip_v_6_id_src_ip_v_6 BCMOLT_CLASSIFIER_IP_V_6_ID_SRC_IP_V_6
#define bcmolt_classifier_ip_v_6_id_src_ip_v_6_mask BCMOLT_CLASSIFIER_IP_V_6_ID_SRC_IP_V_6_MASK
#define bcmolt_classifier_ip_v_6_id__num_of BCMOLT_CLASSIFIER_IP_V_6_ID__NUM_OF
#define bcmolt_classifier_ip_v_6_id_all_properties 0xFF
#define bcmolt_classifier_ip_v_6_id_full_mask 0x3F

} bcmolt_classifier_ip_v_6_id;

/** Identifiers for all fields in a 'ddr_test_completed'. */
typedef enum
{
    BCMOLT_DDR_TEST_COMPLETED_ID__BEGIN = 0,
    BCMOLT_DDR_TEST_COMPLETED_ID_STATUS = 0, /**< Status. */
    BCMOLT_DDR_TEST_COMPLETED_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ddr_test_completed_id__begin BCMOLT_DDR_TEST_COMPLETED_ID__BEGIN
#define bcmolt_ddr_test_completed_id_status BCMOLT_DDR_TEST_COMPLETED_ID_STATUS
#define bcmolt_ddr_test_completed_id__num_of BCMOLT_DDR_TEST_COMPLETED_ID__NUM_OF
#define bcmolt_ddr_test_completed_id_all_properties 0xFF
#define bcmolt_ddr_test_completed_id_full_mask 0x1

} bcmolt_ddr_test_completed_id;

/** Identifiers for all fields in a 'ddr_test_completed_default'. */
typedef enum
{
    BCMOLT_DDR_TEST_COMPLETED_DEFAULT_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ddr_test_completed_default_id__num_of BCMOLT_DDR_TEST_COMPLETED_DEFAULT_ID__NUM_OF
#define bcmolt_ddr_test_completed_default_id_all_properties 0xFF
#define bcmolt_ddr_test_completed_default_id_full_mask 0x0

} bcmolt_ddr_test_completed_default_id;

/** Identifiers for all fields in a 'ddr_test_completed_completed'. */
typedef enum
{
    BCMOLT_DDR_TEST_COMPLETED_COMPLETED_ID__BEGIN = 0,
    BCMOLT_DDR_TEST_COMPLETED_COMPLETED_ID_CPU_RESULT = 0, /**< CPU Result. */
    BCMOLT_DDR_TEST_COMPLETED_COMPLETED_ID_RAS_0_RESULT = 1, /**< RAS 0 Result. */
    BCMOLT_DDR_TEST_COMPLETED_COMPLETED_ID_RAS_1_RESULT = 2, /**< RAS 1 Result. */
    BCMOLT_DDR_TEST_COMPLETED_COMPLETED_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ddr_test_completed_completed_id__begin BCMOLT_DDR_TEST_COMPLETED_COMPLETED_ID__BEGIN
#define bcmolt_ddr_test_completed_completed_id_cpu_result BCMOLT_DDR_TEST_COMPLETED_COMPLETED_ID_CPU_RESULT
#define bcmolt_ddr_test_completed_completed_id_ras_0_result BCMOLT_DDR_TEST_COMPLETED_COMPLETED_ID_RAS_0_RESULT
#define bcmolt_ddr_test_completed_completed_id_ras_1_result BCMOLT_DDR_TEST_COMPLETED_COMPLETED_ID_RAS_1_RESULT
#define bcmolt_ddr_test_completed_completed_id__num_of BCMOLT_DDR_TEST_COMPLETED_COMPLETED_ID__NUM_OF
#define bcmolt_ddr_test_completed_completed_id_all_properties 0xFF
#define bcmolt_ddr_test_completed_completed_id_full_mask 0x7

} bcmolt_ddr_test_completed_completed_id;

/** Identifiers for all fields in a 'ddr_test_completed_connection_failed'. */
typedef enum
{
    BCMOLT_DDR_TEST_COMPLETED_CONNECTION_FAILED_ID__BEGIN = 0,
    BCMOLT_DDR_TEST_COMPLETED_CONNECTION_FAILED_ID_REASON = 0, /**< Connection fail reason. */
    BCMOLT_DDR_TEST_COMPLETED_CONNECTION_FAILED_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ddr_test_completed_connection_failed_id__begin BCMOLT_DDR_TEST_COMPLETED_CONNECTION_FAILED_ID__BEGIN
#define bcmolt_ddr_test_completed_connection_failed_id_reason BCMOLT_DDR_TEST_COMPLETED_CONNECTION_FAILED_ID_REASON
#define bcmolt_ddr_test_completed_connection_failed_id__num_of BCMOLT_DDR_TEST_COMPLETED_CONNECTION_FAILED_ID__NUM_OF
#define bcmolt_ddr_test_completed_connection_failed_id_all_properties 0xFF
#define bcmolt_ddr_test_completed_connection_failed_id_full_mask 0x1

} bcmolt_ddr_test_completed_connection_failed_id;

/** Identifiers for all fields in a 'debug_device_cfg'. */
typedef enum
{
    BCMOLT_DEBUG_DEVICE_CFG_ID__BEGIN = 0,
    BCMOLT_DEBUG_DEVICE_CFG_ID_USE_PREV_PON_SERDES_FIRMWARE = 0, /**< Use previous SGB SERDES firmware. */
    BCMOLT_DEBUG_DEVICE_CFG_ID_USE_PREV_NNI_SERDES_FIRMWARE = 1, /**< Use previous NNI SERDES firmware. */
    BCMOLT_DEBUG_DEVICE_CFG_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_debug_device_cfg_id__begin BCMOLT_DEBUG_DEVICE_CFG_ID__BEGIN
#define bcmolt_debug_device_cfg_id_use_prev_pon_serdes_firmware BCMOLT_DEBUG_DEVICE_CFG_ID_USE_PREV_PON_SERDES_FIRMWARE
#define bcmolt_debug_device_cfg_id_use_prev_nni_serdes_firmware BCMOLT_DEBUG_DEVICE_CFG_ID_USE_PREV_NNI_SERDES_FIRMWARE
#define bcmolt_debug_device_cfg_id__num_of BCMOLT_DEBUG_DEVICE_CFG_ID__NUM_OF
#define bcmolt_debug_device_cfg_id_all_properties 0xFF
#define bcmolt_debug_device_cfg_id_full_mask 0x3

} bcmolt_debug_device_cfg_id;

/** Identifiers for all fields in a 'debug_flow_config'. */
typedef enum
{
    BCMOLT_DEBUG_FLOW_CONFIG_ID__BEGIN = 0,
    BCMOLT_DEBUG_FLOW_CONFIG_ID_UNTAGGED_FLOW = 0, /**< Untagged Flow. */
    BCMOLT_DEBUG_FLOW_CONFIG_ID_UNTAGGED_VID = 1, /**< Untagged VID. */
    BCMOLT_DEBUG_FLOW_CONFIG_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_debug_flow_config_id__begin BCMOLT_DEBUG_FLOW_CONFIG_ID__BEGIN
#define bcmolt_debug_flow_config_id_untagged_flow BCMOLT_DEBUG_FLOW_CONFIG_ID_UNTAGGED_FLOW
#define bcmolt_debug_flow_config_id_untagged_vid BCMOLT_DEBUG_FLOW_CONFIG_ID_UNTAGGED_VID
#define bcmolt_debug_flow_config_id__num_of BCMOLT_DEBUG_FLOW_CONFIG_ID__NUM_OF
#define bcmolt_debug_flow_config_id_all_properties 0xFF
#define bcmolt_debug_flow_config_id_full_mask 0x3

} bcmolt_debug_flow_config_id;

/** Identifiers for all fields in a 'ds_frequency_offset'. */
typedef enum
{
    BCMOLT_DS_FREQUENCY_OFFSET_ID__BEGIN = 0,
    BCMOLT_DS_FREQUENCY_OFFSET_ID_SIGN = 0, /**< sign. */
    BCMOLT_DS_FREQUENCY_OFFSET_ID_VALUE = 1, /**< value. */
    BCMOLT_DS_FREQUENCY_OFFSET_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ds_frequency_offset_id__begin BCMOLT_DS_FREQUENCY_OFFSET_ID__BEGIN
#define bcmolt_ds_frequency_offset_id_sign BCMOLT_DS_FREQUENCY_OFFSET_ID_SIGN
#define bcmolt_ds_frequency_offset_id_value BCMOLT_DS_FREQUENCY_OFFSET_ID_VALUE
#define bcmolt_ds_frequency_offset_id__num_of BCMOLT_DS_FREQUENCY_OFFSET_ID__NUM_OF
#define bcmolt_ds_frequency_offset_id_all_properties 0xFF
#define bcmolt_ds_frequency_offset_id_full_mask 0x3

} bcmolt_ds_frequency_offset_id;

/** Identifiers for all fields in a 'egress_qos'. */
typedef enum
{
    BCMOLT_EGRESS_QOS_ID__BEGIN = 0,
    BCMOLT_EGRESS_QOS_ID_TYPE = 0, /**< egress qos type. */
    BCMOLT_EGRESS_QOS_ID_TM_SCHED = 1, /**< TM scheduler. */
    BCMOLT_EGRESS_QOS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_egress_qos_id__begin BCMOLT_EGRESS_QOS_ID__BEGIN
#define bcmolt_egress_qos_id_type BCMOLT_EGRESS_QOS_ID_TYPE
#define bcmolt_egress_qos_id_tm_sched BCMOLT_EGRESS_QOS_ID_TM_SCHED
#define bcmolt_egress_qos_id__num_of BCMOLT_EGRESS_QOS_ID__NUM_OF
#define bcmolt_egress_qos_id_all_properties 0xFF
#define bcmolt_egress_qos_id_full_mask 0x3

} bcmolt_egress_qos_id;

/** Identifiers for all fields in a 'egress_qos_fixed_queue'. */
typedef enum
{
    BCMOLT_EGRESS_QOS_FIXED_QUEUE_ID__BEGIN = 0,
    BCMOLT_EGRESS_QOS_FIXED_QUEUE_ID_QUEUE_ID = 0, /**< queue_id. */
    BCMOLT_EGRESS_QOS_FIXED_QUEUE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_egress_qos_fixed_queue_id__begin BCMOLT_EGRESS_QOS_FIXED_QUEUE_ID__BEGIN
#define bcmolt_egress_qos_fixed_queue_id_queue_id BCMOLT_EGRESS_QOS_FIXED_QUEUE_ID_QUEUE_ID
#define bcmolt_egress_qos_fixed_queue_id__num_of BCMOLT_EGRESS_QOS_FIXED_QUEUE_ID__NUM_OF
#define bcmolt_egress_qos_fixed_queue_id_all_properties 0xFF
#define bcmolt_egress_qos_fixed_queue_id_full_mask 0x1

} bcmolt_egress_qos_fixed_queue_id;

/** Identifiers for all fields in a 'egress_qos_tc_to_queue'. */
typedef enum
{
    BCMOLT_EGRESS_QOS_TC_TO_QUEUE_ID__BEGIN = 0,
    BCMOLT_EGRESS_QOS_TC_TO_QUEUE_ID_TC_ID = 0, /**< tc_id. */
    BCMOLT_EGRESS_QOS_TC_TO_QUEUE_ID_TC_TO_QUEUE_ID = 1, /**< tc_to_queue_id. */
    BCMOLT_EGRESS_QOS_TC_TO_QUEUE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_egress_qos_tc_to_queue_id__begin BCMOLT_EGRESS_QOS_TC_TO_QUEUE_ID__BEGIN
#define bcmolt_egress_qos_tc_to_queue_id_tc_id BCMOLT_EGRESS_QOS_TC_TO_QUEUE_ID_TC_ID
#define bcmolt_egress_qos_tc_to_queue_id_tc_to_queue_id BCMOLT_EGRESS_QOS_TC_TO_QUEUE_ID_TC_TO_QUEUE_ID
#define bcmolt_egress_qos_tc_to_queue_id__num_of BCMOLT_EGRESS_QOS_TC_TO_QUEUE_ID__NUM_OF
#define bcmolt_egress_qos_tc_to_queue_id_all_properties 0xFF
#define bcmolt_egress_qos_tc_to_queue_id_full_mask 0x3

} bcmolt_egress_qos_tc_to_queue_id;

/** Identifiers for all fields in a 'egress_qos_pbit_to_tc'. */
typedef enum
{
    BCMOLT_EGRESS_QOS_PBIT_TO_TC_ID__BEGIN = 0,
    BCMOLT_EGRESS_QOS_PBIT_TO_TC_ID_PBIT_TO_TC_ID = 0, /**< pbit_to_tc_id. */
    BCMOLT_EGRESS_QOS_PBIT_TO_TC_ID_TC_TO_QUEUE_ID = 1, /**< tc_to_queue_id. */
    BCMOLT_EGRESS_QOS_PBIT_TO_TC_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_egress_qos_pbit_to_tc_id__begin BCMOLT_EGRESS_QOS_PBIT_TO_TC_ID__BEGIN
#define bcmolt_egress_qos_pbit_to_tc_id_pbit_to_tc_id BCMOLT_EGRESS_QOS_PBIT_TO_TC_ID_PBIT_TO_TC_ID
#define bcmolt_egress_qos_pbit_to_tc_id_tc_to_queue_id BCMOLT_EGRESS_QOS_PBIT_TO_TC_ID_TC_TO_QUEUE_ID
#define bcmolt_egress_qos_pbit_to_tc_id__num_of BCMOLT_EGRESS_QOS_PBIT_TO_TC_ID__NUM_OF
#define bcmolt_egress_qos_pbit_to_tc_id_all_properties 0xFF
#define bcmolt_egress_qos_pbit_to_tc_id_full_mask 0x3

} bcmolt_egress_qos_pbit_to_tc_id;

/** Identifiers for all fields in a 'egress_qos_priority_to_queue'. */
typedef enum
{
    BCMOLT_EGRESS_QOS_PRIORITY_TO_QUEUE_ID__BEGIN = 0,
    BCMOLT_EGRESS_QOS_PRIORITY_TO_QUEUE_ID_TM_QMP_ID = 0, /**< tm_qmp_id. */
    BCMOLT_EGRESS_QOS_PRIORITY_TO_QUEUE_ID_TM_Q_SET_ID = 1, /**< tm_q_set_id. */
    BCMOLT_EGRESS_QOS_PRIORITY_TO_QUEUE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_egress_qos_priority_to_queue_id__begin BCMOLT_EGRESS_QOS_PRIORITY_TO_QUEUE_ID__BEGIN
#define bcmolt_egress_qos_priority_to_queue_id_tm_qmp_id BCMOLT_EGRESS_QOS_PRIORITY_TO_QUEUE_ID_TM_QMP_ID
#define bcmolt_egress_qos_priority_to_queue_id_tm_q_set_id BCMOLT_EGRESS_QOS_PRIORITY_TO_QUEUE_ID_TM_Q_SET_ID
#define bcmolt_egress_qos_priority_to_queue_id__num_of BCMOLT_EGRESS_QOS_PRIORITY_TO_QUEUE_ID__NUM_OF
#define bcmolt_egress_qos_priority_to_queue_id_all_properties 0xFF
#define bcmolt_egress_qos_priority_to_queue_id_full_mask 0x3

} bcmolt_egress_qos_priority_to_queue_id;

/** Identifiers for all fields in a 'embedded_image_entry'. */
typedef enum
{
    BCMOLT_EMBEDDED_IMAGE_ENTRY_ID__BEGIN = 0,
    BCMOLT_EMBEDDED_IMAGE_ENTRY_ID_IMAGE_TYPE = 0, /**< Image Type. */
    BCMOLT_EMBEDDED_IMAGE_ENTRY_ID_IMAGE_SIZE = 1, /**< Image size. */
    BCMOLT_EMBEDDED_IMAGE_ENTRY_ID_CRC32 = 2, /**< CRC32. */
    BCMOLT_EMBEDDED_IMAGE_ENTRY_ID_STATUS = 3, /**< Status. */
    BCMOLT_EMBEDDED_IMAGE_ENTRY_ID_IMAGE_NAME = 4, /**< Image name. */
    BCMOLT_EMBEDDED_IMAGE_ENTRY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_embedded_image_entry_id__begin BCMOLT_EMBEDDED_IMAGE_ENTRY_ID__BEGIN
#define bcmolt_embedded_image_entry_id_image_type BCMOLT_EMBEDDED_IMAGE_ENTRY_ID_IMAGE_TYPE
#define bcmolt_embedded_image_entry_id_image_size BCMOLT_EMBEDDED_IMAGE_ENTRY_ID_IMAGE_SIZE
#define bcmolt_embedded_image_entry_id_crc32 BCMOLT_EMBEDDED_IMAGE_ENTRY_ID_CRC32
#define bcmolt_embedded_image_entry_id_status BCMOLT_EMBEDDED_IMAGE_ENTRY_ID_STATUS
#define bcmolt_embedded_image_entry_id_image_name BCMOLT_EMBEDDED_IMAGE_ENTRY_ID_IMAGE_NAME
#define bcmolt_embedded_image_entry_id__num_of BCMOLT_EMBEDDED_IMAGE_ENTRY_ID__NUM_OF
#define bcmolt_embedded_image_entry_id_all_properties 0xFF
#define bcmolt_embedded_image_entry_id_full_mask 0x1F

} bcmolt_embedded_image_entry_id;

/** Identifiers for all fields in a 'firmware_sw_version'. */
typedef enum
{
    BCMOLT_FIRMWARE_SW_VERSION_ID__BEGIN = 0,
    BCMOLT_FIRMWARE_SW_VERSION_ID_MAJOR = 0, /**< Major. */
    BCMOLT_FIRMWARE_SW_VERSION_ID_MINOR = 1, /**< Minor. */
    BCMOLT_FIRMWARE_SW_VERSION_ID_REVISION = 2, /**< Revision. */
    BCMOLT_FIRMWARE_SW_VERSION_ID_MODEL = 3, /**< Model. */
    BCMOLT_FIRMWARE_SW_VERSION_ID_BUILD_TIME = 4, /**< Firmware SW build time. */
    BCMOLT_FIRMWARE_SW_VERSION_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_firmware_sw_version_id__begin BCMOLT_FIRMWARE_SW_VERSION_ID__BEGIN
#define bcmolt_firmware_sw_version_id_major BCMOLT_FIRMWARE_SW_VERSION_ID_MAJOR
#define bcmolt_firmware_sw_version_id_minor BCMOLT_FIRMWARE_SW_VERSION_ID_MINOR
#define bcmolt_firmware_sw_version_id_revision BCMOLT_FIRMWARE_SW_VERSION_ID_REVISION
#define bcmolt_firmware_sw_version_id_model BCMOLT_FIRMWARE_SW_VERSION_ID_MODEL
#define bcmolt_firmware_sw_version_id_build_time BCMOLT_FIRMWARE_SW_VERSION_ID_BUILD_TIME
#define bcmolt_firmware_sw_version_id__num_of BCMOLT_FIRMWARE_SW_VERSION_ID__NUM_OF
#define bcmolt_firmware_sw_version_id_all_properties 0xFF
#define bcmolt_firmware_sw_version_id_full_mask 0x1F

} bcmolt_firmware_sw_version_id;

/** Identifiers for all fields in a 'flow_intf_ref'. */
typedef enum
{
    BCMOLT_FLOW_INTF_REF_ID__BEGIN = 0,
    BCMOLT_FLOW_INTF_REF_ID_INTF_TYPE = 0, /**< intf_type. */
    BCMOLT_FLOW_INTF_REF_ID_INTF_ID = 1, /**< intf_id. */
    BCMOLT_FLOW_INTF_REF_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_flow_intf_ref_id__begin BCMOLT_FLOW_INTF_REF_ID__BEGIN
#define bcmolt_flow_intf_ref_id_intf_type BCMOLT_FLOW_INTF_REF_ID_INTF_TYPE
#define bcmolt_flow_intf_ref_id_intf_id BCMOLT_FLOW_INTF_REF_ID_INTF_ID
#define bcmolt_flow_intf_ref_id__num_of BCMOLT_FLOW_INTF_REF_ID__NUM_OF
#define bcmolt_flow_intf_ref_id_all_properties 0xFF
#define bcmolt_flow_intf_ref_id_full_mask 0x3

} bcmolt_flow_intf_ref_id;

/** Identifiers for all fields in a 'gem_port_configuration'. */
typedef enum
{
    BCMOLT_GEM_PORT_CONFIGURATION_ID__BEGIN = 0,
    BCMOLT_GEM_PORT_CONFIGURATION_ID_DIRECTION = 0, /**< GEM port ID direction. */
    BCMOLT_GEM_PORT_CONFIGURATION_ID_TYPE = 1, /**< GEM port type. */
    BCMOLT_GEM_PORT_CONFIGURATION_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_gem_port_configuration_id__begin BCMOLT_GEM_PORT_CONFIGURATION_ID__BEGIN
#define bcmolt_gem_port_configuration_id_direction BCMOLT_GEM_PORT_CONFIGURATION_ID_DIRECTION
#define bcmolt_gem_port_configuration_id_type BCMOLT_GEM_PORT_CONFIGURATION_ID_TYPE
#define bcmolt_gem_port_configuration_id__num_of BCMOLT_GEM_PORT_CONFIGURATION_ID__NUM_OF
#define bcmolt_gem_port_configuration_id_all_properties 0xFF
#define bcmolt_gem_port_configuration_id_full_mask 0x3

} bcmolt_gem_port_configuration_id;

/** Identifiers for all fields in a 'gpon_onu_alarm_state'. */
typedef enum
{
    BCMOLT_GPON_ONU_ALARM_STATE_ID__BEGIN = 0,
    BCMOLT_GPON_ONU_ALARM_STATE_ID_LOSI = 0, /**< Loss of signal. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_LOFI = 1, /**< Loss of frame. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_LOAMI = 2, /**< Loss of PLOAM. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_DGI = 3, /**< Dying Gasp. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_TIWI = 4, /**< Transmission interference Alarm. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_DOWI = 5, /**< Drift of Window. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_SUFI = 6, /**< Start UP Failure. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_SFI = 7, /**< Signal Fail. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_SDI = 8, /**< Signal Degraded. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_DFI = 9, /**< Deactivation Failure. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_LOAI = 10, /**< Loss of ack. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID_LOKI = 11, /**< loss of key. */
    BCMOLT_GPON_ONU_ALARM_STATE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_gpon_onu_alarm_state_id__begin BCMOLT_GPON_ONU_ALARM_STATE_ID__BEGIN
#define bcmolt_gpon_onu_alarm_state_id_losi BCMOLT_GPON_ONU_ALARM_STATE_ID_LOSI
#define bcmolt_gpon_onu_alarm_state_id_lofi BCMOLT_GPON_ONU_ALARM_STATE_ID_LOFI
#define bcmolt_gpon_onu_alarm_state_id_loami BCMOLT_GPON_ONU_ALARM_STATE_ID_LOAMI
#define bcmolt_gpon_onu_alarm_state_id_dgi BCMOLT_GPON_ONU_ALARM_STATE_ID_DGI
#define bcmolt_gpon_onu_alarm_state_id_tiwi BCMOLT_GPON_ONU_ALARM_STATE_ID_TIWI
#define bcmolt_gpon_onu_alarm_state_id_dowi BCMOLT_GPON_ONU_ALARM_STATE_ID_DOWI
#define bcmolt_gpon_onu_alarm_state_id_sufi BCMOLT_GPON_ONU_ALARM_STATE_ID_SUFI
#define bcmolt_gpon_onu_alarm_state_id_sfi BCMOLT_GPON_ONU_ALARM_STATE_ID_SFI
#define bcmolt_gpon_onu_alarm_state_id_sdi BCMOLT_GPON_ONU_ALARM_STATE_ID_SDI
#define bcmolt_gpon_onu_alarm_state_id_dfi BCMOLT_GPON_ONU_ALARM_STATE_ID_DFI
#define bcmolt_gpon_onu_alarm_state_id_loai BCMOLT_GPON_ONU_ALARM_STATE_ID_LOAI
#define bcmolt_gpon_onu_alarm_state_id_loki BCMOLT_GPON_ONU_ALARM_STATE_ID_LOKI
#define bcmolt_gpon_onu_alarm_state_id__num_of BCMOLT_GPON_ONU_ALARM_STATE_ID__NUM_OF
#define bcmolt_gpon_onu_alarm_state_id_all_properties 0xFF
#define bcmolt_gpon_onu_alarm_state_id_full_mask 0xFFF

} bcmolt_gpon_onu_alarm_state_id;

/** Identifiers for all fields in a 'gpon_onu_alarms'. */
typedef enum
{
    BCMOLT_GPON_ONU_ALARMS_ID__BEGIN = 0,
    BCMOLT_GPON_ONU_ALARMS_ID_LOSI = 0, /**< LOSi. */
    BCMOLT_GPON_ONU_ALARMS_ID_LOFI = 1, /**< LOFi. */
    BCMOLT_GPON_ONU_ALARMS_ID_LOAMI = 2, /**< LOAMi. */
    BCMOLT_GPON_ONU_ALARMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_gpon_onu_alarms_id__begin BCMOLT_GPON_ONU_ALARMS_ID__BEGIN
#define bcmolt_gpon_onu_alarms_id_losi BCMOLT_GPON_ONU_ALARMS_ID_LOSI
#define bcmolt_gpon_onu_alarms_id_lofi BCMOLT_GPON_ONU_ALARMS_ID_LOFI
#define bcmolt_gpon_onu_alarms_id_loami BCMOLT_GPON_ONU_ALARMS_ID_LOAMI
#define bcmolt_gpon_onu_alarms_id__num_of BCMOLT_GPON_ONU_ALARMS_ID__NUM_OF
#define bcmolt_gpon_onu_alarms_id_all_properties 0xFF
#define bcmolt_gpon_onu_alarms_id_full_mask 0x7

} bcmolt_gpon_onu_alarms_id;

/** Identifiers for all fields in a 'gpon_onu_alarms_thresholds'. */
typedef enum
{
    BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_ID__BEGIN = 0,
    BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_ID_LOSI = 0, /**< LOSi. */
    BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_ID_LOFI = 1, /**< LOFi. */
    BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_ID_LOAMI = 2, /**< LOAMi. */
    BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_gpon_onu_alarms_thresholds_id__begin BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_ID__BEGIN
#define bcmolt_gpon_onu_alarms_thresholds_id_losi BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_ID_LOSI
#define bcmolt_gpon_onu_alarms_thresholds_id_lofi BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_ID_LOFI
#define bcmolt_gpon_onu_alarms_thresholds_id_loami BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_ID_LOAMI
#define bcmolt_gpon_onu_alarms_thresholds_id__num_of BCMOLT_GPON_ONU_ALARMS_THRESHOLDS_ID__NUM_OF
#define bcmolt_gpon_onu_alarms_thresholds_id_all_properties 0xFF
#define bcmolt_gpon_onu_alarms_thresholds_id_full_mask 0x7

} bcmolt_gpon_onu_alarms_thresholds_id;

/** Identifiers for all fields in a 'gpon_onu_params'. */
typedef enum
{
    BCMOLT_GPON_ONU_PARAMS_ID__BEGIN = 0,
    BCMOLT_GPON_ONU_PARAMS_ID_PASSWORD = 0, /**< password. */
    BCMOLT_GPON_ONU_PARAMS_ID_US_FEC = 1, /**< US FEC. */
    BCMOLT_GPON_ONU_PARAMS_ID_OMCI_PORT_ID = 2, /**< OMCI port ID. */
    BCMOLT_GPON_ONU_PARAMS_ID_DS_BER_REPORTING_INTERVAL = 3, /**< DS BER reporting interval in ms. */
    BCMOLT_GPON_ONU_PARAMS_ID_ALARM_STATE = 4, /**< alarm state. */
    BCMOLT_GPON_ONU_PARAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_gpon_onu_params_id__begin BCMOLT_GPON_ONU_PARAMS_ID__BEGIN
#define bcmolt_gpon_onu_params_id_password BCMOLT_GPON_ONU_PARAMS_ID_PASSWORD
#define bcmolt_gpon_onu_params_id_us_fec BCMOLT_GPON_ONU_PARAMS_ID_US_FEC
#define bcmolt_gpon_onu_params_id_omci_port_id BCMOLT_GPON_ONU_PARAMS_ID_OMCI_PORT_ID
#define bcmolt_gpon_onu_params_id_ds_ber_reporting_interval BCMOLT_GPON_ONU_PARAMS_ID_DS_BER_REPORTING_INTERVAL
#define bcmolt_gpon_onu_params_id_alarm_state BCMOLT_GPON_ONU_PARAMS_ID_ALARM_STATE
#define bcmolt_gpon_onu_params_id__num_of BCMOLT_GPON_ONU_PARAMS_ID__NUM_OF
#define bcmolt_gpon_onu_params_id_all_properties 0xFF
#define bcmolt_gpon_onu_params_id_full_mask 0x1F

} bcmolt_gpon_onu_params_id;

/** Identifiers for all fields in a 'gpon_pon_params'. */
typedef enum
{
    BCMOLT_GPON_PON_PARAMS_ID__BEGIN = 0,
    BCMOLT_GPON_PON_PARAMS_ID_ONU_ALARMS_THRESHOLDS = 0, /**< ONU alarms thresholds. */
    BCMOLT_GPON_PON_PARAMS_ID_PREASSIGNED_EQUALIZATION_DELAY = 1, /**< Pre-assigned Equalization Delay [bits]. */
    BCMOLT_GPON_PON_PARAMS_ID_POWER_LEVEL = 2, /**< Power level. */
    BCMOLT_GPON_PON_PARAMS_ID_BIP32_INDICATION_CONTROL = 3, /**< bip32 indication control. */
    BCMOLT_GPON_PON_PARAMS_ID_DS_BER_REPORTING_INTERVAL = 4, /**< DS BER reporting interval in ms. */
    BCMOLT_GPON_PON_PARAMS_ID_SR_REPORTING_BLOCK_SIZE = 5, /**< SR reporting block size in bytes. */
    BCMOLT_GPON_PON_PARAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_gpon_pon_params_id__begin BCMOLT_GPON_PON_PARAMS_ID__BEGIN
#define bcmolt_gpon_pon_params_id_onu_alarms_thresholds BCMOLT_GPON_PON_PARAMS_ID_ONU_ALARMS_THRESHOLDS
#define bcmolt_gpon_pon_params_id_preassigned_equalization_delay BCMOLT_GPON_PON_PARAMS_ID_PREASSIGNED_EQUALIZATION_DELAY
#define bcmolt_gpon_pon_params_id_power_level BCMOLT_GPON_PON_PARAMS_ID_POWER_LEVEL
#define bcmolt_gpon_pon_params_id_bip32_indication_control BCMOLT_GPON_PON_PARAMS_ID_BIP32_INDICATION_CONTROL
#define bcmolt_gpon_pon_params_id_ds_ber_reporting_interval BCMOLT_GPON_PON_PARAMS_ID_DS_BER_REPORTING_INTERVAL
#define bcmolt_gpon_pon_params_id_sr_reporting_block_size BCMOLT_GPON_PON_PARAMS_ID_SR_REPORTING_BLOCK_SIZE
#define bcmolt_gpon_pon_params_id__num_of BCMOLT_GPON_PON_PARAMS_ID__NUM_OF
#define bcmolt_gpon_pon_params_id_all_properties 0xFF
#define bcmolt_gpon_pon_params_id_full_mask 0x3F

} bcmolt_gpon_pon_params_id;

/** Identifiers for all fields in a 'gpon_trx'. */
typedef enum
{
    BCMOLT_GPON_TRX_ID__BEGIN = 0,
    BCMOLT_GPON_TRX_ID_TRANSCEIVER_TYPE = 0, /**< transceiver type. */
    BCMOLT_GPON_TRX_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_gpon_trx_id__begin BCMOLT_GPON_TRX_ID__BEGIN
#define bcmolt_gpon_trx_id_transceiver_type BCMOLT_GPON_TRX_ID_TRANSCEIVER_TYPE
#define bcmolt_gpon_trx_id__num_of BCMOLT_GPON_TRX_ID__NUM_OF
#define bcmolt_gpon_trx_id_all_properties 0xFF
#define bcmolt_gpon_trx_id_full_mask 0x1

} bcmolt_gpon_trx_id;

/** Identifiers for all fields in a 'group_member_info'. */
typedef enum
{
    BCMOLT_GROUP_MEMBER_INFO_ID__BEGIN = 0,
    BCMOLT_GROUP_MEMBER_INFO_ID_INTF = 0, /**< Egress Pon Interface. */
    BCMOLT_GROUP_MEMBER_INFO_ID_SVC_PORT_ID = 1, /**< Service Port ID. */
    BCMOLT_GROUP_MEMBER_INFO_ID_EGRESS_QOS = 3, /**< Egress qos. */
    BCMOLT_GROUP_MEMBER_INFO_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_group_member_info_id__begin BCMOLT_GROUP_MEMBER_INFO_ID__BEGIN
#define bcmolt_group_member_info_id_intf BCMOLT_GROUP_MEMBER_INFO_ID_INTF
#define bcmolt_group_member_info_id_svc_port_id BCMOLT_GROUP_MEMBER_INFO_ID_SVC_PORT_ID
#define bcmolt_group_member_info_id_egress_qos BCMOLT_GROUP_MEMBER_INFO_ID_EGRESS_QOS
#define bcmolt_group_member_info_id__num_of BCMOLT_GROUP_MEMBER_INFO_ID__NUM_OF
#define bcmolt_group_member_info_id_all_properties 0xFF
#define bcmolt_group_member_info_id_full_mask 0xB

} bcmolt_group_member_info_id;

/** Identifiers for all fields in a 'group_members_update_command'. */
typedef enum
{
    BCMOLT_GROUP_MEMBERS_UPDATE_COMMAND_ID__BEGIN = 0,
    BCMOLT_GROUP_MEMBERS_UPDATE_COMMAND_ID_COMMAND = 0, /**< command. */
    BCMOLT_GROUP_MEMBERS_UPDATE_COMMAND_ID_MEMBERS = 1, /**< members. */
    BCMOLT_GROUP_MEMBERS_UPDATE_COMMAND_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_group_members_update_command_id__begin BCMOLT_GROUP_MEMBERS_UPDATE_COMMAND_ID__BEGIN
#define bcmolt_group_members_update_command_id_command BCMOLT_GROUP_MEMBERS_UPDATE_COMMAND_ID_COMMAND
#define bcmolt_group_members_update_command_id_members BCMOLT_GROUP_MEMBERS_UPDATE_COMMAND_ID_MEMBERS
#define bcmolt_group_members_update_command_id__num_of BCMOLT_GROUP_MEMBERS_UPDATE_COMMAND_ID__NUM_OF
#define bcmolt_group_members_update_command_id_all_properties 0xFF
#define bcmolt_group_members_update_command_id_full_mask 0x3

} bcmolt_group_members_update_command_id;

/** Identifiers for all fields in a 'host_sw_version'. */
typedef enum
{
    BCMOLT_HOST_SW_VERSION_ID__BEGIN = 0,
    BCMOLT_HOST_SW_VERSION_ID_MAJOR = 0, /**< Major. */
    BCMOLT_HOST_SW_VERSION_ID_MINOR = 1, /**< Minor. */
    BCMOLT_HOST_SW_VERSION_ID_REVISION = 2, /**< Revision. */
    BCMOLT_HOST_SW_VERSION_ID_BUILD_TIME = 4, /**< Host SW build time. */
    BCMOLT_HOST_SW_VERSION_ID_MODEL = 5, /**< Model Revision. */
    BCMOLT_HOST_SW_VERSION_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_host_sw_version_id__begin BCMOLT_HOST_SW_VERSION_ID__BEGIN
#define bcmolt_host_sw_version_id_major BCMOLT_HOST_SW_VERSION_ID_MAJOR
#define bcmolt_host_sw_version_id_minor BCMOLT_HOST_SW_VERSION_ID_MINOR
#define bcmolt_host_sw_version_id_revision BCMOLT_HOST_SW_VERSION_ID_REVISION
#define bcmolt_host_sw_version_id_build_time BCMOLT_HOST_SW_VERSION_ID_BUILD_TIME
#define bcmolt_host_sw_version_id_model BCMOLT_HOST_SW_VERSION_ID_MODEL
#define bcmolt_host_sw_version_id__num_of BCMOLT_HOST_SW_VERSION_ID__NUM_OF
#define bcmolt_host_sw_version_id_all_properties 0xFF
#define bcmolt_host_sw_version_id_full_mask 0x37

} bcmolt_host_sw_version_id;

/** Identifiers for all fields in a 'hw_pon_id'. */
typedef enum
{
    BCMOLT_HW_PON_ID_ID__BEGIN = 0,
    BCMOLT_HW_PON_ID_ID_PON_ID_1 = 0, /**< pon id 1. */
    BCMOLT_HW_PON_ID_ID_PON_ID_2 = 1, /**< pon id 2. */
    BCMOLT_HW_PON_ID_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_hw_pon_id_id__begin BCMOLT_HW_PON_ID_ID__BEGIN
#define bcmolt_hw_pon_id_id_pon_id_1 BCMOLT_HW_PON_ID_ID_PON_ID_1
#define bcmolt_hw_pon_id_id_pon_id_2 BCMOLT_HW_PON_ID_ID_PON_ID_2
#define bcmolt_hw_pon_id_id__num_of BCMOLT_HW_PON_ID_ID__NUM_OF
#define bcmolt_hw_pon_id_id_all_properties 0xFF
#define bcmolt_hw_pon_id_id_full_mask 0x3

} bcmolt_hw_pon_id_id;

/** Identifiers for all fields in a 'ieee_8021_as_tod'. */
typedef enum
{
    BCMOLT_IEEE_8021_AS_TOD_ID__BEGIN = 0,
    BCMOLT_IEEE_8021_AS_TOD_ID_TOD_FORMAT = 0, /**< 802.1AS ToD Format. */
    BCMOLT_IEEE_8021_AS_TOD_ID_CLOCK_TRANSPORT_SAMPLE_DELAY = 1, /**< Clock Transport Sample Delay. */
    BCMOLT_IEEE_8021_AS_TOD_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ieee_8021_as_tod_id__begin BCMOLT_IEEE_8021_AS_TOD_ID__BEGIN
#define bcmolt_ieee_8021_as_tod_id_tod_format BCMOLT_IEEE_8021_AS_TOD_ID_TOD_FORMAT
#define bcmolt_ieee_8021_as_tod_id_clock_transport_sample_delay BCMOLT_IEEE_8021_AS_TOD_ID_CLOCK_TRANSPORT_SAMPLE_DELAY
#define bcmolt_ieee_8021_as_tod_id__num_of BCMOLT_IEEE_8021_AS_TOD_ID__NUM_OF
#define bcmolt_ieee_8021_as_tod_id_all_properties 0xFF
#define bcmolt_ieee_8021_as_tod_id_full_mask 0x3

} bcmolt_ieee_8021_as_tod_id;

/** Identifiers for all fields in a 'inband_conn_data'. */
typedef enum
{
    BCMOLT_INBAND_CONN_DATA_ID__BEGIN = 0,
    BCMOLT_INBAND_CONN_DATA_ID_DEVICE_IP_ADDRESS = 0, /**< Device IP Address. */
    BCMOLT_INBAND_CONN_DATA_ID_DEVICE_UDP_PORT = 1, /**< Device UDP port. */
    BCMOLT_INBAND_CONN_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_inband_conn_data_id__begin BCMOLT_INBAND_CONN_DATA_ID__BEGIN
#define bcmolt_inband_conn_data_id_device_ip_address BCMOLT_INBAND_CONN_DATA_ID_DEVICE_IP_ADDRESS
#define bcmolt_inband_conn_data_id_device_udp_port BCMOLT_INBAND_CONN_DATA_ID_DEVICE_UDP_PORT
#define bcmolt_inband_conn_data_id__num_of BCMOLT_INBAND_CONN_DATA_ID__NUM_OF
#define bcmolt_inband_conn_data_id_all_properties 0xFF
#define bcmolt_inband_conn_data_id_full_mask 0x3

} bcmolt_inband_conn_data_id;

/** Identifiers for all fields in a 'indication_shaping'. */
typedef enum
{
    BCMOLT_INDICATION_SHAPING_ID__BEGIN = 0,
    BCMOLT_INDICATION_SHAPING_ID_ENABLED = 0, /**< Enabled. */
    BCMOLT_INDICATION_SHAPING_ID_MAX_RATE = 1, /**< Max Rate. */
    BCMOLT_INDICATION_SHAPING_ID_MAX_BURST = 2, /**< Max Burst. */
    BCMOLT_INDICATION_SHAPING_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_indication_shaping_id__begin BCMOLT_INDICATION_SHAPING_ID__BEGIN
#define bcmolt_indication_shaping_id_enabled BCMOLT_INDICATION_SHAPING_ID_ENABLED
#define bcmolt_indication_shaping_id_max_rate BCMOLT_INDICATION_SHAPING_ID_MAX_RATE
#define bcmolt_indication_shaping_id_max_burst BCMOLT_INDICATION_SHAPING_ID_MAX_BURST
#define bcmolt_indication_shaping_id__num_of BCMOLT_INDICATION_SHAPING_ID__NUM_OF
#define bcmolt_indication_shaping_id_all_properties 0xFF
#define bcmolt_indication_shaping_id_full_mask 0x7

} bcmolt_indication_shaping_id;

/** Identifiers for all fields in a 'inni_config'. */
typedef enum
{
    BCMOLT_INNI_CONFIG_ID__BEGIN = 0,
    BCMOLT_INNI_CONFIG_ID_MODE = 0, /**< INNI Mode. */
    BCMOLT_INNI_CONFIG_ID_MUX = 1, /**< INNI Multiplexing. */
    BCMOLT_INNI_CONFIG_ID_CL73_AN = 2, /**< CL73 AN. */
    BCMOLT_INNI_CONFIG_ID_LINK_TRAINING = 3, /**< Link Training. */
    BCMOLT_INNI_CONFIG_ID_INNI_FEC = 4, /**< INNI_FEC. */
    BCMOLT_INNI_CONFIG_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_inni_config_id__begin BCMOLT_INNI_CONFIG_ID__BEGIN
#define bcmolt_inni_config_id_mode BCMOLT_INNI_CONFIG_ID_MODE
#define bcmolt_inni_config_id_mux BCMOLT_INNI_CONFIG_ID_MUX
#define bcmolt_inni_config_id_cl73_an BCMOLT_INNI_CONFIG_ID_CL73_AN
#define bcmolt_inni_config_id_link_training BCMOLT_INNI_CONFIG_ID_LINK_TRAINING
#define bcmolt_inni_config_id_inni_fec BCMOLT_INNI_CONFIG_ID_INNI_FEC
#define bcmolt_inni_config_id__num_of BCMOLT_INNI_CONFIG_ID__NUM_OF
#define bcmolt_inni_config_id_all_properties 0xFF
#define bcmolt_inni_config_id_full_mask 0x1F

} bcmolt_inni_config_id;

/** Identifiers for all fields in a 'intf_ref'. */
typedef enum
{
    BCMOLT_INTF_REF_ID__BEGIN = 0,
    BCMOLT_INTF_REF_ID_INTF_TYPE = 0, /**< intf_type. */
    BCMOLT_INTF_REF_ID_INTF_ID = 1, /**< intf_id. */
    BCMOLT_INTF_REF_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_intf_ref_id__begin BCMOLT_INTF_REF_ID__BEGIN
#define bcmolt_intf_ref_id_intf_type BCMOLT_INTF_REF_ID_INTF_TYPE
#define bcmolt_intf_ref_id_intf_id BCMOLT_INTF_REF_ID_INTF_ID
#define bcmolt_intf_ref_id__num_of BCMOLT_INTF_REF_ID__NUM_OF
#define bcmolt_intf_ref_id_all_properties 0xFF
#define bcmolt_intf_ref_id_full_mask 0x3

} bcmolt_intf_ref_id;

/** Identifiers for all fields in a 'itu_onu_params'. */
typedef enum
{
    BCMOLT_ITU_ONU_PARAMS_ID__BEGIN = 0,
    BCMOLT_ITU_ONU_PARAMS_ID_SERIAL_NUMBER = 0, /**< serial number. */
    BCMOLT_ITU_ONU_PARAMS_ID_RANGING_TIME = 1, /**< ranging time. */
    BCMOLT_ITU_ONU_PARAMS_ID_ENCRYPTION_KEY = 2, /**< current encryption key. */
    BCMOLT_ITU_ONU_PARAMS_ID_AUTO_LEARNING = 3, /**< automatic learning of password/registration ID. */
    BCMOLT_ITU_ONU_PARAMS_ID_DISABLED_AFTER_DISCOVERY = 5, /**< Disabled after Discovery. */
    BCMOLT_ITU_ONU_PARAMS_ID_AUTOMATIC_ONU_DEACTIVATION_REASON = 6, /**< automatic ONU deactivation reason. */
    BCMOLT_ITU_ONU_PARAMS_ID_PS_TYPE_C = 7, /**< ONU PS type C. */
    BCMOLT_ITU_ONU_PARAMS_ID_GPON = 8, /**< GPON ONU Parameters. */
    BCMOLT_ITU_ONU_PARAMS_ID_XGPON = 11, /**< XGPON, NGPON2, XGS-PON ONU Parameters. */
    BCMOLT_ITU_ONU_PARAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itu_onu_params_id__begin BCMOLT_ITU_ONU_PARAMS_ID__BEGIN
#define bcmolt_itu_onu_params_id_serial_number BCMOLT_ITU_ONU_PARAMS_ID_SERIAL_NUMBER
#define bcmolt_itu_onu_params_id_ranging_time BCMOLT_ITU_ONU_PARAMS_ID_RANGING_TIME
#define bcmolt_itu_onu_params_id_encryption_key BCMOLT_ITU_ONU_PARAMS_ID_ENCRYPTION_KEY
#define bcmolt_itu_onu_params_id_auto_learning BCMOLT_ITU_ONU_PARAMS_ID_AUTO_LEARNING
#define bcmolt_itu_onu_params_id_disabled_after_discovery BCMOLT_ITU_ONU_PARAMS_ID_DISABLED_AFTER_DISCOVERY
#define bcmolt_itu_onu_params_id_automatic_onu_deactivation_reason BCMOLT_ITU_ONU_PARAMS_ID_AUTOMATIC_ONU_DEACTIVATION_REASON
#define bcmolt_itu_onu_params_id_ps_type_c BCMOLT_ITU_ONU_PARAMS_ID_PS_TYPE_C
#define bcmolt_itu_onu_params_id_gpon BCMOLT_ITU_ONU_PARAMS_ID_GPON
#define bcmolt_itu_onu_params_id_xgpon BCMOLT_ITU_ONU_PARAMS_ID_XGPON
#define bcmolt_itu_onu_params_id__num_of BCMOLT_ITU_ONU_PARAMS_ID__NUM_OF
#define bcmolt_itu_onu_params_id_all_properties 0xFF
#define bcmolt_itu_onu_params_id_full_mask 0x9EF

} bcmolt_itu_onu_params_id;

/** Identifiers for all fields in a 'itu_pon_params'. */
typedef enum
{
    BCMOLT_ITU_PON_PARAMS_ID__BEGIN = 0,
    BCMOLT_ITU_PON_PARAMS_ID_AVAILABLE_BANDWIDTH = 0, /**< Available Bandwidth. */
    BCMOLT_ITU_PON_PARAMS_ID_RANGING_WINDOW_SIZE = 1, /**< Ranging window size. */
    BCMOLT_ITU_PON_PARAMS_ID_EQD_CYCLES_NUMBER = 2, /**< EqD measurement cycles number. */
    BCMOLT_ITU_PON_PARAMS_ID_DRIFT_CONTROL = 3, /**< drift control. */
    BCMOLT_ITU_PON_PARAMS_ID_LOS_ALARM_THRESHOLD = 4, /**< los alarm threshold. */
    BCMOLT_ITU_PON_PARAMS_ID_BER_MONITOR = 5, /**< BER monitoring params. */
    BCMOLT_ITU_PON_PARAMS_ID_ACK_TIMEOUT = 6, /**< ACK timeout. */
    BCMOLT_ITU_PON_PARAMS_ID_ONU_ACTIVATION = 7, /**< ONU Activation. */
    BCMOLT_ITU_PON_PARAMS_ID_KEY_EXCHANGE = 8, /**< key exchange. */
    BCMOLT_ITU_PON_PARAMS_ID_MIN_DATA_ALLOC_ID = 9, /**< Minimum data alloc id. */
    BCMOLT_ITU_PON_PARAMS_ID_CBR_RT_ALLOCATION_PROFILE = 10, /**< CBR RT Allocation profile. */
    BCMOLT_ITU_PON_PARAMS_ID_CBR_NRT_ALLOCATION_PROFILE = 11, /**< CBR NRT Allocation Profile. */
    BCMOLT_ITU_PON_PARAMS_ID_POWER_MANAGEMENT = 12, /**< Power Management. */
    BCMOLT_ITU_PON_PARAMS_ID_PERIODIC_STANDBY_PON_MONITORING = 13, /**< Periodic standby PON monitoring. */
    BCMOLT_ITU_PON_PARAMS_ID_PRBS_CHECKER = 14, /**< PRBS Checker. */
    BCMOLT_ITU_PON_PARAMS_ID_PRBS_GENERATOR = 15, /**< PRBS Generator. */
    BCMOLT_ITU_PON_PARAMS_ID_PRBS_STATUS = 16, /**< PRBS status. */
    BCMOLT_ITU_PON_PARAMS_ID_DBA_MODE = 17, /**< DBA mode. */
    BCMOLT_ITU_PON_PARAMS_ID_PROTECTION_SWITCHING = 19, /**< Protection switching. */
    BCMOLT_ITU_PON_PARAMS_ID_AUTOMATIC_ONU_DEACTIVATION = 21, /**< Automatic ONU deactivation. */
    BCMOLT_ITU_PON_PARAMS_ID_US_BANDWIDTH_LIMIT = 22, /**< US bandwidth Limit. */
    BCMOLT_ITU_PON_PARAMS_ID_ONU_UPGRADE_PARAMS = 23, /**< ONU upgrade params. */
    BCMOLT_ITU_PON_PARAMS_ID_ONU_UPGRADE_STATUS = 24, /**< ONU upgrade status. */
    BCMOLT_ITU_PON_PARAMS_ID_DS_FEC_MODE = 25, /**< DS FEC mode. */
    BCMOLT_ITU_PON_PARAMS_ID_XGPON = 27, /**< XGPON, NGPON2, XGS PON Parameters. */
    BCMOLT_ITU_PON_PARAMS_ID_GPON = 29, /**< GPON Parameters. */
    BCMOLT_ITU_PON_PARAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itu_pon_params_id__begin BCMOLT_ITU_PON_PARAMS_ID__BEGIN
#define bcmolt_itu_pon_params_id_available_bandwidth BCMOLT_ITU_PON_PARAMS_ID_AVAILABLE_BANDWIDTH
#define bcmolt_itu_pon_params_id_ranging_window_size BCMOLT_ITU_PON_PARAMS_ID_RANGING_WINDOW_SIZE
#define bcmolt_itu_pon_params_id_eqd_cycles_number BCMOLT_ITU_PON_PARAMS_ID_EQD_CYCLES_NUMBER
#define bcmolt_itu_pon_params_id_drift_control BCMOLT_ITU_PON_PARAMS_ID_DRIFT_CONTROL
#define bcmolt_itu_pon_params_id_los_alarm_threshold BCMOLT_ITU_PON_PARAMS_ID_LOS_ALARM_THRESHOLD
#define bcmolt_itu_pon_params_id_ber_monitor BCMOLT_ITU_PON_PARAMS_ID_BER_MONITOR
#define bcmolt_itu_pon_params_id_ack_timeout BCMOLT_ITU_PON_PARAMS_ID_ACK_TIMEOUT
#define bcmolt_itu_pon_params_id_onu_activation BCMOLT_ITU_PON_PARAMS_ID_ONU_ACTIVATION
#define bcmolt_itu_pon_params_id_key_exchange BCMOLT_ITU_PON_PARAMS_ID_KEY_EXCHANGE
#define bcmolt_itu_pon_params_id_min_data_alloc_id BCMOLT_ITU_PON_PARAMS_ID_MIN_DATA_ALLOC_ID
#define bcmolt_itu_pon_params_id_cbr_rt_allocation_profile BCMOLT_ITU_PON_PARAMS_ID_CBR_RT_ALLOCATION_PROFILE
#define bcmolt_itu_pon_params_id_cbr_nrt_allocation_profile BCMOLT_ITU_PON_PARAMS_ID_CBR_NRT_ALLOCATION_PROFILE
#define bcmolt_itu_pon_params_id_power_management BCMOLT_ITU_PON_PARAMS_ID_POWER_MANAGEMENT
#define bcmolt_itu_pon_params_id_periodic_standby_pon_monitoring BCMOLT_ITU_PON_PARAMS_ID_PERIODIC_STANDBY_PON_MONITORING
#define bcmolt_itu_pon_params_id_prbs_checker BCMOLT_ITU_PON_PARAMS_ID_PRBS_CHECKER
#define bcmolt_itu_pon_params_id_prbs_generator BCMOLT_ITU_PON_PARAMS_ID_PRBS_GENERATOR
#define bcmolt_itu_pon_params_id_prbs_status BCMOLT_ITU_PON_PARAMS_ID_PRBS_STATUS
#define bcmolt_itu_pon_params_id_dba_mode BCMOLT_ITU_PON_PARAMS_ID_DBA_MODE
#define bcmolt_itu_pon_params_id_protection_switching BCMOLT_ITU_PON_PARAMS_ID_PROTECTION_SWITCHING
#define bcmolt_itu_pon_params_id_automatic_onu_deactivation BCMOLT_ITU_PON_PARAMS_ID_AUTOMATIC_ONU_DEACTIVATION
#define bcmolt_itu_pon_params_id_us_bandwidth_limit BCMOLT_ITU_PON_PARAMS_ID_US_BANDWIDTH_LIMIT
#define bcmolt_itu_pon_params_id_onu_upgrade_params BCMOLT_ITU_PON_PARAMS_ID_ONU_UPGRADE_PARAMS
#define bcmolt_itu_pon_params_id_onu_upgrade_status BCMOLT_ITU_PON_PARAMS_ID_ONU_UPGRADE_STATUS
#define bcmolt_itu_pon_params_id_ds_fec_mode BCMOLT_ITU_PON_PARAMS_ID_DS_FEC_MODE
#define bcmolt_itu_pon_params_id_xgpon BCMOLT_ITU_PON_PARAMS_ID_XGPON
#define bcmolt_itu_pon_params_id_gpon BCMOLT_ITU_PON_PARAMS_ID_GPON
#define bcmolt_itu_pon_params_id__num_of BCMOLT_ITU_PON_PARAMS_ID__NUM_OF
#define bcmolt_itu_pon_params_id_all_properties 0xFF
#define bcmolt_itu_pon_params_id_full_mask 0x2BEBFFFF

} bcmolt_itu_pon_params_id;

/** Identifiers for all fields in a 'itu_tod'. */
typedef enum
{
    BCMOLT_ITU_TOD_ID__BEGIN = 0,
    BCMOLT_ITU_TOD_ID_TOD_ENABLE = 0, /**< ToD enable. */
    BCMOLT_ITU_TOD_ID_TOD_GPIO_PIN = 1, /**< ToD GPIO pin. */
    BCMOLT_ITU_TOD_ID_CONNECTED_INTERNALLY = 2, /**< Connected Internally. */
    BCMOLT_ITU_TOD_ID_TOD_STRING_LENGTH = 3, /**< ToD string length. */
    BCMOLT_ITU_TOD_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itu_tod_id__begin BCMOLT_ITU_TOD_ID__BEGIN
#define bcmolt_itu_tod_id_tod_enable BCMOLT_ITU_TOD_ID_TOD_ENABLE
#define bcmolt_itu_tod_id_tod_gpio_pin BCMOLT_ITU_TOD_ID_TOD_GPIO_PIN
#define bcmolt_itu_tod_id_connected_internally BCMOLT_ITU_TOD_ID_CONNECTED_INTERNALLY
#define bcmolt_itu_tod_id_tod_string_length BCMOLT_ITU_TOD_ID_TOD_STRING_LENGTH
#define bcmolt_itu_tod_id__num_of BCMOLT_ITU_TOD_ID__NUM_OF
#define bcmolt_itu_tod_id_all_properties 0xFF
#define bcmolt_itu_tod_id_full_mask 0xF

} bcmolt_itu_tod_id;

/** Identifiers for all fields in a 'ituonu_upgrade_params'. */
typedef enum
{
    BCMOLT_ITUONU_UPGRADE_PARAMS_ID__BEGIN = 0,
    BCMOLT_ITUONU_UPGRADE_PARAMS_ID_RESPONSE_TIMEOUT_MS = 0, /**< Response timeout in milliseconds. */
    BCMOLT_ITUONU_UPGRADE_PARAMS_ID_MAX_RETRY_COUNT = 1, /**< Maximum retry count. */
    BCMOLT_ITUONU_UPGRADE_PARAMS_ID_OMCI_FORMAT = 2, /**< OMCI format. */
    BCMOLT_ITUONU_UPGRADE_PARAMS_ID_WINDOW_SIZE = 3, /**< Window size. */
    BCMOLT_ITUONU_UPGRADE_PARAMS_ID_ACTIVATE_COMMIT = 4, /**< Activate & commit. */
    BCMOLT_ITUONU_UPGRADE_PARAMS_ID_DELAY_FOR_COMMIT_MS = 5, /**< Delay for commit. */
    BCMOLT_ITUONU_UPGRADE_PARAMS_ID_MAX_ACTIVATION_ATTEMPTS = 6, /**< Max activation attempts. */
    BCMOLT_ITUONU_UPGRADE_PARAMS_ID_END_SWDL_DELAY_MS = 7, /**< End SWDL delay in milliseconds. */
    BCMOLT_ITUONU_UPGRADE_PARAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ituonu_upgrade_params_id__begin BCMOLT_ITUONU_UPGRADE_PARAMS_ID__BEGIN
#define bcmolt_ituonu_upgrade_params_id_response_timeout_ms BCMOLT_ITUONU_UPGRADE_PARAMS_ID_RESPONSE_TIMEOUT_MS
#define bcmolt_ituonu_upgrade_params_id_max_retry_count BCMOLT_ITUONU_UPGRADE_PARAMS_ID_MAX_RETRY_COUNT
#define bcmolt_ituonu_upgrade_params_id_omci_format BCMOLT_ITUONU_UPGRADE_PARAMS_ID_OMCI_FORMAT
#define bcmolt_ituonu_upgrade_params_id_window_size BCMOLT_ITUONU_UPGRADE_PARAMS_ID_WINDOW_SIZE
#define bcmolt_ituonu_upgrade_params_id_activate_commit BCMOLT_ITUONU_UPGRADE_PARAMS_ID_ACTIVATE_COMMIT
#define bcmolt_ituonu_upgrade_params_id_delay_for_commit_ms BCMOLT_ITUONU_UPGRADE_PARAMS_ID_DELAY_FOR_COMMIT_MS
#define bcmolt_ituonu_upgrade_params_id_max_activation_attempts BCMOLT_ITUONU_UPGRADE_PARAMS_ID_MAX_ACTIVATION_ATTEMPTS
#define bcmolt_ituonu_upgrade_params_id_end_swdl_delay_ms BCMOLT_ITUONU_UPGRADE_PARAMS_ID_END_SWDL_DELAY_MS
#define bcmolt_ituonu_upgrade_params_id__num_of BCMOLT_ITUONU_UPGRADE_PARAMS_ID__NUM_OF
#define bcmolt_ituonu_upgrade_params_id_all_properties 0xFF
#define bcmolt_ituonu_upgrade_params_id_full_mask 0xFF

} bcmolt_ituonu_upgrade_params_id;

/** Identifiers for all fields in a 'itupon_onu_aes_key'. */
typedef enum
{
    BCMOLT_ITUPON_ONU_AES_KEY_ID__BEGIN = 0,
    BCMOLT_ITUPON_ONU_AES_KEY_ID_ENCRYPTION_KEY = 0, /**< encryption key. */
    BCMOLT_ITUPON_ONU_AES_KEY_ID_KEY_INDEX = 1, /**< key index. */
    BCMOLT_ITUPON_ONU_AES_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_onu_aes_key_id__begin BCMOLT_ITUPON_ONU_AES_KEY_ID__BEGIN
#define bcmolt_itupon_onu_aes_key_id_encryption_key BCMOLT_ITUPON_ONU_AES_KEY_ID_ENCRYPTION_KEY
#define bcmolt_itupon_onu_aes_key_id_key_index BCMOLT_ITUPON_ONU_AES_KEY_ID_KEY_INDEX
#define bcmolt_itupon_onu_aes_key_id__num_of BCMOLT_ITUPON_ONU_AES_KEY_ID__NUM_OF
#define bcmolt_itupon_onu_aes_key_id_all_properties 0xFF
#define bcmolt_itupon_onu_aes_key_id_full_mask 0x3

} bcmolt_itupon_onu_aes_key_id;

/** Identifiers for all fields in a 'itupon_onu_eqd'. */
typedef enum
{
    BCMOLT_ITUPON_ONU_EQD_ID__BEGIN = 0,
    BCMOLT_ITUPON_ONU_EQD_ID_ONU_ID = 0, /**< ONU ID. */
    BCMOLT_ITUPON_ONU_EQD_ID_EQD = 1, /**< EQD. */
    BCMOLT_ITUPON_ONU_EQD_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_onu_eqd_id__begin BCMOLT_ITUPON_ONU_EQD_ID__BEGIN
#define bcmolt_itupon_onu_eqd_id_onu_id BCMOLT_ITUPON_ONU_EQD_ID_ONU_ID
#define bcmolt_itupon_onu_eqd_id_eqd BCMOLT_ITUPON_ONU_EQD_ID_EQD
#define bcmolt_itupon_onu_eqd_id__num_of BCMOLT_ITUPON_ONU_EQD_ID__NUM_OF
#define bcmolt_itupon_onu_eqd_id_all_properties 0xFF
#define bcmolt_itupon_onu_eqd_id_full_mask 0x3

} bcmolt_itupon_onu_eqd_id;

/** Identifiers for all fields in a 'itupon_protection_switching'. */
typedef enum
{
    BCMOLT_ITUPON_PROTECTION_SWITCHING_ID__BEGIN = 0,
    BCMOLT_ITUPON_PROTECTION_SWITCHING_ID_TIMEOUT = 0, /**< Timeout. */
    BCMOLT_ITUPON_PROTECTION_SWITCHING_ID_GPIO_PIN = 1, /**< GPIO pin. */
    BCMOLT_ITUPON_PROTECTION_SWITCHING_ID_PS_C_WAIT_BEFORE_DEACTIVATION_TIMEOUT = 2, /**< protection switching type c wait before deactivation timeout. */
    BCMOLT_ITUPON_PROTECTION_SWITCHING_ID_OPTIONS = 3, /**< Options. */
    BCMOLT_ITUPON_PROTECTION_SWITCHING_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_protection_switching_id__begin BCMOLT_ITUPON_PROTECTION_SWITCHING_ID__BEGIN
#define bcmolt_itupon_protection_switching_id_timeout BCMOLT_ITUPON_PROTECTION_SWITCHING_ID_TIMEOUT
#define bcmolt_itupon_protection_switching_id_gpio_pin BCMOLT_ITUPON_PROTECTION_SWITCHING_ID_GPIO_PIN
#define bcmolt_itupon_protection_switching_id_ps_c_wait_before_deactivation_timeout BCMOLT_ITUPON_PROTECTION_SWITCHING_ID_PS_C_WAIT_BEFORE_DEACTIVATION_TIMEOUT
#define bcmolt_itupon_protection_switching_id_options BCMOLT_ITUPON_PROTECTION_SWITCHING_ID_OPTIONS
#define bcmolt_itupon_protection_switching_id__num_of BCMOLT_ITUPON_PROTECTION_SWITCHING_ID__NUM_OF
#define bcmolt_itupon_protection_switching_id_all_properties 0xFF
#define bcmolt_itupon_protection_switching_id_full_mask 0xF

} bcmolt_itupon_protection_switching_id;

/** Identifiers for all fields in a 'key_exchange'. */
typedef enum
{
    BCMOLT_KEY_EXCHANGE_ID__BEGIN = 0,
    BCMOLT_KEY_EXCHANGE_ID_INTERVAL = 0, /**< interval in ms. */
    BCMOLT_KEY_EXCHANGE_ID_CONTROL = 1, /**< control. */
    BCMOLT_KEY_EXCHANGE_ID_ENCRYPTED_PORTS_ONLY = 2, /**< Encrypted ports only. */
    BCMOLT_KEY_EXCHANGE_ID_GPON_MODE = 3, /**< GPON Mode. */
    BCMOLT_KEY_EXCHANGE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_key_exchange_id__begin BCMOLT_KEY_EXCHANGE_ID__BEGIN
#define bcmolt_key_exchange_id_interval BCMOLT_KEY_EXCHANGE_ID_INTERVAL
#define bcmolt_key_exchange_id_control BCMOLT_KEY_EXCHANGE_ID_CONTROL
#define bcmolt_key_exchange_id_encrypted_ports_only BCMOLT_KEY_EXCHANGE_ID_ENCRYPTED_PORTS_ONLY
#define bcmolt_key_exchange_id_gpon_mode BCMOLT_KEY_EXCHANGE_ID_GPON_MODE
#define bcmolt_key_exchange_id__num_of BCMOLT_KEY_EXCHANGE_ID__NUM_OF
#define bcmolt_key_exchange_id_all_properties 0xFF
#define bcmolt_key_exchange_id_full_mask 0xF

} bcmolt_key_exchange_id;

/** Identifiers for all fields in a 'lag_global_parms'. */
typedef enum
{
    BCMOLT_LAG_GLOBAL_PARMS_ID__BEGIN = 0,
    BCMOLT_LAG_GLOBAL_PARMS_ID_POLYNOMIAL = 0, /**< LAG Polynomial Values. */
    BCMOLT_LAG_GLOBAL_PARMS_ID_HASH_FIELD = 1, /**< LAG Hash Fields. */
    BCMOLT_LAG_GLOBAL_PARMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_global_parms_id__begin BCMOLT_LAG_GLOBAL_PARMS_ID__BEGIN
#define bcmolt_lag_global_parms_id_polynomial BCMOLT_LAG_GLOBAL_PARMS_ID_POLYNOMIAL
#define bcmolt_lag_global_parms_id_hash_field BCMOLT_LAG_GLOBAL_PARMS_ID_HASH_FIELD
#define bcmolt_lag_global_parms_id__num_of BCMOLT_LAG_GLOBAL_PARMS_ID__NUM_OF
#define bcmolt_lag_global_parms_id_all_properties 0xFF
#define bcmolt_lag_global_parms_id_full_mask 0x3

} bcmolt_lag_global_parms_id;

/** Identifiers for all fields in a 'lag_interface_members_update_command'. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_COMMAND_ID__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_COMMAND_ID_COMMAND = 0, /**< command. */
    BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_COMMAND_ID_NNI_IDS = 1, /**< nni_ids. */
    BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_COMMAND_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_members_update_command_id__begin BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_COMMAND_ID__BEGIN
#define bcmolt_lag_interface_members_update_command_id_command BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_COMMAND_ID_COMMAND
#define bcmolt_lag_interface_members_update_command_id_nni_ids BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_COMMAND_ID_NNI_IDS
#define bcmolt_lag_interface_members_update_command_id__num_of BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_COMMAND_ID__NUM_OF
#define bcmolt_lag_interface_members_update_command_id_all_properties 0xFF
#define bcmolt_lag_interface_members_update_command_id_full_mask 0x3

} bcmolt_lag_interface_members_update_command_id;

/** Identifiers for all fields in a 'layer_4_port_range'. */
typedef enum
{
    BCMOLT_LAYER_4_PORT_RANGE_ID__BEGIN = 0,
    BCMOLT_LAYER_4_PORT_RANGE_ID_MIN = 0, /**< port range min value. */
    BCMOLT_LAYER_4_PORT_RANGE_ID_MAX = 1, /**< port range max value. */
    BCMOLT_LAYER_4_PORT_RANGE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_layer_4_port_range_id__begin BCMOLT_LAYER_4_PORT_RANGE_ID__BEGIN
#define bcmolt_layer_4_port_range_id_min BCMOLT_LAYER_4_PORT_RANGE_ID_MIN
#define bcmolt_layer_4_port_range_id_max BCMOLT_LAYER_4_PORT_RANGE_ID_MAX
#define bcmolt_layer_4_port_range_id__num_of BCMOLT_LAYER_4_PORT_RANGE_ID__NUM_OF
#define bcmolt_layer_4_port_range_id_all_properties 0xFF
#define bcmolt_layer_4_port_range_id_full_mask 0x3

} bcmolt_layer_4_port_range_id;

/** Identifiers for all fields in a 'local_mep'. */
typedef enum
{
    BCMOLT_LOCAL_MEP_ID__BEGIN = 0,
    BCMOLT_LOCAL_MEP_ID_ID = 0, /**< id. */
    BCMOLT_LOCAL_MEP_ID_INTERVAL = 3, /**< CCM Interval. */
    BCMOLT_LOCAL_MEP_ID_STATE = 6, /**< state. */
    BCMOLT_LOCAL_MEP_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_local_mep_id__begin BCMOLT_LOCAL_MEP_ID__BEGIN
#define bcmolt_local_mep_id_id BCMOLT_LOCAL_MEP_ID_ID
#define bcmolt_local_mep_id_interval BCMOLT_LOCAL_MEP_ID_INTERVAL
#define bcmolt_local_mep_id_state BCMOLT_LOCAL_MEP_ID_STATE
#define bcmolt_local_mep_id__num_of BCMOLT_LOCAL_MEP_ID__NUM_OF
#define bcmolt_local_mep_id_all_properties 0xFF
#define bcmolt_local_mep_id_full_mask 0x49

} bcmolt_local_mep_id;

/** Identifiers for all fields in a 'log_level_msg_count'. */
typedef enum
{
    BCMOLT_LOG_LEVEL_MSG_COUNT_ID__BEGIN = 0,
    BCMOLT_LOG_LEVEL_MSG_COUNT_ID_NO_LOG = 0, /**< No Log. */
    BCMOLT_LOG_LEVEL_MSG_COUNT_ID_FATAL = 1, /**< Fatal. */
    BCMOLT_LOG_LEVEL_MSG_COUNT_ID_ERROR = 2, /**< Error. */
    BCMOLT_LOG_LEVEL_MSG_COUNT_ID_WARNING = 3, /**< Warning. */
    BCMOLT_LOG_LEVEL_MSG_COUNT_ID_INFO = 4, /**< Info. */
    BCMOLT_LOG_LEVEL_MSG_COUNT_ID_DEBUG = 5, /**< Debug. */
    BCMOLT_LOG_LEVEL_MSG_COUNT_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_log_level_msg_count_id__begin BCMOLT_LOG_LEVEL_MSG_COUNT_ID__BEGIN
#define bcmolt_log_level_msg_count_id_no_log BCMOLT_LOG_LEVEL_MSG_COUNT_ID_NO_LOG
#define bcmolt_log_level_msg_count_id_fatal BCMOLT_LOG_LEVEL_MSG_COUNT_ID_FATAL
#define bcmolt_log_level_msg_count_id_error BCMOLT_LOG_LEVEL_MSG_COUNT_ID_ERROR
#define bcmolt_log_level_msg_count_id_warning BCMOLT_LOG_LEVEL_MSG_COUNT_ID_WARNING
#define bcmolt_log_level_msg_count_id_info BCMOLT_LOG_LEVEL_MSG_COUNT_ID_INFO
#define bcmolt_log_level_msg_count_id_debug BCMOLT_LOG_LEVEL_MSG_COUNT_ID_DEBUG
#define bcmolt_log_level_msg_count_id__num_of BCMOLT_LOG_LEVEL_MSG_COUNT_ID__NUM_OF
#define bcmolt_log_level_msg_count_id_all_properties 0xFF
#define bcmolt_log_level_msg_count_id_full_mask 0x3F

} bcmolt_log_level_msg_count_id;

/** Identifiers for all fields in a 'log_level_per_file'. */
typedef enum
{
    BCMOLT_LOG_LEVEL_PER_FILE_ID__BEGIN = 0,
    BCMOLT_LOG_LEVEL_PER_FILE_ID_PRINT = 0, /**< Print. */
    BCMOLT_LOG_LEVEL_PER_FILE_ID_SAVE = 1, /**< Save. */
    BCMOLT_LOG_LEVEL_PER_FILE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_log_level_per_file_id__begin BCMOLT_LOG_LEVEL_PER_FILE_ID__BEGIN
#define bcmolt_log_level_per_file_id_print BCMOLT_LOG_LEVEL_PER_FILE_ID_PRINT
#define bcmolt_log_level_per_file_id_save BCMOLT_LOG_LEVEL_PER_FILE_ID_SAVE
#define bcmolt_log_level_per_file_id__num_of BCMOLT_LOG_LEVEL_PER_FILE_ID__NUM_OF
#define bcmolt_log_level_per_file_id_all_properties 0xFF
#define bcmolt_log_level_per_file_id_full_mask 0x3

} bcmolt_log_level_per_file_id;

/** Identifiers for all fields in a 'meg_cfg'. */
typedef enum
{
    BCMOLT_MEG_CFG_ID__BEGIN = 0,
    BCMOLT_MEG_CFG_ID_NAME = 0, /**< MEG Name. */
    BCMOLT_MEG_CFG_ID_FORMAT = 1, /**< MEG Id Format. */
    BCMOLT_MEG_CFG_ID_LEVEL = 2, /**< Meg Level. */
    BCMOLT_MEG_CFG_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_meg_cfg_id__begin BCMOLT_MEG_CFG_ID__BEGIN
#define bcmolt_meg_cfg_id_name BCMOLT_MEG_CFG_ID_NAME
#define bcmolt_meg_cfg_id_format BCMOLT_MEG_CFG_ID_FORMAT
#define bcmolt_meg_cfg_id_level BCMOLT_MEG_CFG_ID_LEVEL
#define bcmolt_meg_cfg_id__num_of BCMOLT_MEG_CFG_ID__NUM_OF
#define bcmolt_meg_cfg_id_all_properties 0xFF
#define bcmolt_meg_cfg_id_full_mask 0x7

} bcmolt_meg_cfg_id;

/** Identifiers for all fields in a 'ngpon2_onu_params'. */
typedef enum
{
    BCMOLT_NGPON2_ONU_PARAMS_ID__BEGIN = 0,
    BCMOLT_NGPON2_ONU_PARAMS_ID_CALIBRATION_RECORD = 0, /**< Calibration record. */
    BCMOLT_NGPON2_ONU_PARAMS_ID_US_LINE_RATE = 1, /**< US line rate. */
    BCMOLT_NGPON2_ONU_PARAMS_ID_TUNING_GRANULARITY = 2, /**< Tuning granularity. */
    BCMOLT_NGPON2_ONU_PARAMS_ID_STEP_TUNING_TIME = 3, /**< Step tuning time. */
    BCMOLT_NGPON2_ONU_PARAMS_ID_POWER_LEVELLING_CAPABILITIES = 4, /**< Power levelling capabilities. */
    BCMOLT_NGPON2_ONU_PARAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ngpon2_onu_params_id__begin BCMOLT_NGPON2_ONU_PARAMS_ID__BEGIN
#define bcmolt_ngpon2_onu_params_id_calibration_record BCMOLT_NGPON2_ONU_PARAMS_ID_CALIBRATION_RECORD
#define bcmolt_ngpon2_onu_params_id_us_line_rate BCMOLT_NGPON2_ONU_PARAMS_ID_US_LINE_RATE
#define bcmolt_ngpon2_onu_params_id_tuning_granularity BCMOLT_NGPON2_ONU_PARAMS_ID_TUNING_GRANULARITY
#define bcmolt_ngpon2_onu_params_id_step_tuning_time BCMOLT_NGPON2_ONU_PARAMS_ID_STEP_TUNING_TIME
#define bcmolt_ngpon2_onu_params_id_power_levelling_capabilities BCMOLT_NGPON2_ONU_PARAMS_ID_POWER_LEVELLING_CAPABILITIES
#define bcmolt_ngpon2_onu_params_id__num_of BCMOLT_NGPON2_ONU_PARAMS_ID__NUM_OF
#define bcmolt_ngpon2_onu_params_id_all_properties 0xFF
#define bcmolt_ngpon2_onu_params_id_full_mask 0x1F

} bcmolt_ngpon2_onu_params_id;

/** Identifiers for all fields in a 'ngpon2_pon_params'. */
typedef enum
{
    BCMOLT_NGPON2_PON_PARAMS_ID__BEGIN = 0,
    BCMOLT_NGPON2_PON_PARAMS_ID_NGPON2_AMD1 = 0, /**< Enable NGPON2 Amendment 1 support on PON. */
    BCMOLT_NGPON2_PON_PARAMS_ID_ONU_TUNING = 1, /**< onu tuning. */
    BCMOLT_NGPON2_PON_PARAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ngpon2_pon_params_id__begin BCMOLT_NGPON2_PON_PARAMS_ID__BEGIN
#define bcmolt_ngpon2_pon_params_id_ngpon2_amd1 BCMOLT_NGPON2_PON_PARAMS_ID_NGPON2_AMD1
#define bcmolt_ngpon2_pon_params_id_onu_tuning BCMOLT_NGPON2_PON_PARAMS_ID_ONU_TUNING
#define bcmolt_ngpon2_pon_params_id__num_of BCMOLT_NGPON2_PON_PARAMS_ID__NUM_OF
#define bcmolt_ngpon2_pon_params_id_all_properties 0xFF
#define bcmolt_ngpon2_pon_params_id_full_mask 0x3

} bcmolt_ngpon2_pon_params_id;

/** Identifiers for all fields in a 'nni_link_status'. */
typedef enum
{
    BCMOLT_NNI_LINK_STATUS_ID__BEGIN = 0,
    BCMOLT_NNI_LINK_STATUS_ID_LINK_STATUS = 0, /**< Link Status. */
    BCMOLT_NNI_LINK_STATUS_ID_SIGNAL_DETECTED = 1, /**< Signal Detected. */
    BCMOLT_NNI_LINK_STATUS_ID_PMD_LOCKED = 2, /**< PMD locked. */
    BCMOLT_NNI_LINK_STATUS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_nni_link_status_id__begin BCMOLT_NNI_LINK_STATUS_ID__BEGIN
#define bcmolt_nni_link_status_id_link_status BCMOLT_NNI_LINK_STATUS_ID_LINK_STATUS
#define bcmolt_nni_link_status_id_signal_detected BCMOLT_NNI_LINK_STATUS_ID_SIGNAL_DETECTED
#define bcmolt_nni_link_status_id_pmd_locked BCMOLT_NNI_LINK_STATUS_ID_PMD_LOCKED
#define bcmolt_nni_link_status_id__num_of BCMOLT_NNI_LINK_STATUS_ID__NUM_OF
#define bcmolt_nni_link_status_id_all_properties 0xFF
#define bcmolt_nni_link_status_id_full_mask 0x7

} bcmolt_nni_link_status_id;

/** Identifiers for all fields in a 'onu_activation'. */
typedef enum
{
    BCMOLT_ONU_ACTIVATION_ID__BEGIN = 0,
    BCMOLT_ONU_ACTIVATION_ID_KEY_EXCHANGE = 0, /**< Key exchange. */
    BCMOLT_ONU_ACTIVATION_ID_AUTHENTICATION = 1, /**< Authentication. */
    BCMOLT_ONU_ACTIVATION_ID_FAIL_DUE_TO_AUTHENTICATION_FAILURE = 2, /**< Fail due to password/registration authentication failure. */
    BCMOLT_ONU_ACTIVATION_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_activation_id__begin BCMOLT_ONU_ACTIVATION_ID__BEGIN
#define bcmolt_onu_activation_id_key_exchange BCMOLT_ONU_ACTIVATION_ID_KEY_EXCHANGE
#define bcmolt_onu_activation_id_authentication BCMOLT_ONU_ACTIVATION_ID_AUTHENTICATION
#define bcmolt_onu_activation_id_fail_due_to_authentication_failure BCMOLT_ONU_ACTIVATION_ID_FAIL_DUE_TO_AUTHENTICATION_FAILURE
#define bcmolt_onu_activation_id__num_of BCMOLT_ONU_ACTIVATION_ID__NUM_OF
#define bcmolt_onu_activation_id_all_properties 0xFF
#define bcmolt_onu_activation_id_full_mask 0x7

} bcmolt_onu_activation_id;

/** Identifiers for all fields in a 'onu_power_management_configuration'. */
typedef enum
{
    BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID__BEGIN = 0,
    BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID_ILOWPOWER = 0, /**< Ilowpower. */
    BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID_IAWARE = 1, /**< Iaware. */
    BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID_ITRANSINIT = 2, /**< Itransinit. */
    BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID_ITXINIT = 3, /**< Itxinit. */
    BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID_IRXOFF = 4, /**< Irxoff. */
    BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_power_management_configuration_id__begin BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID__BEGIN
#define bcmolt_onu_power_management_configuration_id_ilowpower BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID_ILOWPOWER
#define bcmolt_onu_power_management_configuration_id_iaware BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID_IAWARE
#define bcmolt_onu_power_management_configuration_id_itransinit BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID_ITRANSINIT
#define bcmolt_onu_power_management_configuration_id_itxinit BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID_ITXINIT
#define bcmolt_onu_power_management_configuration_id_irxoff BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID_IRXOFF
#define bcmolt_onu_power_management_configuration_id__num_of BCMOLT_ONU_POWER_MANAGEMENT_CONFIGURATION_ID__NUM_OF
#define bcmolt_onu_power_management_configuration_id_all_properties 0xFF
#define bcmolt_onu_power_management_configuration_id_full_mask 0x1F

} bcmolt_onu_power_management_configuration_id;

/** Identifiers for all fields in a 'onu_tuning_configuration'. */
typedef enum
{
    BCMOLT_ONU_TUNING_CONFIGURATION_ID__BEGIN = 0,
    BCMOLT_ONU_TUNING_CONFIGURATION_ID_TSOURCE = 0, /**< tsource. */
    BCMOLT_ONU_TUNING_CONFIGURATION_ID_TTARGET = 1, /**< ttarget. */
    BCMOLT_ONU_TUNING_CONFIGURATION_ID_REQUEST_REGISTRATION_REQUIRED = 2, /**< request registration required. */
    BCMOLT_ONU_TUNING_CONFIGURATION_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_tuning_configuration_id__begin BCMOLT_ONU_TUNING_CONFIGURATION_ID__BEGIN
#define bcmolt_onu_tuning_configuration_id_tsource BCMOLT_ONU_TUNING_CONFIGURATION_ID_TSOURCE
#define bcmolt_onu_tuning_configuration_id_ttarget BCMOLT_ONU_TUNING_CONFIGURATION_ID_TTARGET
#define bcmolt_onu_tuning_configuration_id_request_registration_required BCMOLT_ONU_TUNING_CONFIGURATION_ID_REQUEST_REGISTRATION_REQUIRED
#define bcmolt_onu_tuning_configuration_id__num_of BCMOLT_ONU_TUNING_CONFIGURATION_ID__NUM_OF
#define bcmolt_onu_tuning_configuration_id_all_properties 0xFF
#define bcmolt_onu_tuning_configuration_id_full_mask 0x7

} bcmolt_onu_tuning_configuration_id;

/** Identifiers for all fields in a 'onu_upgrade_status'. */
typedef enum
{
    BCMOLT_ONU_UPGRADE_STATUS_ID__BEGIN = 0,
    BCMOLT_ONU_UPGRADE_STATUS_ID_ONU_ID = 0, /**< ONU ID. */
    BCMOLT_ONU_UPGRADE_STATUS_ID_BYTES_TRANSMITTED = 1, /**< Bytes transmitted. */
    BCMOLT_ONU_UPGRADE_STATUS_ID_STATUS = 2, /**< Status. */
    BCMOLT_ONU_UPGRADE_STATUS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_upgrade_status_id__begin BCMOLT_ONU_UPGRADE_STATUS_ID__BEGIN
#define bcmolt_onu_upgrade_status_id_onu_id BCMOLT_ONU_UPGRADE_STATUS_ID_ONU_ID
#define bcmolt_onu_upgrade_status_id_bytes_transmitted BCMOLT_ONU_UPGRADE_STATUS_ID_BYTES_TRANSMITTED
#define bcmolt_onu_upgrade_status_id_status BCMOLT_ONU_UPGRADE_STATUS_ID_STATUS
#define bcmolt_onu_upgrade_status_id__num_of BCMOLT_ONU_UPGRADE_STATUS_ID__NUM_OF
#define bcmolt_onu_upgrade_status_id_all_properties 0xFF
#define bcmolt_onu_upgrade_status_id_full_mask 0x7

} bcmolt_onu_upgrade_status_id;

/** Identifiers for all fields in a 'operation_control'. */
typedef enum
{
    BCMOLT_OPERATION_CONTROL_ID__BEGIN = 0,
    BCMOLT_OPERATION_CONTROL_ID_RE = 0, /**< RE flag. */
    BCMOLT_OPERATION_CONTROL_ID_ODN_CLASS = 1, /**< ODN Class. */
    BCMOLT_OPERATION_CONTROL_ID_DS_FEC_MODE = 2, /**< DS FEC mode. */
    BCMOLT_OPERATION_CONTROL_ID_PROTOCOL = 3, /**< Protocol. */
    BCMOLT_OPERATION_CONTROL_ID_DS_LINK_TYPE = 4, /**< DS link type. */
    BCMOLT_OPERATION_CONTROL_ID_PON_ID = 5, /**< PON ID. */
    BCMOLT_OPERATION_CONTROL_ID_C = 6, /**< C. */
    BCMOLT_OPERATION_CONTROL_ID_TOL = 7, /**< TOL. */
    BCMOLT_OPERATION_CONTROL_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_operation_control_id__begin BCMOLT_OPERATION_CONTROL_ID__BEGIN
#define bcmolt_operation_control_id_re BCMOLT_OPERATION_CONTROL_ID_RE
#define bcmolt_operation_control_id_odn_class BCMOLT_OPERATION_CONTROL_ID_ODN_CLASS
#define bcmolt_operation_control_id_ds_fec_mode BCMOLT_OPERATION_CONTROL_ID_DS_FEC_MODE
#define bcmolt_operation_control_id_protocol BCMOLT_OPERATION_CONTROL_ID_PROTOCOL
#define bcmolt_operation_control_id_ds_link_type BCMOLT_OPERATION_CONTROL_ID_DS_LINK_TYPE
#define bcmolt_operation_control_id_pon_id BCMOLT_OPERATION_CONTROL_ID_PON_ID
#define bcmolt_operation_control_id_c BCMOLT_OPERATION_CONTROL_ID_C
#define bcmolt_operation_control_id_tol BCMOLT_OPERATION_CONTROL_ID_TOL
#define bcmolt_operation_control_id__num_of BCMOLT_OPERATION_CONTROL_ID__NUM_OF
#define bcmolt_operation_control_id_all_properties 0xFF
#define bcmolt_operation_control_id_full_mask 0xFF

} bcmolt_operation_control_id;

/** Identifiers for all fields in a 'pcie_conn_data'. */
typedef enum
{
    BCMOLT_PCIE_CONN_DATA_ID__BEGIN = 0,
    BCMOLT_PCIE_CONN_DATA_ID_HOST_DMA_RX_QUEUE_SIZE = 0, /**< RX queue size of the host DMA. */
    BCMOLT_PCIE_CONN_DATA_ID_HOST_DMA_TX_QUEUE_SIZE = 1, /**< TX queue size of the host DMA. */
    BCMOLT_PCIE_CONN_DATA_ID_MTU = 2, /**< MTU. */
    BCMOLT_PCIE_CONN_DATA_ID_AVS_CONTROL = 3, /**< AVS Control. */
    BCMOLT_PCIE_CONN_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pcie_conn_data_id__begin BCMOLT_PCIE_CONN_DATA_ID__BEGIN
#define bcmolt_pcie_conn_data_id_host_dma_rx_queue_size BCMOLT_PCIE_CONN_DATA_ID_HOST_DMA_RX_QUEUE_SIZE
#define bcmolt_pcie_conn_data_id_host_dma_tx_queue_size BCMOLT_PCIE_CONN_DATA_ID_HOST_DMA_TX_QUEUE_SIZE
#define bcmolt_pcie_conn_data_id_mtu BCMOLT_PCIE_CONN_DATA_ID_MTU
#define bcmolt_pcie_conn_data_id_avs_control BCMOLT_PCIE_CONN_DATA_ID_AVS_CONTROL
#define bcmolt_pcie_conn_data_id__num_of BCMOLT_PCIE_CONN_DATA_ID__NUM_OF
#define bcmolt_pcie_conn_data_id_all_properties 0xFF
#define bcmolt_pcie_conn_data_id_full_mask 0xF

} bcmolt_pcie_conn_data_id;

/** Identifiers for all fields in a 'periodic_ploams'. */
typedef enum
{
    BCMOLT_PERIODIC_PLOAMS_ID__BEGIN = 0,
    BCMOLT_PERIODIC_PLOAMS_ID_CONTROL = 0, /**< Control. */
    BCMOLT_PERIODIC_PLOAMS_ID_INTERVAL_MS = 1, /**< Interval. */
    BCMOLT_PERIODIC_PLOAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_periodic_ploams_id__begin BCMOLT_PERIODIC_PLOAMS_ID__BEGIN
#define bcmolt_periodic_ploams_id_control BCMOLT_PERIODIC_PLOAMS_ID_CONTROL
#define bcmolt_periodic_ploams_id_interval_ms BCMOLT_PERIODIC_PLOAMS_ID_INTERVAL_MS
#define bcmolt_periodic_ploams_id__num_of BCMOLT_PERIODIC_PLOAMS_ID__NUM_OF
#define bcmolt_periodic_ploams_id_all_properties 0xFF
#define bcmolt_periodic_ploams_id_full_mask 0x3

} bcmolt_periodic_ploams_id;

/** Identifiers for all fields in a 'periodic_standby_pon_monitoring'. */
typedef enum
{
    BCMOLT_PERIODIC_STANDBY_PON_MONITORING_ID__BEGIN = 0,
    BCMOLT_PERIODIC_STANDBY_PON_MONITORING_ID_INTERVAL = 0, /**< interval in ms. */
    BCMOLT_PERIODIC_STANDBY_PON_MONITORING_ID_CONTROL = 1, /**< control. */
    BCMOLT_PERIODIC_STANDBY_PON_MONITORING_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_periodic_standby_pon_monitoring_id__begin BCMOLT_PERIODIC_STANDBY_PON_MONITORING_ID__BEGIN
#define bcmolt_periodic_standby_pon_monitoring_id_interval BCMOLT_PERIODIC_STANDBY_PON_MONITORING_ID_INTERVAL
#define bcmolt_periodic_standby_pon_monitoring_id_control BCMOLT_PERIODIC_STANDBY_PON_MONITORING_ID_CONTROL
#define bcmolt_periodic_standby_pon_monitoring_id__num_of BCMOLT_PERIODIC_STANDBY_PON_MONITORING_ID__NUM_OF
#define bcmolt_periodic_standby_pon_monitoring_id_all_properties 0xFF
#define bcmolt_periodic_standby_pon_monitoring_id_full_mask 0x3

} bcmolt_periodic_standby_pon_monitoring_id;

/** Identifiers for all fields in a 'ploam_retransmission'. */
typedef enum
{
    BCMOLT_PLOAM_RETRANSMISSION_ID__BEGIN = 0,
    BCMOLT_PLOAM_RETRANSMISSION_ID_RETRANS_RANGING_TIME = 0, /**< retransmission ranging time. */
    BCMOLT_PLOAM_RETRANSMISSION_ID_RETRANS_ASSIGN_ALLOC_ID = 1, /**< retransmission assign alloc id. */
    BCMOLT_PLOAM_RETRANSMISSION_ID_RETRANS_KEY_CONTROL = 2, /**< retransmission key control. */
    BCMOLT_PLOAM_RETRANSMISSION_ID_RETRANS_REQUEST_REGISTRATION = 3, /**< retransmission request registration. */
    BCMOLT_PLOAM_RETRANSMISSION_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ploam_retransmission_id__begin BCMOLT_PLOAM_RETRANSMISSION_ID__BEGIN
#define bcmolt_ploam_retransmission_id_retrans_ranging_time BCMOLT_PLOAM_RETRANSMISSION_ID_RETRANS_RANGING_TIME
#define bcmolt_ploam_retransmission_id_retrans_assign_alloc_id BCMOLT_PLOAM_RETRANSMISSION_ID_RETRANS_ASSIGN_ALLOC_ID
#define bcmolt_ploam_retransmission_id_retrans_key_control BCMOLT_PLOAM_RETRANSMISSION_ID_RETRANS_KEY_CONTROL
#define bcmolt_ploam_retransmission_id_retrans_request_registration BCMOLT_PLOAM_RETRANSMISSION_ID_RETRANS_REQUEST_REGISTRATION
#define bcmolt_ploam_retransmission_id__num_of BCMOLT_PLOAM_RETRANSMISSION_ID__NUM_OF
#define bcmolt_ploam_retransmission_id_all_properties 0xFF
#define bcmolt_ploam_retransmission_id_full_mask 0xF

} bcmolt_ploam_retransmission_id;

/** Identifiers for all fields in a 'pon_alloc_sla'. */
typedef enum
{
    BCMOLT_PON_ALLOC_SLA_ID__BEGIN = 0,
    BCMOLT_PON_ALLOC_SLA_ID_CBR_RT_BW = 0, /**< CBR RT BW in bytes per second. */
    BCMOLT_PON_ALLOC_SLA_ID_CBR_NRT_BW = 1, /**< CBR NRT BW in bytes per second. */
    BCMOLT_PON_ALLOC_SLA_ID_GUARANTEED_BW = 2, /**< Guaranteed BW in bytes per second. */
    BCMOLT_PON_ALLOC_SLA_ID_MAXIMUM_BW = 3, /**< Maximum BW in bytes per second. */
    BCMOLT_PON_ALLOC_SLA_ID_ADDITIONAL_BW_ELIGIBILITY = 4, /**< Additional BW eligibility. */
    BCMOLT_PON_ALLOC_SLA_ID_CBR_RT_COMPENSATION = 5, /**< CBR RT compensation. */
    BCMOLT_PON_ALLOC_SLA_ID_CBR_RT_AP_INDEX = 6, /**< CBR RT allocation profile index. */
    BCMOLT_PON_ALLOC_SLA_ID_CBR_NRT_AP_INDEX = 7, /**< CBR NRT allocation profile index. */
    BCMOLT_PON_ALLOC_SLA_ID_ALLOC_TYPE = 8, /**< Alloc Type. */
    BCMOLT_PON_ALLOC_SLA_ID_WEIGHT = 9, /**< Weight. */
    BCMOLT_PON_ALLOC_SLA_ID_PRIORITY = 10, /**< Priority. */
    BCMOLT_PON_ALLOC_SLA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_alloc_sla_id__begin BCMOLT_PON_ALLOC_SLA_ID__BEGIN
#define bcmolt_pon_alloc_sla_id_cbr_rt_bw BCMOLT_PON_ALLOC_SLA_ID_CBR_RT_BW
#define bcmolt_pon_alloc_sla_id_cbr_nrt_bw BCMOLT_PON_ALLOC_SLA_ID_CBR_NRT_BW
#define bcmolt_pon_alloc_sla_id_guaranteed_bw BCMOLT_PON_ALLOC_SLA_ID_GUARANTEED_BW
#define bcmolt_pon_alloc_sla_id_maximum_bw BCMOLT_PON_ALLOC_SLA_ID_MAXIMUM_BW
#define bcmolt_pon_alloc_sla_id_additional_bw_eligibility BCMOLT_PON_ALLOC_SLA_ID_ADDITIONAL_BW_ELIGIBILITY
#define bcmolt_pon_alloc_sla_id_cbr_rt_compensation BCMOLT_PON_ALLOC_SLA_ID_CBR_RT_COMPENSATION
#define bcmolt_pon_alloc_sla_id_cbr_rt_ap_index BCMOLT_PON_ALLOC_SLA_ID_CBR_RT_AP_INDEX
#define bcmolt_pon_alloc_sla_id_cbr_nrt_ap_index BCMOLT_PON_ALLOC_SLA_ID_CBR_NRT_AP_INDEX
#define bcmolt_pon_alloc_sla_id_alloc_type BCMOLT_PON_ALLOC_SLA_ID_ALLOC_TYPE
#define bcmolt_pon_alloc_sla_id_weight BCMOLT_PON_ALLOC_SLA_ID_WEIGHT
#define bcmolt_pon_alloc_sla_id_priority BCMOLT_PON_ALLOC_SLA_ID_PRIORITY
#define bcmolt_pon_alloc_sla_id__num_of BCMOLT_PON_ALLOC_SLA_ID__NUM_OF
#define bcmolt_pon_alloc_sla_id_all_properties 0xFF
#define bcmolt_pon_alloc_sla_id_full_mask 0x7FF

} bcmolt_pon_alloc_sla_id;

/** Identifiers for all fields in a 'pon_available_bandwidth'. */
typedef enum
{
    BCMOLT_PON_AVAILABLE_BANDWIDTH_ID__BEGIN = 0,
    BCMOLT_PON_AVAILABLE_BANDWIDTH_ID_CBR_BW = 0, /**< CBR BW. */
    BCMOLT_PON_AVAILABLE_BANDWIDTH_ID_TOTAL_BW = 1, /**< Total BW. */
    BCMOLT_PON_AVAILABLE_BANDWIDTH_ID_NEXT_ONU_TOTAL_BW = 2, /**< Next ONU Total BW. */
    BCMOLT_PON_AVAILABLE_BANDWIDTH_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_available_bandwidth_id__begin BCMOLT_PON_AVAILABLE_BANDWIDTH_ID__BEGIN
#define bcmolt_pon_available_bandwidth_id_cbr_bw BCMOLT_PON_AVAILABLE_BANDWIDTH_ID_CBR_BW
#define bcmolt_pon_available_bandwidth_id_total_bw BCMOLT_PON_AVAILABLE_BANDWIDTH_ID_TOTAL_BW
#define bcmolt_pon_available_bandwidth_id_next_onu_total_bw BCMOLT_PON_AVAILABLE_BANDWIDTH_ID_NEXT_ONU_TOTAL_BW
#define bcmolt_pon_available_bandwidth_id__num_of BCMOLT_PON_AVAILABLE_BANDWIDTH_ID__NUM_OF
#define bcmolt_pon_available_bandwidth_id_all_properties 0xFF
#define bcmolt_pon_available_bandwidth_id_full_mask 0x7

} bcmolt_pon_available_bandwidth_id;

/** Identifiers for all fields in a 'pon_distance'. */
typedef enum
{
    BCMOLT_PON_DISTANCE_ID__BEGIN = 0,
    BCMOLT_PON_DISTANCE_ID_MAX_LOG_DISTANCE = 0, /**< Maximum logical distance in km. */
    BCMOLT_PON_DISTANCE_ID_MAX_DIFF_REACH = 1, /**< Maximum differential reach in km. */
    BCMOLT_PON_DISTANCE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_distance_id__begin BCMOLT_PON_DISTANCE_ID__BEGIN
#define bcmolt_pon_distance_id_max_log_distance BCMOLT_PON_DISTANCE_ID_MAX_LOG_DISTANCE
#define bcmolt_pon_distance_id_max_diff_reach BCMOLT_PON_DISTANCE_ID_MAX_DIFF_REACH
#define bcmolt_pon_distance_id__num_of BCMOLT_PON_DISTANCE_ID__NUM_OF
#define bcmolt_pon_distance_id_all_properties 0xFF
#define bcmolt_pon_distance_id_full_mask 0x3

} bcmolt_pon_distance_id;

/** Identifiers for all fields in a 'pon_drift_control'. */
typedef enum
{
    BCMOLT_PON_DRIFT_CONTROL_ID__BEGIN = 0,
    BCMOLT_PON_DRIFT_CONTROL_ID_DRIFT_INTERVAL = 0, /**< Drift interval in ms. */
    BCMOLT_PON_DRIFT_CONTROL_ID_DRIFT_LIMIT = 1, /**< Drift limit. */
    BCMOLT_PON_DRIFT_CONTROL_ID_TRANSMISSION_CONTROL_LIMIT = 2, /**< Transmission control limit. */
    BCMOLT_PON_DRIFT_CONTROL_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_drift_control_id__begin BCMOLT_PON_DRIFT_CONTROL_ID__BEGIN
#define bcmolt_pon_drift_control_id_drift_interval BCMOLT_PON_DRIFT_CONTROL_ID_DRIFT_INTERVAL
#define bcmolt_pon_drift_control_id_drift_limit BCMOLT_PON_DRIFT_CONTROL_ID_DRIFT_LIMIT
#define bcmolt_pon_drift_control_id_transmission_control_limit BCMOLT_PON_DRIFT_CONTROL_ID_TRANSMISSION_CONTROL_LIMIT
#define bcmolt_pon_drift_control_id__num_of BCMOLT_PON_DRIFT_CONTROL_ID__NUM_OF
#define bcmolt_pon_drift_control_id_all_properties 0xFF
#define bcmolt_pon_drift_control_id_full_mask 0x7

} bcmolt_pon_drift_control_id;

/** Identifiers for all fields in a 'pon_id'. */
typedef enum
{
    BCMOLT_PON_ID_ID__BEGIN = 0,
    BCMOLT_PON_ID_ID_ADMINISTRATIVE_LABEL = 0, /**< Administrative label. */
    BCMOLT_PON_ID_ID_DWLCH_ID = 1, /**< DWLCH ID. */
    BCMOLT_PON_ID_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_id_id__begin BCMOLT_PON_ID_ID__BEGIN
#define bcmolt_pon_id_id_administrative_label BCMOLT_PON_ID_ID_ADMINISTRATIVE_LABEL
#define bcmolt_pon_id_id_dwlch_id BCMOLT_PON_ID_ID_DWLCH_ID
#define bcmolt_pon_id_id__num_of BCMOLT_PON_ID_ID__NUM_OF
#define bcmolt_pon_id_id_all_properties 0xFF
#define bcmolt_pon_id_id_full_mask 0x3

} bcmolt_pon_id_id;

/** Identifiers for all fields in a 'pon_onu_upgrade_status'. */
typedef enum
{
    BCMOLT_PON_ONU_UPGRADE_STATUS_ID__BEGIN = 0,
    BCMOLT_PON_ONU_UPGRADE_STATUS_ID_OVERALL_STATUS = 0, /**< Overall status. */
    BCMOLT_PON_ONU_UPGRADE_STATUS_ID_FILE_SIZE_IN_BYTES = 1, /**< File size in bytes. */
    BCMOLT_PON_ONU_UPGRADE_STATUS_ID_ONU_STATUS = 2, /**< ONU status. */
    BCMOLT_PON_ONU_UPGRADE_STATUS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_onu_upgrade_status_id__begin BCMOLT_PON_ONU_UPGRADE_STATUS_ID__BEGIN
#define bcmolt_pon_onu_upgrade_status_id_overall_status BCMOLT_PON_ONU_UPGRADE_STATUS_ID_OVERALL_STATUS
#define bcmolt_pon_onu_upgrade_status_id_file_size_in_bytes BCMOLT_PON_ONU_UPGRADE_STATUS_ID_FILE_SIZE_IN_BYTES
#define bcmolt_pon_onu_upgrade_status_id_onu_status BCMOLT_PON_ONU_UPGRADE_STATUS_ID_ONU_STATUS
#define bcmolt_pon_onu_upgrade_status_id__num_of BCMOLT_PON_ONU_UPGRADE_STATUS_ID__NUM_OF
#define bcmolt_pon_onu_upgrade_status_id_all_properties 0xFF
#define bcmolt_pon_onu_upgrade_status_id_full_mask 0x7

} bcmolt_pon_onu_upgrade_status_id;

/** Identifiers for all fields in a 'pon_power_level'. */
typedef enum
{
    BCMOLT_PON_POWER_LEVEL_ID__BEGIN = 0,
    BCMOLT_PON_POWER_LEVEL_ID_PLS_MAXIMUM_ALLOCATION_SIZE = 0, /**< PLS maximum allocation size in bytes. */
    BCMOLT_PON_POWER_LEVEL_ID_MODE = 1, /**< mode. */
    BCMOLT_PON_POWER_LEVEL_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_power_level_id__begin BCMOLT_PON_POWER_LEVEL_ID__BEGIN
#define bcmolt_pon_power_level_id_pls_maximum_allocation_size BCMOLT_PON_POWER_LEVEL_ID_PLS_MAXIMUM_ALLOCATION_SIZE
#define bcmolt_pon_power_level_id_mode BCMOLT_PON_POWER_LEVEL_ID_MODE
#define bcmolt_pon_power_level_id__num_of BCMOLT_PON_POWER_LEVEL_ID__NUM_OF
#define bcmolt_pon_power_level_id_all_properties 0xFF
#define bcmolt_pon_power_level_id_full_mask 0x3

} bcmolt_pon_power_level_id;

/** Identifiers for all fields in a 'power_consumption_channel_report'. */
typedef enum
{
    BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_ID__BEGIN = 0,
    BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_ID_DS_WAVELENGTH_CHANNEL_ID = 0, /**< DS wavelength channel ID. */
    BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_ID_US_WAVELENGTH_CHANNEL_ID = 1, /**< US wavelength channel id. */
    BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_ID_POWER_CONSUMPTION = 2, /**< Power consumption. */
    BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_power_consumption_channel_report_id__begin BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_ID__BEGIN
#define bcmolt_power_consumption_channel_report_id_ds_wavelength_channel_id BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_ID_DS_WAVELENGTH_CHANNEL_ID
#define bcmolt_power_consumption_channel_report_id_us_wavelength_channel_id BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_ID_US_WAVELENGTH_CHANNEL_ID
#define bcmolt_power_consumption_channel_report_id_power_consumption BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_ID_POWER_CONSUMPTION
#define bcmolt_power_consumption_channel_report_id__num_of BCMOLT_POWER_CONSUMPTION_CHANNEL_REPORT_ID__NUM_OF
#define bcmolt_power_consumption_channel_report_id_all_properties 0xFF
#define bcmolt_power_consumption_channel_report_id_full_mask 0x7

} bcmolt_power_consumption_channel_report_id;

/** Identifiers for all fields in a 'prbs_checker_config'. */
typedef enum
{
    BCMOLT_PRBS_CHECKER_CONFIG_ID__BEGIN = 0,
    BCMOLT_PRBS_CHECKER_CONFIG_ID_POLYNOM = 0, /**< polynom. */
    BCMOLT_PRBS_CHECKER_CONFIG_ID_MODE = 1, /**< mode. */
    BCMOLT_PRBS_CHECKER_CONFIG_ID_DATA_INVERT = 2, /**< data invert. */
    BCMOLT_PRBS_CHECKER_CONFIG_ID_CONTROL = 3, /**< control. */
    BCMOLT_PRBS_CHECKER_CONFIG_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_prbs_checker_config_id__begin BCMOLT_PRBS_CHECKER_CONFIG_ID__BEGIN
#define bcmolt_prbs_checker_config_id_polynom BCMOLT_PRBS_CHECKER_CONFIG_ID_POLYNOM
#define bcmolt_prbs_checker_config_id_mode BCMOLT_PRBS_CHECKER_CONFIG_ID_MODE
#define bcmolt_prbs_checker_config_id_data_invert BCMOLT_PRBS_CHECKER_CONFIG_ID_DATA_INVERT
#define bcmolt_prbs_checker_config_id_control BCMOLT_PRBS_CHECKER_CONFIG_ID_CONTROL
#define bcmolt_prbs_checker_config_id__num_of BCMOLT_PRBS_CHECKER_CONFIG_ID__NUM_OF
#define bcmolt_prbs_checker_config_id_all_properties 0xFF
#define bcmolt_prbs_checker_config_id_full_mask 0xF

} bcmolt_prbs_checker_config_id;

/** Identifiers for all fields in a 'prbs_generator_config'. */
typedef enum
{
    BCMOLT_PRBS_GENERATOR_CONFIG_ID__BEGIN = 0,
    BCMOLT_PRBS_GENERATOR_CONFIG_ID_POLYNOM = 0, /**< polynom. */
    BCMOLT_PRBS_GENERATOR_CONFIG_ID_ERROR_INSERT = 1, /**< error insert. */
    BCMOLT_PRBS_GENERATOR_CONFIG_ID_INVERT = 2, /**< invert. */
    BCMOLT_PRBS_GENERATOR_CONFIG_ID_CONTROL = 3, /**< control. */
    BCMOLT_PRBS_GENERATOR_CONFIG_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_prbs_generator_config_id__begin BCMOLT_PRBS_GENERATOR_CONFIG_ID__BEGIN
#define bcmolt_prbs_generator_config_id_polynom BCMOLT_PRBS_GENERATOR_CONFIG_ID_POLYNOM
#define bcmolt_prbs_generator_config_id_error_insert BCMOLT_PRBS_GENERATOR_CONFIG_ID_ERROR_INSERT
#define bcmolt_prbs_generator_config_id_invert BCMOLT_PRBS_GENERATOR_CONFIG_ID_INVERT
#define bcmolt_prbs_generator_config_id_control BCMOLT_PRBS_GENERATOR_CONFIG_ID_CONTROL
#define bcmolt_prbs_generator_config_id__num_of BCMOLT_PRBS_GENERATOR_CONFIG_ID__NUM_OF
#define bcmolt_prbs_generator_config_id_all_properties 0xFF
#define bcmolt_prbs_generator_config_id_full_mask 0xF

} bcmolt_prbs_generator_config_id;

/** Identifiers for all fields in a 'prbs_status'. */
typedef enum
{
    BCMOLT_PRBS_STATUS_ID__BEGIN = 0,
    BCMOLT_PRBS_STATUS_ID_LOCK_STATE = 0, /**< Lock State. */
    BCMOLT_PRBS_STATUS_ID_ERROR_COUNTS = 1, /**< Error Counts. */
    BCMOLT_PRBS_STATUS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_prbs_status_id__begin BCMOLT_PRBS_STATUS_ID__BEGIN
#define bcmolt_prbs_status_id_lock_state BCMOLT_PRBS_STATUS_ID_LOCK_STATE
#define bcmolt_prbs_status_id_error_counts BCMOLT_PRBS_STATUS_ID_ERROR_COUNTS
#define bcmolt_prbs_status_id__num_of BCMOLT_PRBS_STATUS_ID__NUM_OF
#define bcmolt_prbs_status_id_all_properties 0xFF
#define bcmolt_prbs_status_id_full_mask 0x3

} bcmolt_prbs_status_id;

/** Identifiers for all fields in a 'protection_type'. */
typedef enum
{
    BCMOLT_PROTECTION_TYPE_ID__BEGIN = 0,
    BCMOLT_PROTECTION_TYPE_ID_MODE = 0, /**< Mode. */
    BCMOLT_PROTECTION_TYPE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_protection_type_id__begin BCMOLT_PROTECTION_TYPE_ID__BEGIN
#define bcmolt_protection_type_id_mode BCMOLT_PROTECTION_TYPE_ID_MODE
#define bcmolt_protection_type_id__num_of BCMOLT_PROTECTION_TYPE_ID__NUM_OF
#define bcmolt_protection_type_id_all_properties 0xFF
#define bcmolt_protection_type_id_full_mask 0x1

} bcmolt_protection_type_id;

/** Identifiers for all fields in a 'remote_mep'. */
typedef enum
{
    BCMOLT_REMOTE_MEP_ID__BEGIN = 0,
    BCMOLT_REMOTE_MEP_ID_ID = 0, /**< id. */
    BCMOLT_REMOTE_MEP_ID_LOC_CLEAR_THRESHOLD = 5, /**< loc clear threshold. */
    BCMOLT_REMOTE_MEP_ID_STATE = 6, /**< state. */
    BCMOLT_REMOTE_MEP_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_remote_mep_id__begin BCMOLT_REMOTE_MEP_ID__BEGIN
#define bcmolt_remote_mep_id_id BCMOLT_REMOTE_MEP_ID_ID
#define bcmolt_remote_mep_id_loc_clear_threshold BCMOLT_REMOTE_MEP_ID_LOC_CLEAR_THRESHOLD
#define bcmolt_remote_mep_id_state BCMOLT_REMOTE_MEP_ID_STATE
#define bcmolt_remote_mep_id__num_of BCMOLT_REMOTE_MEP_ID__NUM_OF
#define bcmolt_remote_mep_id_all_properties 0xFF
#define bcmolt_remote_mep_id_full_mask 0x61

} bcmolt_remote_mep_id;

/** Identifiers for all fields in a 'request_registration_status'. */
typedef enum
{
    BCMOLT_REQUEST_REGISTRATION_STATUS_ID__BEGIN = 0,
    BCMOLT_REQUEST_REGISTRATION_STATUS_ID_REQUEST_REGISTRATION_STATE = 0, /**< request registration state. */
    BCMOLT_REQUEST_REGISTRATION_STATUS_ID_SMA_FLAG = 1, /**< sma flag. */
    BCMOLT_REQUEST_REGISTRATION_STATUS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_request_registration_status_id__begin BCMOLT_REQUEST_REGISTRATION_STATUS_ID__BEGIN
#define bcmolt_request_registration_status_id_request_registration_state BCMOLT_REQUEST_REGISTRATION_STATUS_ID_REQUEST_REGISTRATION_STATE
#define bcmolt_request_registration_status_id_sma_flag BCMOLT_REQUEST_REGISTRATION_STATUS_ID_SMA_FLAG
#define bcmolt_request_registration_status_id__num_of BCMOLT_REQUEST_REGISTRATION_STATUS_ID__NUM_OF
#define bcmolt_request_registration_status_id_all_properties 0xFF
#define bcmolt_request_registration_status_id_full_mask 0x3

} bcmolt_request_registration_status_id;

/** Identifiers for all fields in a 'serial_number'. */
typedef enum
{
    BCMOLT_SERIAL_NUMBER_ID__BEGIN = 0,
    BCMOLT_SERIAL_NUMBER_ID_VENDOR_ID = 0, /**< vendor id. */
    BCMOLT_SERIAL_NUMBER_ID_VENDOR_SPECIFIC = 1, /**< vendor specific. */
    BCMOLT_SERIAL_NUMBER_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_serial_number_id__begin BCMOLT_SERIAL_NUMBER_ID__BEGIN
#define bcmolt_serial_number_id_vendor_id BCMOLT_SERIAL_NUMBER_ID_VENDOR_ID
#define bcmolt_serial_number_id_vendor_specific BCMOLT_SERIAL_NUMBER_ID_VENDOR_SPECIFIC
#define bcmolt_serial_number_id__num_of BCMOLT_SERIAL_NUMBER_ID__NUM_OF
#define bcmolt_serial_number_id_all_properties 0xFF
#define bcmolt_serial_number_id_full_mask 0x3

} bcmolt_serial_number_id;

/** Identifiers for all fields in a 'service_discovery'. */
typedef enum
{
    BCMOLT_SERVICE_DISCOVERY_ID__BEGIN = 0,
    BCMOLT_SERVICE_DISCOVERY_ID_INTERVAL = 0, /**< interval in ms. */
    BCMOLT_SERVICE_DISCOVERY_ID_CONTROL = 1, /**< control. */
    BCMOLT_SERVICE_DISCOVERY_ID_ONU_POST_DISCOVERY_MODE = 2, /**< ONU post discovery mode. */
    BCMOLT_SERVICE_DISCOVERY_ID_BURST_PROFILE = 3, /**< burst profile. */
    BCMOLT_SERVICE_DISCOVERY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_service_discovery_id__begin BCMOLT_SERVICE_DISCOVERY_ID__BEGIN
#define bcmolt_service_discovery_id_interval BCMOLT_SERVICE_DISCOVERY_ID_INTERVAL
#define bcmolt_service_discovery_id_control BCMOLT_SERVICE_DISCOVERY_ID_CONTROL
#define bcmolt_service_discovery_id_onu_post_discovery_mode BCMOLT_SERVICE_DISCOVERY_ID_ONU_POST_DISCOVERY_MODE
#define bcmolt_service_discovery_id_burst_profile BCMOLT_SERVICE_DISCOVERY_ID_BURST_PROFILE
#define bcmolt_service_discovery_id__num_of BCMOLT_SERVICE_DISCOVERY_ID__NUM_OF
#define bcmolt_service_discovery_id_all_properties 0xFF
#define bcmolt_service_discovery_id_full_mask 0xF

} bcmolt_service_discovery_id;

/** Identifiers for all fields in a 'stat_alarm_config'. */
typedef enum
{
    BCMOLT_STAT_ALARM_CONFIG_ID__BEGIN = 0,
    BCMOLT_STAT_ALARM_CONFIG_ID_TRIGGER = 0, /**< Trigger. */
    BCMOLT_STAT_ALARM_CONFIG_ID_SOAK = 1, /**< Soak. */
    BCMOLT_STAT_ALARM_CONFIG_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_stat_alarm_config_id__begin BCMOLT_STAT_ALARM_CONFIG_ID__BEGIN
#define bcmolt_stat_alarm_config_id_trigger BCMOLT_STAT_ALARM_CONFIG_ID_TRIGGER
#define bcmolt_stat_alarm_config_id_soak BCMOLT_STAT_ALARM_CONFIG_ID_SOAK
#define bcmolt_stat_alarm_config_id__num_of BCMOLT_STAT_ALARM_CONFIG_ID__NUM_OF
#define bcmolt_stat_alarm_config_id_all_properties 0xFF
#define bcmolt_stat_alarm_config_id_full_mask 0x3

} bcmolt_stat_alarm_config_id;

/** Identifiers for all fields in a 'stat_alarm_soak_config'. */
typedef enum
{
    BCMOLT_STAT_ALARM_SOAK_CONFIG_ID__BEGIN = 0,
    BCMOLT_STAT_ALARM_SOAK_CONFIG_ID_ACTIVE_SOAK_TIME = 0, /**< Active Soak Time. */
    BCMOLT_STAT_ALARM_SOAK_CONFIG_ID_CLEAR_SOAK_TIME = 1, /**< Clear Soak Time. */
    BCMOLT_STAT_ALARM_SOAK_CONFIG_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_stat_alarm_soak_config_id__begin BCMOLT_STAT_ALARM_SOAK_CONFIG_ID__BEGIN
#define bcmolt_stat_alarm_soak_config_id_active_soak_time BCMOLT_STAT_ALARM_SOAK_CONFIG_ID_ACTIVE_SOAK_TIME
#define bcmolt_stat_alarm_soak_config_id_clear_soak_time BCMOLT_STAT_ALARM_SOAK_CONFIG_ID_CLEAR_SOAK_TIME
#define bcmolt_stat_alarm_soak_config_id__num_of BCMOLT_STAT_ALARM_SOAK_CONFIG_ID__NUM_OF
#define bcmolt_stat_alarm_soak_config_id_all_properties 0xFF
#define bcmolt_stat_alarm_soak_config_id_full_mask 0x3

} bcmolt_stat_alarm_soak_config_id;

/** Identifiers for all fields in a 'stat_alarm_trigger_config'. */
typedef enum
{
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_ID__BEGIN = 0,
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_ID_TYPE = 0, /**< type. */
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_stat_alarm_trigger_config_id__begin BCMOLT_STAT_ALARM_TRIGGER_CONFIG_ID__BEGIN
#define bcmolt_stat_alarm_trigger_config_id_type BCMOLT_STAT_ALARM_TRIGGER_CONFIG_ID_TYPE
#define bcmolt_stat_alarm_trigger_config_id__num_of BCMOLT_STAT_ALARM_TRIGGER_CONFIG_ID__NUM_OF
#define bcmolt_stat_alarm_trigger_config_id_all_properties 0xFF
#define bcmolt_stat_alarm_trigger_config_id_full_mask 0x1

} bcmolt_stat_alarm_trigger_config_id;

/** Identifiers for all fields in a 'stat_alarm_trigger_config_rate_threshold'. */
typedef enum
{
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_THRESHOLD_ID__BEGIN = 0,
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_THRESHOLD_ID_RISING = 0, /**< Rising Threshold. */
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_THRESHOLD_ID_FALLING = 1, /**< Falling Threshold. */
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_THRESHOLD_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_stat_alarm_trigger_config_rate_threshold_id__begin BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_THRESHOLD_ID__BEGIN
#define bcmolt_stat_alarm_trigger_config_rate_threshold_id_rising BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_THRESHOLD_ID_RISING
#define bcmolt_stat_alarm_trigger_config_rate_threshold_id_falling BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_THRESHOLD_ID_FALLING
#define bcmolt_stat_alarm_trigger_config_rate_threshold_id__num_of BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_THRESHOLD_ID__NUM_OF
#define bcmolt_stat_alarm_trigger_config_rate_threshold_id_all_properties 0xFF
#define bcmolt_stat_alarm_trigger_config_rate_threshold_id_full_mask 0x3

} bcmolt_stat_alarm_trigger_config_rate_threshold_id;

/** Identifiers for all fields in a 'stat_alarm_trigger_config_rate_range'. */
typedef enum
{
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_RANGE_ID__BEGIN = 0,
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_RANGE_ID_UPPER = 0, /**< Range Upper Bound. */
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_RANGE_ID_LOWER = 1, /**< Range Lower Bound. */
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_RANGE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_stat_alarm_trigger_config_rate_range_id__begin BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_RANGE_ID__BEGIN
#define bcmolt_stat_alarm_trigger_config_rate_range_id_upper BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_RANGE_ID_UPPER
#define bcmolt_stat_alarm_trigger_config_rate_range_id_lower BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_RANGE_ID_LOWER
#define bcmolt_stat_alarm_trigger_config_rate_range_id__num_of BCMOLT_STAT_ALARM_TRIGGER_CONFIG_RATE_RANGE_ID__NUM_OF
#define bcmolt_stat_alarm_trigger_config_rate_range_id_all_properties 0xFF
#define bcmolt_stat_alarm_trigger_config_rate_range_id_full_mask 0x3

} bcmolt_stat_alarm_trigger_config_rate_range_id;

/** Identifiers for all fields in a 'stat_alarm_trigger_config_value_threshold'. */
typedef enum
{
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_VALUE_THRESHOLD_ID__BEGIN = 0,
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_VALUE_THRESHOLD_ID_LIMIT = 0, /**< Limit. */
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_VALUE_THRESHOLD_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_stat_alarm_trigger_config_value_threshold_id__begin BCMOLT_STAT_ALARM_TRIGGER_CONFIG_VALUE_THRESHOLD_ID__BEGIN
#define bcmolt_stat_alarm_trigger_config_value_threshold_id_limit BCMOLT_STAT_ALARM_TRIGGER_CONFIG_VALUE_THRESHOLD_ID_LIMIT
#define bcmolt_stat_alarm_trigger_config_value_threshold_id__num_of BCMOLT_STAT_ALARM_TRIGGER_CONFIG_VALUE_THRESHOLD_ID__NUM_OF
#define bcmolt_stat_alarm_trigger_config_value_threshold_id_all_properties 0xFF
#define bcmolt_stat_alarm_trigger_config_value_threshold_id_full_mask 0x1

} bcmolt_stat_alarm_trigger_config_value_threshold_id;

/** Identifiers for all fields in a 'stat_alarm_trigger_config_none'. */
typedef enum
{
    BCMOLT_STAT_ALARM_TRIGGER_CONFIG_NONE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_stat_alarm_trigger_config_none_id__num_of BCMOLT_STAT_ALARM_TRIGGER_CONFIG_NONE_ID__NUM_OF
#define bcmolt_stat_alarm_trigger_config_none_id_all_properties 0xFF
#define bcmolt_stat_alarm_trigger_config_none_id_full_mask 0x0

} bcmolt_stat_alarm_trigger_config_none_id;

/** Identifiers for all fields in a 'sw_error'. */
typedef enum
{
    BCMOLT_SW_ERROR_ID__BEGIN = 0,
    BCMOLT_SW_ERROR_ID_FIRST_ERROR_TIME_US = 0, /**< First Error Time (us). */
    BCMOLT_SW_ERROR_ID_LAST_ERROR_TIME_US = 1, /**< Last Error Time (us). */
    BCMOLT_SW_ERROR_ID_LINE_NUMBER = 2, /**< Line Number. */
    BCMOLT_SW_ERROR_ID_ERROR_COUNTER = 3, /**< Error Counter. */
    BCMOLT_SW_ERROR_ID_INSTANCE = 4, /**< Instance. */
    BCMOLT_SW_ERROR_ID_FILENAME = 5, /**< Filename. */
    BCMOLT_SW_ERROR_ID_TASK_NAME = 6, /**< Task Name. */
    BCMOLT_SW_ERROR_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_sw_error_id__begin BCMOLT_SW_ERROR_ID__BEGIN
#define bcmolt_sw_error_id_first_error_time_us BCMOLT_SW_ERROR_ID_FIRST_ERROR_TIME_US
#define bcmolt_sw_error_id_last_error_time_us BCMOLT_SW_ERROR_ID_LAST_ERROR_TIME_US
#define bcmolt_sw_error_id_line_number BCMOLT_SW_ERROR_ID_LINE_NUMBER
#define bcmolt_sw_error_id_error_counter BCMOLT_SW_ERROR_ID_ERROR_COUNTER
#define bcmolt_sw_error_id_instance BCMOLT_SW_ERROR_ID_INSTANCE
#define bcmolt_sw_error_id_filename BCMOLT_SW_ERROR_ID_FILENAME
#define bcmolt_sw_error_id_task_name BCMOLT_SW_ERROR_ID_TASK_NAME
#define bcmolt_sw_error_id__num_of BCMOLT_SW_ERROR_ID__NUM_OF
#define bcmolt_sw_error_id_all_properties 0xFF
#define bcmolt_sw_error_id_full_mask 0x7F

} bcmolt_sw_error_id;

/** Identifiers for all fields in a 'system_profile'. */
typedef enum
{
    BCMOLT_SYSTEM_PROFILE_ID__BEGIN = 0,
    BCMOLT_SYSTEM_PROFILE_ID_NG_2_SYS_ID = 0, /**< NG2SYS ID. */
    BCMOLT_SYSTEM_PROFILE_ID_VERSION = 1, /**< System profile version. */
    BCMOLT_SYSTEM_PROFILE_ID_CHANNEL_SPACING = 2, /**< Channel spacing. */
    BCMOLT_SYSTEM_PROFILE_ID_US_OPERATING_WAVELENGTH_BANDS = 3, /**< Upstream operating wavelength bands. */
    BCMOLT_SYSTEM_PROFILE_ID_US_MSE = 4, /**< Upstream MSE. */
    BCMOLT_SYSTEM_PROFILE_ID_LOOSE_CALIBRATION_BOUND = 5, /**< Loose calibration bound. */
    BCMOLT_SYSTEM_PROFILE_ID_FSR = 6, /**< FSR. */
    BCMOLT_SYSTEM_PROFILE_ID_TWDM_CHANNEL_COUNT = 7, /**< TWDM channel count. */
    BCMOLT_SYSTEM_PROFILE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_system_profile_id__begin BCMOLT_SYSTEM_PROFILE_ID__BEGIN
#define bcmolt_system_profile_id_ng_2_sys_id BCMOLT_SYSTEM_PROFILE_ID_NG_2_SYS_ID
#define bcmolt_system_profile_id_version BCMOLT_SYSTEM_PROFILE_ID_VERSION
#define bcmolt_system_profile_id_channel_spacing BCMOLT_SYSTEM_PROFILE_ID_CHANNEL_SPACING
#define bcmolt_system_profile_id_us_operating_wavelength_bands BCMOLT_SYSTEM_PROFILE_ID_US_OPERATING_WAVELENGTH_BANDS
#define bcmolt_system_profile_id_us_mse BCMOLT_SYSTEM_PROFILE_ID_US_MSE
#define bcmolt_system_profile_id_loose_calibration_bound BCMOLT_SYSTEM_PROFILE_ID_LOOSE_CALIBRATION_BOUND
#define bcmolt_system_profile_id_fsr BCMOLT_SYSTEM_PROFILE_ID_FSR
#define bcmolt_system_profile_id_twdm_channel_count BCMOLT_SYSTEM_PROFILE_ID_TWDM_CHANNEL_COUNT
#define bcmolt_system_profile_id__num_of BCMOLT_SYSTEM_PROFILE_ID__NUM_OF
#define bcmolt_system_profile_id_all_properties 0xFF
#define bcmolt_system_profile_id_full_mask 0xFF

} bcmolt_system_profile_id;

/** Identifiers for all fields in a 'tm_queue_ref'. */
typedef enum
{
    BCMOLT_TM_QUEUE_REF_ID__BEGIN = 0,
    BCMOLT_TM_QUEUE_REF_ID_SCHED_ID = 0, /**< Scheduler ID. */
    BCMOLT_TM_QUEUE_REF_ID_QUEUE_ID = 1, /**< Queue ID. */
    BCMOLT_TM_QUEUE_REF_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_queue_ref_id__begin BCMOLT_TM_QUEUE_REF_ID__BEGIN
#define bcmolt_tm_queue_ref_id_sched_id BCMOLT_TM_QUEUE_REF_ID_SCHED_ID
#define bcmolt_tm_queue_ref_id_queue_id BCMOLT_TM_QUEUE_REF_ID_QUEUE_ID
#define bcmolt_tm_queue_ref_id__num_of BCMOLT_TM_QUEUE_REF_ID__NUM_OF
#define bcmolt_tm_queue_ref_id_all_properties 0xFF
#define bcmolt_tm_queue_ref_id_full_mask 0x3

} bcmolt_tm_queue_ref_id;

/** Identifiers for all fields in a 'tm_sched_attachment_point'. */
typedef enum
{
    BCMOLT_TM_SCHED_ATTACHMENT_POINT_ID__BEGIN = 0,
    BCMOLT_TM_SCHED_ATTACHMENT_POINT_ID_TYPE = 0, /**< type. */
    BCMOLT_TM_SCHED_ATTACHMENT_POINT_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_sched_attachment_point_id__begin BCMOLT_TM_SCHED_ATTACHMENT_POINT_ID__BEGIN
#define bcmolt_tm_sched_attachment_point_id_type BCMOLT_TM_SCHED_ATTACHMENT_POINT_ID_TYPE
#define bcmolt_tm_sched_attachment_point_id__num_of BCMOLT_TM_SCHED_ATTACHMENT_POINT_ID__NUM_OF
#define bcmolt_tm_sched_attachment_point_id_all_properties 0xFF
#define bcmolt_tm_sched_attachment_point_id_full_mask 0x1

} bcmolt_tm_sched_attachment_point_id;

/** Identifiers for all fields in a 'tm_sched_attachment_point_interface'. */
typedef enum
{
    BCMOLT_TM_SCHED_ATTACHMENT_POINT_INTERFACE_ID__BEGIN = 0,
    BCMOLT_TM_SCHED_ATTACHMENT_POINT_INTERFACE_ID_INTERFACE_REF = 0, /**< interface_ref. */
    BCMOLT_TM_SCHED_ATTACHMENT_POINT_INTERFACE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_sched_attachment_point_interface_id__begin BCMOLT_TM_SCHED_ATTACHMENT_POINT_INTERFACE_ID__BEGIN
#define bcmolt_tm_sched_attachment_point_interface_id_interface_ref BCMOLT_TM_SCHED_ATTACHMENT_POINT_INTERFACE_ID_INTERFACE_REF
#define bcmolt_tm_sched_attachment_point_interface_id__num_of BCMOLT_TM_SCHED_ATTACHMENT_POINT_INTERFACE_ID__NUM_OF
#define bcmolt_tm_sched_attachment_point_interface_id_all_properties 0xFF
#define bcmolt_tm_sched_attachment_point_interface_id_full_mask 0x1

} bcmolt_tm_sched_attachment_point_interface_id;

/** Identifiers for all fields in a 'tm_sched_attachment_point_tm_sched'. */
typedef enum
{
    BCMOLT_TM_SCHED_ATTACHMENT_POINT_TM_SCHED_ID__BEGIN = 0,
    BCMOLT_TM_SCHED_ATTACHMENT_POINT_TM_SCHED_ID_TM_SCHED_ID = 0, /**< parent tm sched id. */
    BCMOLT_TM_SCHED_ATTACHMENT_POINT_TM_SCHED_ID_TM_SCHED_PARAM = 1, /**< TM Sched Param. */
    BCMOLT_TM_SCHED_ATTACHMENT_POINT_TM_SCHED_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_sched_attachment_point_tm_sched_id__begin BCMOLT_TM_SCHED_ATTACHMENT_POINT_TM_SCHED_ID__BEGIN
#define bcmolt_tm_sched_attachment_point_tm_sched_id_tm_sched_id BCMOLT_TM_SCHED_ATTACHMENT_POINT_TM_SCHED_ID_TM_SCHED_ID
#define bcmolt_tm_sched_attachment_point_tm_sched_id_tm_sched_param BCMOLT_TM_SCHED_ATTACHMENT_POINT_TM_SCHED_ID_TM_SCHED_PARAM
#define bcmolt_tm_sched_attachment_point_tm_sched_id__num_of BCMOLT_TM_SCHED_ATTACHMENT_POINT_TM_SCHED_ID__NUM_OF
#define bcmolt_tm_sched_attachment_point_tm_sched_id_all_properties 0xFF
#define bcmolt_tm_sched_attachment_point_tm_sched_id_full_mask 0x3

} bcmolt_tm_sched_attachment_point_tm_sched_id;

/** Identifiers for all fields in a 'tm_sched_param'. */
typedef enum
{
    BCMOLT_TM_SCHED_PARAM_ID__BEGIN = 0,
    BCMOLT_TM_SCHED_PARAM_ID_TYPE = 0, /**< Type. */
    BCMOLT_TM_SCHED_PARAM_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_sched_param_id__begin BCMOLT_TM_SCHED_PARAM_ID__BEGIN
#define bcmolt_tm_sched_param_id_type BCMOLT_TM_SCHED_PARAM_ID_TYPE
#define bcmolt_tm_sched_param_id__num_of BCMOLT_TM_SCHED_PARAM_ID__NUM_OF
#define bcmolt_tm_sched_param_id_all_properties 0xFF
#define bcmolt_tm_sched_param_id_full_mask 0x1

} bcmolt_tm_sched_param_id;

/** Identifiers for all fields in a 'tm_sched_param_priority'. */
typedef enum
{
    BCMOLT_TM_SCHED_PARAM_PRIORITY_ID__BEGIN = 2,
    BCMOLT_TM_SCHED_PARAM_PRIORITY_ID_PRIORITY = 2, /**< priority. */
    BCMOLT_TM_SCHED_PARAM_PRIORITY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_sched_param_priority_id__begin BCMOLT_TM_SCHED_PARAM_PRIORITY_ID__BEGIN
#define bcmolt_tm_sched_param_priority_id_priority BCMOLT_TM_SCHED_PARAM_PRIORITY_ID_PRIORITY
#define bcmolt_tm_sched_param_priority_id__num_of BCMOLT_TM_SCHED_PARAM_PRIORITY_ID__NUM_OF
#define bcmolt_tm_sched_param_priority_id_all_properties 0xFF
#define bcmolt_tm_sched_param_priority_id_full_mask 0x4

} bcmolt_tm_sched_param_priority_id;

/** Identifiers for all fields in a 'tm_sched_param_weight'. */
typedef enum
{
    BCMOLT_TM_SCHED_PARAM_WEIGHT_ID__BEGIN = 1,
    BCMOLT_TM_SCHED_PARAM_WEIGHT_ID_WEIGHT = 1, /**< weight. */
    BCMOLT_TM_SCHED_PARAM_WEIGHT_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_sched_param_weight_id__begin BCMOLT_TM_SCHED_PARAM_WEIGHT_ID__BEGIN
#define bcmolt_tm_sched_param_weight_id_weight BCMOLT_TM_SCHED_PARAM_WEIGHT_ID_WEIGHT
#define bcmolt_tm_sched_param_weight_id__num_of BCMOLT_TM_SCHED_PARAM_WEIGHT_ID__NUM_OF
#define bcmolt_tm_sched_param_weight_id_all_properties 0xFF
#define bcmolt_tm_sched_param_weight_id_full_mask 0x2

} bcmolt_tm_sched_param_weight_id;

/** Identifiers for all fields in a 'tm_sched_ref'. */
typedef enum
{
    BCMOLT_TM_SCHED_REF_ID__BEGIN = 1,
    BCMOLT_TM_SCHED_REF_ID_ID = 1, /**< sched_id. */
    BCMOLT_TM_SCHED_REF_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_sched_ref_id__begin BCMOLT_TM_SCHED_REF_ID__BEGIN
#define bcmolt_tm_sched_ref_id_id BCMOLT_TM_SCHED_REF_ID_ID
#define bcmolt_tm_sched_ref_id__num_of BCMOLT_TM_SCHED_REF_ID__NUM_OF
#define bcmolt_tm_sched_ref_id_all_properties 0xFF
#define bcmolt_tm_sched_ref_id_full_mask 0x2

} bcmolt_tm_sched_ref_id;

/** Identifiers for all fields in a 'tm_shaping'. */
typedef enum
{
    BCMOLT_TM_SHAPING_ID__BEGIN = 0,
    BCMOLT_TM_SHAPING_ID_CIR = 0, /**< CIR. */
    BCMOLT_TM_SHAPING_ID_PIR = 1, /**< PIR. */
    BCMOLT_TM_SHAPING_ID_BURST = 2, /**< burst. */
    BCMOLT_TM_SHAPING_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_shaping_id__begin BCMOLT_TM_SHAPING_ID__BEGIN
#define bcmolt_tm_shaping_id_cir BCMOLT_TM_SHAPING_ID_CIR
#define bcmolt_tm_shaping_id_pir BCMOLT_TM_SHAPING_ID_PIR
#define bcmolt_tm_shaping_id_burst BCMOLT_TM_SHAPING_ID_BURST
#define bcmolt_tm_shaping_id__num_of BCMOLT_TM_SHAPING_ID__NUM_OF
#define bcmolt_tm_shaping_id_all_properties 0xFF
#define bcmolt_tm_shaping_id_full_mask 0x7

} bcmolt_tm_shaping_id;

/** Identifiers for all fields in a 'topology'. */
typedef enum
{
    BCMOLT_TOPOLOGY_ID__BEGIN = 0,
    BCMOLT_TOPOLOGY_ID_NUM_SWITCH_PORTS = 0, /**< Number of nni ports on switch device. */
    BCMOLT_TOPOLOGY_ID_TOPOLOGY_MAPS = 1, /**< Topology mappings. */
    BCMOLT_TOPOLOGY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_topology_id__begin BCMOLT_TOPOLOGY_ID__BEGIN
#define bcmolt_topology_id_num_switch_ports BCMOLT_TOPOLOGY_ID_NUM_SWITCH_PORTS
#define bcmolt_topology_id_topology_maps BCMOLT_TOPOLOGY_ID_TOPOLOGY_MAPS
#define bcmolt_topology_id__num_of BCMOLT_TOPOLOGY_ID__NUM_OF
#define bcmolt_topology_id_all_properties 0xFF
#define bcmolt_topology_id_full_mask 0x3

} bcmolt_topology_id;

/** Identifiers for all fields in a 'topology_map'. */
typedef enum
{
    BCMOLT_TOPOLOGY_MAP_ID__BEGIN = 1,
    BCMOLT_TOPOLOGY_MAP_ID_LOCAL_DEVICE_ID = 1, /**< Local MAC device Id in OLT line card. */
    BCMOLT_TOPOLOGY_MAP_ID_OLT_DEVICE_ID = 2, /**< MAC device Id in scope of OLT Instance. */
    BCMOLT_TOPOLOGY_MAP_ID_PHYSICAL_IF_ID = 3, /**< physical PON interface Id on MAC device. */
    BCMOLT_TOPOLOGY_MAP_ID_USER_STRING = 4, /**< User specified string in config line. */
    BCMOLT_TOPOLOGY_MAP_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_topology_map_id__begin BCMOLT_TOPOLOGY_MAP_ID__BEGIN
#define bcmolt_topology_map_id_local_device_id BCMOLT_TOPOLOGY_MAP_ID_LOCAL_DEVICE_ID
#define bcmolt_topology_map_id_olt_device_id BCMOLT_TOPOLOGY_MAP_ID_OLT_DEVICE_ID
#define bcmolt_topology_map_id_physical_if_id BCMOLT_TOPOLOGY_MAP_ID_PHYSICAL_IF_ID
#define bcmolt_topology_map_id_user_string BCMOLT_TOPOLOGY_MAP_ID_USER_STRING
#define bcmolt_topology_map_id__num_of BCMOLT_TOPOLOGY_MAP_ID__NUM_OF
#define bcmolt_topology_map_id_all_properties 0xFF
#define bcmolt_topology_map_id_full_mask 0x1E

} bcmolt_topology_map_id;

/** Identifiers for all fields in a 'xgpon_burst_profile'. */
typedef enum
{
    BCMOLT_XGPON_BURST_PROFILE_ID__BEGIN = 0,
    BCMOLT_XGPON_BURST_PROFILE_ID_PROFILE_VERSION = 0, /**< profile version. */
    BCMOLT_XGPON_BURST_PROFILE_ID_TYPE = 1, /**< Type. */
    BCMOLT_XGPON_BURST_PROFILE_ID_IS_FEC_ON = 2, /**< is fec on. */
    BCMOLT_XGPON_BURST_PROFILE_ID_DELIMITER_SIZE_IN_BYTES = 3, /**< delimiter size in bytes. */
    BCMOLT_XGPON_BURST_PROFILE_ID_DELIMITER_PATTERN_HIGH = 4, /**< delimiter pattern high. */
    BCMOLT_XGPON_BURST_PROFILE_ID_DELIMITER_PATTERN_LOW = 5, /**< delimiter pattern low. */
    BCMOLT_XGPON_BURST_PROFILE_ID_PREAMBLE_LENGTH_IN_BYTES = 6, /**< preamble length in bytes. */
    BCMOLT_XGPON_BURST_PROFILE_ID_PREAMBLE_REPEATS_COUNT = 7, /**< preamble repeats count. */
    BCMOLT_XGPON_BURST_PROFILE_ID_PREAMBLE_PATTERN_HIGH = 8, /**< preamble pattern high. */
    BCMOLT_XGPON_BURST_PROFILE_ID_PREAMBLE_PATTERN_LOW = 9, /**< preamble pattern low. */
    BCMOLT_XGPON_BURST_PROFILE_ID_PON_TAG = 10, /**< PON tag. */
    BCMOLT_XGPON_BURST_PROFILE_ID_NUM_OF_GUARD_BYTES = 11, /**< number of guard bytes. */
    BCMOLT_XGPON_BURST_PROFILE_ID_IS_PROFILE_VALID = 12, /**< is profile valid. */
    BCMOLT_XGPON_BURST_PROFILE_ID_BURST_OVERHEAD_SIZE_IN_WORDS = 13, /**< burst overhead size in words. */
    BCMOLT_XGPON_BURST_PROFILE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_xgpon_burst_profile_id__begin BCMOLT_XGPON_BURST_PROFILE_ID__BEGIN
#define bcmolt_xgpon_burst_profile_id_profile_version BCMOLT_XGPON_BURST_PROFILE_ID_PROFILE_VERSION
#define bcmolt_xgpon_burst_profile_id_type BCMOLT_XGPON_BURST_PROFILE_ID_TYPE
#define bcmolt_xgpon_burst_profile_id_is_fec_on BCMOLT_XGPON_BURST_PROFILE_ID_IS_FEC_ON
#define bcmolt_xgpon_burst_profile_id_delimiter_size_in_bytes BCMOLT_XGPON_BURST_PROFILE_ID_DELIMITER_SIZE_IN_BYTES
#define bcmolt_xgpon_burst_profile_id_delimiter_pattern_high BCMOLT_XGPON_BURST_PROFILE_ID_DELIMITER_PATTERN_HIGH
#define bcmolt_xgpon_burst_profile_id_delimiter_pattern_low BCMOLT_XGPON_BURST_PROFILE_ID_DELIMITER_PATTERN_LOW
#define bcmolt_xgpon_burst_profile_id_preamble_length_in_bytes BCMOLT_XGPON_BURST_PROFILE_ID_PREAMBLE_LENGTH_IN_BYTES
#define bcmolt_xgpon_burst_profile_id_preamble_repeats_count BCMOLT_XGPON_BURST_PROFILE_ID_PREAMBLE_REPEATS_COUNT
#define bcmolt_xgpon_burst_profile_id_preamble_pattern_high BCMOLT_XGPON_BURST_PROFILE_ID_PREAMBLE_PATTERN_HIGH
#define bcmolt_xgpon_burst_profile_id_preamble_pattern_low BCMOLT_XGPON_BURST_PROFILE_ID_PREAMBLE_PATTERN_LOW
#define bcmolt_xgpon_burst_profile_id_pon_tag BCMOLT_XGPON_BURST_PROFILE_ID_PON_TAG
#define bcmolt_xgpon_burst_profile_id_num_of_guard_bytes BCMOLT_XGPON_BURST_PROFILE_ID_NUM_OF_GUARD_BYTES
#define bcmolt_xgpon_burst_profile_id_is_profile_valid BCMOLT_XGPON_BURST_PROFILE_ID_IS_PROFILE_VALID
#define bcmolt_xgpon_burst_profile_id_burst_overhead_size_in_words BCMOLT_XGPON_BURST_PROFILE_ID_BURST_OVERHEAD_SIZE_IN_WORDS
#define bcmolt_xgpon_burst_profile_id__num_of BCMOLT_XGPON_BURST_PROFILE_ID__NUM_OF
#define bcmolt_xgpon_burst_profile_id_all_properties 0xFF
#define bcmolt_xgpon_burst_profile_id_full_mask 0x3FFF

} bcmolt_xgpon_burst_profile_id;

/** Identifiers for all fields in a 'xgpon_multicast_key'. */
typedef enum
{
    BCMOLT_XGPON_MULTICAST_KEY_ID__BEGIN = 0,
    BCMOLT_XGPON_MULTICAST_KEY_ID_KEY = 0, /**< key. */
    BCMOLT_XGPON_MULTICAST_KEY_ID_KEY_CONTROL = 1, /**< key control. */
    BCMOLT_XGPON_MULTICAST_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_xgpon_multicast_key_id__begin BCMOLT_XGPON_MULTICAST_KEY_ID__BEGIN
#define bcmolt_xgpon_multicast_key_id_key BCMOLT_XGPON_MULTICAST_KEY_ID_KEY
#define bcmolt_xgpon_multicast_key_id_key_control BCMOLT_XGPON_MULTICAST_KEY_ID_KEY_CONTROL
#define bcmolt_xgpon_multicast_key_id__num_of BCMOLT_XGPON_MULTICAST_KEY_ID__NUM_OF
#define bcmolt_xgpon_multicast_key_id_all_properties 0xFF
#define bcmolt_xgpon_multicast_key_id_full_mask 0x3

} bcmolt_xgpon_multicast_key_id;

/** Identifiers for all fields in a 'xgpon_onu_alarm_indication_control'. */
typedef enum
{
    BCMOLT_XGPON_ONU_ALARM_INDICATION_CONTROL_ID__BEGIN = 0,
    BCMOLT_XGPON_ONU_ALARM_INDICATION_CONTROL_ID_LOAI = 0, /**< loss of ack indication control. */
    BCMOLT_XGPON_ONU_ALARM_INDICATION_CONTROL_ID_LOKI = 1, /**< loss of key indicayion control. */
    BCMOLT_XGPON_ONU_ALARM_INDICATION_CONTROL_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_xgpon_onu_alarm_indication_control_id__begin BCMOLT_XGPON_ONU_ALARM_INDICATION_CONTROL_ID__BEGIN
#define bcmolt_xgpon_onu_alarm_indication_control_id_loai BCMOLT_XGPON_ONU_ALARM_INDICATION_CONTROL_ID_LOAI
#define bcmolt_xgpon_onu_alarm_indication_control_id_loki BCMOLT_XGPON_ONU_ALARM_INDICATION_CONTROL_ID_LOKI
#define bcmolt_xgpon_onu_alarm_indication_control_id__num_of BCMOLT_XGPON_ONU_ALARM_INDICATION_CONTROL_ID__NUM_OF
#define bcmolt_xgpon_onu_alarm_indication_control_id_all_properties 0xFF
#define bcmolt_xgpon_onu_alarm_indication_control_id_full_mask 0x3

} bcmolt_xgpon_onu_alarm_indication_control_id;

/** Identifiers for all fields in a 'xgpon_onu_alarm_state'. */
typedef enum
{
    BCMOLT_XGPON_ONU_ALARM_STATE_ID__BEGIN = 0,
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOSI = 0, /**< Loss of signal. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOBI = 1, /**< Loss of burst. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOPCI = 2, /**< Loss of PLOAM channel. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOPCI_MIC_ERROR = 3, /**< Mic error on ploam channel. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOOCI = 4, /**< Loss of OMCI channel. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_TIWI = 5, /**< Transmission interference Alarm. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_DOWI = 6, /**< Drift of Window. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_SUFI = 7, /**< Start UP Failure. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_SFI = 8, /**< Signal Fail. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_SDI = 9, /**< Signal Degraded. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_DFI = 10, /**< Deactivation Failure. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_DGI = 11, /**< Dying gasp. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_PQSI = 12, /**< Ploam queue status. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOAI = 13, /**< Loss of ack. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOKI = 14, /**< loss of key. */
    BCMOLT_XGPON_ONU_ALARM_STATE_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_xgpon_onu_alarm_state_id__begin BCMOLT_XGPON_ONU_ALARM_STATE_ID__BEGIN
#define bcmolt_xgpon_onu_alarm_state_id_losi BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOSI
#define bcmolt_xgpon_onu_alarm_state_id_lobi BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOBI
#define bcmolt_xgpon_onu_alarm_state_id_lopci BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOPCI
#define bcmolt_xgpon_onu_alarm_state_id_lopci_mic_error BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOPCI_MIC_ERROR
#define bcmolt_xgpon_onu_alarm_state_id_looci BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOOCI
#define bcmolt_xgpon_onu_alarm_state_id_tiwi BCMOLT_XGPON_ONU_ALARM_STATE_ID_TIWI
#define bcmolt_xgpon_onu_alarm_state_id_dowi BCMOLT_XGPON_ONU_ALARM_STATE_ID_DOWI
#define bcmolt_xgpon_onu_alarm_state_id_sufi BCMOLT_XGPON_ONU_ALARM_STATE_ID_SUFI
#define bcmolt_xgpon_onu_alarm_state_id_sfi BCMOLT_XGPON_ONU_ALARM_STATE_ID_SFI
#define bcmolt_xgpon_onu_alarm_state_id_sdi BCMOLT_XGPON_ONU_ALARM_STATE_ID_SDI
#define bcmolt_xgpon_onu_alarm_state_id_dfi BCMOLT_XGPON_ONU_ALARM_STATE_ID_DFI
#define bcmolt_xgpon_onu_alarm_state_id_dgi BCMOLT_XGPON_ONU_ALARM_STATE_ID_DGI
#define bcmolt_xgpon_onu_alarm_state_id_pqsi BCMOLT_XGPON_ONU_ALARM_STATE_ID_PQSI
#define bcmolt_xgpon_onu_alarm_state_id_loai BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOAI
#define bcmolt_xgpon_onu_alarm_state_id_loki BCMOLT_XGPON_ONU_ALARM_STATE_ID_LOKI
#define bcmolt_xgpon_onu_alarm_state_id__num_of BCMOLT_XGPON_ONU_ALARM_STATE_ID__NUM_OF
#define bcmolt_xgpon_onu_alarm_state_id_all_properties 0xFF
#define bcmolt_xgpon_onu_alarm_state_id_full_mask 0x7FFF

} bcmolt_xgpon_onu_alarm_state_id;

/** Identifiers for all fields in a 'xgpon_onu_alarms'. */
typedef enum
{
    BCMOLT_XGPON_ONU_ALARMS_ID__BEGIN = 0,
    BCMOLT_XGPON_ONU_ALARMS_ID_LOSI = 0, /**< LOSi. */
    BCMOLT_XGPON_ONU_ALARMS_ID_LOBI = 1, /**< LOBi. */
    BCMOLT_XGPON_ONU_ALARMS_ID_LOPCI_MISS = 2, /**< LOPCi miss. */
    BCMOLT_XGPON_ONU_ALARMS_ID_LOPCI_MIC_ERROR = 3, /**< LOPCi mic error. */
    BCMOLT_XGPON_ONU_ALARMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_xgpon_onu_alarms_id__begin BCMOLT_XGPON_ONU_ALARMS_ID__BEGIN
#define bcmolt_xgpon_onu_alarms_id_losi BCMOLT_XGPON_ONU_ALARMS_ID_LOSI
#define bcmolt_xgpon_onu_alarms_id_lobi BCMOLT_XGPON_ONU_ALARMS_ID_LOBI
#define bcmolt_xgpon_onu_alarms_id_lopci_miss BCMOLT_XGPON_ONU_ALARMS_ID_LOPCI_MISS
#define bcmolt_xgpon_onu_alarms_id_lopci_mic_error BCMOLT_XGPON_ONU_ALARMS_ID_LOPCI_MIC_ERROR
#define bcmolt_xgpon_onu_alarms_id__num_of BCMOLT_XGPON_ONU_ALARMS_ID__NUM_OF
#define bcmolt_xgpon_onu_alarms_id_all_properties 0xFF
#define bcmolt_xgpon_onu_alarms_id_full_mask 0xF

} bcmolt_xgpon_onu_alarms_id;

/** Identifiers for all fields in a 'xgpon_onu_alarms_thresholds'. */
typedef enum
{
    BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID__BEGIN = 0,
    BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID_LOSI = 0, /**< LOSi. */
    BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID_LOBI = 1, /**< LOBi. */
    BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID_LOOCI = 2, /**< LOOCi. */
    BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID_LOPCI = 3, /**< LOPCi. */
    BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_xgpon_onu_alarms_thresholds_id__begin BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID__BEGIN
#define bcmolt_xgpon_onu_alarms_thresholds_id_losi BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID_LOSI
#define bcmolt_xgpon_onu_alarms_thresholds_id_lobi BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID_LOBI
#define bcmolt_xgpon_onu_alarms_thresholds_id_looci BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID_LOOCI
#define bcmolt_xgpon_onu_alarms_thresholds_id_lopci BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID_LOPCI
#define bcmolt_xgpon_onu_alarms_thresholds_id__num_of BCMOLT_XGPON_ONU_ALARMS_THRESHOLDS_ID__NUM_OF
#define bcmolt_xgpon_onu_alarms_thresholds_id_all_properties 0xFF
#define bcmolt_xgpon_onu_alarms_thresholds_id_full_mask 0xF

} bcmolt_xgpon_onu_alarms_thresholds_id;

/** Identifiers for all fields in a 'xgpon_onu_params'. */
typedef enum
{
    BCMOLT_XGPON_ONU_PARAMS_ID__BEGIN = 0,
    BCMOLT_XGPON_ONU_PARAMS_ID_ALARM_STATE = 0, /**< alarm state. */
    BCMOLT_XGPON_ONU_PARAMS_ID_REGISTRATION_ID = 1, /**< registration id. */
    BCMOLT_XGPON_ONU_PARAMS_ID_NGPON2 = 2, /**< NGPON2 params. */
    BCMOLT_XGPON_ONU_PARAMS_ID_REGISTRATION_ENCRYPTION_KEYS = 3, /**< registration encryption keys. */
    BCMOLT_XGPON_ONU_PARAMS_ID_REQUEST_REGISTRATION_STATUS = 4, /**< Request registration status. */
    BCMOLT_XGPON_ONU_PARAMS_ID_RANGING_BURST_PROFILE = 5, /**< ranging burst profile. */
    BCMOLT_XGPON_ONU_PARAMS_ID_DATA_BURST_PROFILE = 6, /**< data burst profile. */
    BCMOLT_XGPON_ONU_PARAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_xgpon_onu_params_id__begin BCMOLT_XGPON_ONU_PARAMS_ID__BEGIN
#define bcmolt_xgpon_onu_params_id_alarm_state BCMOLT_XGPON_ONU_PARAMS_ID_ALARM_STATE
#define bcmolt_xgpon_onu_params_id_registration_id BCMOLT_XGPON_ONU_PARAMS_ID_REGISTRATION_ID
#define bcmolt_xgpon_onu_params_id_ngpon2 BCMOLT_XGPON_ONU_PARAMS_ID_NGPON2
#define bcmolt_xgpon_onu_params_id_registration_encryption_keys BCMOLT_XGPON_ONU_PARAMS_ID_REGISTRATION_ENCRYPTION_KEYS
#define bcmolt_xgpon_onu_params_id_request_registration_status BCMOLT_XGPON_ONU_PARAMS_ID_REQUEST_REGISTRATION_STATUS
#define bcmolt_xgpon_onu_params_id_ranging_burst_profile BCMOLT_XGPON_ONU_PARAMS_ID_RANGING_BURST_PROFILE
#define bcmolt_xgpon_onu_params_id_data_burst_profile BCMOLT_XGPON_ONU_PARAMS_ID_DATA_BURST_PROFILE
#define bcmolt_xgpon_onu_params_id__num_of BCMOLT_XGPON_ONU_PARAMS_ID__NUM_OF
#define bcmolt_xgpon_onu_params_id_all_properties 0xFF
#define bcmolt_xgpon_onu_params_id_full_mask 0x7F

} bcmolt_xgpon_onu_params_id;

/** Identifiers for all fields in a 'xgpon_onu_registration_keys'. */
typedef enum
{
    BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID__BEGIN = 0,
    BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID_PLOAM_IK = 0, /**< ploam ik. */
    BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID_OMCI_IK = 1, /**< omci ik. */
    BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID_OMCI_K1 = 2, /**< omci k1. */
    BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID_OMCI_K2 = 3, /**< omci k2. */
    BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID_KEK = 4, /**< kek. */
    BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_xgpon_onu_registration_keys_id__begin BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID__BEGIN
#define bcmolt_xgpon_onu_registration_keys_id_ploam_ik BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID_PLOAM_IK
#define bcmolt_xgpon_onu_registration_keys_id_omci_ik BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID_OMCI_IK
#define bcmolt_xgpon_onu_registration_keys_id_omci_k1 BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID_OMCI_K1
#define bcmolt_xgpon_onu_registration_keys_id_omci_k2 BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID_OMCI_K2
#define bcmolt_xgpon_onu_registration_keys_id_kek BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID_KEK
#define bcmolt_xgpon_onu_registration_keys_id__num_of BCMOLT_XGPON_ONU_REGISTRATION_KEYS_ID__NUM_OF
#define bcmolt_xgpon_onu_registration_keys_id_all_properties 0xFF
#define bcmolt_xgpon_onu_registration_keys_id_full_mask 0x1F

} bcmolt_xgpon_onu_registration_keys_id;

/** Identifiers for all fields in a 'xgpon_pon_params'. */
typedef enum
{
    BCMOLT_XGPON_PON_PARAMS_ID__BEGIN = 0,
    BCMOLT_XGPON_PON_PARAMS_ID_HW_PON_ID = 0, /**< HW pon id. */
    BCMOLT_XGPON_PON_PARAMS_ID_ONU_ALARMS_THRESHOLDS = 1, /**< ONU alarms thresholds. */
    BCMOLT_XGPON_PON_PARAMS_ID_ALARM_INDICATION_CONTROL = 2, /**< alarm indication control. */
    BCMOLT_XGPON_PON_PARAMS_ID_MULTICAST_KEY = 3, /**< multicast key. */
    BCMOLT_XGPON_PON_PARAMS_ID_MIN_DATA_GEM_PORT_ID = 4, /**< Minimum data port id. */
    BCMOLT_XGPON_PON_PARAMS_ID_NGPON2 = 5, /**< NGPON params. */
    BCMOLT_XGPON_PON_PARAMS_ID_TDMA_2_5_G_DISCOVERY = 6, /**< TDMA 2.5 g discovery. */
    BCMOLT_XGPON_PON_PARAMS_ID_TDMA_10_G_DISCOVERY = 7, /**< TDMA 10 g discovery. */
    BCMOLT_XGPON_PON_PARAMS_ID_PLOAM_RETRANSMISSION = 8, /**< XGPON PLOAM retransmission. */
    BCMOLT_XGPON_PON_PARAMS_ID_TDMA_NUMBER_OF_2_5_G_ACTIVE_ONUS = 9, /**< TDMA number of 2_5g active onus. */
    BCMOLT_XGPON_PON_PARAMS_ID_TDMA_NUMBER_OF_10_G_ACTIVE_ONUS = 10, /**< TDMA number of 10g active onus. */
    BCMOLT_XGPON_PON_PARAMS_ID_OPERATION_CONTROL = 11, /**< operation control. */
    BCMOLT_XGPON_PON_PARAMS_ID_PERIODIC_PLOAMS = 12, /**< XGPON Periodic PLOAM Control. */
    BCMOLT_XGPON_PON_PARAMS_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_xgpon_pon_params_id__begin BCMOLT_XGPON_PON_PARAMS_ID__BEGIN
#define bcmolt_xgpon_pon_params_id_hw_pon_id BCMOLT_XGPON_PON_PARAMS_ID_HW_PON_ID
#define bcmolt_xgpon_pon_params_id_onu_alarms_thresholds BCMOLT_XGPON_PON_PARAMS_ID_ONU_ALARMS_THRESHOLDS
#define bcmolt_xgpon_pon_params_id_alarm_indication_control BCMOLT_XGPON_PON_PARAMS_ID_ALARM_INDICATION_CONTROL
#define bcmolt_xgpon_pon_params_id_multicast_key BCMOLT_XGPON_PON_PARAMS_ID_MULTICAST_KEY
#define bcmolt_xgpon_pon_params_id_min_data_gem_port_id BCMOLT_XGPON_PON_PARAMS_ID_MIN_DATA_GEM_PORT_ID
#define bcmolt_xgpon_pon_params_id_ngpon2 BCMOLT_XGPON_PON_PARAMS_ID_NGPON2
#define bcmolt_xgpon_pon_params_id_tdma_2_5_g_discovery BCMOLT_XGPON_PON_PARAMS_ID_TDMA_2_5_G_DISCOVERY
#define bcmolt_xgpon_pon_params_id_tdma_10_g_discovery BCMOLT_XGPON_PON_PARAMS_ID_TDMA_10_G_DISCOVERY
#define bcmolt_xgpon_pon_params_id_ploam_retransmission BCMOLT_XGPON_PON_PARAMS_ID_PLOAM_RETRANSMISSION
#define bcmolt_xgpon_pon_params_id_tdma_number_of_2_5_g_active_onus BCMOLT_XGPON_PON_PARAMS_ID_TDMA_NUMBER_OF_2_5_G_ACTIVE_ONUS
#define bcmolt_xgpon_pon_params_id_tdma_number_of_10_g_active_onus BCMOLT_XGPON_PON_PARAMS_ID_TDMA_NUMBER_OF_10_G_ACTIVE_ONUS
#define bcmolt_xgpon_pon_params_id_operation_control BCMOLT_XGPON_PON_PARAMS_ID_OPERATION_CONTROL
#define bcmolt_xgpon_pon_params_id_periodic_ploams BCMOLT_XGPON_PON_PARAMS_ID_PERIODIC_PLOAMS
#define bcmolt_xgpon_pon_params_id__num_of BCMOLT_XGPON_PON_PARAMS_ID__NUM_OF
#define bcmolt_xgpon_pon_params_id_all_properties 0xFF
#define bcmolt_xgpon_pon_params_id_full_mask 0x1FFF

} bcmolt_xgpon_pon_params_id;

/** Identifiers for all fields in a 'xgpon_trx'. */
typedef enum
{
    BCMOLT_XGPON_TRX_ID__BEGIN = 0,
    BCMOLT_XGPON_TRX_ID_BURST_PROFILE = 0, /**< burst profile. */
    BCMOLT_XGPON_TRX_ID_TRANSCEIVER_TYPE = 2, /**< trx type. */
    BCMOLT_XGPON_TRX_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_xgpon_trx_id__begin BCMOLT_XGPON_TRX_ID__BEGIN
#define bcmolt_xgpon_trx_id_burst_profile BCMOLT_XGPON_TRX_ID_BURST_PROFILE
#define bcmolt_xgpon_trx_id_transceiver_type BCMOLT_XGPON_TRX_ID_TRANSCEIVER_TYPE
#define bcmolt_xgpon_trx_id__num_of BCMOLT_XGPON_TRX_ID__NUM_OF
#define bcmolt_xgpon_trx_id_all_properties 0xFF
#define bcmolt_xgpon_trx_id_full_mask 0x5

} bcmolt_xgpon_trx_id;

/** Identifiers for all fields in a 'access_control_key'. */
typedef enum
{
    BCMOLT_ACCESS_CONTROL_KEY_ID__BEGIN = 0,
    BCMOLT_ACCESS_CONTROL_KEY_ID_ID = 0, /**< ACL ID. */
    BCMOLT_ACCESS_CONTROL_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_access_control_key_id__begin BCMOLT_ACCESS_CONTROL_KEY_ID__BEGIN
#define bcmolt_access_control_key_id_id BCMOLT_ACCESS_CONTROL_KEY_ID_ID
#define bcmolt_access_control_key_id__num_of BCMOLT_ACCESS_CONTROL_KEY_ID__NUM_OF
#define bcmolt_access_control_key_id_all_properties 0xFF
#define bcmolt_access_control_key_id_full_mask 0x1

} bcmolt_access_control_key_id;

/** Identifiers for all fields in a 'access_control_cfg_data'. */
typedef enum
{
    BCMOLT_ACCESS_CONTROL_CFG_DATA_ID__BEGIN = 4,
    BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_CLASSIFIER = 4, /**< Classifier. */
    BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_PRIORITY = 5, /**< Priority. */
    BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_FORWARDING_ACTION = 6, /**< Packet forwarding Action. */
    BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_STATE = 9, /**< State. */
    BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_COOKIE = 11, /**< Cookie. */
    BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_INTERFACE_REFS = 12, /**< list of associated interfaces. */
    BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_STATISTICS_CONTROL = 14, /**< statistics control. */
    BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_MODIFIER_ACTION = 15, /**< Packet modifier action. */
    BCMOLT_ACCESS_CONTROL_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_access_control_cfg_data_id__begin BCMOLT_ACCESS_CONTROL_CFG_DATA_ID__BEGIN
#define bcmolt_access_control_cfg_data_id_classifier BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_CLASSIFIER
#define bcmolt_access_control_cfg_data_id_priority BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_PRIORITY
#define bcmolt_access_control_cfg_data_id_forwarding_action BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_FORWARDING_ACTION
#define bcmolt_access_control_cfg_data_id_state BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_STATE
#define bcmolt_access_control_cfg_data_id_cookie BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_COOKIE
#define bcmolt_access_control_cfg_data_id_interface_refs BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_INTERFACE_REFS
#define bcmolt_access_control_cfg_data_id_statistics_control BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_STATISTICS_CONTROL
#define bcmolt_access_control_cfg_data_id_modifier_action BCMOLT_ACCESS_CONTROL_CFG_DATA_ID_MODIFIER_ACTION
#define bcmolt_access_control_cfg_data_id__num_of BCMOLT_ACCESS_CONTROL_CFG_DATA_ID__NUM_OF
#define bcmolt_access_control_cfg_data_id_all_properties 0xFF
#define bcmolt_access_control_cfg_data_id_full_mask 0xDA70

} bcmolt_access_control_cfg_data_id;

/** Identifiers for all fields in a 'access_control_receive_eth_packet_data'. */
typedef enum
{
    BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_ID__BEGIN = 1,
    BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_ID_INTERFACE_REF = 1, /**< Interface Ref. */
    BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_ID_BUFFER = 2, /**< Buffer. */
    BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_ID_SVC_PORT_ID = 3, /**< GEM or LLID. */
    BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_access_control_receive_eth_packet_data_id__begin BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_ID__BEGIN
#define bcmolt_access_control_receive_eth_packet_data_id_interface_ref BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_ID_INTERFACE_REF
#define bcmolt_access_control_receive_eth_packet_data_id_buffer BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_ID_BUFFER
#define bcmolt_access_control_receive_eth_packet_data_id_svc_port_id BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_ID_SVC_PORT_ID
#define bcmolt_access_control_receive_eth_packet_data_id__num_of BCMOLT_ACCESS_CONTROL_RECEIVE_ETH_PACKET_DATA_ID__NUM_OF
#define bcmolt_access_control_receive_eth_packet_data_id_all_properties 0xFF
#define bcmolt_access_control_receive_eth_packet_data_id_full_mask 0xE

} bcmolt_access_control_receive_eth_packet_data_id;

/** Identifiers for all fields in a 'access_control_interfaces_update_data'. */
typedef enum
{
    BCMOLT_ACCESS_CONTROL_INTERFACES_UPDATE_DATA_ID__BEGIN = 0,
    BCMOLT_ACCESS_CONTROL_INTERFACES_UPDATE_DATA_ID_INTERFACE_REF_LIST = 0, /**< interface reference. */
    BCMOLT_ACCESS_CONTROL_INTERFACES_UPDATE_DATA_ID_COMMAND = 1, /**< command. */
    BCMOLT_ACCESS_CONTROL_INTERFACES_UPDATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_access_control_interfaces_update_data_id__begin BCMOLT_ACCESS_CONTROL_INTERFACES_UPDATE_DATA_ID__BEGIN
#define bcmolt_access_control_interfaces_update_data_id_interface_ref_list BCMOLT_ACCESS_CONTROL_INTERFACES_UPDATE_DATA_ID_INTERFACE_REF_LIST
#define bcmolt_access_control_interfaces_update_data_id_command BCMOLT_ACCESS_CONTROL_INTERFACES_UPDATE_DATA_ID_COMMAND
#define bcmolt_access_control_interfaces_update_data_id__num_of BCMOLT_ACCESS_CONTROL_INTERFACES_UPDATE_DATA_ID__NUM_OF
#define bcmolt_access_control_interfaces_update_data_id_all_properties 0xFF
#define bcmolt_access_control_interfaces_update_data_id_full_mask 0x3

} bcmolt_access_control_interfaces_update_data_id;

/** Identifiers for all fields in a 'access_control_auto_cfg_data'. */
typedef enum
{
    BCMOLT_ACCESS_CONTROL_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ACCESS_CONTROL_AUTO_CFG_DATA_ID_RECEIVE_ETH_PACKET = 0, /**< receive_eth_packet. */
    BCMOLT_ACCESS_CONTROL_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_access_control_auto_cfg_data_id__begin BCMOLT_ACCESS_CONTROL_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_access_control_auto_cfg_data_id_receive_eth_packet BCMOLT_ACCESS_CONTROL_AUTO_CFG_DATA_ID_RECEIVE_ETH_PACKET
#define bcmolt_access_control_auto_cfg_data_id__num_of BCMOLT_ACCESS_CONTROL_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_access_control_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_access_control_auto_cfg_data_id_full_mask 0x1

} bcmolt_access_control_auto_cfg_data_id;

/** Identifiers for all fields in a 'bal_system_cfg_data'. */
typedef enum
{
    BCMOLT_BAL_SYSTEM_CFG_DATA_ID__BEGIN = 4,
    BCMOLT_BAL_SYSTEM_CFG_DATA_ID_LAG_PARMS = 4, /**< LAG Global Params. */
    BCMOLT_BAL_SYSTEM_CFG_DATA_ID_CONFIG_STATE = 5, /**< Configuration State. */
    BCMOLT_BAL_SYSTEM_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_bal_system_cfg_data_id__begin BCMOLT_BAL_SYSTEM_CFG_DATA_ID__BEGIN
#define bcmolt_bal_system_cfg_data_id_lag_parms BCMOLT_BAL_SYSTEM_CFG_DATA_ID_LAG_PARMS
#define bcmolt_bal_system_cfg_data_id_config_state BCMOLT_BAL_SYSTEM_CFG_DATA_ID_CONFIG_STATE
#define bcmolt_bal_system_cfg_data_id__num_of BCMOLT_BAL_SYSTEM_CFG_DATA_ID__NUM_OF
#define bcmolt_bal_system_cfg_data_id_all_properties 0xFF
#define bcmolt_bal_system_cfg_data_id_full_mask 0x30

} bcmolt_bal_system_cfg_data_id;

/** Identifiers for all fields in a 'bal_system_key'. */
typedef enum
{
    BCMOLT_BAL_SYSTEM_KEY_ID__BEGIN = 0,
    BCMOLT_BAL_SYSTEM_KEY_ID_ID = 0, /**< id. */
    BCMOLT_BAL_SYSTEM_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_bal_system_key_id__begin BCMOLT_BAL_SYSTEM_KEY_ID__BEGIN
#define bcmolt_bal_system_key_id_id BCMOLT_BAL_SYSTEM_KEY_ID_ID
#define bcmolt_bal_system_key_id__num_of BCMOLT_BAL_SYSTEM_KEY_ID__NUM_OF
#define bcmolt_bal_system_key_id_all_properties 0xFF
#define bcmolt_bal_system_key_id_full_mask 0x1

} bcmolt_bal_system_key_id;

/** Identifiers for all fields in a 'device_key'. */
typedef enum
{
    BCMOLT_DEVICE_KEY_ID__BEGIN = 0,
    BCMOLT_DEVICE_KEY_ID_DEVICE_ID = 0, /**< Device ID. */
    BCMOLT_DEVICE_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_key_id__begin BCMOLT_DEVICE_KEY_ID__BEGIN
#define bcmolt_device_key_id_device_id BCMOLT_DEVICE_KEY_ID_DEVICE_ID
#define bcmolt_device_key_id__num_of BCMOLT_DEVICE_KEY_ID__NUM_OF
#define bcmolt_device_key_id_all_properties 0xFF
#define bcmolt_device_key_id_full_mask 0x1

} bcmolt_device_key_id;

/** Identifiers for all fields in a 'device_cfg_data'. */
typedef enum
{
    BCMOLT_DEVICE_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_CFG_DATA_ID_SYSTEM_MODE = 0, /**< system_mode. */
    BCMOLT_DEVICE_CFG_DATA_ID_KEEPALIVE_INTERVAL = 1, /**< Device Keepalive Interval. */
    BCMOLT_DEVICE_CFG_DATA_ID_KEEPALIVE_TOLERANCE = 2, /**< Device Keepalive tolerance. */
    BCMOLT_DEVICE_CFG_DATA_ID_FIRMWARE_SW_VERSION = 3, /**< Firmware SW Version. */
    BCMOLT_DEVICE_CFG_DATA_ID_CHIP_REVISION = 4, /**< Chip Revision. */
    BCMOLT_DEVICE_CFG_DATA_ID_CHIP_VOLTAGE = 5, /**< chip voltage. */
    BCMOLT_DEVICE_CFG_DATA_ID_CHIP_TEMPERATURE = 6, /**< chip temperature. */
    BCMOLT_DEVICE_CFG_DATA_ID_DEBUG = 7, /**< debug parameters. */
    BCMOLT_DEVICE_CFG_DATA_ID_PROTECTION_SWITCHING_EXT_IRQ = 9, /**< Protection Switching External IRQ. */
    BCMOLT_DEVICE_CFG_DATA_ID_INDICATION_SHAPING = 10, /**< Indication Shaping. */
    BCMOLT_DEVICE_CFG_DATA_ID_TOD_UART_BAUDRATE = 11, /**< UART baudrate. */
    BCMOLT_DEVICE_CFG_DATA_ID_ITU_TOD = 12, /**< ITU ToD. */
    BCMOLT_DEVICE_CFG_DATA_ID_IEEE_8021_AS_TOD = 13, /**< IEEE 802.1 AS ToD. */
    BCMOLT_DEVICE_CFG_DATA_ID_EMBEDDED_IMAGE_LIST = 16, /**< Embedded image list. */
    BCMOLT_DEVICE_CFG_DATA_ID_WD_ENABLE = 17, /**< In-band watchdog enable. */
    BCMOLT_DEVICE_CFG_DATA_ID_WD_IP_TRAFFIC_TIMEOUT = 18, /**< In-band watchdog IP traffic timeout interval. */
    BCMOLT_DEVICE_CFG_DATA_ID_COMM_MODE = 19, /**< Communication Mode. */
    BCMOLT_DEVICE_CFG_DATA_ID_PCIE_CONN_DATA = 20, /**< PCIe Connection Data. */
    BCMOLT_DEVICE_CFG_DATA_ID_INBAND_CONN_DATA = 21, /**< In Band Connection Data. */
    BCMOLT_DEVICE_CFG_DATA_ID_LOGGER_ENABLE = 27, /**< Logger Enable. */
    BCMOLT_DEVICE_CFG_DATA_ID_INNI_CONFIG = 28, /**< INNI Configuration. */
    BCMOLT_DEVICE_CFG_DATA_ID_CHIP_FAMILY = 29, /**< Chip Family. */
    BCMOLT_DEVICE_CFG_DATA_ID_RAS_DDR_MODE = 30, /**< RAS DDR Mode. */
    BCMOLT_DEVICE_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_cfg_data_id__begin BCMOLT_DEVICE_CFG_DATA_ID__BEGIN
#define bcmolt_device_cfg_data_id_system_mode BCMOLT_DEVICE_CFG_DATA_ID_SYSTEM_MODE
#define bcmolt_device_cfg_data_id_keepalive_interval BCMOLT_DEVICE_CFG_DATA_ID_KEEPALIVE_INTERVAL
#define bcmolt_device_cfg_data_id_keepalive_tolerance BCMOLT_DEVICE_CFG_DATA_ID_KEEPALIVE_TOLERANCE
#define bcmolt_device_cfg_data_id_firmware_sw_version BCMOLT_DEVICE_CFG_DATA_ID_FIRMWARE_SW_VERSION
#define bcmolt_device_cfg_data_id_chip_revision BCMOLT_DEVICE_CFG_DATA_ID_CHIP_REVISION
#define bcmolt_device_cfg_data_id_chip_voltage BCMOLT_DEVICE_CFG_DATA_ID_CHIP_VOLTAGE
#define bcmolt_device_cfg_data_id_chip_temperature BCMOLT_DEVICE_CFG_DATA_ID_CHIP_TEMPERATURE
#define bcmolt_device_cfg_data_id_debug BCMOLT_DEVICE_CFG_DATA_ID_DEBUG
#define bcmolt_device_cfg_data_id_protection_switching_ext_irq BCMOLT_DEVICE_CFG_DATA_ID_PROTECTION_SWITCHING_EXT_IRQ
#define bcmolt_device_cfg_data_id_indication_shaping BCMOLT_DEVICE_CFG_DATA_ID_INDICATION_SHAPING
#define bcmolt_device_cfg_data_id_tod_uart_baudrate BCMOLT_DEVICE_CFG_DATA_ID_TOD_UART_BAUDRATE
#define bcmolt_device_cfg_data_id_itu_tod BCMOLT_DEVICE_CFG_DATA_ID_ITU_TOD
#define bcmolt_device_cfg_data_id_ieee_8021_as_tod BCMOLT_DEVICE_CFG_DATA_ID_IEEE_8021_AS_TOD
#define bcmolt_device_cfg_data_id_embedded_image_list BCMOLT_DEVICE_CFG_DATA_ID_EMBEDDED_IMAGE_LIST
#define bcmolt_device_cfg_data_id_wd_enable BCMOLT_DEVICE_CFG_DATA_ID_WD_ENABLE
#define bcmolt_device_cfg_data_id_wd_ip_traffic_timeout BCMOLT_DEVICE_CFG_DATA_ID_WD_IP_TRAFFIC_TIMEOUT
#define bcmolt_device_cfg_data_id_comm_mode BCMOLT_DEVICE_CFG_DATA_ID_COMM_MODE
#define bcmolt_device_cfg_data_id_pcie_conn_data BCMOLT_DEVICE_CFG_DATA_ID_PCIE_CONN_DATA
#define bcmolt_device_cfg_data_id_inband_conn_data BCMOLT_DEVICE_CFG_DATA_ID_INBAND_CONN_DATA
#define bcmolt_device_cfg_data_id_logger_enable BCMOLT_DEVICE_CFG_DATA_ID_LOGGER_ENABLE
#define bcmolt_device_cfg_data_id_inni_config BCMOLT_DEVICE_CFG_DATA_ID_INNI_CONFIG
#define bcmolt_device_cfg_data_id_chip_family BCMOLT_DEVICE_CFG_DATA_ID_CHIP_FAMILY
#define bcmolt_device_cfg_data_id_ras_ddr_mode BCMOLT_DEVICE_CFG_DATA_ID_RAS_DDR_MODE
#define bcmolt_device_cfg_data_id__num_of BCMOLT_DEVICE_CFG_DATA_ID__NUM_OF
#define bcmolt_device_cfg_data_id_all_properties 0xFF
#define bcmolt_device_cfg_data_id_full_mask 0x783F3EFF

} bcmolt_device_cfg_data_id;

/** Identifiers for all fields in a 'device_connect_data'. */
typedef enum
{
    BCMOLT_DEVICE_CONNECT_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_CONNECT_DATA_ID_SYSTEM_MODE = 0, /**< System Mode. */
    BCMOLT_DEVICE_CONNECT_DATA_ID_COMM_MODE = 1, /**< Communication Mode. */
    BCMOLT_DEVICE_CONNECT_DATA_ID_PCIE_CONN_DATA = 2, /**< PCIe Connection Data. */
    BCMOLT_DEVICE_CONNECT_DATA_ID_INBAND_CONN_DATA = 3, /**< In Band Connection Data. */
    BCMOLT_DEVICE_CONNECT_DATA_ID_INNI_CONFIG = 5, /**< INNI Configuration. */
    BCMOLT_DEVICE_CONNECT_DATA_ID_RAS_DDR_MODE = 6, /**< RAS DDR mode. */
    BCMOLT_DEVICE_CONNECT_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_connect_data_id__begin BCMOLT_DEVICE_CONNECT_DATA_ID__BEGIN
#define bcmolt_device_connect_data_id_system_mode BCMOLT_DEVICE_CONNECT_DATA_ID_SYSTEM_MODE
#define bcmolt_device_connect_data_id_comm_mode BCMOLT_DEVICE_CONNECT_DATA_ID_COMM_MODE
#define bcmolt_device_connect_data_id_pcie_conn_data BCMOLT_DEVICE_CONNECT_DATA_ID_PCIE_CONN_DATA
#define bcmolt_device_connect_data_id_inband_conn_data BCMOLT_DEVICE_CONNECT_DATA_ID_INBAND_CONN_DATA
#define bcmolt_device_connect_data_id_inni_config BCMOLT_DEVICE_CONNECT_DATA_ID_INNI_CONFIG
#define bcmolt_device_connect_data_id_ras_ddr_mode BCMOLT_DEVICE_CONNECT_DATA_ID_RAS_DDR_MODE
#define bcmolt_device_connect_data_id__num_of BCMOLT_DEVICE_CONNECT_DATA_ID__NUM_OF
#define bcmolt_device_connect_data_id_all_properties 0xFF
#define bcmolt_device_connect_data_id_full_mask 0x6F

} bcmolt_device_connect_data_id;

/** Identifiers for all fields in a 'device_host_keep_alive_data'. */
typedef enum
{
    BCMOLT_DEVICE_HOST_KEEP_ALIVE_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_HOST_KEEP_ALIVE_DATA_ID_SEQUENCE_NUMBER = 0, /**< sequence number. */
    BCMOLT_DEVICE_HOST_KEEP_ALIVE_DATA_ID_TIME_STAMP = 1, /**< time stamp. */
    BCMOLT_DEVICE_HOST_KEEP_ALIVE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_host_keep_alive_data_id__begin BCMOLT_DEVICE_HOST_KEEP_ALIVE_DATA_ID__BEGIN
#define bcmolt_device_host_keep_alive_data_id_sequence_number BCMOLT_DEVICE_HOST_KEEP_ALIVE_DATA_ID_SEQUENCE_NUMBER
#define bcmolt_device_host_keep_alive_data_id_time_stamp BCMOLT_DEVICE_HOST_KEEP_ALIVE_DATA_ID_TIME_STAMP
#define bcmolt_device_host_keep_alive_data_id__num_of BCMOLT_DEVICE_HOST_KEEP_ALIVE_DATA_ID__NUM_OF
#define bcmolt_device_host_keep_alive_data_id_all_properties 0xFF
#define bcmolt_device_host_keep_alive_data_id_full_mask 0x3

} bcmolt_device_host_keep_alive_data_id;

/** Identifiers for all fields in a 'device_set_8021_as_tod_string_data'. */
typedef enum
{
    BCMOLT_DEVICE_SET_8021_AS_TOD_STRING_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_SET_8021_AS_TOD_STRING_DATA_ID_TOD_STRING = 0, /**< ToD String. */
    BCMOLT_DEVICE_SET_8021_AS_TOD_STRING_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_set_8021_as_tod_string_data_id__begin BCMOLT_DEVICE_SET_8021_AS_TOD_STRING_DATA_ID__BEGIN
#define bcmolt_device_set_8021_as_tod_string_data_id_tod_string BCMOLT_DEVICE_SET_8021_AS_TOD_STRING_DATA_ID_TOD_STRING
#define bcmolt_device_set_8021_as_tod_string_data_id__num_of BCMOLT_DEVICE_SET_8021_AS_TOD_STRING_DATA_ID__NUM_OF
#define bcmolt_device_set_8021_as_tod_string_data_id_all_properties 0xFF
#define bcmolt_device_set_8021_as_tod_string_data_id_full_mask 0x1

} bcmolt_device_set_8021_as_tod_string_data_id;

/** Identifiers for all fields in a 'device_image_transfer_start_data'. */
typedef enum
{
    BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID_IMAGE_TYPE = 0, /**< Image type. */
    BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID_IMAGE_SIZE = 1, /**< Image Size. */
    BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID_CRC32 = 2, /**< CRC32. */
    BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID_IMAGE_NAME = 3, /**< Image name. */
    BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_image_transfer_start_data_id__begin BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID__BEGIN
#define bcmolt_device_image_transfer_start_data_id_image_type BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID_IMAGE_TYPE
#define bcmolt_device_image_transfer_start_data_id_image_size BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID_IMAGE_SIZE
#define bcmolt_device_image_transfer_start_data_id_crc32 BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID_CRC32
#define bcmolt_device_image_transfer_start_data_id_image_name BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID_IMAGE_NAME
#define bcmolt_device_image_transfer_start_data_id__num_of BCMOLT_DEVICE_IMAGE_TRANSFER_START_DATA_ID__NUM_OF
#define bcmolt_device_image_transfer_start_data_id_all_properties 0xFF
#define bcmolt_device_image_transfer_start_data_id_full_mask 0xF

} bcmolt_device_image_transfer_start_data_id;

/** Identifiers for all fields in a 'device_image_transfer_data_data'. */
typedef enum
{
    BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_ID_BLOCK_NUMBER = 0, /**< Block number. */
    BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_ID_MORE_DATA = 1, /**< More Data. */
    BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_ID_DATA = 2, /**< Data. */
    BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_image_transfer_data_data_id__begin BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_ID__BEGIN
#define bcmolt_device_image_transfer_data_data_id_block_number BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_ID_BLOCK_NUMBER
#define bcmolt_device_image_transfer_data_data_id_more_data BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_ID_MORE_DATA
#define bcmolt_device_image_transfer_data_data_id_data BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_ID_DATA
#define bcmolt_device_image_transfer_data_data_id__num_of BCMOLT_DEVICE_IMAGE_TRANSFER_DATA_DATA_ID__NUM_OF
#define bcmolt_device_image_transfer_data_data_id_all_properties 0xFF
#define bcmolt_device_image_transfer_data_data_id_full_mask 0x7

} bcmolt_device_image_transfer_data_data_id;

/** Identifiers for all fields in a 'device_run_ddr_test_data'. */
typedef enum
{
    BCMOLT_DEVICE_RUN_DDR_TEST_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_RUN_DDR_TEST_DATA_ID_CPU = 0, /**< CPU. */
    BCMOLT_DEVICE_RUN_DDR_TEST_DATA_ID_RAS_0 = 1, /**< RAS 0. */
    BCMOLT_DEVICE_RUN_DDR_TEST_DATA_ID_RAS_1 = 2, /**< RAS 1. */
    BCMOLT_DEVICE_RUN_DDR_TEST_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_run_ddr_test_data_id__begin BCMOLT_DEVICE_RUN_DDR_TEST_DATA_ID__BEGIN
#define bcmolt_device_run_ddr_test_data_id_cpu BCMOLT_DEVICE_RUN_DDR_TEST_DATA_ID_CPU
#define bcmolt_device_run_ddr_test_data_id_ras_0 BCMOLT_DEVICE_RUN_DDR_TEST_DATA_ID_RAS_0
#define bcmolt_device_run_ddr_test_data_id_ras_1 BCMOLT_DEVICE_RUN_DDR_TEST_DATA_ID_RAS_1
#define bcmolt_device_run_ddr_test_data_id__num_of BCMOLT_DEVICE_RUN_DDR_TEST_DATA_ID__NUM_OF
#define bcmolt_device_run_ddr_test_data_id_all_properties 0xFF
#define bcmolt_device_run_ddr_test_data_id_full_mask 0x7

} bcmolt_device_run_ddr_test_data_id;

/** Identifiers for all fields in a 'device_device_ready_data'. */
typedef enum
{
    BCMOLT_DEVICE_DEVICE_READY_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_DEVICE_READY_DATA_ID_FIRMWARE_SW_VERSION = 0, /**< Software Version. */
    BCMOLT_DEVICE_DEVICE_READY_DATA_ID_SYSTEM_MODE = 1, /**< System Mode. */
    BCMOLT_DEVICE_DEVICE_READY_DATA_ID_KEEPALIVE_INTERVAL = 2, /**< Device keepalive interval. */
    BCMOLT_DEVICE_DEVICE_READY_DATA_ID_KEEPALIVE_TOLERANCE = 3, /**< Device keepalive tolerance. */
    BCMOLT_DEVICE_DEVICE_READY_DATA_ID_STANDALONE = 4, /**< Standalone. */
    BCMOLT_DEVICE_DEVICE_READY_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_device_ready_data_id__begin BCMOLT_DEVICE_DEVICE_READY_DATA_ID__BEGIN
#define bcmolt_device_device_ready_data_id_firmware_sw_version BCMOLT_DEVICE_DEVICE_READY_DATA_ID_FIRMWARE_SW_VERSION
#define bcmolt_device_device_ready_data_id_system_mode BCMOLT_DEVICE_DEVICE_READY_DATA_ID_SYSTEM_MODE
#define bcmolt_device_device_ready_data_id_keepalive_interval BCMOLT_DEVICE_DEVICE_READY_DATA_ID_KEEPALIVE_INTERVAL
#define bcmolt_device_device_ready_data_id_keepalive_tolerance BCMOLT_DEVICE_DEVICE_READY_DATA_ID_KEEPALIVE_TOLERANCE
#define bcmolt_device_device_ready_data_id_standalone BCMOLT_DEVICE_DEVICE_READY_DATA_ID_STANDALONE
#define bcmolt_device_device_ready_data_id__num_of BCMOLT_DEVICE_DEVICE_READY_DATA_ID__NUM_OF
#define bcmolt_device_device_ready_data_id_all_properties 0xFF
#define bcmolt_device_device_ready_data_id_full_mask 0x1F

} bcmolt_device_device_ready_data_id;

/** Identifiers for all fields in a 'device_device_keep_alive_data'. */
typedef enum
{
    BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID_SEQUENCE_NUMBER = 0, /**< sequence number. */
    BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID_TIME_STAMP = 1, /**< time stamp. */
    BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID_KEEPALIVE_INTERVAL = 2, /**< Keepalive Interval. */
    BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID_KEEPALIVE_TOLERANCE = 3, /**< Keepalive Tolerance. */
    BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_device_keep_alive_data_id__begin BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID__BEGIN
#define bcmolt_device_device_keep_alive_data_id_sequence_number BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID_SEQUENCE_NUMBER
#define bcmolt_device_device_keep_alive_data_id_time_stamp BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID_TIME_STAMP
#define bcmolt_device_device_keep_alive_data_id_keepalive_interval BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID_KEEPALIVE_INTERVAL
#define bcmolt_device_device_keep_alive_data_id_keepalive_tolerance BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID_KEEPALIVE_TOLERANCE
#define bcmolt_device_device_keep_alive_data_id__num_of BCMOLT_DEVICE_DEVICE_KEEP_ALIVE_DATA_ID__NUM_OF
#define bcmolt_device_device_keep_alive_data_id_all_properties 0xFF
#define bcmolt_device_device_keep_alive_data_id_full_mask 0xF

} bcmolt_device_device_keep_alive_data_id;

/** Identifiers for all fields in a 'device_connection_failure_data'. */
typedef enum
{
    BCMOLT_DEVICE_CONNECTION_FAILURE_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_CONNECTION_FAILURE_DATA_ID_REASON = 0, /**< Connection fail reason. */
    BCMOLT_DEVICE_CONNECTION_FAILURE_DATA_ID_DEVICE_IN_RESET = 1, /**< Device In Reset. */
    BCMOLT_DEVICE_CONNECTION_FAILURE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_connection_failure_data_id__begin BCMOLT_DEVICE_CONNECTION_FAILURE_DATA_ID__BEGIN
#define bcmolt_device_connection_failure_data_id_reason BCMOLT_DEVICE_CONNECTION_FAILURE_DATA_ID_REASON
#define bcmolt_device_connection_failure_data_id_device_in_reset BCMOLT_DEVICE_CONNECTION_FAILURE_DATA_ID_DEVICE_IN_RESET
#define bcmolt_device_connection_failure_data_id__num_of BCMOLT_DEVICE_CONNECTION_FAILURE_DATA_ID__NUM_OF
#define bcmolt_device_connection_failure_data_id_all_properties 0xFF
#define bcmolt_device_connection_failure_data_id_full_mask 0x3

} bcmolt_device_connection_failure_data_id;

/** Identifiers for all fields in a 'device_connection_complete_data'. */
typedef enum
{
    BCMOLT_DEVICE_CONNECTION_COMPLETE_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_CONNECTION_COMPLETE_DATA_ID_STANDALONE = 0, /**< Standalone. */
    BCMOLT_DEVICE_CONNECTION_COMPLETE_DATA_ID_SYSTEM_MODE = 1, /**< System Mode. */
    BCMOLT_DEVICE_CONNECTION_COMPLETE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_connection_complete_data_id__begin BCMOLT_DEVICE_CONNECTION_COMPLETE_DATA_ID__BEGIN
#define bcmolt_device_connection_complete_data_id_standalone BCMOLT_DEVICE_CONNECTION_COMPLETE_DATA_ID_STANDALONE
#define bcmolt_device_connection_complete_data_id_system_mode BCMOLT_DEVICE_CONNECTION_COMPLETE_DATA_ID_SYSTEM_MODE
#define bcmolt_device_connection_complete_data_id__num_of BCMOLT_DEVICE_CONNECTION_COMPLETE_DATA_ID__NUM_OF
#define bcmolt_device_connection_complete_data_id_all_properties 0xFF
#define bcmolt_device_connection_complete_data_id_full_mask 0x3

} bcmolt_device_connection_complete_data_id;

/** Identifiers for all fields in a 'device_disconnection_complete_data'. */
typedef enum
{
    BCMOLT_DEVICE_DISCONNECTION_COMPLETE_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_DISCONNECTION_COMPLETE_DATA_ID_REASON = 0, /**< disconnect reason. */
    BCMOLT_DEVICE_DISCONNECTION_COMPLETE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_disconnection_complete_data_id__begin BCMOLT_DEVICE_DISCONNECTION_COMPLETE_DATA_ID__BEGIN
#define bcmolt_device_disconnection_complete_data_id_reason BCMOLT_DEVICE_DISCONNECTION_COMPLETE_DATA_ID_REASON
#define bcmolt_device_disconnection_complete_data_id__num_of BCMOLT_DEVICE_DISCONNECTION_COMPLETE_DATA_ID__NUM_OF
#define bcmolt_device_disconnection_complete_data_id_all_properties 0xFF
#define bcmolt_device_disconnection_complete_data_id_full_mask 0x1

} bcmolt_device_disconnection_complete_data_id;

/** Identifiers for all fields in a 'device_sw_error_data'. */
typedef enum
{
    BCMOLT_DEVICE_SW_ERROR_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_SW_ERROR_DATA_ID_TASK_NAME = 0, /**< task name. */
    BCMOLT_DEVICE_SW_ERROR_DATA_ID_FILE_NAME = 1, /**< file name. */
    BCMOLT_DEVICE_SW_ERROR_DATA_ID_LINE_NUMBER = 2, /**< line number. */
    BCMOLT_DEVICE_SW_ERROR_DATA_ID_PON_NI = 3, /**< pon_ni. */
    BCMOLT_DEVICE_SW_ERROR_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_sw_error_data_id__begin BCMOLT_DEVICE_SW_ERROR_DATA_ID__BEGIN
#define bcmolt_device_sw_error_data_id_task_name BCMOLT_DEVICE_SW_ERROR_DATA_ID_TASK_NAME
#define bcmolt_device_sw_error_data_id_file_name BCMOLT_DEVICE_SW_ERROR_DATA_ID_FILE_NAME
#define bcmolt_device_sw_error_data_id_line_number BCMOLT_DEVICE_SW_ERROR_DATA_ID_LINE_NUMBER
#define bcmolt_device_sw_error_data_id_pon_ni BCMOLT_DEVICE_SW_ERROR_DATA_ID_PON_NI
#define bcmolt_device_sw_error_data_id__num_of BCMOLT_DEVICE_SW_ERROR_DATA_ID__NUM_OF
#define bcmolt_device_sw_error_data_id_all_properties 0xFF
#define bcmolt_device_sw_error_data_id_full_mask 0xF

} bcmolt_device_sw_error_data_id;

/** Identifiers for all fields in a 'device_sw_exception_data'. */
typedef enum
{
    BCMOLT_DEVICE_SW_EXCEPTION_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_SW_EXCEPTION_DATA_ID_CPU_ID = 0, /**< CPU ID. */
    BCMOLT_DEVICE_SW_EXCEPTION_DATA_ID_TEXT = 1, /**< text. */
    BCMOLT_DEVICE_SW_EXCEPTION_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_sw_exception_data_id__begin BCMOLT_DEVICE_SW_EXCEPTION_DATA_ID__BEGIN
#define bcmolt_device_sw_exception_data_id_cpu_id BCMOLT_DEVICE_SW_EXCEPTION_DATA_ID_CPU_ID
#define bcmolt_device_sw_exception_data_id_text BCMOLT_DEVICE_SW_EXCEPTION_DATA_ID_TEXT
#define bcmolt_device_sw_exception_data_id__num_of BCMOLT_DEVICE_SW_EXCEPTION_DATA_ID__NUM_OF
#define bcmolt_device_sw_exception_data_id_all_properties 0xFF
#define bcmolt_device_sw_exception_data_id_full_mask 0x3

} bcmolt_device_sw_exception_data_id;

/** Identifiers for all fields in a 'device_image_transfer_complete_data'. */
typedef enum
{
    BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_ID_IMAGE_TYPE = 0, /**< Image type. */
    BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_ID_BLOCK_NUMBER = 1, /**< Block number. */
    BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_ID_STATUS = 2, /**< Status. */
    BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_image_transfer_complete_data_id__begin BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_ID__BEGIN
#define bcmolt_device_image_transfer_complete_data_id_image_type BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_ID_IMAGE_TYPE
#define bcmolt_device_image_transfer_complete_data_id_block_number BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_ID_BLOCK_NUMBER
#define bcmolt_device_image_transfer_complete_data_id_status BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_ID_STATUS
#define bcmolt_device_image_transfer_complete_data_id__num_of BCMOLT_DEVICE_IMAGE_TRANSFER_COMPLETE_DATA_ID__NUM_OF
#define bcmolt_device_image_transfer_complete_data_id_all_properties 0xFF
#define bcmolt_device_image_transfer_complete_data_id_full_mask 0x7

} bcmolt_device_image_transfer_complete_data_id;

/** Identifiers for all fields in a 'device_ddr_test_complete_data'. */
typedef enum
{
    BCMOLT_DEVICE_DDR_TEST_COMPLETE_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_DDR_TEST_COMPLETE_DATA_ID_DDR_TEST = 0, /**< DDR Test. */
    BCMOLT_DEVICE_DDR_TEST_COMPLETE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_ddr_test_complete_data_id__begin BCMOLT_DEVICE_DDR_TEST_COMPLETE_DATA_ID__BEGIN
#define bcmolt_device_ddr_test_complete_data_id_ddr_test BCMOLT_DEVICE_DDR_TEST_COMPLETE_DATA_ID_DDR_TEST
#define bcmolt_device_ddr_test_complete_data_id__num_of BCMOLT_DEVICE_DDR_TEST_COMPLETE_DATA_ID__NUM_OF
#define bcmolt_device_ddr_test_complete_data_id_all_properties 0xFF
#define bcmolt_device_ddr_test_complete_data_id_full_mask 0x1

} bcmolt_device_ddr_test_complete_data_id;

/** Identifiers for all fields in a 'device_sw_health_check_failure_data'. */
typedef enum
{
    BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_ID_MODULE_NAME = 0, /**< module name. */
    BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_ID_MODULE_ID = 1, /**< module id. */
    BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_ID_STATUS = 2, /**< status. */
    BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_sw_health_check_failure_data_id__begin BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_ID__BEGIN
#define bcmolt_device_sw_health_check_failure_data_id_module_name BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_ID_MODULE_NAME
#define bcmolt_device_sw_health_check_failure_data_id_module_id BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_ID_MODULE_ID
#define bcmolt_device_sw_health_check_failure_data_id_status BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_ID_STATUS
#define bcmolt_device_sw_health_check_failure_data_id__num_of BCMOLT_DEVICE_SW_HEALTH_CHECK_FAILURE_DATA_ID__NUM_OF
#define bcmolt_device_sw_health_check_failure_data_id_all_properties 0xFF
#define bcmolt_device_sw_health_check_failure_data_id_full_mask 0x7

} bcmolt_device_sw_health_check_failure_data_id;

/** Identifiers for all fields in a 'device_auto_cfg_data'. */
typedef enum
{
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_CONNECTION_COMPLETE = 0, /**< Connection Complete. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_CONNECTION_ESTABLISHED = 1, /**< Connection Established. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_CONNECTION_FAILURE = 2, /**< Connection Failure. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_DDR_TEST_COMPLETE = 3, /**< DDR Test Complete. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_DEVICE_KEEP_ALIVE = 4, /**< Device Keep Alive. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_DEVICE_READY = 5, /**< Device Ready. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_DISCONNECTION_COMPLETE = 6, /**< Disconnection Complete. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_IMAGE_TRANSFER_COMPLETE = 7, /**< Image Transfer Complete. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_SW_ERROR = 8, /**< sw error. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_SW_EXCEPTION = 9, /**< sw exception. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID_SW_HEALTH_CHECK_FAILURE = 10, /**< Software Health Check Failure. */
    BCMOLT_DEVICE_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_device_auto_cfg_data_id__begin BCMOLT_DEVICE_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_device_auto_cfg_data_id_connection_complete BCMOLT_DEVICE_AUTO_CFG_DATA_ID_CONNECTION_COMPLETE
#define bcmolt_device_auto_cfg_data_id_connection_established BCMOLT_DEVICE_AUTO_CFG_DATA_ID_CONNECTION_ESTABLISHED
#define bcmolt_device_auto_cfg_data_id_connection_failure BCMOLT_DEVICE_AUTO_CFG_DATA_ID_CONNECTION_FAILURE
#define bcmolt_device_auto_cfg_data_id_ddr_test_complete BCMOLT_DEVICE_AUTO_CFG_DATA_ID_DDR_TEST_COMPLETE
#define bcmolt_device_auto_cfg_data_id_device_keep_alive BCMOLT_DEVICE_AUTO_CFG_DATA_ID_DEVICE_KEEP_ALIVE
#define bcmolt_device_auto_cfg_data_id_device_ready BCMOLT_DEVICE_AUTO_CFG_DATA_ID_DEVICE_READY
#define bcmolt_device_auto_cfg_data_id_disconnection_complete BCMOLT_DEVICE_AUTO_CFG_DATA_ID_DISCONNECTION_COMPLETE
#define bcmolt_device_auto_cfg_data_id_image_transfer_complete BCMOLT_DEVICE_AUTO_CFG_DATA_ID_IMAGE_TRANSFER_COMPLETE
#define bcmolt_device_auto_cfg_data_id_sw_error BCMOLT_DEVICE_AUTO_CFG_DATA_ID_SW_ERROR
#define bcmolt_device_auto_cfg_data_id_sw_exception BCMOLT_DEVICE_AUTO_CFG_DATA_ID_SW_EXCEPTION
#define bcmolt_device_auto_cfg_data_id_sw_health_check_failure BCMOLT_DEVICE_AUTO_CFG_DATA_ID_SW_HEALTH_CHECK_FAILURE
#define bcmolt_device_auto_cfg_data_id__num_of BCMOLT_DEVICE_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_device_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_device_auto_cfg_data_id_full_mask 0x7FF

} bcmolt_device_auto_cfg_data_id;

/** Identifiers for all fields in a 'erps_interface_key'. */
typedef enum
{
    BCMOLT_ERPS_INTERFACE_KEY_ID__BEGIN = 0,
    BCMOLT_ERPS_INTERFACE_KEY_ID_ID = 0, /**< ID. */
    BCMOLT_ERPS_INTERFACE_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_erps_interface_key_id__begin BCMOLT_ERPS_INTERFACE_KEY_ID__BEGIN
#define bcmolt_erps_interface_key_id_id BCMOLT_ERPS_INTERFACE_KEY_ID_ID
#define bcmolt_erps_interface_key_id__num_of BCMOLT_ERPS_INTERFACE_KEY_ID__NUM_OF
#define bcmolt_erps_interface_key_id_all_properties 0xFF
#define bcmolt_erps_interface_key_id_full_mask 0x1

} bcmolt_erps_interface_key_id;

/** Identifiers for all fields in a 'erps_interface_cfg_data'. */
typedef enum
{
    BCMOLT_ERPS_INTERFACE_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_EAST_PORT = 0, /**< East Port. */
    BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_WEST_PORT = 1, /**< West Port. */
    BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_CONTROL_VLAN_ID = 2, /**< Control VLAN Id. */
    BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_EAST_PORT_STATE = 9, /**< East Port State. */
    BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_WEST_PORT_STATE = 10, /**< West Port State. */
    BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_STATE = 11, /**< state. */
    BCMOLT_ERPS_INTERFACE_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_erps_interface_cfg_data_id__begin BCMOLT_ERPS_INTERFACE_CFG_DATA_ID__BEGIN
#define bcmolt_erps_interface_cfg_data_id_east_port BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_EAST_PORT
#define bcmolt_erps_interface_cfg_data_id_west_port BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_WEST_PORT
#define bcmolt_erps_interface_cfg_data_id_control_vlan_id BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_CONTROL_VLAN_ID
#define bcmolt_erps_interface_cfg_data_id_east_port_state BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_EAST_PORT_STATE
#define bcmolt_erps_interface_cfg_data_id_west_port_state BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_WEST_PORT_STATE
#define bcmolt_erps_interface_cfg_data_id_state BCMOLT_ERPS_INTERFACE_CFG_DATA_ID_STATE
#define bcmolt_erps_interface_cfg_data_id__num_of BCMOLT_ERPS_INTERFACE_CFG_DATA_ID__NUM_OF
#define bcmolt_erps_interface_cfg_data_id_all_properties 0xFF
#define bcmolt_erps_interface_cfg_data_id_full_mask 0xE07

} bcmolt_erps_interface_cfg_data_id;

/** Identifiers for all fields in a 'erps_interface_set_ring_port_control_data'. */
typedef enum
{
    BCMOLT_ERPS_INTERFACE_SET_RING_PORT_CONTROL_DATA_ID__BEGIN = 0,
    BCMOLT_ERPS_INTERFACE_SET_RING_PORT_CONTROL_DATA_ID_COMMAND = 0, /**< command. */
    BCMOLT_ERPS_INTERFACE_SET_RING_PORT_CONTROL_DATA_ID_PORT = 1, /**< port. */
    BCMOLT_ERPS_INTERFACE_SET_RING_PORT_CONTROL_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_erps_interface_set_ring_port_control_data_id__begin BCMOLT_ERPS_INTERFACE_SET_RING_PORT_CONTROL_DATA_ID__BEGIN
#define bcmolt_erps_interface_set_ring_port_control_data_id_command BCMOLT_ERPS_INTERFACE_SET_RING_PORT_CONTROL_DATA_ID_COMMAND
#define bcmolt_erps_interface_set_ring_port_control_data_id_port BCMOLT_ERPS_INTERFACE_SET_RING_PORT_CONTROL_DATA_ID_PORT
#define bcmolt_erps_interface_set_ring_port_control_data_id__num_of BCMOLT_ERPS_INTERFACE_SET_RING_PORT_CONTROL_DATA_ID__NUM_OF
#define bcmolt_erps_interface_set_ring_port_control_data_id_all_properties 0xFF
#define bcmolt_erps_interface_set_ring_port_control_data_id_full_mask 0x3

} bcmolt_erps_interface_set_ring_port_control_data_id;

/** Identifiers for all fields in a 'erps_interface_ring_port_control_data'. */
typedef enum
{
    BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID__BEGIN = 0,
    BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID_PORT_ID = 0, /**< port id. */
    BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID_COMMAND = 1, /**< command. */
    BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID_PORT_STATE = 2, /**< Port State. */
    BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID_RESULT = 3, /**< Result. */
    BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_erps_interface_ring_port_control_data_id__begin BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID__BEGIN
#define bcmolt_erps_interface_ring_port_control_data_id_port_id BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID_PORT_ID
#define bcmolt_erps_interface_ring_port_control_data_id_command BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID_COMMAND
#define bcmolt_erps_interface_ring_port_control_data_id_port_state BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID_PORT_STATE
#define bcmolt_erps_interface_ring_port_control_data_id_result BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID_RESULT
#define bcmolt_erps_interface_ring_port_control_data_id__num_of BCMOLT_ERPS_INTERFACE_RING_PORT_CONTROL_DATA_ID__NUM_OF
#define bcmolt_erps_interface_ring_port_control_data_id_all_properties 0xFF
#define bcmolt_erps_interface_ring_port_control_data_id_full_mask 0xF

} bcmolt_erps_interface_ring_port_control_data_id;

/** Identifiers for all fields in a 'erps_interface_auto_cfg_data'. */
typedef enum
{
    BCMOLT_ERPS_INTERFACE_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ERPS_INTERFACE_AUTO_CFG_DATA_ID_RING_PORT_CONTROL = 0, /**< Ring Port Control. */
    BCMOLT_ERPS_INTERFACE_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_erps_interface_auto_cfg_data_id__begin BCMOLT_ERPS_INTERFACE_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_erps_interface_auto_cfg_data_id_ring_port_control BCMOLT_ERPS_INTERFACE_AUTO_CFG_DATA_ID_RING_PORT_CONTROL
#define bcmolt_erps_interface_auto_cfg_data_id__num_of BCMOLT_ERPS_INTERFACE_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_erps_interface_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_erps_interface_auto_cfg_data_id_full_mask 0x1

} bcmolt_erps_interface_auto_cfg_data_id;

/** Identifiers for all fields in a 'eth_oam_key'. */
typedef enum
{
    BCMOLT_ETH_OAM_KEY_ID__BEGIN = 0,
    BCMOLT_ETH_OAM_KEY_ID_ID = 0, /**< id. */
    BCMOLT_ETH_OAM_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_eth_oam_key_id__begin BCMOLT_ETH_OAM_KEY_ID__BEGIN
#define bcmolt_eth_oam_key_id_id BCMOLT_ETH_OAM_KEY_ID_ID
#define bcmolt_eth_oam_key_id__num_of BCMOLT_ETH_OAM_KEY_ID__NUM_OF
#define bcmolt_eth_oam_key_id_all_properties 0xFF
#define bcmolt_eth_oam_key_id_full_mask 0x1

} bcmolt_eth_oam_key_id;

/** Identifiers for all fields in a 'eth_oam_cfg_data'. */
typedef enum
{
    BCMOLT_ETH_OAM_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ETH_OAM_CFG_DATA_ID_INTF_REF = 0, /**< Network Interface Reference. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_LOCAL_MEP = 1, /**< Local MEP. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_REMOTE_MEP = 2, /**< Remote MEP. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_STATE = 5, /**< Config State. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_SOURCE_MAC = 8, /**< Source MAC. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_DEST_MAC = 9, /**< Destination Mac. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_PKT_TAG_TYPE = 10, /**< Tag Count. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_O_VID = 11, /**< Outer Tag. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_O_PBITS = 12, /**< Outer PBits. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_O_TPID = 13, /**< Outer TPID. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_I_VID = 14, /**< Inner Tag. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_I_PBITS = 15, /**< Inner PBits. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_I_TPID = 16, /**< Inner TPID. */
    BCMOLT_ETH_OAM_CFG_DATA_ID_MEG = 17, /**< MEG Config. */
    BCMOLT_ETH_OAM_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_eth_oam_cfg_data_id__begin BCMOLT_ETH_OAM_CFG_DATA_ID__BEGIN
#define bcmolt_eth_oam_cfg_data_id_intf_ref BCMOLT_ETH_OAM_CFG_DATA_ID_INTF_REF
#define bcmolt_eth_oam_cfg_data_id_local_mep BCMOLT_ETH_OAM_CFG_DATA_ID_LOCAL_MEP
#define bcmolt_eth_oam_cfg_data_id_remote_mep BCMOLT_ETH_OAM_CFG_DATA_ID_REMOTE_MEP
#define bcmolt_eth_oam_cfg_data_id_state BCMOLT_ETH_OAM_CFG_DATA_ID_STATE
#define bcmolt_eth_oam_cfg_data_id_source_mac BCMOLT_ETH_OAM_CFG_DATA_ID_SOURCE_MAC
#define bcmolt_eth_oam_cfg_data_id_dest_mac BCMOLT_ETH_OAM_CFG_DATA_ID_DEST_MAC
#define bcmolt_eth_oam_cfg_data_id_pkt_tag_type BCMOLT_ETH_OAM_CFG_DATA_ID_PKT_TAG_TYPE
#define bcmolt_eth_oam_cfg_data_id_o_vid BCMOLT_ETH_OAM_CFG_DATA_ID_O_VID
#define bcmolt_eth_oam_cfg_data_id_o_pbits BCMOLT_ETH_OAM_CFG_DATA_ID_O_PBITS
#define bcmolt_eth_oam_cfg_data_id_o_tpid BCMOLT_ETH_OAM_CFG_DATA_ID_O_TPID
#define bcmolt_eth_oam_cfg_data_id_i_vid BCMOLT_ETH_OAM_CFG_DATA_ID_I_VID
#define bcmolt_eth_oam_cfg_data_id_i_pbits BCMOLT_ETH_OAM_CFG_DATA_ID_I_PBITS
#define bcmolt_eth_oam_cfg_data_id_i_tpid BCMOLT_ETH_OAM_CFG_DATA_ID_I_TPID
#define bcmolt_eth_oam_cfg_data_id_meg BCMOLT_ETH_OAM_CFG_DATA_ID_MEG
#define bcmolt_eth_oam_cfg_data_id__num_of BCMOLT_ETH_OAM_CFG_DATA_ID__NUM_OF
#define bcmolt_eth_oam_cfg_data_id_all_properties 0xFF
#define bcmolt_eth_oam_cfg_data_id_full_mask 0x3FF27

} bcmolt_eth_oam_cfg_data_id;

/** Identifiers for all fields in a 'eth_oam_ccm_event_data'. */
typedef enum
{
    BCMOLT_ETH_OAM_CCM_EVENT_DATA_ID__BEGIN = 1,
    BCMOLT_ETH_OAM_CCM_EVENT_DATA_ID_EVENT = 1, /**< CCM event. */
    BCMOLT_ETH_OAM_CCM_EVENT_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_eth_oam_ccm_event_data_id__begin BCMOLT_ETH_OAM_CCM_EVENT_DATA_ID__BEGIN
#define bcmolt_eth_oam_ccm_event_data_id_event BCMOLT_ETH_OAM_CCM_EVENT_DATA_ID_EVENT
#define bcmolt_eth_oam_ccm_event_data_id__num_of BCMOLT_ETH_OAM_CCM_EVENT_DATA_ID__NUM_OF
#define bcmolt_eth_oam_ccm_event_data_id_all_properties 0xFF
#define bcmolt_eth_oam_ccm_event_data_id_full_mask 0x2

} bcmolt_eth_oam_ccm_event_data_id;

/** Identifiers for all fields in a 'eth_oam_set_mep_state_data'. */
typedef enum
{
    BCMOLT_ETH_OAM_SET_MEP_STATE_DATA_ID__BEGIN = 0,
    BCMOLT_ETH_OAM_SET_MEP_STATE_DATA_ID_TYPE = 0, /**< MEP Type. */
    BCMOLT_ETH_OAM_SET_MEP_STATE_DATA_ID_STATE = 1, /**< MEP Control State. */
    BCMOLT_ETH_OAM_SET_MEP_STATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_eth_oam_set_mep_state_data_id__begin BCMOLT_ETH_OAM_SET_MEP_STATE_DATA_ID__BEGIN
#define bcmolt_eth_oam_set_mep_state_data_id_type BCMOLT_ETH_OAM_SET_MEP_STATE_DATA_ID_TYPE
#define bcmolt_eth_oam_set_mep_state_data_id_state BCMOLT_ETH_OAM_SET_MEP_STATE_DATA_ID_STATE
#define bcmolt_eth_oam_set_mep_state_data_id__num_of BCMOLT_ETH_OAM_SET_MEP_STATE_DATA_ID__NUM_OF
#define bcmolt_eth_oam_set_mep_state_data_id_all_properties 0xFF
#define bcmolt_eth_oam_set_mep_state_data_id_full_mask 0x3

} bcmolt_eth_oam_set_mep_state_data_id;

/** Identifiers for all fields in a 'eth_oam_state_change_data'. */
typedef enum
{
    BCMOLT_ETH_OAM_STATE_CHANGE_DATA_ID__BEGIN = 0,
    BCMOLT_ETH_OAM_STATE_CHANGE_DATA_ID_RESULT = 0, /**< Command Result. */
    BCMOLT_ETH_OAM_STATE_CHANGE_DATA_ID_OLD_STATE = 1, /**< Old State. */
    BCMOLT_ETH_OAM_STATE_CHANGE_DATA_ID_NEW_STATE = 2, /**< New State. */
    BCMOLT_ETH_OAM_STATE_CHANGE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_eth_oam_state_change_data_id__begin BCMOLT_ETH_OAM_STATE_CHANGE_DATA_ID__BEGIN
#define bcmolt_eth_oam_state_change_data_id_result BCMOLT_ETH_OAM_STATE_CHANGE_DATA_ID_RESULT
#define bcmolt_eth_oam_state_change_data_id_old_state BCMOLT_ETH_OAM_STATE_CHANGE_DATA_ID_OLD_STATE
#define bcmolt_eth_oam_state_change_data_id_new_state BCMOLT_ETH_OAM_STATE_CHANGE_DATA_ID_NEW_STATE
#define bcmolt_eth_oam_state_change_data_id__num_of BCMOLT_ETH_OAM_STATE_CHANGE_DATA_ID__NUM_OF
#define bcmolt_eth_oam_state_change_data_id_all_properties 0xFF
#define bcmolt_eth_oam_state_change_data_id_full_mask 0x7

} bcmolt_eth_oam_state_change_data_id;

/** Identifiers for all fields in a 'eth_oam_auto_cfg_data'. */
typedef enum
{
    BCMOLT_ETH_OAM_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ETH_OAM_AUTO_CFG_DATA_ID_CCM_EVENT = 0, /**< CFM CCM Event. */
    BCMOLT_ETH_OAM_AUTO_CFG_DATA_ID_STATE_CHANGE = 1, /**< State Change. */
    BCMOLT_ETH_OAM_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_eth_oam_auto_cfg_data_id__begin BCMOLT_ETH_OAM_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_eth_oam_auto_cfg_data_id_ccm_event BCMOLT_ETH_OAM_AUTO_CFG_DATA_ID_CCM_EVENT
#define bcmolt_eth_oam_auto_cfg_data_id_state_change BCMOLT_ETH_OAM_AUTO_CFG_DATA_ID_STATE_CHANGE
#define bcmolt_eth_oam_auto_cfg_data_id__num_of BCMOLT_ETH_OAM_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_eth_oam_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_eth_oam_auto_cfg_data_id_full_mask 0x3

} bcmolt_eth_oam_auto_cfg_data_id;

/** Identifiers for all fields in a 'flow_cfg_data'. */
typedef enum
{
    BCMOLT_FLOW_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_FLOW_CFG_DATA_ID_INGRESS_INTF = 0, /**< Ingress interface. */
    BCMOLT_FLOW_CFG_DATA_ID_EGRESS_INTF = 1, /**< Egress interface. */
    BCMOLT_FLOW_CFG_DATA_ID_ONU_ID = 2, /**< ONU ID. */
    BCMOLT_FLOW_CFG_DATA_ID_SVC_PORT_ID = 3, /**< Service Port ID. */
    BCMOLT_FLOW_CFG_DATA_ID_CLASSIFIER = 4, /**< Classifier. */
    BCMOLT_FLOW_CFG_DATA_ID_PRIORITY = 5, /**< Priority. */
    BCMOLT_FLOW_CFG_DATA_ID_ACTION = 6, /**< Action. */
    BCMOLT_FLOW_CFG_DATA_ID_GROUP_ID = 7, /**< Group ID. */
    BCMOLT_FLOW_CFG_DATA_ID_EGRESS_QOS = 8, /**< Egress qos. */
    BCMOLT_FLOW_CFG_DATA_ID_STATE = 9, /**< Flow State. */
    BCMOLT_FLOW_CFG_DATA_ID_LOCAL_SWITCHING = 10, /**< Local Switching. */
    BCMOLT_FLOW_CFG_DATA_ID_COOKIE = 11, /**< Cookie. */
    BCMOLT_FLOW_CFG_DATA_ID_STATISTICS = 12, /**< statistics control. */
    BCMOLT_FLOW_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_flow_cfg_data_id__begin BCMOLT_FLOW_CFG_DATA_ID__BEGIN
#define bcmolt_flow_cfg_data_id_ingress_intf BCMOLT_FLOW_CFG_DATA_ID_INGRESS_INTF
#define bcmolt_flow_cfg_data_id_egress_intf BCMOLT_FLOW_CFG_DATA_ID_EGRESS_INTF
#define bcmolt_flow_cfg_data_id_onu_id BCMOLT_FLOW_CFG_DATA_ID_ONU_ID
#define bcmolt_flow_cfg_data_id_svc_port_id BCMOLT_FLOW_CFG_DATA_ID_SVC_PORT_ID
#define bcmolt_flow_cfg_data_id_classifier BCMOLT_FLOW_CFG_DATA_ID_CLASSIFIER
#define bcmolt_flow_cfg_data_id_priority BCMOLT_FLOW_CFG_DATA_ID_PRIORITY
#define bcmolt_flow_cfg_data_id_action BCMOLT_FLOW_CFG_DATA_ID_ACTION
#define bcmolt_flow_cfg_data_id_group_id BCMOLT_FLOW_CFG_DATA_ID_GROUP_ID
#define bcmolt_flow_cfg_data_id_egress_qos BCMOLT_FLOW_CFG_DATA_ID_EGRESS_QOS
#define bcmolt_flow_cfg_data_id_state BCMOLT_FLOW_CFG_DATA_ID_STATE
#define bcmolt_flow_cfg_data_id_local_switching BCMOLT_FLOW_CFG_DATA_ID_LOCAL_SWITCHING
#define bcmolt_flow_cfg_data_id_cookie BCMOLT_FLOW_CFG_DATA_ID_COOKIE
#define bcmolt_flow_cfg_data_id_statistics BCMOLT_FLOW_CFG_DATA_ID_STATISTICS
#define bcmolt_flow_cfg_data_id__num_of BCMOLT_FLOW_CFG_DATA_ID__NUM_OF
#define bcmolt_flow_cfg_data_id_all_properties 0xFF
#define bcmolt_flow_cfg_data_id_full_mask 0x1FFF

} bcmolt_flow_cfg_data_id;

/** Identifiers for all fields in a 'flow_key'. */
typedef enum
{
    BCMOLT_FLOW_KEY_ID__BEGIN = 0,
    BCMOLT_FLOW_KEY_ID_FLOW_ID = 0, /**< Flow ID. */
    BCMOLT_FLOW_KEY_ID_FLOW_TYPE = 1, /**< Flow type. */
    BCMOLT_FLOW_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_flow_key_id__begin BCMOLT_FLOW_KEY_ID__BEGIN
#define bcmolt_flow_key_id_flow_id BCMOLT_FLOW_KEY_ID_FLOW_ID
#define bcmolt_flow_key_id_flow_type BCMOLT_FLOW_KEY_ID_FLOW_TYPE
#define bcmolt_flow_key_id__num_of BCMOLT_FLOW_KEY_ID__NUM_OF
#define bcmolt_flow_key_id_all_properties 0xFF
#define bcmolt_flow_key_id_full_mask 0x3

} bcmolt_flow_key_id;

/** Identifiers for all fields in a 'flow_send_eth_packet_data'. */
typedef enum
{
    BCMOLT_FLOW_SEND_ETH_PACKET_DATA_ID__BEGIN = 0,
    BCMOLT_FLOW_SEND_ETH_PACKET_DATA_ID_BUFFER = 0, /**< buffer. */
    BCMOLT_FLOW_SEND_ETH_PACKET_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_flow_send_eth_packet_data_id__begin BCMOLT_FLOW_SEND_ETH_PACKET_DATA_ID__BEGIN
#define bcmolt_flow_send_eth_packet_data_id_buffer BCMOLT_FLOW_SEND_ETH_PACKET_DATA_ID_BUFFER
#define bcmolt_flow_send_eth_packet_data_id__num_of BCMOLT_FLOW_SEND_ETH_PACKET_DATA_ID__NUM_OF
#define bcmolt_flow_send_eth_packet_data_id_all_properties 0xFF
#define bcmolt_flow_send_eth_packet_data_id_full_mask 0x1

} bcmolt_flow_send_eth_packet_data_id;

/** Identifiers for all fields in a 'gpio_key'. */
typedef enum
{
    BCMOLT_GPIO_KEY_ID__BEGIN = 0,
    BCMOLT_GPIO_KEY_ID_DEVICE_ID = 0, /**< Device ID. */
    BCMOLT_GPIO_KEY_ID_GPIO_ID = 1, /**< GPIO ID. */
    BCMOLT_GPIO_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_gpio_key_id__begin BCMOLT_GPIO_KEY_ID__BEGIN
#define bcmolt_gpio_key_id_device_id BCMOLT_GPIO_KEY_ID_DEVICE_ID
#define bcmolt_gpio_key_id_gpio_id BCMOLT_GPIO_KEY_ID_GPIO_ID
#define bcmolt_gpio_key_id__num_of BCMOLT_GPIO_KEY_ID__NUM_OF
#define bcmolt_gpio_key_id_all_properties 0xFF
#define bcmolt_gpio_key_id_full_mask 0x3

} bcmolt_gpio_key_id;

/** Identifiers for all fields in a 'gpio_cfg_data'. */
typedef enum
{
    BCMOLT_GPIO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_GPIO_CFG_DATA_ID_DIRECTION = 0, /**< Direction. */
    BCMOLT_GPIO_CFG_DATA_ID_VALUE = 1, /**< Value. */
    BCMOLT_GPIO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_gpio_cfg_data_id__begin BCMOLT_GPIO_CFG_DATA_ID__BEGIN
#define bcmolt_gpio_cfg_data_id_direction BCMOLT_GPIO_CFG_DATA_ID_DIRECTION
#define bcmolt_gpio_cfg_data_id_value BCMOLT_GPIO_CFG_DATA_ID_VALUE
#define bcmolt_gpio_cfg_data_id__num_of BCMOLT_GPIO_CFG_DATA_ID__NUM_OF
#define bcmolt_gpio_cfg_data_id_all_properties 0xFF
#define bcmolt_gpio_cfg_data_id_full_mask 0x3

} bcmolt_gpio_cfg_data_id;

/** Identifiers for all fields in a 'group_cfg_data'. */
typedef enum
{
    BCMOLT_GROUP_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_GROUP_CFG_DATA_ID_MEMBERS = 0, /**< Member. */
    BCMOLT_GROUP_CFG_DATA_ID_COOKIE = 1, /**< Application cookie. */
    BCMOLT_GROUP_CFG_DATA_ID_TYPE = 2, /**< Type of the group. */
    BCMOLT_GROUP_CFG_DATA_ID_STATE = 3, /**< group state. */
    BCMOLT_GROUP_CFG_DATA_ID_ACTION = 4, /**< Action. */
    BCMOLT_GROUP_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_group_cfg_data_id__begin BCMOLT_GROUP_CFG_DATA_ID__BEGIN
#define bcmolt_group_cfg_data_id_members BCMOLT_GROUP_CFG_DATA_ID_MEMBERS
#define bcmolt_group_cfg_data_id_cookie BCMOLT_GROUP_CFG_DATA_ID_COOKIE
#define bcmolt_group_cfg_data_id_type BCMOLT_GROUP_CFG_DATA_ID_TYPE
#define bcmolt_group_cfg_data_id_state BCMOLT_GROUP_CFG_DATA_ID_STATE
#define bcmolt_group_cfg_data_id_action BCMOLT_GROUP_CFG_DATA_ID_ACTION
#define bcmolt_group_cfg_data_id__num_of BCMOLT_GROUP_CFG_DATA_ID__NUM_OF
#define bcmolt_group_cfg_data_id_all_properties 0xFF
#define bcmolt_group_cfg_data_id_full_mask 0x1F

} bcmolt_group_cfg_data_id;

/** Identifiers for all fields in a 'group_key'. */
typedef enum
{
    BCMOLT_GROUP_KEY_ID__BEGIN = 0,
    BCMOLT_GROUP_KEY_ID_ID = 0, /**< Group ID. */
    BCMOLT_GROUP_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_group_key_id__begin BCMOLT_GROUP_KEY_ID__BEGIN
#define bcmolt_group_key_id_id BCMOLT_GROUP_KEY_ID_ID
#define bcmolt_group_key_id__num_of BCMOLT_GROUP_KEY_ID__NUM_OF
#define bcmolt_group_key_id_all_properties 0xFF
#define bcmolt_group_key_id_full_mask 0x1

} bcmolt_group_key_id;

/** Identifiers for all fields in a 'group_members_update_data'. */
typedef enum
{
    BCMOLT_GROUP_MEMBERS_UPDATE_DATA_ID__BEGIN = 0,
    BCMOLT_GROUP_MEMBERS_UPDATE_DATA_ID_MEMBERS_CMD = 0, /**< members_cmd. */
    BCMOLT_GROUP_MEMBERS_UPDATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_group_members_update_data_id__begin BCMOLT_GROUP_MEMBERS_UPDATE_DATA_ID__BEGIN
#define bcmolt_group_members_update_data_id_members_cmd BCMOLT_GROUP_MEMBERS_UPDATE_DATA_ID_MEMBERS_CMD
#define bcmolt_group_members_update_data_id__num_of BCMOLT_GROUP_MEMBERS_UPDATE_DATA_ID__NUM_OF
#define bcmolt_group_members_update_data_id_all_properties 0xFF
#define bcmolt_group_members_update_data_id_full_mask 0x1

} bcmolt_group_members_update_data_id;

/** Identifiers for all fields in a 'group_complete_members_update_data'. */
typedef enum
{
    BCMOLT_GROUP_COMPLETE_MEMBERS_UPDATE_DATA_ID__BEGIN = 0,
    BCMOLT_GROUP_COMPLETE_MEMBERS_UPDATE_DATA_ID_RESULT = 0, /**< result. */
    BCMOLT_GROUP_COMPLETE_MEMBERS_UPDATE_DATA_ID_FAIL_REASON = 1, /**< fail reason. */
    BCMOLT_GROUP_COMPLETE_MEMBERS_UPDATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_group_complete_members_update_data_id__begin BCMOLT_GROUP_COMPLETE_MEMBERS_UPDATE_DATA_ID__BEGIN
#define bcmolt_group_complete_members_update_data_id_result BCMOLT_GROUP_COMPLETE_MEMBERS_UPDATE_DATA_ID_RESULT
#define bcmolt_group_complete_members_update_data_id_fail_reason BCMOLT_GROUP_COMPLETE_MEMBERS_UPDATE_DATA_ID_FAIL_REASON
#define bcmolt_group_complete_members_update_data_id__num_of BCMOLT_GROUP_COMPLETE_MEMBERS_UPDATE_DATA_ID__NUM_OF
#define bcmolt_group_complete_members_update_data_id_all_properties 0xFF
#define bcmolt_group_complete_members_update_data_id_full_mask 0x3

} bcmolt_group_complete_members_update_data_id;

/** Identifiers for all fields in a 'group_auto_cfg_data'. */
typedef enum
{
    BCMOLT_GROUP_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_GROUP_AUTO_CFG_DATA_ID_COMPLETE_MEMBERS_UPDATE = 0, /**< complete_members_update. */
    BCMOLT_GROUP_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_group_auto_cfg_data_id__begin BCMOLT_GROUP_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_group_auto_cfg_data_id_complete_members_update BCMOLT_GROUP_AUTO_CFG_DATA_ID_COMPLETE_MEMBERS_UPDATE
#define bcmolt_group_auto_cfg_data_id__num_of BCMOLT_GROUP_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_group_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_group_auto_cfg_data_id_full_mask 0x1

} bcmolt_group_auto_cfg_data_id;

/** Identifiers for all fields in a 'inband_mgmt_channel_cfg_data'. */
typedef enum
{
    BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_NNI_INTF = 0, /**< NNI Interface Reference. */
    BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_NIC_INTF_ID = 1, /**< NIC facing logical interface Id. */
    BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_VLAN_ID = 2, /**< vlan Id classification for this inband mgmt channel. */
    BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_NIC_CARD_MAC = 3, /**< NIC card MAC address. */
    BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_ACTION = 4, /**< Inband Mgmt Action. */
    BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_STATE = 5, /**< Inband Mgmt State. */
    BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_inband_mgmt_channel_cfg_data_id__begin BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID__BEGIN
#define bcmolt_inband_mgmt_channel_cfg_data_id_nni_intf BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_NNI_INTF
#define bcmolt_inband_mgmt_channel_cfg_data_id_nic_intf_id BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_NIC_INTF_ID
#define bcmolt_inband_mgmt_channel_cfg_data_id_vlan_id BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_VLAN_ID
#define bcmolt_inband_mgmt_channel_cfg_data_id_nic_card_mac BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_NIC_CARD_MAC
#define bcmolt_inband_mgmt_channel_cfg_data_id_action BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_ACTION
#define bcmolt_inband_mgmt_channel_cfg_data_id_state BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID_STATE
#define bcmolt_inband_mgmt_channel_cfg_data_id__num_of BCMOLT_INBAND_MGMT_CHANNEL_CFG_DATA_ID__NUM_OF
#define bcmolt_inband_mgmt_channel_cfg_data_id_all_properties 0xFF
#define bcmolt_inband_mgmt_channel_cfg_data_id_full_mask 0x3F

} bcmolt_inband_mgmt_channel_cfg_data_id;

/** Identifiers for all fields in a 'inband_mgmt_channel_key'. */
typedef enum
{
    BCMOLT_INBAND_MGMT_CHANNEL_KEY_ID__BEGIN = 0,
    BCMOLT_INBAND_MGMT_CHANNEL_KEY_ID_ID = 0, /**< Inband Mgmt instance Id. */
    BCMOLT_INBAND_MGMT_CHANNEL_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_inband_mgmt_channel_key_id__begin BCMOLT_INBAND_MGMT_CHANNEL_KEY_ID__BEGIN
#define bcmolt_inband_mgmt_channel_key_id_id BCMOLT_INBAND_MGMT_CHANNEL_KEY_ID_ID
#define bcmolt_inband_mgmt_channel_key_id__num_of BCMOLT_INBAND_MGMT_CHANNEL_KEY_ID__NUM_OF
#define bcmolt_inband_mgmt_channel_key_id_all_properties 0xFF
#define bcmolt_inband_mgmt_channel_key_id_full_mask 0x1

} bcmolt_inband_mgmt_channel_key_id;

/** Identifiers for all fields in a 'internal_nni_key'. */
typedef enum
{
    BCMOLT_INTERNAL_NNI_KEY_ID__BEGIN = 0,
    BCMOLT_INTERNAL_NNI_KEY_ID_PON_NI = 0, /**< PON NI. */
    BCMOLT_INTERNAL_NNI_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_internal_nni_key_id__begin BCMOLT_INTERNAL_NNI_KEY_ID__BEGIN
#define bcmolt_internal_nni_key_id_pon_ni BCMOLT_INTERNAL_NNI_KEY_ID_PON_NI
#define bcmolt_internal_nni_key_id__num_of BCMOLT_INTERNAL_NNI_KEY_ID__NUM_OF
#define bcmolt_internal_nni_key_id_all_properties 0xFF
#define bcmolt_internal_nni_key_id_full_mask 0x1

} bcmolt_internal_nni_key_id;

/** Identifiers for all fields in a 'internal_nni_cfg_data'. */
typedef enum
{
    BCMOLT_INTERNAL_NNI_CFG_DATA_ID__BEGIN = 1,
    BCMOLT_INTERNAL_NNI_CFG_DATA_ID_MAC_ADDRESS = 1, /**< Mac Address. */
    BCMOLT_INTERNAL_NNI_CFG_DATA_ID_ACTIVE_NNI = 2, /**< Active NNI. */
    BCMOLT_INTERNAL_NNI_CFG_DATA_ID_STATUS = 3, /**< NNI Status. */
    BCMOLT_INTERNAL_NNI_CFG_DATA_ID_BACKUP_STATUS = 4, /**< NNI Backup Status. */
    BCMOLT_INTERNAL_NNI_CFG_DATA_ID_LOOPBACK_TYPE = 5, /**< Loopback Type. */
    BCMOLT_INTERNAL_NNI_CFG_DATA_ID_STATUS_POLLING_INTERVAL_MS = 7, /**< NNI Status Polling Interval (ms). */
    BCMOLT_INTERNAL_NNI_CFG_DATA_ID_REDUNDANCY = 8, /**< NNI Redundancy. */
    BCMOLT_INTERNAL_NNI_CFG_DATA_ID_FLOW_CONTROL = 9, /**< Flow Control. */
    BCMOLT_INTERNAL_NNI_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_internal_nni_cfg_data_id__begin BCMOLT_INTERNAL_NNI_CFG_DATA_ID__BEGIN
#define bcmolt_internal_nni_cfg_data_id_mac_address BCMOLT_INTERNAL_NNI_CFG_DATA_ID_MAC_ADDRESS
#define bcmolt_internal_nni_cfg_data_id_active_nni BCMOLT_INTERNAL_NNI_CFG_DATA_ID_ACTIVE_NNI
#define bcmolt_internal_nni_cfg_data_id_status BCMOLT_INTERNAL_NNI_CFG_DATA_ID_STATUS
#define bcmolt_internal_nni_cfg_data_id_backup_status BCMOLT_INTERNAL_NNI_CFG_DATA_ID_BACKUP_STATUS
#define bcmolt_internal_nni_cfg_data_id_loopback_type BCMOLT_INTERNAL_NNI_CFG_DATA_ID_LOOPBACK_TYPE
#define bcmolt_internal_nni_cfg_data_id_status_polling_interval_ms BCMOLT_INTERNAL_NNI_CFG_DATA_ID_STATUS_POLLING_INTERVAL_MS
#define bcmolt_internal_nni_cfg_data_id_redundancy BCMOLT_INTERNAL_NNI_CFG_DATA_ID_REDUNDANCY
#define bcmolt_internal_nni_cfg_data_id_flow_control BCMOLT_INTERNAL_NNI_CFG_DATA_ID_FLOW_CONTROL
#define bcmolt_internal_nni_cfg_data_id__num_of BCMOLT_INTERNAL_NNI_CFG_DATA_ID__NUM_OF
#define bcmolt_internal_nni_cfg_data_id_all_properties 0xFF
#define bcmolt_internal_nni_cfg_data_id_full_mask 0x3BE

} bcmolt_internal_nni_cfg_data_id;

/** Identifiers for all fields in a 'internal_nni_status_changed_data'. */
typedef enum
{
    BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID__BEGIN = 0,
    BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID_NEW_STATUS = 0, /**< New NNI Link Status. */
    BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID_LINK = 1, /**< Link. */
    BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID_PREVIOUS_ACTIVE = 2, /**< Previous Active. */
    BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID_NEW_ACTIVE = 3, /**< New Active. */
    BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_internal_nni_status_changed_data_id__begin BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID__BEGIN
#define bcmolt_internal_nni_status_changed_data_id_new_status BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID_NEW_STATUS
#define bcmolt_internal_nni_status_changed_data_id_link BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID_LINK
#define bcmolt_internal_nni_status_changed_data_id_previous_active BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID_PREVIOUS_ACTIVE
#define bcmolt_internal_nni_status_changed_data_id_new_active BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID_NEW_ACTIVE
#define bcmolt_internal_nni_status_changed_data_id__num_of BCMOLT_INTERNAL_NNI_STATUS_CHANGED_DATA_ID__NUM_OF
#define bcmolt_internal_nni_status_changed_data_id_all_properties 0xFF
#define bcmolt_internal_nni_status_changed_data_id_full_mask 0xF

} bcmolt_internal_nni_status_changed_data_id;

/** Identifiers for all fields in a 'internal_nni_auto_cfg_data'. */
typedef enum
{
    BCMOLT_INTERNAL_NNI_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_INTERNAL_NNI_AUTO_CFG_DATA_ID_STATUS_CHANGED = 0, /**< Status changed. */
    BCMOLT_INTERNAL_NNI_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_internal_nni_auto_cfg_data_id__begin BCMOLT_INTERNAL_NNI_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_internal_nni_auto_cfg_data_id_status_changed BCMOLT_INTERNAL_NNI_AUTO_CFG_DATA_ID_STATUS_CHANGED
#define bcmolt_internal_nni_auto_cfg_data_id__num_of BCMOLT_INTERNAL_NNI_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_internal_nni_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_internal_nni_auto_cfg_data_id_full_mask 0x1

} bcmolt_internal_nni_auto_cfg_data_id;

/** Identifiers for all fields in a 'itupon_alloc_key'. */
typedef enum
{
    BCMOLT_ITUPON_ALLOC_KEY_ID__BEGIN = 0,
    BCMOLT_ITUPON_ALLOC_KEY_ID_PON_NI = 0, /**< PON network interface. */
    BCMOLT_ITUPON_ALLOC_KEY_ID_ALLOC_ID = 1, /**< Alloc ID. */
    BCMOLT_ITUPON_ALLOC_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_alloc_key_id__begin BCMOLT_ITUPON_ALLOC_KEY_ID__BEGIN
#define bcmolt_itupon_alloc_key_id_pon_ni BCMOLT_ITUPON_ALLOC_KEY_ID_PON_NI
#define bcmolt_itupon_alloc_key_id_alloc_id BCMOLT_ITUPON_ALLOC_KEY_ID_ALLOC_ID
#define bcmolt_itupon_alloc_key_id__num_of BCMOLT_ITUPON_ALLOC_KEY_ID__NUM_OF
#define bcmolt_itupon_alloc_key_id_all_properties 0xFF
#define bcmolt_itupon_alloc_key_id_full_mask 0x3

} bcmolt_itupon_alloc_key_id;

/** Identifiers for all fields in a 'itupon_alloc_cfg_data'. */
typedef enum
{
    BCMOLT_ITUPON_ALLOC_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ITUPON_ALLOC_CFG_DATA_ID_STATE = 0, /**< state. */
    BCMOLT_ITUPON_ALLOC_CFG_DATA_ID_SLA = 1, /**< sla. */
    BCMOLT_ITUPON_ALLOC_CFG_DATA_ID_ONU_ID = 2, /**< onu_id. */
    BCMOLT_ITUPON_ALLOC_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_alloc_cfg_data_id__begin BCMOLT_ITUPON_ALLOC_CFG_DATA_ID__BEGIN
#define bcmolt_itupon_alloc_cfg_data_id_state BCMOLT_ITUPON_ALLOC_CFG_DATA_ID_STATE
#define bcmolt_itupon_alloc_cfg_data_id_sla BCMOLT_ITUPON_ALLOC_CFG_DATA_ID_SLA
#define bcmolt_itupon_alloc_cfg_data_id_onu_id BCMOLT_ITUPON_ALLOC_CFG_DATA_ID_ONU_ID
#define bcmolt_itupon_alloc_cfg_data_id__num_of BCMOLT_ITUPON_ALLOC_CFG_DATA_ID__NUM_OF
#define bcmolt_itupon_alloc_cfg_data_id_all_properties 0xFF
#define bcmolt_itupon_alloc_cfg_data_id_full_mask 0x7

} bcmolt_itupon_alloc_cfg_data_id;

/** Identifiers for all fields in a 'itupon_alloc_configuration_completed_data'. */
typedef enum
{
    BCMOLT_ITUPON_ALLOC_CONFIGURATION_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ITUPON_ALLOC_CONFIGURATION_COMPLETED_DATA_ID_STATUS = 0, /**< status. */
    BCMOLT_ITUPON_ALLOC_CONFIGURATION_COMPLETED_DATA_ID_NEW_STATE = 1, /**< new state. */
    BCMOLT_ITUPON_ALLOC_CONFIGURATION_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_alloc_configuration_completed_data_id__begin BCMOLT_ITUPON_ALLOC_CONFIGURATION_COMPLETED_DATA_ID__BEGIN
#define bcmolt_itupon_alloc_configuration_completed_data_id_status BCMOLT_ITUPON_ALLOC_CONFIGURATION_COMPLETED_DATA_ID_STATUS
#define bcmolt_itupon_alloc_configuration_completed_data_id_new_state BCMOLT_ITUPON_ALLOC_CONFIGURATION_COMPLETED_DATA_ID_NEW_STATE
#define bcmolt_itupon_alloc_configuration_completed_data_id__num_of BCMOLT_ITUPON_ALLOC_CONFIGURATION_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_itupon_alloc_configuration_completed_data_id_all_properties 0xFF
#define bcmolt_itupon_alloc_configuration_completed_data_id_full_mask 0x3

} bcmolt_itupon_alloc_configuration_completed_data_id;

/** Identifiers for all fields in a 'itupon_alloc_get_stats_data'. */
typedef enum
{
    BCMOLT_ITUPON_ALLOC_GET_STATS_DATA_ID__BEGIN = 0,
    BCMOLT_ITUPON_ALLOC_GET_STATS_DATA_ID_NUM_OF_CYCLES = 0, /**< Number of cycles. */
    BCMOLT_ITUPON_ALLOC_GET_STATS_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_alloc_get_stats_data_id__begin BCMOLT_ITUPON_ALLOC_GET_STATS_DATA_ID__BEGIN
#define bcmolt_itupon_alloc_get_stats_data_id_num_of_cycles BCMOLT_ITUPON_ALLOC_GET_STATS_DATA_ID_NUM_OF_CYCLES
#define bcmolt_itupon_alloc_get_stats_data_id__num_of BCMOLT_ITUPON_ALLOC_GET_STATS_DATA_ID__NUM_OF
#define bcmolt_itupon_alloc_get_stats_data_id_all_properties 0xFF
#define bcmolt_itupon_alloc_get_stats_data_id_full_mask 0x1

} bcmolt_itupon_alloc_get_stats_data_id;

/** Identifiers for all fields in a 'itupon_alloc_get_alloc_stats_completed_data'. */
typedef enum
{
    BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID_STATUS = 0, /**< status. */
    BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID_AVERAGE_NSR_USED = 1, /**< Average NSR used words. */
    BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID_AVERAGE_NSR_ALLOCATED = 2, /**< Average NSR allocated words. */
    BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID_AVERAGE_SR_REPORT = 3, /**< Average SR report. */
    BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_alloc_get_alloc_stats_completed_data_id__begin BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID__BEGIN
#define bcmolt_itupon_alloc_get_alloc_stats_completed_data_id_status BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID_STATUS
#define bcmolt_itupon_alloc_get_alloc_stats_completed_data_id_average_nsr_used BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID_AVERAGE_NSR_USED
#define bcmolt_itupon_alloc_get_alloc_stats_completed_data_id_average_nsr_allocated BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID_AVERAGE_NSR_ALLOCATED
#define bcmolt_itupon_alloc_get_alloc_stats_completed_data_id_average_sr_report BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID_AVERAGE_SR_REPORT
#define bcmolt_itupon_alloc_get_alloc_stats_completed_data_id__num_of BCMOLT_ITUPON_ALLOC_GET_ALLOC_STATS_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_itupon_alloc_get_alloc_stats_completed_data_id_all_properties 0xFF
#define bcmolt_itupon_alloc_get_alloc_stats_completed_data_id_full_mask 0xF

} bcmolt_itupon_alloc_get_alloc_stats_completed_data_id;

/** Identifiers for all fields in a 'itupon_alloc_set_state_data'. */
typedef enum
{
    BCMOLT_ITUPON_ALLOC_SET_STATE_DATA_ID__BEGIN = 0,
    BCMOLT_ITUPON_ALLOC_SET_STATE_DATA_ID_STATE = 0, /**< State. */
    BCMOLT_ITUPON_ALLOC_SET_STATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_alloc_set_state_data_id__begin BCMOLT_ITUPON_ALLOC_SET_STATE_DATA_ID__BEGIN
#define bcmolt_itupon_alloc_set_state_data_id_state BCMOLT_ITUPON_ALLOC_SET_STATE_DATA_ID_STATE
#define bcmolt_itupon_alloc_set_state_data_id__num_of BCMOLT_ITUPON_ALLOC_SET_STATE_DATA_ID__NUM_OF
#define bcmolt_itupon_alloc_set_state_data_id_all_properties 0xFF
#define bcmolt_itupon_alloc_set_state_data_id_full_mask 0x1

} bcmolt_itupon_alloc_set_state_data_id;

/** Identifiers for all fields in a 'itupon_alloc_auto_cfg_data'. */
typedef enum
{
    BCMOLT_ITUPON_ALLOC_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ITUPON_ALLOC_AUTO_CFG_DATA_ID_CONFIGURATION_COMPLETED = 0, /**< Configuration Completed. */
    BCMOLT_ITUPON_ALLOC_AUTO_CFG_DATA_ID_GET_ALLOC_STATS_COMPLETED = 1, /**< Get alloc ID statistics completed. */
    BCMOLT_ITUPON_ALLOC_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_alloc_auto_cfg_data_id__begin BCMOLT_ITUPON_ALLOC_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_itupon_alloc_auto_cfg_data_id_configuration_completed BCMOLT_ITUPON_ALLOC_AUTO_CFG_DATA_ID_CONFIGURATION_COMPLETED
#define bcmolt_itupon_alloc_auto_cfg_data_id_get_alloc_stats_completed BCMOLT_ITUPON_ALLOC_AUTO_CFG_DATA_ID_GET_ALLOC_STATS_COMPLETED
#define bcmolt_itupon_alloc_auto_cfg_data_id__num_of BCMOLT_ITUPON_ALLOC_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_itupon_alloc_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_itupon_alloc_auto_cfg_data_id_full_mask 0x3

} bcmolt_itupon_alloc_auto_cfg_data_id;

/** Identifiers for all fields in a 'itupon_gem_key'. */
typedef enum
{
    BCMOLT_ITUPON_GEM_KEY_ID__BEGIN = 0,
    BCMOLT_ITUPON_GEM_KEY_ID_PON_NI = 0, /**< PON network interface. */
    BCMOLT_ITUPON_GEM_KEY_ID_GEM_PORT_ID = 1, /**< GEM Port ID. */
    BCMOLT_ITUPON_GEM_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_gem_key_id__begin BCMOLT_ITUPON_GEM_KEY_ID__BEGIN
#define bcmolt_itupon_gem_key_id_pon_ni BCMOLT_ITUPON_GEM_KEY_ID_PON_NI
#define bcmolt_itupon_gem_key_id_gem_port_id BCMOLT_ITUPON_GEM_KEY_ID_GEM_PORT_ID
#define bcmolt_itupon_gem_key_id__num_of BCMOLT_ITUPON_GEM_KEY_ID__NUM_OF
#define bcmolt_itupon_gem_key_id_all_properties 0xFF
#define bcmolt_itupon_gem_key_id_full_mask 0x3

} bcmolt_itupon_gem_key_id;

/** Identifiers for all fields in a 'itupon_gem_cfg_data'. */
typedef enum
{
    BCMOLT_ITUPON_GEM_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ITUPON_GEM_CFG_DATA_ID_CONFIGURATION = 0, /**< Configuration. */
    BCMOLT_ITUPON_GEM_CFG_DATA_ID_ONU_ID = 1, /**< ONU ID. */
    BCMOLT_ITUPON_GEM_CFG_DATA_ID_STATE = 2, /**< state. */
    BCMOLT_ITUPON_GEM_CFG_DATA_ID_ENCRYPTION_MODE = 3, /**< encryption mode. */
    BCMOLT_ITUPON_GEM_CFG_DATA_ID_UPSTREAM_DESTINATION_QUEUE = 4, /**< Upstream destination queue. */
    BCMOLT_ITUPON_GEM_CFG_DATA_ID_CONTROL = 5, /**< control. */
    BCMOLT_ITUPON_GEM_CFG_DATA_ID_MAC_TABLE_ENTRY_LIMIT = 6, /**< MAC table entry limit. */
    BCMOLT_ITUPON_GEM_CFG_DATA_ID_DEBUG_FLOW_CONFIG = 7, /**< debug flow config. */
    BCMOLT_ITUPON_GEM_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_gem_cfg_data_id__begin BCMOLT_ITUPON_GEM_CFG_DATA_ID__BEGIN
#define bcmolt_itupon_gem_cfg_data_id_configuration BCMOLT_ITUPON_GEM_CFG_DATA_ID_CONFIGURATION
#define bcmolt_itupon_gem_cfg_data_id_onu_id BCMOLT_ITUPON_GEM_CFG_DATA_ID_ONU_ID
#define bcmolt_itupon_gem_cfg_data_id_state BCMOLT_ITUPON_GEM_CFG_DATA_ID_STATE
#define bcmolt_itupon_gem_cfg_data_id_encryption_mode BCMOLT_ITUPON_GEM_CFG_DATA_ID_ENCRYPTION_MODE
#define bcmolt_itupon_gem_cfg_data_id_upstream_destination_queue BCMOLT_ITUPON_GEM_CFG_DATA_ID_UPSTREAM_DESTINATION_QUEUE
#define bcmolt_itupon_gem_cfg_data_id_control BCMOLT_ITUPON_GEM_CFG_DATA_ID_CONTROL
#define bcmolt_itupon_gem_cfg_data_id_mac_table_entry_limit BCMOLT_ITUPON_GEM_CFG_DATA_ID_MAC_TABLE_ENTRY_LIMIT
#define bcmolt_itupon_gem_cfg_data_id_debug_flow_config BCMOLT_ITUPON_GEM_CFG_DATA_ID_DEBUG_FLOW_CONFIG
#define bcmolt_itupon_gem_cfg_data_id__num_of BCMOLT_ITUPON_GEM_CFG_DATA_ID__NUM_OF
#define bcmolt_itupon_gem_cfg_data_id_all_properties 0xFF
#define bcmolt_itupon_gem_cfg_data_id_full_mask 0xFF

} bcmolt_itupon_gem_cfg_data_id;

/** Identifiers for all fields in a 'itupon_gem_configuration_completed_data'. */
typedef enum
{
    BCMOLT_ITUPON_GEM_CONFIGURATION_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ITUPON_GEM_CONFIGURATION_COMPLETED_DATA_ID_STATUS = 0, /**< status. */
    BCMOLT_ITUPON_GEM_CONFIGURATION_COMPLETED_DATA_ID_NEW_STATE = 1, /**< new state. */
    BCMOLT_ITUPON_GEM_CONFIGURATION_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_gem_configuration_completed_data_id__begin BCMOLT_ITUPON_GEM_CONFIGURATION_COMPLETED_DATA_ID__BEGIN
#define bcmolt_itupon_gem_configuration_completed_data_id_status BCMOLT_ITUPON_GEM_CONFIGURATION_COMPLETED_DATA_ID_STATUS
#define bcmolt_itupon_gem_configuration_completed_data_id_new_state BCMOLT_ITUPON_GEM_CONFIGURATION_COMPLETED_DATA_ID_NEW_STATE
#define bcmolt_itupon_gem_configuration_completed_data_id__num_of BCMOLT_ITUPON_GEM_CONFIGURATION_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_itupon_gem_configuration_completed_data_id_all_properties 0xFF
#define bcmolt_itupon_gem_configuration_completed_data_id_full_mask 0x3

} bcmolt_itupon_gem_configuration_completed_data_id;

/** Identifiers for all fields in a 'itupon_gem_set_state_data'. */
typedef enum
{
    BCMOLT_ITUPON_GEM_SET_STATE_DATA_ID__BEGIN = 0,
    BCMOLT_ITUPON_GEM_SET_STATE_DATA_ID_STATE = 0, /**< State. */
    BCMOLT_ITUPON_GEM_SET_STATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_gem_set_state_data_id__begin BCMOLT_ITUPON_GEM_SET_STATE_DATA_ID__BEGIN
#define bcmolt_itupon_gem_set_state_data_id_state BCMOLT_ITUPON_GEM_SET_STATE_DATA_ID_STATE
#define bcmolt_itupon_gem_set_state_data_id__num_of BCMOLT_ITUPON_GEM_SET_STATE_DATA_ID__NUM_OF
#define bcmolt_itupon_gem_set_state_data_id_all_properties 0xFF
#define bcmolt_itupon_gem_set_state_data_id_full_mask 0x1

} bcmolt_itupon_gem_set_state_data_id;

/** Identifiers for all fields in a 'itupon_gem_auto_cfg_data'. */
typedef enum
{
    BCMOLT_ITUPON_GEM_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ITUPON_GEM_AUTO_CFG_DATA_ID_CONFIGURATION_COMPLETED = 0, /**< Configuration Completed. */
    BCMOLT_ITUPON_GEM_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_itupon_gem_auto_cfg_data_id__begin BCMOLT_ITUPON_GEM_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_itupon_gem_auto_cfg_data_id_configuration_completed BCMOLT_ITUPON_GEM_AUTO_CFG_DATA_ID_CONFIGURATION_COMPLETED
#define bcmolt_itupon_gem_auto_cfg_data_id__num_of BCMOLT_ITUPON_GEM_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_itupon_gem_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_itupon_gem_auto_cfg_data_id_full_mask 0x1

} bcmolt_itupon_gem_auto_cfg_data_id;

/** Identifiers for all fields in a 'lag_interface_key'. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_KEY_ID__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_KEY_ID_ID = 0, /**< id. */
    BCMOLT_LAG_INTERFACE_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_key_id__begin BCMOLT_LAG_INTERFACE_KEY_ID__BEGIN
#define bcmolt_lag_interface_key_id_id BCMOLT_LAG_INTERFACE_KEY_ID_ID
#define bcmolt_lag_interface_key_id__num_of BCMOLT_LAG_INTERFACE_KEY_ID__NUM_OF
#define bcmolt_lag_interface_key_id_all_properties 0xFF
#define bcmolt_lag_interface_key_id_full_mask 0x1

} bcmolt_lag_interface_key_id;

/** Identifiers for all fields in a 'lag_interface_cfg_data'. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID_CONFIG_STATE = 0, /**< config_state. */
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID_PSC_MODE = 1, /**< PSC mode. */
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID_STATE = 4, /**< state. */
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID_NNI_IDS = 5, /**< nni ids. */
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID_POLICER_PROFILE = 6, /**< policer profile. */
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID_MEMBER_STATUS = 7, /**< member status. */
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID_MEMBER_COUNT = 9, /**< member_count. */
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID_MEMBER_UP_COUNT = 10, /**< member_up_count. */
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID_PROTECTION_TYPE = 11, /**< Protect Interface Type. */
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID_LAG_HEALTH = 12, /**< lag_health. */
    BCMOLT_LAG_INTERFACE_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_cfg_data_id__begin BCMOLT_LAG_INTERFACE_CFG_DATA_ID__BEGIN
#define bcmolt_lag_interface_cfg_data_id_config_state BCMOLT_LAG_INTERFACE_CFG_DATA_ID_CONFIG_STATE
#define bcmolt_lag_interface_cfg_data_id_psc_mode BCMOLT_LAG_INTERFACE_CFG_DATA_ID_PSC_MODE
#define bcmolt_lag_interface_cfg_data_id_state BCMOLT_LAG_INTERFACE_CFG_DATA_ID_STATE
#define bcmolt_lag_interface_cfg_data_id_nni_ids BCMOLT_LAG_INTERFACE_CFG_DATA_ID_NNI_IDS
#define bcmolt_lag_interface_cfg_data_id_policer_profile BCMOLT_LAG_INTERFACE_CFG_DATA_ID_POLICER_PROFILE
#define bcmolt_lag_interface_cfg_data_id_member_status BCMOLT_LAG_INTERFACE_CFG_DATA_ID_MEMBER_STATUS
#define bcmolt_lag_interface_cfg_data_id_member_count BCMOLT_LAG_INTERFACE_CFG_DATA_ID_MEMBER_COUNT
#define bcmolt_lag_interface_cfg_data_id_member_up_count BCMOLT_LAG_INTERFACE_CFG_DATA_ID_MEMBER_UP_COUNT
#define bcmolt_lag_interface_cfg_data_id_protection_type BCMOLT_LAG_INTERFACE_CFG_DATA_ID_PROTECTION_TYPE
#define bcmolt_lag_interface_cfg_data_id_lag_health BCMOLT_LAG_INTERFACE_CFG_DATA_ID_LAG_HEALTH
#define bcmolt_lag_interface_cfg_data_id__num_of BCMOLT_LAG_INTERFACE_CFG_DATA_ID__NUM_OF
#define bcmolt_lag_interface_cfg_data_id_all_properties 0xFF
#define bcmolt_lag_interface_cfg_data_id_full_mask 0x1EF3

} bcmolt_lag_interface_cfg_data_id;

/** Identifiers for all fields in a 'lag_interface_members_update_data'. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_DATA_ID__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_DATA_ID_MEMBERS_CMD = 0, /**< members_cmd. */
    BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_members_update_data_id__begin BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_DATA_ID__BEGIN
#define bcmolt_lag_interface_members_update_data_id_members_cmd BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_DATA_ID_MEMBERS_CMD
#define bcmolt_lag_interface_members_update_data_id__num_of BCMOLT_LAG_INTERFACE_MEMBERS_UPDATE_DATA_ID__NUM_OF
#define bcmolt_lag_interface_members_update_data_id_all_properties 0xFF
#define bcmolt_lag_interface_members_update_data_id_full_mask 0x1

} bcmolt_lag_interface_members_update_data_id;

/** Identifiers for all fields in a 'lag_interface_complete_members_update_data'. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_COMPLETE_MEMBERS_UPDATE_DATA_ID__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_COMPLETE_MEMBERS_UPDATE_DATA_ID_RESULT = 0, /**< result. */
    BCMOLT_LAG_INTERFACE_COMPLETE_MEMBERS_UPDATE_DATA_ID_FAIL_REASON = 1, /**< fail reason. */
    BCMOLT_LAG_INTERFACE_COMPLETE_MEMBERS_UPDATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_complete_members_update_data_id__begin BCMOLT_LAG_INTERFACE_COMPLETE_MEMBERS_UPDATE_DATA_ID__BEGIN
#define bcmolt_lag_interface_complete_members_update_data_id_result BCMOLT_LAG_INTERFACE_COMPLETE_MEMBERS_UPDATE_DATA_ID_RESULT
#define bcmolt_lag_interface_complete_members_update_data_id_fail_reason BCMOLT_LAG_INTERFACE_COMPLETE_MEMBERS_UPDATE_DATA_ID_FAIL_REASON
#define bcmolt_lag_interface_complete_members_update_data_id__num_of BCMOLT_LAG_INTERFACE_COMPLETE_MEMBERS_UPDATE_DATA_ID__NUM_OF
#define bcmolt_lag_interface_complete_members_update_data_id_all_properties 0xFF
#define bcmolt_lag_interface_complete_members_update_data_id_full_mask 0x3

} bcmolt_lag_interface_complete_members_update_data_id;

/** Identifiers for all fields in a 'lag_interface_state_update_data'. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_STATE_UPDATE_DATA_ID__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_STATE_UPDATE_DATA_ID_LAG_STATE = 0, /**< lag_state. */
    BCMOLT_LAG_INTERFACE_STATE_UPDATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_state_update_data_id__begin BCMOLT_LAG_INTERFACE_STATE_UPDATE_DATA_ID__BEGIN
#define bcmolt_lag_interface_state_update_data_id_lag_state BCMOLT_LAG_INTERFACE_STATE_UPDATE_DATA_ID_LAG_STATE
#define bcmolt_lag_interface_state_update_data_id__num_of BCMOLT_LAG_INTERFACE_STATE_UPDATE_DATA_ID__NUM_OF
#define bcmolt_lag_interface_state_update_data_id_all_properties 0xFF
#define bcmolt_lag_interface_state_update_data_id_full_mask 0x1

} bcmolt_lag_interface_state_update_data_id;

/** Identifiers for all fields in a 'lag_interface_state_updated_data'. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_ID__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_ID_NEW_STATE = 0, /**< new_state. */
    BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_ID_OLD_STATE = 1, /**< old state. */
    BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_ID_FAULT_CODE = 2, /**< fault_code. */
    BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_state_updated_data_id__begin BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_ID__BEGIN
#define bcmolt_lag_interface_state_updated_data_id_new_state BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_ID_NEW_STATE
#define bcmolt_lag_interface_state_updated_data_id_old_state BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_ID_OLD_STATE
#define bcmolt_lag_interface_state_updated_data_id_fault_code BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_ID_FAULT_CODE
#define bcmolt_lag_interface_state_updated_data_id__num_of BCMOLT_LAG_INTERFACE_STATE_UPDATED_DATA_ID__NUM_OF
#define bcmolt_lag_interface_state_updated_data_id_all_properties 0xFF
#define bcmolt_lag_interface_state_updated_data_id_full_mask 0x7

} bcmolt_lag_interface_state_updated_data_id;

/** Identifiers for all fields in a 'lag_interface_lag_health_change_data'. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_LAG_HEALTH_CHANGE_DATA_ID__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_LAG_HEALTH_CHANGE_DATA_ID_NEW_STATE = 0, /**< new_state. */
    BCMOLT_LAG_INTERFACE_LAG_HEALTH_CHANGE_DATA_ID_OLD_STATE = 1, /**< old state. */
    BCMOLT_LAG_INTERFACE_LAG_HEALTH_CHANGE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_lag_health_change_data_id__begin BCMOLT_LAG_INTERFACE_LAG_HEALTH_CHANGE_DATA_ID__BEGIN
#define bcmolt_lag_interface_lag_health_change_data_id_new_state BCMOLT_LAG_INTERFACE_LAG_HEALTH_CHANGE_DATA_ID_NEW_STATE
#define bcmolt_lag_interface_lag_health_change_data_id_old_state BCMOLT_LAG_INTERFACE_LAG_HEALTH_CHANGE_DATA_ID_OLD_STATE
#define bcmolt_lag_interface_lag_health_change_data_id__num_of BCMOLT_LAG_INTERFACE_LAG_HEALTH_CHANGE_DATA_ID__NUM_OF
#define bcmolt_lag_interface_lag_health_change_data_id_all_properties 0xFF
#define bcmolt_lag_interface_lag_health_change_data_id_full_mask 0x3

} bcmolt_lag_interface_lag_health_change_data_id;

/** Identifiers for all fields in a 'lag_interface_auto_cfg_data'. */
typedef enum
{
    BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_ID_COMPLETE_MEMBERS_UPDATE = 0, /**< complete_members_update. */
    BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_ID_LAG_HEALTH_CHANGE = 1, /**< LAG health change. */
    BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_ID_STATE_UPDATED = 2, /**< interface state updated. */
    BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_lag_interface_auto_cfg_data_id__begin BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_lag_interface_auto_cfg_data_id_complete_members_update BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_ID_COMPLETE_MEMBERS_UPDATE
#define bcmolt_lag_interface_auto_cfg_data_id_lag_health_change BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_ID_LAG_HEALTH_CHANGE
#define bcmolt_lag_interface_auto_cfg_data_id_state_updated BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_ID_STATE_UPDATED
#define bcmolt_lag_interface_auto_cfg_data_id__num_of BCMOLT_LAG_INTERFACE_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_lag_interface_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_lag_interface_auto_cfg_data_id_full_mask 0x7

} bcmolt_lag_interface_auto_cfg_data_id;

/** Identifiers for all fields in a 'log_key'. */
typedef enum
{
    BCMOLT_LOG_KEY_ID__BEGIN = 0,
    BCMOLT_LOG_KEY_ID_DEVICE_ID = 0, /**< Device ID. */
    BCMOLT_LOG_KEY_ID_NAME = 1, /**< name. */
    BCMOLT_LOG_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_log_key_id__begin BCMOLT_LOG_KEY_ID__BEGIN
#define bcmolt_log_key_id_device_id BCMOLT_LOG_KEY_ID_DEVICE_ID
#define bcmolt_log_key_id_name BCMOLT_LOG_KEY_ID_NAME
#define bcmolt_log_key_id__num_of BCMOLT_LOG_KEY_ID__NUM_OF
#define bcmolt_log_key_id_all_properties 0xFF
#define bcmolt_log_key_id_full_mask 0x3

} bcmolt_log_key_id;

/** Identifiers for all fields in a 'log_cfg_data'. */
typedef enum
{
    BCMOLT_LOG_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_LOG_CFG_DATA_ID_TYPE = 0, /**< Type. */
    BCMOLT_LOG_CFG_DATA_ID_STYLE = 1, /**< Style. */
    BCMOLT_LOG_CFG_DATA_ID_LEVEL = 2, /**< Level. */
    BCMOLT_LOG_CFG_DATA_ID_MSG_COUNT = 3, /**< Message Count. */
    BCMOLT_LOG_CFG_DATA_ID_LOST_MSG_COUNT = 4, /**< Lost Message Count. */
    BCMOLT_LOG_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_log_cfg_data_id__begin BCMOLT_LOG_CFG_DATA_ID__BEGIN
#define bcmolt_log_cfg_data_id_type BCMOLT_LOG_CFG_DATA_ID_TYPE
#define bcmolt_log_cfg_data_id_style BCMOLT_LOG_CFG_DATA_ID_STYLE
#define bcmolt_log_cfg_data_id_level BCMOLT_LOG_CFG_DATA_ID_LEVEL
#define bcmolt_log_cfg_data_id_msg_count BCMOLT_LOG_CFG_DATA_ID_MSG_COUNT
#define bcmolt_log_cfg_data_id_lost_msg_count BCMOLT_LOG_CFG_DATA_ID_LOST_MSG_COUNT
#define bcmolt_log_cfg_data_id__num_of BCMOLT_LOG_CFG_DATA_ID__NUM_OF
#define bcmolt_log_cfg_data_id_all_properties 0xFF
#define bcmolt_log_cfg_data_id_full_mask 0x1F

} bcmolt_log_cfg_data_id;

/** Identifiers for all fields in a 'log_file_key'. */
typedef enum
{
    BCMOLT_LOG_FILE_KEY_ID__BEGIN = 0,
    BCMOLT_LOG_FILE_KEY_ID_DEVICE_ID = 0, /**< Device ID. */
    BCMOLT_LOG_FILE_KEY_ID_FILE_ID = 1, /**< File ID. */
    BCMOLT_LOG_FILE_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_log_file_key_id__begin BCMOLT_LOG_FILE_KEY_ID__BEGIN
#define bcmolt_log_file_key_id_device_id BCMOLT_LOG_FILE_KEY_ID_DEVICE_ID
#define bcmolt_log_file_key_id_file_id BCMOLT_LOG_FILE_KEY_ID_FILE_ID
#define bcmolt_log_file_key_id__num_of BCMOLT_LOG_FILE_KEY_ID__NUM_OF
#define bcmolt_log_file_key_id_all_properties 0xFF
#define bcmolt_log_file_key_id_full_mask 0x3

} bcmolt_log_file_key_id;

/** Identifiers for all fields in a 'log_file_cfg_data'. */
typedef enum
{
    BCMOLT_LOG_FILE_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_LOG_FILE_CFG_DATA_ID_WRAP_AROUND = 0, /**< Wrap Around. */
    BCMOLT_LOG_FILE_CFG_DATA_ID_CLEAR_AFTER_READ = 1, /**< Clear After Read. */
    BCMOLT_LOG_FILE_CFG_DATA_ID_MSG_COUNT = 2, /**< Message Count. */
    BCMOLT_LOG_FILE_CFG_DATA_ID_MSGS_READ = 3, /**< Messages Read. */
    BCMOLT_LOG_FILE_CFG_DATA_ID_MSGS_REMAINING = 4, /**< Messages Remaining. */
    BCMOLT_LOG_FILE_CFG_DATA_ID_BUFFER = 5, /**< Buffer. */
    BCMOLT_LOG_FILE_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_log_file_cfg_data_id__begin BCMOLT_LOG_FILE_CFG_DATA_ID__BEGIN
#define bcmolt_log_file_cfg_data_id_wrap_around BCMOLT_LOG_FILE_CFG_DATA_ID_WRAP_AROUND
#define bcmolt_log_file_cfg_data_id_clear_after_read BCMOLT_LOG_FILE_CFG_DATA_ID_CLEAR_AFTER_READ
#define bcmolt_log_file_cfg_data_id_msg_count BCMOLT_LOG_FILE_CFG_DATA_ID_MSG_COUNT
#define bcmolt_log_file_cfg_data_id_msgs_read BCMOLT_LOG_FILE_CFG_DATA_ID_MSGS_READ
#define bcmolt_log_file_cfg_data_id_msgs_remaining BCMOLT_LOG_FILE_CFG_DATA_ID_MSGS_REMAINING
#define bcmolt_log_file_cfg_data_id_buffer BCMOLT_LOG_FILE_CFG_DATA_ID_BUFFER
#define bcmolt_log_file_cfg_data_id__num_of BCMOLT_LOG_FILE_CFG_DATA_ID__NUM_OF
#define bcmolt_log_file_cfg_data_id_all_properties 0xFF
#define bcmolt_log_file_cfg_data_id_full_mask 0x3F

} bcmolt_log_file_cfg_data_id;

/** Identifiers for all fields in a 'ngpon2_channel_key'. */
typedef enum
{
    BCMOLT_NGPON2_CHANNEL_KEY_ID__BEGIN = 0,
    BCMOLT_NGPON2_CHANNEL_KEY_ID_PON_NI = 0, /**< PON network interface. */
    BCMOLT_NGPON2_CHANNEL_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ngpon2_channel_key_id__begin BCMOLT_NGPON2_CHANNEL_KEY_ID__BEGIN
#define bcmolt_ngpon2_channel_key_id_pon_ni BCMOLT_NGPON2_CHANNEL_KEY_ID_PON_NI
#define bcmolt_ngpon2_channel_key_id__num_of BCMOLT_NGPON2_CHANNEL_KEY_ID__NUM_OF
#define bcmolt_ngpon2_channel_key_id_all_properties 0xFF
#define bcmolt_ngpon2_channel_key_id_full_mask 0x1

} bcmolt_ngpon2_channel_key_id;

/** Identifiers for all fields in a 'ngpon2_channel_cfg_data'. */
typedef enum
{
    BCMOLT_NGPON2_CHANNEL_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_NGPON2_CHANNEL_CFG_DATA_ID_SYSTEM_PROFILE = 0, /**< System profile. */
    BCMOLT_NGPON2_CHANNEL_CFG_DATA_ID_CHANNEL_PROFILE = 1, /**< Channel profile. */
    BCMOLT_NGPON2_CHANNEL_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_ngpon2_channel_cfg_data_id__begin BCMOLT_NGPON2_CHANNEL_CFG_DATA_ID__BEGIN
#define bcmolt_ngpon2_channel_cfg_data_id_system_profile BCMOLT_NGPON2_CHANNEL_CFG_DATA_ID_SYSTEM_PROFILE
#define bcmolt_ngpon2_channel_cfg_data_id_channel_profile BCMOLT_NGPON2_CHANNEL_CFG_DATA_ID_CHANNEL_PROFILE
#define bcmolt_ngpon2_channel_cfg_data_id__num_of BCMOLT_NGPON2_CHANNEL_CFG_DATA_ID__NUM_OF
#define bcmolt_ngpon2_channel_cfg_data_id_all_properties 0xFF
#define bcmolt_ngpon2_channel_cfg_data_id_full_mask 0x3

} bcmolt_ngpon2_channel_cfg_data_id;

/** Identifiers for all fields in a 'nni_interface_key'. */
typedef enum
{
    BCMOLT_NNI_INTERFACE_KEY_ID__BEGIN = 0,
    BCMOLT_NNI_INTERFACE_KEY_ID_ID = 0, /**< id. */
    BCMOLT_NNI_INTERFACE_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_nni_interface_key_id__begin BCMOLT_NNI_INTERFACE_KEY_ID__BEGIN
#define bcmolt_nni_interface_key_id_id BCMOLT_NNI_INTERFACE_KEY_ID_ID
#define bcmolt_nni_interface_key_id__num_of BCMOLT_NNI_INTERFACE_KEY_ID__NUM_OF
#define bcmolt_nni_interface_key_id_all_properties 0xFF
#define bcmolt_nni_interface_key_id_full_mask 0x1

} bcmolt_nni_interface_key_id;

/** Identifiers for all fields in a 'nni_interface_state_change_data'. */
typedef enum
{
    BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_ID__BEGIN = 0,
    BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_ID_RESULT = 0, /**< Result. */
    BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_ID_OLD_STATE = 1, /**< Old State. */
    BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_ID_NEW_STATE = 2, /**< New State. */
    BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_nni_interface_state_change_data_id__begin BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_ID__BEGIN
#define bcmolt_nni_interface_state_change_data_id_result BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_ID_RESULT
#define bcmolt_nni_interface_state_change_data_id_old_state BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_ID_OLD_STATE
#define bcmolt_nni_interface_state_change_data_id_new_state BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_ID_NEW_STATE
#define bcmolt_nni_interface_state_change_data_id__num_of BCMOLT_NNI_INTERFACE_STATE_CHANGE_DATA_ID__NUM_OF
#define bcmolt_nni_interface_state_change_data_id_all_properties 0xFF
#define bcmolt_nni_interface_state_change_data_id_full_mask 0x7

} bcmolt_nni_interface_state_change_data_id;

/** Identifiers for all fields in a 'nni_interface_cfg_data'. */
typedef enum
{
    BCMOLT_NNI_INTERFACE_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_NNI_INTERFACE_CFG_DATA_ID_CONFIG_STATE = 0, /**< config_state. */
    BCMOLT_NNI_INTERFACE_CFG_DATA_ID_STATE = 1, /**< state. */
    BCMOLT_NNI_INTERFACE_CFG_DATA_ID_LINK_STATE = 3, /**< Link State. */
    BCMOLT_NNI_INTERFACE_CFG_DATA_ID_LINK_FAULT_CODE = 4, /**< Link Fault Code. */
    BCMOLT_NNI_INTERFACE_CFG_DATA_ID_PROTECTION_TYPE = 5, /**< Protect Type. */
    BCMOLT_NNI_INTERFACE_CFG_DATA_ID_DESCRIPTION = 6, /**< Description. */
    BCMOLT_NNI_INTERFACE_CFG_DATA_ID_POLICER_PROFILE = 7, /**< policer profile. */
    BCMOLT_NNI_INTERFACE_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_nni_interface_cfg_data_id__begin BCMOLT_NNI_INTERFACE_CFG_DATA_ID__BEGIN
#define bcmolt_nni_interface_cfg_data_id_config_state BCMOLT_NNI_INTERFACE_CFG_DATA_ID_CONFIG_STATE
#define bcmolt_nni_interface_cfg_data_id_state BCMOLT_NNI_INTERFACE_CFG_DATA_ID_STATE
#define bcmolt_nni_interface_cfg_data_id_link_state BCMOLT_NNI_INTERFACE_CFG_DATA_ID_LINK_STATE
#define bcmolt_nni_interface_cfg_data_id_link_fault_code BCMOLT_NNI_INTERFACE_CFG_DATA_ID_LINK_FAULT_CODE
#define bcmolt_nni_interface_cfg_data_id_protection_type BCMOLT_NNI_INTERFACE_CFG_DATA_ID_PROTECTION_TYPE
#define bcmolt_nni_interface_cfg_data_id_description BCMOLT_NNI_INTERFACE_CFG_DATA_ID_DESCRIPTION
#define bcmolt_nni_interface_cfg_data_id_policer_profile BCMOLT_NNI_INTERFACE_CFG_DATA_ID_POLICER_PROFILE
#define bcmolt_nni_interface_cfg_data_id__num_of BCMOLT_NNI_INTERFACE_CFG_DATA_ID__NUM_OF
#define bcmolt_nni_interface_cfg_data_id_all_properties 0xFF
#define bcmolt_nni_interface_cfg_data_id_full_mask 0xFB

} bcmolt_nni_interface_cfg_data_id;

/** Identifiers for all fields in a 'nni_interface_set_nni_state_data'. */
typedef enum
{
    BCMOLT_NNI_INTERFACE_SET_NNI_STATE_DATA_ID__BEGIN = 0,
    BCMOLT_NNI_INTERFACE_SET_NNI_STATE_DATA_ID_NNI_STATE = 0, /**< nni_state. */
    BCMOLT_NNI_INTERFACE_SET_NNI_STATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_nni_interface_set_nni_state_data_id__begin BCMOLT_NNI_INTERFACE_SET_NNI_STATE_DATA_ID__BEGIN
#define bcmolt_nni_interface_set_nni_state_data_id_nni_state BCMOLT_NNI_INTERFACE_SET_NNI_STATE_DATA_ID_NNI_STATE
#define bcmolt_nni_interface_set_nni_state_data_id__num_of BCMOLT_NNI_INTERFACE_SET_NNI_STATE_DATA_ID__NUM_OF
#define bcmolt_nni_interface_set_nni_state_data_id_all_properties 0xFF
#define bcmolt_nni_interface_set_nni_state_data_id_full_mask 0x1

} bcmolt_nni_interface_set_nni_state_data_id;

/** Identifiers for all fields in a 'nni_interface_link_state_change_data'. */
typedef enum
{
    BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_ID__BEGIN = 0,
    BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_ID_OLD_STATE = 0, /**< old_state. */
    BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_ID_NEW_STATE = 1, /**< new_state. */
    BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_ID_FAULT_CODE = 2, /**< fault_code. */
    BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_nni_interface_link_state_change_data_id__begin BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_ID__BEGIN
#define bcmolt_nni_interface_link_state_change_data_id_old_state BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_ID_OLD_STATE
#define bcmolt_nni_interface_link_state_change_data_id_new_state BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_ID_NEW_STATE
#define bcmolt_nni_interface_link_state_change_data_id_fault_code BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_ID_FAULT_CODE
#define bcmolt_nni_interface_link_state_change_data_id__num_of BCMOLT_NNI_INTERFACE_LINK_STATE_CHANGE_DATA_ID__NUM_OF
#define bcmolt_nni_interface_link_state_change_data_id_all_properties 0xFF
#define bcmolt_nni_interface_link_state_change_data_id_full_mask 0x7

} bcmolt_nni_interface_link_state_change_data_id;

/** Identifiers for all fields in a 'nni_interface_auto_cfg_data'. */
typedef enum
{
    BCMOLT_NNI_INTERFACE_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_NNI_INTERFACE_AUTO_CFG_DATA_ID_LINK_STATE_CHANGE = 0, /**< link_state_change. */
    BCMOLT_NNI_INTERFACE_AUTO_CFG_DATA_ID_STATE_CHANGE = 1, /**< State Change. */
    BCMOLT_NNI_INTERFACE_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_nni_interface_auto_cfg_data_id__begin BCMOLT_NNI_INTERFACE_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_nni_interface_auto_cfg_data_id_link_state_change BCMOLT_NNI_INTERFACE_AUTO_CFG_DATA_ID_LINK_STATE_CHANGE
#define bcmolt_nni_interface_auto_cfg_data_id_state_change BCMOLT_NNI_INTERFACE_AUTO_CFG_DATA_ID_STATE_CHANGE
#define bcmolt_nni_interface_auto_cfg_data_id__num_of BCMOLT_NNI_INTERFACE_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_nni_interface_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_nni_interface_auto_cfg_data_id_full_mask 0x3

} bcmolt_nni_interface_auto_cfg_data_id;

/** Identifiers for all fields in a 'olt_key'. */
typedef enum
{
    BCMOLT_OLT_KEY_ID__BEGIN = 0,
    BCMOLT_OLT_KEY_ID_RESERVED = 0, /**< Reserved. */
    BCMOLT_OLT_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_olt_key_id__begin BCMOLT_OLT_KEY_ID__BEGIN
#define bcmolt_olt_key_id_reserved BCMOLT_OLT_KEY_ID_RESERVED
#define bcmolt_olt_key_id__num_of BCMOLT_OLT_KEY_ID__NUM_OF
#define bcmolt_olt_key_id_all_properties 0xFF
#define bcmolt_olt_key_id_full_mask 0x1

} bcmolt_olt_key_id;

/** Identifiers for all fields in a 'olt_cfg_data'. */
typedef enum
{
    BCMOLT_OLT_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_OLT_CFG_DATA_ID_TOPOLOGY = 0, /**< topology. */
    BCMOLT_OLT_CFG_DATA_ID_BAL_STATE = 1, /**< BAL and Switch device state. */
    BCMOLT_OLT_CFG_DATA_ID_HOST_SW_VERSION = 2, /**< Host Software Version. */
    BCMOLT_OLT_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_olt_cfg_data_id__begin BCMOLT_OLT_CFG_DATA_ID__BEGIN
#define bcmolt_olt_cfg_data_id_topology BCMOLT_OLT_CFG_DATA_ID_TOPOLOGY
#define bcmolt_olt_cfg_data_id_bal_state BCMOLT_OLT_CFG_DATA_ID_BAL_STATE
#define bcmolt_olt_cfg_data_id_host_sw_version BCMOLT_OLT_CFG_DATA_ID_HOST_SW_VERSION
#define bcmolt_olt_cfg_data_id__num_of BCMOLT_OLT_CFG_DATA_ID__NUM_OF
#define bcmolt_olt_cfg_data_id_all_properties 0xFF
#define bcmolt_olt_cfg_data_id_full_mask 0x7

} bcmolt_olt_cfg_data_id;

/** Identifiers for all fields in a 'olt_disconnected_data'. */
typedef enum
{
    BCMOLT_OLT_DISCONNECTED_DATA_ID__BEGIN = 0,
    BCMOLT_OLT_DISCONNECTED_DATA_ID_REASON = 0, /**< Disconnect reason. */
    BCMOLT_OLT_DISCONNECTED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_olt_disconnected_data_id__begin BCMOLT_OLT_DISCONNECTED_DATA_ID__BEGIN
#define bcmolt_olt_disconnected_data_id_reason BCMOLT_OLT_DISCONNECTED_DATA_ID_REASON
#define bcmolt_olt_disconnected_data_id__num_of BCMOLT_OLT_DISCONNECTED_DATA_ID__NUM_OF
#define bcmolt_olt_disconnected_data_id_all_properties 0xFF
#define bcmolt_olt_disconnected_data_id_full_mask 0x1

} bcmolt_olt_disconnected_data_id;

/** Identifiers for all fields in a 'olt_bal_failure_data'. */
typedef enum
{
    BCMOLT_OLT_BAL_FAILURE_DATA_ID__BEGIN = 0,
    BCMOLT_OLT_BAL_FAILURE_DATA_ID_REASON = 0, /**< Fail reason. */
    BCMOLT_OLT_BAL_FAILURE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_olt_bal_failure_data_id__begin BCMOLT_OLT_BAL_FAILURE_DATA_ID__BEGIN
#define bcmolt_olt_bal_failure_data_id_reason BCMOLT_OLT_BAL_FAILURE_DATA_ID_REASON
#define bcmolt_olt_bal_failure_data_id__num_of BCMOLT_OLT_BAL_FAILURE_DATA_ID__NUM_OF
#define bcmolt_olt_bal_failure_data_id_all_properties 0xFF
#define bcmolt_olt_bal_failure_data_id_full_mask 0x1

} bcmolt_olt_bal_failure_data_id;

/** Identifiers for all fields in a 'olt_sw_error_data'. */
typedef enum
{
    BCMOLT_OLT_SW_ERROR_DATA_ID__BEGIN = 0,
    BCMOLT_OLT_SW_ERROR_DATA_ID_TASK_NAME = 0, /**< Task Name. */
    BCMOLT_OLT_SW_ERROR_DATA_ID_FILE_NAME = 1, /**< File Name. */
    BCMOLT_OLT_SW_ERROR_DATA_ID_LINE_NUMBER = 2, /**< Line Number. */
    BCMOLT_OLT_SW_ERROR_DATA_ID_ERROR_STRING = 3, /**< User error string. */
    BCMOLT_OLT_SW_ERROR_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_olt_sw_error_data_id__begin BCMOLT_OLT_SW_ERROR_DATA_ID__BEGIN
#define bcmolt_olt_sw_error_data_id_task_name BCMOLT_OLT_SW_ERROR_DATA_ID_TASK_NAME
#define bcmolt_olt_sw_error_data_id_file_name BCMOLT_OLT_SW_ERROR_DATA_ID_FILE_NAME
#define bcmolt_olt_sw_error_data_id_line_number BCMOLT_OLT_SW_ERROR_DATA_ID_LINE_NUMBER
#define bcmolt_olt_sw_error_data_id_error_string BCMOLT_OLT_SW_ERROR_DATA_ID_ERROR_STRING
#define bcmolt_olt_sw_error_data_id__num_of BCMOLT_OLT_SW_ERROR_DATA_ID__NUM_OF
#define bcmolt_olt_sw_error_data_id_all_properties 0xFF
#define bcmolt_olt_sw_error_data_id_full_mask 0xF

} bcmolt_olt_sw_error_data_id;

/** Identifiers for all fields in a 'olt_reset_data'. */
typedef enum
{
    BCMOLT_OLT_RESET_DATA_ID__BEGIN = 0,
    BCMOLT_OLT_RESET_DATA_ID_MODE = 0, /**< Reset Mode. */
    BCMOLT_OLT_RESET_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_olt_reset_data_id__begin BCMOLT_OLT_RESET_DATA_ID__BEGIN
#define bcmolt_olt_reset_data_id_mode BCMOLT_OLT_RESET_DATA_ID_MODE
#define bcmolt_olt_reset_data_id__num_of BCMOLT_OLT_RESET_DATA_ID__NUM_OF
#define bcmolt_olt_reset_data_id_all_properties 0xFF
#define bcmolt_olt_reset_data_id_full_mask 0x1

} bcmolt_olt_reset_data_id;

/** Identifiers for all fields in a 'olt_auto_cfg_data'. */
typedef enum
{
    BCMOLT_OLT_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_OLT_AUTO_CFG_DATA_ID_BAL_FAILURE = 0, /**< BAL and/or Switch Failed. */
    BCMOLT_OLT_AUTO_CFG_DATA_ID_BAL_READY = 1, /**< BAL and Switch Ready. */
    BCMOLT_OLT_AUTO_CFG_DATA_ID_CONNECTED = 2, /**< connected. */
    BCMOLT_OLT_AUTO_CFG_DATA_ID_DISCONNECTED = 3, /**< disconnected. */
    BCMOLT_OLT_AUTO_CFG_DATA_ID_SW_ERROR = 4, /**< OLT Software error. */
    BCMOLT_OLT_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_olt_auto_cfg_data_id__begin BCMOLT_OLT_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_olt_auto_cfg_data_id_bal_failure BCMOLT_OLT_AUTO_CFG_DATA_ID_BAL_FAILURE
#define bcmolt_olt_auto_cfg_data_id_bal_ready BCMOLT_OLT_AUTO_CFG_DATA_ID_BAL_READY
#define bcmolt_olt_auto_cfg_data_id_connected BCMOLT_OLT_AUTO_CFG_DATA_ID_CONNECTED
#define bcmolt_olt_auto_cfg_data_id_disconnected BCMOLT_OLT_AUTO_CFG_DATA_ID_DISCONNECTED
#define bcmolt_olt_auto_cfg_data_id_sw_error BCMOLT_OLT_AUTO_CFG_DATA_ID_SW_ERROR
#define bcmolt_olt_auto_cfg_data_id__num_of BCMOLT_OLT_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_olt_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_olt_auto_cfg_data_id_full_mask 0x1F

} bcmolt_olt_auto_cfg_data_id;

/** Identifiers for all fields in a 'onu_key'. */
typedef enum
{
    BCMOLT_ONU_KEY_ID__BEGIN = 0,
    BCMOLT_ONU_KEY_ID_PON_NI = 0, /**< PON network interface. */
    BCMOLT_ONU_KEY_ID_ONU_ID = 1, /**< onu id. */
    BCMOLT_ONU_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_key_id__begin BCMOLT_ONU_KEY_ID__BEGIN
#define bcmolt_onu_key_id_pon_ni BCMOLT_ONU_KEY_ID_PON_NI
#define bcmolt_onu_key_id_onu_id BCMOLT_ONU_KEY_ID_ONU_ID
#define bcmolt_onu_key_id__num_of BCMOLT_ONU_KEY_ID__NUM_OF
#define bcmolt_onu_key_id_all_properties 0xFF
#define bcmolt_onu_key_id_full_mask 0x3

} bcmolt_onu_key_id;

/** Identifiers for all fields in a 'onu_cfg_data'. */
typedef enum
{
    BCMOLT_ONU_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_CFG_DATA_ID_ONU_STATE = 0, /**< onu state. */
    BCMOLT_ONU_CFG_DATA_ID_ONU_OLD_STATE = 1, /**< onu old state. */
    BCMOLT_ONU_CFG_DATA_ID_ONU_RATE = 2, /**< ONU rate. */
    BCMOLT_ONU_CFG_DATA_ID_ITU = 3, /**< ITU ONU Parameters (GPON, XGPON1, NGPON2, XGS PON). */
    BCMOLT_ONU_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_cfg_data_id__begin BCMOLT_ONU_CFG_DATA_ID__BEGIN
#define bcmolt_onu_cfg_data_id_onu_state BCMOLT_ONU_CFG_DATA_ID_ONU_STATE
#define bcmolt_onu_cfg_data_id_onu_old_state BCMOLT_ONU_CFG_DATA_ID_ONU_OLD_STATE
#define bcmolt_onu_cfg_data_id_onu_rate BCMOLT_ONU_CFG_DATA_ID_ONU_RATE
#define bcmolt_onu_cfg_data_id_itu BCMOLT_ONU_CFG_DATA_ID_ITU
#define bcmolt_onu_cfg_data_id__num_of BCMOLT_ONU_CFG_DATA_ID__NUM_OF
#define bcmolt_onu_cfg_data_id_all_properties 0xFF
#define bcmolt_onu_cfg_data_id_full_mask 0xF

} bcmolt_onu_cfg_data_id;

/** Identifiers for all fields in a 'onu_set_onu_state_data'. */
typedef enum
{
    BCMOLT_ONU_SET_ONU_STATE_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_SET_ONU_STATE_DATA_ID_ONU_STATE = 0, /**< ONU state. */
    BCMOLT_ONU_SET_ONU_STATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_set_onu_state_data_id__begin BCMOLT_ONU_SET_ONU_STATE_DATA_ID__BEGIN
#define bcmolt_onu_set_onu_state_data_id_onu_state BCMOLT_ONU_SET_ONU_STATE_DATA_ID_ONU_STATE
#define bcmolt_onu_set_onu_state_data_id__num_of BCMOLT_ONU_SET_ONU_STATE_DATA_ID__NUM_OF
#define bcmolt_onu_set_onu_state_data_id_all_properties 0xFF
#define bcmolt_onu_set_onu_state_data_id_full_mask 0x1

} bcmolt_onu_set_onu_state_data_id;

/** Identifiers for all fields in a 'onu_request_registration_data'. */
typedef enum
{
    BCMOLT_ONU_REQUEST_REGISTRATION_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_REQUEST_REGISTRATION_DATA_ID_SMA_FLAG = 0, /**< SMA flag. */
    BCMOLT_ONU_REQUEST_REGISTRATION_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_request_registration_data_id__begin BCMOLT_ONU_REQUEST_REGISTRATION_DATA_ID__BEGIN
#define bcmolt_onu_request_registration_data_id_sma_flag BCMOLT_ONU_REQUEST_REGISTRATION_DATA_ID_SMA_FLAG
#define bcmolt_onu_request_registration_data_id__num_of BCMOLT_ONU_REQUEST_REGISTRATION_DATA_ID__NUM_OF
#define bcmolt_onu_request_registration_data_id_all_properties 0xFF
#define bcmolt_onu_request_registration_data_id_full_mask 0x1

} bcmolt_onu_request_registration_data_id;

/** Identifiers for all fields in a 'onu_change_power_levelling_data'. */
typedef enum
{
    BCMOLT_ONU_CHANGE_POWER_LEVELLING_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_CHANGE_POWER_LEVELLING_DATA_ID_CONTROL = 0, /**< control. */
    BCMOLT_ONU_CHANGE_POWER_LEVELLING_DATA_ID_ATTENUATION = 1, /**< Attenuation. */
    BCMOLT_ONU_CHANGE_POWER_LEVELLING_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_change_power_levelling_data_id__begin BCMOLT_ONU_CHANGE_POWER_LEVELLING_DATA_ID__BEGIN
#define bcmolt_onu_change_power_levelling_data_id_control BCMOLT_ONU_CHANGE_POWER_LEVELLING_DATA_ID_CONTROL
#define bcmolt_onu_change_power_levelling_data_id_attenuation BCMOLT_ONU_CHANGE_POWER_LEVELLING_DATA_ID_ATTENUATION
#define bcmolt_onu_change_power_levelling_data_id__num_of BCMOLT_ONU_CHANGE_POWER_LEVELLING_DATA_ID__NUM_OF
#define bcmolt_onu_change_power_levelling_data_id_all_properties 0xFF
#define bcmolt_onu_change_power_levelling_data_id_full_mask 0x3

} bcmolt_onu_change_power_levelling_data_id;

/** Identifiers for all fields in a 'onu_adjust_tx_wavelength_data'. */
typedef enum
{
    BCMOLT_ONU_ADJUST_TX_WAVELENGTH_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_ADJUST_TX_WAVELENGTH_DATA_ID_FREQUENCY_ADJUSTMENT_DIRECTION = 0, /**< Frequency adjustment direction. */
    BCMOLT_ONU_ADJUST_TX_WAVELENGTH_DATA_ID_FREQUENCY_ADJUSTMENT_SIZE = 1, /**< Frequency adjustment size. */
    BCMOLT_ONU_ADJUST_TX_WAVELENGTH_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_adjust_tx_wavelength_data_id__begin BCMOLT_ONU_ADJUST_TX_WAVELENGTH_DATA_ID__BEGIN
#define bcmolt_onu_adjust_tx_wavelength_data_id_frequency_adjustment_direction BCMOLT_ONU_ADJUST_TX_WAVELENGTH_DATA_ID_FREQUENCY_ADJUSTMENT_DIRECTION
#define bcmolt_onu_adjust_tx_wavelength_data_id_frequency_adjustment_size BCMOLT_ONU_ADJUST_TX_WAVELENGTH_DATA_ID_FREQUENCY_ADJUSTMENT_SIZE
#define bcmolt_onu_adjust_tx_wavelength_data_id__num_of BCMOLT_ONU_ADJUST_TX_WAVELENGTH_DATA_ID__NUM_OF
#define bcmolt_onu_adjust_tx_wavelength_data_id_all_properties 0xFF
#define bcmolt_onu_adjust_tx_wavelength_data_id_full_mask 0x3

} bcmolt_onu_adjust_tx_wavelength_data_id;

/** Identifiers for all fields in a 'onu_secure_mutual_authentication_data'. */
typedef enum
{
    BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_ID_MASTER_KEY = 0, /**< master key. */
    BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_ID_BUFFER = 1, /**< OMCI data buffer. */
    BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_ID_MIC = 2, /**< mic. */
    BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_secure_mutual_authentication_data_id__begin BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_ID__BEGIN
#define bcmolt_onu_secure_mutual_authentication_data_id_master_key BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_ID_MASTER_KEY
#define bcmolt_onu_secure_mutual_authentication_data_id_buffer BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_ID_BUFFER
#define bcmolt_onu_secure_mutual_authentication_data_id_mic BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_ID_MIC
#define bcmolt_onu_secure_mutual_authentication_data_id__num_of BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_DATA_ID__NUM_OF
#define bcmolt_onu_secure_mutual_authentication_data_id_all_properties 0xFF
#define bcmolt_onu_secure_mutual_authentication_data_id_full_mask 0x7

} bcmolt_onu_secure_mutual_authentication_data_id;

/** Identifiers for all fields in a 'onu_tuning_out_data'. */
typedef enum
{
    BCMOLT_ONU_TUNING_OUT_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_TUNING_OUT_DATA_ID_TARGET_DS_PON_ID = 0, /**< target ds pon id. */
    BCMOLT_ONU_TUNING_OUT_DATA_ID_TARGET_US_PON_ID = 1, /**< target us pon id. */
    BCMOLT_ONU_TUNING_OUT_DATA_ID_TIME_TO_SWITCH = 2, /**< time to switch. */
    BCMOLT_ONU_TUNING_OUT_DATA_ID_ROLLBACK = 3, /**< rollback. */
    BCMOLT_ONU_TUNING_OUT_DATA_ID_STATUS = 4, /**< status. */
    BCMOLT_ONU_TUNING_OUT_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_tuning_out_data_id__begin BCMOLT_ONU_TUNING_OUT_DATA_ID__BEGIN
#define bcmolt_onu_tuning_out_data_id_target_ds_pon_id BCMOLT_ONU_TUNING_OUT_DATA_ID_TARGET_DS_PON_ID
#define bcmolt_onu_tuning_out_data_id_target_us_pon_id BCMOLT_ONU_TUNING_OUT_DATA_ID_TARGET_US_PON_ID
#define bcmolt_onu_tuning_out_data_id_time_to_switch BCMOLT_ONU_TUNING_OUT_DATA_ID_TIME_TO_SWITCH
#define bcmolt_onu_tuning_out_data_id_rollback BCMOLT_ONU_TUNING_OUT_DATA_ID_ROLLBACK
#define bcmolt_onu_tuning_out_data_id_status BCMOLT_ONU_TUNING_OUT_DATA_ID_STATUS
#define bcmolt_onu_tuning_out_data_id__num_of BCMOLT_ONU_TUNING_OUT_DATA_ID__NUM_OF
#define bcmolt_onu_tuning_out_data_id_all_properties 0xFF
#define bcmolt_onu_tuning_out_data_id_full_mask 0x1F

} bcmolt_onu_tuning_out_data_id;

/** Identifiers for all fields in a 'onu_xgpon_alarm_data'. */
typedef enum
{
    BCMOLT_ONU_XGPON_ALARM_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_XGPON_ALARM_DATA_ID_XGPON_ONU_ALARM = 0, /**< xgpon onu alarm. */
    BCMOLT_ONU_XGPON_ALARM_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_xgpon_alarm_data_id__begin BCMOLT_ONU_XGPON_ALARM_DATA_ID__BEGIN
#define bcmolt_onu_xgpon_alarm_data_id_xgpon_onu_alarm BCMOLT_ONU_XGPON_ALARM_DATA_ID_XGPON_ONU_ALARM
#define bcmolt_onu_xgpon_alarm_data_id__num_of BCMOLT_ONU_XGPON_ALARM_DATA_ID__NUM_OF
#define bcmolt_onu_xgpon_alarm_data_id_all_properties 0xFF
#define bcmolt_onu_xgpon_alarm_data_id_full_mask 0x1

} bcmolt_onu_xgpon_alarm_data_id;

/** Identifiers for all fields in a 'onu_gpon_alarm_data'. */
typedef enum
{
    BCMOLT_ONU_GPON_ALARM_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_GPON_ALARM_DATA_ID_GPON_ONU_ALARM = 0, /**< gpon onu alarm. */
    BCMOLT_ONU_GPON_ALARM_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_gpon_alarm_data_id__begin BCMOLT_ONU_GPON_ALARM_DATA_ID__BEGIN
#define bcmolt_onu_gpon_alarm_data_id_gpon_onu_alarm BCMOLT_ONU_GPON_ALARM_DATA_ID_GPON_ONU_ALARM
#define bcmolt_onu_gpon_alarm_data_id__num_of BCMOLT_ONU_GPON_ALARM_DATA_ID__NUM_OF
#define bcmolt_onu_gpon_alarm_data_id_all_properties 0xFF
#define bcmolt_onu_gpon_alarm_data_id_full_mask 0x1

} bcmolt_onu_gpon_alarm_data_id;

/** Identifiers for all fields in a 'onu_dowi_data'. */
typedef enum
{
    BCMOLT_ONU_DOWI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_DOWI_DATA_ID_ALARM_STATUS = 0, /**< Alarm status. */
    BCMOLT_ONU_DOWI_DATA_ID_DRIFT_VALUE = 1, /**< Drift value. */
    BCMOLT_ONU_DOWI_DATA_ID_NEW_EQD = 2, /**< New EQD. */
    BCMOLT_ONU_DOWI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_dowi_data_id__begin BCMOLT_ONU_DOWI_DATA_ID__BEGIN
#define bcmolt_onu_dowi_data_id_alarm_status BCMOLT_ONU_DOWI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_dowi_data_id_drift_value BCMOLT_ONU_DOWI_DATA_ID_DRIFT_VALUE
#define bcmolt_onu_dowi_data_id_new_eqd BCMOLT_ONU_DOWI_DATA_ID_NEW_EQD
#define bcmolt_onu_dowi_data_id__num_of BCMOLT_ONU_DOWI_DATA_ID__NUM_OF
#define bcmolt_onu_dowi_data_id_all_properties 0xFF
#define bcmolt_onu_dowi_data_id_full_mask 0x7

} bcmolt_onu_dowi_data_id;

/** Identifiers for all fields in a 'onu_sfi_data'. */
typedef enum
{
    BCMOLT_ONU_SFI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_SFI_DATA_ID_ALARM_STATUS = 0, /**< alarm status. */
    BCMOLT_ONU_SFI_DATA_ID_BER = 1, /**< BER. */
    BCMOLT_ONU_SFI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_sfi_data_id__begin BCMOLT_ONU_SFI_DATA_ID__BEGIN
#define bcmolt_onu_sfi_data_id_alarm_status BCMOLT_ONU_SFI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_sfi_data_id_ber BCMOLT_ONU_SFI_DATA_ID_BER
#define bcmolt_onu_sfi_data_id__num_of BCMOLT_ONU_SFI_DATA_ID__NUM_OF
#define bcmolt_onu_sfi_data_id_all_properties 0xFF
#define bcmolt_onu_sfi_data_id_full_mask 0x3

} bcmolt_onu_sfi_data_id;

/** Identifiers for all fields in a 'onu_sdi_data'. */
typedef enum
{
    BCMOLT_ONU_SDI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_SDI_DATA_ID_ALARM_STATUS = 0, /**< alarm status. */
    BCMOLT_ONU_SDI_DATA_ID_BER = 1, /**< BER. */
    BCMOLT_ONU_SDI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_sdi_data_id__begin BCMOLT_ONU_SDI_DATA_ID__BEGIN
#define bcmolt_onu_sdi_data_id_alarm_status BCMOLT_ONU_SDI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_sdi_data_id_ber BCMOLT_ONU_SDI_DATA_ID_BER
#define bcmolt_onu_sdi_data_id__num_of BCMOLT_ONU_SDI_DATA_ID__NUM_OF
#define bcmolt_onu_sdi_data_id_all_properties 0xFF
#define bcmolt_onu_sdi_data_id_full_mask 0x3

} bcmolt_onu_sdi_data_id;

/** Identifiers for all fields in a 'onu_dfi_data'. */
typedef enum
{
    BCMOLT_ONU_DFI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_DFI_DATA_ID_ALARM_STATUS = 0, /**< alarm status. */
    BCMOLT_ONU_DFI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_dfi_data_id__begin BCMOLT_ONU_DFI_DATA_ID__BEGIN
#define bcmolt_onu_dfi_data_id_alarm_status BCMOLT_ONU_DFI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_dfi_data_id__num_of BCMOLT_ONU_DFI_DATA_ID__NUM_OF
#define bcmolt_onu_dfi_data_id_all_properties 0xFF
#define bcmolt_onu_dfi_data_id_full_mask 0x1

} bcmolt_onu_dfi_data_id;

/** Identifiers for all fields in a 'onu_pqsi_data'. */
typedef enum
{
    BCMOLT_ONU_PQSI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_PQSI_DATA_ID_ALARM_STATUS = 0, /**< alarm status. */
    BCMOLT_ONU_PQSI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_pqsi_data_id__begin BCMOLT_ONU_PQSI_DATA_ID__BEGIN
#define bcmolt_onu_pqsi_data_id_alarm_status BCMOLT_ONU_PQSI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_pqsi_data_id__num_of BCMOLT_ONU_PQSI_DATA_ID__NUM_OF
#define bcmolt_onu_pqsi_data_id_all_properties 0xFF
#define bcmolt_onu_pqsi_data_id_full_mask 0x1

} bcmolt_onu_pqsi_data_id;

/** Identifiers for all fields in a 'onu_sufi_data'. */
typedef enum
{
    BCMOLT_ONU_SUFI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_SUFI_DATA_ID_ALARM_STATUS = 0, /**< alarm status. */
    BCMOLT_ONU_SUFI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_sufi_data_id__begin BCMOLT_ONU_SUFI_DATA_ID__BEGIN
#define bcmolt_onu_sufi_data_id_alarm_status BCMOLT_ONU_SUFI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_sufi_data_id__num_of BCMOLT_ONU_SUFI_DATA_ID__NUM_OF
#define bcmolt_onu_sufi_data_id_all_properties 0xFF
#define bcmolt_onu_sufi_data_id_full_mask 0x1

} bcmolt_onu_sufi_data_id;

/** Identifiers for all fields in a 'onu_tiwi_data'. */
typedef enum
{
    BCMOLT_ONU_TIWI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_TIWI_DATA_ID_ALARM_STATUS = 0, /**< Alarm status. */
    BCMOLT_ONU_TIWI_DATA_ID_DRIFT_VALUE = 1, /**< Drift value. */
    BCMOLT_ONU_TIWI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_tiwi_data_id__begin BCMOLT_ONU_TIWI_DATA_ID__BEGIN
#define bcmolt_onu_tiwi_data_id_alarm_status BCMOLT_ONU_TIWI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_tiwi_data_id_drift_value BCMOLT_ONU_TIWI_DATA_ID_DRIFT_VALUE
#define bcmolt_onu_tiwi_data_id__num_of BCMOLT_ONU_TIWI_DATA_ID__NUM_OF
#define bcmolt_onu_tiwi_data_id_all_properties 0xFF
#define bcmolt_onu_tiwi_data_id_full_mask 0x3

} bcmolt_onu_tiwi_data_id;

/** Identifiers for all fields in a 'onu_looci_data'. */
typedef enum
{
    BCMOLT_ONU_LOOCI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_LOOCI_DATA_ID_ALARM_STATUS = 0, /**< alarm status. */
    BCMOLT_ONU_LOOCI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_looci_data_id__begin BCMOLT_ONU_LOOCI_DATA_ID__BEGIN
#define bcmolt_onu_looci_data_id_alarm_status BCMOLT_ONU_LOOCI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_looci_data_id__num_of BCMOLT_ONU_LOOCI_DATA_ID__NUM_OF
#define bcmolt_onu_looci_data_id_all_properties 0xFF
#define bcmolt_onu_looci_data_id_full_mask 0x1

} bcmolt_onu_looci_data_id;

/** Identifiers for all fields in a 'onu_loai_data'. */
typedef enum
{
    BCMOLT_ONU_LOAI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_LOAI_DATA_ID_ALARM_STATUS = 0, /**< alarm status. */
    BCMOLT_ONU_LOAI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_loai_data_id__begin BCMOLT_ONU_LOAI_DATA_ID__BEGIN
#define bcmolt_onu_loai_data_id_alarm_status BCMOLT_ONU_LOAI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_loai_data_id__num_of BCMOLT_ONU_LOAI_DATA_ID__NUM_OF
#define bcmolt_onu_loai_data_id_all_properties 0xFF
#define bcmolt_onu_loai_data_id_full_mask 0x1

} bcmolt_onu_loai_data_id;

/** Identifiers for all fields in a 'onu_dgi_data'. */
typedef enum
{
    BCMOLT_ONU_DGI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_DGI_DATA_ID_ALARM_STATUS = 0, /**< alarm status. */
    BCMOLT_ONU_DGI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_dgi_data_id__begin BCMOLT_ONU_DGI_DATA_ID__BEGIN
#define bcmolt_onu_dgi_data_id_alarm_status BCMOLT_ONU_DGI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_dgi_data_id__num_of BCMOLT_ONU_DGI_DATA_ID__NUM_OF
#define bcmolt_onu_dgi_data_id_all_properties 0xFF
#define bcmolt_onu_dgi_data_id_full_mask 0x1

} bcmolt_onu_dgi_data_id;

/** Identifiers for all fields in a 'onu_pee_data'. */
typedef enum
{
    BCMOLT_ONU_PEE_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_PEE_DATA_ID_ALARM_STATUS = 0, /**< alarm status. */
    BCMOLT_ONU_PEE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_pee_data_id__begin BCMOLT_ONU_PEE_DATA_ID__BEGIN
#define bcmolt_onu_pee_data_id_alarm_status BCMOLT_ONU_PEE_DATA_ID_ALARM_STATUS
#define bcmolt_onu_pee_data_id__num_of BCMOLT_ONU_PEE_DATA_ID__NUM_OF
#define bcmolt_onu_pee_data_id_all_properties 0xFF
#define bcmolt_onu_pee_data_id_full_mask 0x1

} bcmolt_onu_pee_data_id;

/** Identifiers for all fields in a 'onu_pst_data'. */
typedef enum
{
    BCMOLT_ONU_PST_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_PST_DATA_ID_LINK_NUMBER = 0, /**< link number. */
    BCMOLT_ONU_PST_DATA_ID_K1 = 1, /**< K1. */
    BCMOLT_ONU_PST_DATA_ID_K2 = 2, /**< K2. */
    BCMOLT_ONU_PST_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_pst_data_id__begin BCMOLT_ONU_PST_DATA_ID__BEGIN
#define bcmolt_onu_pst_data_id_link_number BCMOLT_ONU_PST_DATA_ID_LINK_NUMBER
#define bcmolt_onu_pst_data_id_k1 BCMOLT_ONU_PST_DATA_ID_K1
#define bcmolt_onu_pst_data_id_k2 BCMOLT_ONU_PST_DATA_ID_K2
#define bcmolt_onu_pst_data_id__num_of BCMOLT_ONU_PST_DATA_ID__NUM_OF
#define bcmolt_onu_pst_data_id_all_properties 0xFF
#define bcmolt_onu_pst_data_id_full_mask 0x7

} bcmolt_onu_pst_data_id;

/** Identifiers for all fields in a 'onu_ranging_completed_data'. */
typedef enum
{
    BCMOLT_ONU_RANGING_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_RANGING_COMPLETED_DATA_ID_STATUS = 0, /**< status. */
    BCMOLT_ONU_RANGING_COMPLETED_DATA_ID_FAIL_REASON = 1, /**< fail reason. */
    BCMOLT_ONU_RANGING_COMPLETED_DATA_ID_EQD = 2, /**< EQD. */
    BCMOLT_ONU_RANGING_COMPLETED_DATA_ID_NUMBER_OF_PLOAMS = 3, /**< number of ploams. */
    BCMOLT_ONU_RANGING_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_ranging_completed_data_id__begin BCMOLT_ONU_RANGING_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_ranging_completed_data_id_status BCMOLT_ONU_RANGING_COMPLETED_DATA_ID_STATUS
#define bcmolt_onu_ranging_completed_data_id_fail_reason BCMOLT_ONU_RANGING_COMPLETED_DATA_ID_FAIL_REASON
#define bcmolt_onu_ranging_completed_data_id_eqd BCMOLT_ONU_RANGING_COMPLETED_DATA_ID_EQD
#define bcmolt_onu_ranging_completed_data_id_number_of_ploams BCMOLT_ONU_RANGING_COMPLETED_DATA_ID_NUMBER_OF_PLOAMS
#define bcmolt_onu_ranging_completed_data_id__num_of BCMOLT_ONU_RANGING_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_ranging_completed_data_id_all_properties 0xFF
#define bcmolt_onu_ranging_completed_data_id_full_mask 0xF

} bcmolt_onu_ranging_completed_data_id;

/** Identifiers for all fields in a 'onu_onu_activation_completed_data'. */
typedef enum
{
    BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID_STATUS = 0, /**< status. */
    BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID_FAIL_REASON = 1, /**< fail reason. */
    BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID_REGISTRATION_ID = 2, /**< registration id. */
    BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID_REGISTRATION_ENCRYPTION_KEYS = 3, /**< registration encryption keys. */
    BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_onu_activation_completed_data_id__begin BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_onu_activation_completed_data_id_status BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID_STATUS
#define bcmolt_onu_onu_activation_completed_data_id_fail_reason BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID_FAIL_REASON
#define bcmolt_onu_onu_activation_completed_data_id_registration_id BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID_REGISTRATION_ID
#define bcmolt_onu_onu_activation_completed_data_id_registration_encryption_keys BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID_REGISTRATION_ENCRYPTION_KEYS
#define bcmolt_onu_onu_activation_completed_data_id__num_of BCMOLT_ONU_ONU_ACTIVATION_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_onu_activation_completed_data_id_all_properties 0xFF
#define bcmolt_onu_onu_activation_completed_data_id_full_mask 0xF

} bcmolt_onu_onu_activation_completed_data_id;

/** Identifiers for all fields in a 'onu_onu_deactivation_completed_data'. */
typedef enum
{
    BCMOLT_ONU_ONU_DEACTIVATION_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_ONU_DEACTIVATION_COMPLETED_DATA_ID_STATUS = 0, /**< Status. */
    BCMOLT_ONU_ONU_DEACTIVATION_COMPLETED_DATA_ID_FAIL_REASON = 1, /**< fail reason. */
    BCMOLT_ONU_ONU_DEACTIVATION_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_onu_deactivation_completed_data_id__begin BCMOLT_ONU_ONU_DEACTIVATION_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_onu_deactivation_completed_data_id_status BCMOLT_ONU_ONU_DEACTIVATION_COMPLETED_DATA_ID_STATUS
#define bcmolt_onu_onu_deactivation_completed_data_id_fail_reason BCMOLT_ONU_ONU_DEACTIVATION_COMPLETED_DATA_ID_FAIL_REASON
#define bcmolt_onu_onu_deactivation_completed_data_id__num_of BCMOLT_ONU_ONU_DEACTIVATION_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_onu_deactivation_completed_data_id_all_properties 0xFF
#define bcmolt_onu_onu_deactivation_completed_data_id_full_mask 0x3

} bcmolt_onu_onu_deactivation_completed_data_id;

/** Identifiers for all fields in a 'onu_onu_enable_completed_data'. */
typedef enum
{
    BCMOLT_ONU_ONU_ENABLE_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_ONU_ENABLE_COMPLETED_DATA_ID_SERIAL_NUMBER = 0, /**< serial number. */
    BCMOLT_ONU_ONU_ENABLE_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_onu_enable_completed_data_id__begin BCMOLT_ONU_ONU_ENABLE_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_onu_enable_completed_data_id_serial_number BCMOLT_ONU_ONU_ENABLE_COMPLETED_DATA_ID_SERIAL_NUMBER
#define bcmolt_onu_onu_enable_completed_data_id__num_of BCMOLT_ONU_ONU_ENABLE_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_onu_enable_completed_data_id_all_properties 0xFF
#define bcmolt_onu_onu_enable_completed_data_id_full_mask 0x1

} bcmolt_onu_onu_enable_completed_data_id;

/** Identifiers for all fields in a 'onu_onu_disable_completed_data'. */
typedef enum
{
    BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_ID_SERIAL_NUMBER = 0, /**< serial number. */
    BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_ID_FAIL_REASON = 1, /**< fail reason. */
    BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_ID_STATUS = 2, /**< status. */
    BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_onu_disable_completed_data_id__begin BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_onu_disable_completed_data_id_serial_number BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_ID_SERIAL_NUMBER
#define bcmolt_onu_onu_disable_completed_data_id_fail_reason BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_ID_FAIL_REASON
#define bcmolt_onu_onu_disable_completed_data_id_status BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_ID_STATUS
#define bcmolt_onu_onu_disable_completed_data_id__num_of BCMOLT_ONU_ONU_DISABLE_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_onu_disable_completed_data_id_all_properties 0xFF
#define bcmolt_onu_onu_disable_completed_data_id_full_mask 0x7

} bcmolt_onu_onu_disable_completed_data_id;

/** Identifiers for all fields in a 'onu_rssi_measurement_completed_data'. */
typedef enum
{
    BCMOLT_ONU_RSSI_MEASUREMENT_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_RSSI_MEASUREMENT_COMPLETED_DATA_ID_STATUS = 0, /**< status. */
    BCMOLT_ONU_RSSI_MEASUREMENT_COMPLETED_DATA_ID_FAIL_REASON = 1, /**< fail reason. */
    BCMOLT_ONU_RSSI_MEASUREMENT_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_rssi_measurement_completed_data_id__begin BCMOLT_ONU_RSSI_MEASUREMENT_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_rssi_measurement_completed_data_id_status BCMOLT_ONU_RSSI_MEASUREMENT_COMPLETED_DATA_ID_STATUS
#define bcmolt_onu_rssi_measurement_completed_data_id_fail_reason BCMOLT_ONU_RSSI_MEASUREMENT_COMPLETED_DATA_ID_FAIL_REASON
#define bcmolt_onu_rssi_measurement_completed_data_id__num_of BCMOLT_ONU_RSSI_MEASUREMENT_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_rssi_measurement_completed_data_id_all_properties 0xFF
#define bcmolt_onu_rssi_measurement_completed_data_id_full_mask 0x3

} bcmolt_onu_rssi_measurement_completed_data_id;

/** Identifiers for all fields in a 'onu_invalid_dbru_report_data'. */
typedef enum
{
    BCMOLT_ONU_INVALID_DBRU_REPORT_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_INVALID_DBRU_REPORT_DATA_ID_ALLOC_ID = 0, /**< Alloc-ID. */
    BCMOLT_ONU_INVALID_DBRU_REPORT_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_invalid_dbru_report_data_id__begin BCMOLT_ONU_INVALID_DBRU_REPORT_DATA_ID__BEGIN
#define bcmolt_onu_invalid_dbru_report_data_id_alloc_id BCMOLT_ONU_INVALID_DBRU_REPORT_DATA_ID_ALLOC_ID
#define bcmolt_onu_invalid_dbru_report_data_id__num_of BCMOLT_ONU_INVALID_DBRU_REPORT_DATA_ID__NUM_OF
#define bcmolt_onu_invalid_dbru_report_data_id_all_properties 0xFF
#define bcmolt_onu_invalid_dbru_report_data_id_full_mask 0x1

} bcmolt_onu_invalid_dbru_report_data_id;

/** Identifiers for all fields in a 'onu_key_exchange_completed_data'. */
typedef enum
{
    BCMOLT_ONU_KEY_EXCHANGE_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_KEY_EXCHANGE_COMPLETED_DATA_ID_NEW_KEY = 0, /**< new key. */
    BCMOLT_ONU_KEY_EXCHANGE_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_key_exchange_completed_data_id__begin BCMOLT_ONU_KEY_EXCHANGE_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_key_exchange_completed_data_id_new_key BCMOLT_ONU_KEY_EXCHANGE_COMPLETED_DATA_ID_NEW_KEY
#define bcmolt_onu_key_exchange_completed_data_id__num_of BCMOLT_ONU_KEY_EXCHANGE_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_key_exchange_completed_data_id_all_properties 0xFF
#define bcmolt_onu_key_exchange_completed_data_id_full_mask 0x1

} bcmolt_onu_key_exchange_completed_data_id;

/** Identifiers for all fields in a 'onu_key_exchange_key_mismatch_data'. */
typedef enum
{
    BCMOLT_ONU_KEY_EXCHANGE_KEY_MISMATCH_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_KEY_EXCHANGE_KEY_MISMATCH_DATA_ID_EXPECTED_KEY = 0, /**< expected key. */
    BCMOLT_ONU_KEY_EXCHANGE_KEY_MISMATCH_DATA_ID_RECEIVED_KEY = 1, /**< received key. */
    BCMOLT_ONU_KEY_EXCHANGE_KEY_MISMATCH_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_key_exchange_key_mismatch_data_id__begin BCMOLT_ONU_KEY_EXCHANGE_KEY_MISMATCH_DATA_ID__BEGIN
#define bcmolt_onu_key_exchange_key_mismatch_data_id_expected_key BCMOLT_ONU_KEY_EXCHANGE_KEY_MISMATCH_DATA_ID_EXPECTED_KEY
#define bcmolt_onu_key_exchange_key_mismatch_data_id_received_key BCMOLT_ONU_KEY_EXCHANGE_KEY_MISMATCH_DATA_ID_RECEIVED_KEY
#define bcmolt_onu_key_exchange_key_mismatch_data_id__num_of BCMOLT_ONU_KEY_EXCHANGE_KEY_MISMATCH_DATA_ID__NUM_OF
#define bcmolt_onu_key_exchange_key_mismatch_data_id_all_properties 0xFF
#define bcmolt_onu_key_exchange_key_mismatch_data_id_full_mask 0x3

} bcmolt_onu_key_exchange_key_mismatch_data_id;

/** Identifiers for all fields in a 'onu_loki_data'. */
typedef enum
{
    BCMOLT_ONU_LOKI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_LOKI_DATA_ID_ALARM_STATUS = 0, /**< alarm status. */
    BCMOLT_ONU_LOKI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_loki_data_id__begin BCMOLT_ONU_LOKI_DATA_ID__BEGIN
#define bcmolt_onu_loki_data_id_alarm_status BCMOLT_ONU_LOKI_DATA_ID_ALARM_STATUS
#define bcmolt_onu_loki_data_id__num_of BCMOLT_ONU_LOKI_DATA_ID__NUM_OF
#define bcmolt_onu_loki_data_id_all_properties 0xFF
#define bcmolt_onu_loki_data_id_full_mask 0x1

} bcmolt_onu_loki_data_id;

/** Identifiers for all fields in a 'onu_memi_data'. */
typedef enum
{
    BCMOLT_ONU_MEMI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_MEMI_DATA_ID_PLOAM_BUFFER = 0, /**< PLOAM buffer. */
    BCMOLT_ONU_MEMI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_memi_data_id__begin BCMOLT_ONU_MEMI_DATA_ID__BEGIN
#define bcmolt_onu_memi_data_id_ploam_buffer BCMOLT_ONU_MEMI_DATA_ID_PLOAM_BUFFER
#define bcmolt_onu_memi_data_id__num_of BCMOLT_ONU_MEMI_DATA_ID__NUM_OF
#define bcmolt_onu_memi_data_id_all_properties 0xFF
#define bcmolt_onu_memi_data_id_full_mask 0x1

} bcmolt_onu_memi_data_id;

/** Identifiers for all fields in a 'onu_omci_port_id_configuration_completed_data'. */
typedef enum
{
    BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_ID_GEM_PORT = 0, /**< GEM Port ID. */
    BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_ID_STATUS = 1, /**< status. */
    BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_ID_OPERATION = 2, /**< Operation. */
    BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_omci_port_id_configuration_completed_data_id__begin BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_omci_port_id_configuration_completed_data_id_gem_port BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_ID_GEM_PORT
#define bcmolt_onu_omci_port_id_configuration_completed_data_id_status BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_ID_STATUS
#define bcmolt_onu_omci_port_id_configuration_completed_data_id_operation BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_ID_OPERATION
#define bcmolt_onu_omci_port_id_configuration_completed_data_id__num_of BCMOLT_ONU_OMCI_PORT_ID_CONFIGURATION_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_omci_port_id_configuration_completed_data_id_all_properties 0xFF
#define bcmolt_onu_omci_port_id_configuration_completed_data_id_full_mask 0x7

} bcmolt_onu_omci_port_id_configuration_completed_data_id;

/** Identifiers for all fields in a 'onu_ber_interval_configuration_completed_data'. */
typedef enum
{
    BCMOLT_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED_DATA_ID_BER_INTERVAL = 0, /**< BER interval in ms. */
    BCMOLT_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED_DATA_ID_RESULT = 1, /**< Result. */
    BCMOLT_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_ber_interval_configuration_completed_data_id__begin BCMOLT_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_ber_interval_configuration_completed_data_id_ber_interval BCMOLT_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED_DATA_ID_BER_INTERVAL
#define bcmolt_onu_ber_interval_configuration_completed_data_id_result BCMOLT_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED_DATA_ID_RESULT
#define bcmolt_onu_ber_interval_configuration_completed_data_id__num_of BCMOLT_ONU_BER_INTERVAL_CONFIGURATION_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_ber_interval_configuration_completed_data_id_all_properties 0xFF
#define bcmolt_onu_ber_interval_configuration_completed_data_id_full_mask 0x3

} bcmolt_onu_ber_interval_configuration_completed_data_id;

/** Identifiers for all fields in a 'onu_err_data'. */
typedef enum
{
    BCMOLT_ONU_ERR_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_ERR_DATA_ID_BIP8_ERRORS = 0, /**< BIP8 errors. */
    BCMOLT_ONU_ERR_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_err_data_id__begin BCMOLT_ONU_ERR_DATA_ID__BEGIN
#define bcmolt_onu_err_data_id_bip8_errors BCMOLT_ONU_ERR_DATA_ID_BIP8_ERRORS
#define bcmolt_onu_err_data_id__num_of BCMOLT_ONU_ERR_DATA_ID__NUM_OF
#define bcmolt_onu_err_data_id_all_properties 0xFF
#define bcmolt_onu_err_data_id_full_mask 0x1

} bcmolt_onu_err_data_id;

/** Identifiers for all fields in a 'onu_password_authentication_completed_data'. */
typedef enum
{
    BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_ID_STATUS = 0, /**< status. */
    BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_ID_FAIL_REASON = 1, /**< fail reason. */
    BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_ID_PASSWORD = 2, /**< password. */
    BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_password_authentication_completed_data_id__begin BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_password_authentication_completed_data_id_status BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_ID_STATUS
#define bcmolt_onu_password_authentication_completed_data_id_fail_reason BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_ID_FAIL_REASON
#define bcmolt_onu_password_authentication_completed_data_id_password BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_ID_PASSWORD
#define bcmolt_onu_password_authentication_completed_data_id__num_of BCMOLT_ONU_PASSWORD_AUTHENTICATION_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_password_authentication_completed_data_id_all_properties 0xFF
#define bcmolt_onu_password_authentication_completed_data_id_full_mask 0x7

} bcmolt_onu_password_authentication_completed_data_id;

/** Identifiers for all fields in a 'onu_key_exchange_unconsecutive_index_data'. */
typedef enum
{
    BCMOLT_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX_DATA_ID_EXPECTED_INDEX = 0, /**< expected index. */
    BCMOLT_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX_DATA_ID_ACTUAL_INDEX = 1, /**< actual index. */
    BCMOLT_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_key_exchange_unconsecutive_index_data_id__begin BCMOLT_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX_DATA_ID__BEGIN
#define bcmolt_onu_key_exchange_unconsecutive_index_data_id_expected_index BCMOLT_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX_DATA_ID_EXPECTED_INDEX
#define bcmolt_onu_key_exchange_unconsecutive_index_data_id_actual_index BCMOLT_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX_DATA_ID_ACTUAL_INDEX
#define bcmolt_onu_key_exchange_unconsecutive_index_data_id__num_of BCMOLT_ONU_KEY_EXCHANGE_UNCONSECUTIVE_INDEX_DATA_ID__NUM_OF
#define bcmolt_onu_key_exchange_unconsecutive_index_data_id_all_properties 0xFF
#define bcmolt_onu_key_exchange_unconsecutive_index_data_id_full_mask 0x3

} bcmolt_onu_key_exchange_unconsecutive_index_data_id;

/** Identifiers for all fields in a 'onu_key_exchange_decrypt_required_data'. */
typedef enum
{
    BCMOLT_ONU_KEY_EXCHANGE_DECRYPT_REQUIRED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_KEY_EXCHANGE_DECRYPT_REQUIRED_DATA_ID_NEW_KEY = 0, /**< new key. */
    BCMOLT_ONU_KEY_EXCHANGE_DECRYPT_REQUIRED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_key_exchange_decrypt_required_data_id__begin BCMOLT_ONU_KEY_EXCHANGE_DECRYPT_REQUIRED_DATA_ID__BEGIN
#define bcmolt_onu_key_exchange_decrypt_required_data_id_new_key BCMOLT_ONU_KEY_EXCHANGE_DECRYPT_REQUIRED_DATA_ID_NEW_KEY
#define bcmolt_onu_key_exchange_decrypt_required_data_id__num_of BCMOLT_ONU_KEY_EXCHANGE_DECRYPT_REQUIRED_DATA_ID__NUM_OF
#define bcmolt_onu_key_exchange_decrypt_required_data_id_all_properties 0xFF
#define bcmolt_onu_key_exchange_decrypt_required_data_id_full_mask 0x1

} bcmolt_onu_key_exchange_decrypt_required_data_id;

/** Identifiers for all fields in a 'onu_onu_activation_standby_completed_data'. */
typedef enum
{
    BCMOLT_ONU_ONU_ACTIVATION_STANDBY_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_ONU_ACTIVATION_STANDBY_COMPLETED_DATA_ID_RESULT = 0, /**< result. */
    BCMOLT_ONU_ONU_ACTIVATION_STANDBY_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_onu_activation_standby_completed_data_id__begin BCMOLT_ONU_ONU_ACTIVATION_STANDBY_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_onu_activation_standby_completed_data_id_result BCMOLT_ONU_ONU_ACTIVATION_STANDBY_COMPLETED_DATA_ID_RESULT
#define bcmolt_onu_onu_activation_standby_completed_data_id__num_of BCMOLT_ONU_ONU_ACTIVATION_STANDBY_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_onu_activation_standby_completed_data_id_all_properties 0xFF
#define bcmolt_onu_onu_activation_standby_completed_data_id_full_mask 0x1

} bcmolt_onu_onu_activation_standby_completed_data_id;

/** Identifiers for all fields in a 'onu_power_management_state_change_data'. */
typedef enum
{
    BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_ID_OLD_STATE = 0, /**< Old State. */
    BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_ID_NEW_STATE = 1, /**< New State. */
    BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_ID_REASON = 2, /**< Reason. */
    BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_power_management_state_change_data_id__begin BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_ID__BEGIN
#define bcmolt_onu_power_management_state_change_data_id_old_state BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_ID_OLD_STATE
#define bcmolt_onu_power_management_state_change_data_id_new_state BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_ID_NEW_STATE
#define bcmolt_onu_power_management_state_change_data_id_reason BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_ID_REASON
#define bcmolt_onu_power_management_state_change_data_id__num_of BCMOLT_ONU_POWER_MANAGEMENT_STATE_CHANGE_DATA_ID__NUM_OF
#define bcmolt_onu_power_management_state_change_data_id_all_properties 0xFF
#define bcmolt_onu_power_management_state_change_data_id_full_mask 0x7

} bcmolt_onu_power_management_state_change_data_id;

/** Identifiers for all fields in a 'onu_possible_drift_data'. */
typedef enum
{
    BCMOLT_ONU_POSSIBLE_DRIFT_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_POSSIBLE_DRIFT_DATA_ID_ALARM_STATUS = 0, /**< Alarm Status. */
    BCMOLT_ONU_POSSIBLE_DRIFT_DATA_ID_ESTIMATED_DRIFT = 1, /**< Estimated Drift. */
    BCMOLT_ONU_POSSIBLE_DRIFT_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_possible_drift_data_id__begin BCMOLT_ONU_POSSIBLE_DRIFT_DATA_ID__BEGIN
#define bcmolt_onu_possible_drift_data_id_alarm_status BCMOLT_ONU_POSSIBLE_DRIFT_DATA_ID_ALARM_STATUS
#define bcmolt_onu_possible_drift_data_id_estimated_drift BCMOLT_ONU_POSSIBLE_DRIFT_DATA_ID_ESTIMATED_DRIFT
#define bcmolt_onu_possible_drift_data_id__num_of BCMOLT_ONU_POSSIBLE_DRIFT_DATA_ID__NUM_OF
#define bcmolt_onu_possible_drift_data_id_all_properties 0xFF
#define bcmolt_onu_possible_drift_data_id_full_mask 0x3

} bcmolt_onu_possible_drift_data_id;

/** Identifiers for all fields in a 'onu_registration_id_data'. */
typedef enum
{
    BCMOLT_ONU_REGISTRATION_ID_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_REGISTRATION_ID_DATA_ID_REGISTRATION_ID = 0, /**< Registration ID. */
    BCMOLT_ONU_REGISTRATION_ID_DATA_ID_REQUEST_REGISTRATION_STATUS = 1, /**< request registration status. */
    BCMOLT_ONU_REGISTRATION_ID_DATA_ID_REQUEST_REGISTRATION_FAIL_REASON = 2, /**< request registration fail reason. */
    BCMOLT_ONU_REGISTRATION_ID_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_registration_id_data_id__begin BCMOLT_ONU_REGISTRATION_ID_DATA_ID__BEGIN
#define bcmolt_onu_registration_id_data_id_registration_id BCMOLT_ONU_REGISTRATION_ID_DATA_ID_REGISTRATION_ID
#define bcmolt_onu_registration_id_data_id_request_registration_status BCMOLT_ONU_REGISTRATION_ID_DATA_ID_REQUEST_REGISTRATION_STATUS
#define bcmolt_onu_registration_id_data_id_request_registration_fail_reason BCMOLT_ONU_REGISTRATION_ID_DATA_ID_REQUEST_REGISTRATION_FAIL_REASON
#define bcmolt_onu_registration_id_data_id__num_of BCMOLT_ONU_REGISTRATION_ID_DATA_ID__NUM_OF
#define bcmolt_onu_registration_id_data_id_all_properties 0xFF
#define bcmolt_onu_registration_id_data_id_full_mask 0x7

} bcmolt_onu_registration_id_data_id;

/** Identifiers for all fields in a 'onu_power_level_report_data'. */
typedef enum
{
    BCMOLT_ONU_POWER_LEVEL_REPORT_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_POWER_LEVEL_REPORT_DATA_ID_ATTENUATION = 0, /**< Attenuation. */
    BCMOLT_ONU_POWER_LEVEL_REPORT_DATA_ID_POWER_LEVELLING_CAPABILITY = 1, /**< Power levelling capability. */
    BCMOLT_ONU_POWER_LEVEL_REPORT_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_power_level_report_data_id__begin BCMOLT_ONU_POWER_LEVEL_REPORT_DATA_ID__BEGIN
#define bcmolt_onu_power_level_report_data_id_attenuation BCMOLT_ONU_POWER_LEVEL_REPORT_DATA_ID_ATTENUATION
#define bcmolt_onu_power_level_report_data_id_power_levelling_capability BCMOLT_ONU_POWER_LEVEL_REPORT_DATA_ID_POWER_LEVELLING_CAPABILITY
#define bcmolt_onu_power_level_report_data_id__num_of BCMOLT_ONU_POWER_LEVEL_REPORT_DATA_ID__NUM_OF
#define bcmolt_onu_power_level_report_data_id_all_properties 0xFF
#define bcmolt_onu_power_level_report_data_id_full_mask 0x3

} bcmolt_onu_power_level_report_data_id;

/** Identifiers for all fields in a 'onu_power_consumption_report_data'. */
typedef enum
{
    BCMOLT_ONU_POWER_CONSUMPTION_REPORT_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_POWER_CONSUMPTION_REPORT_DATA_ID_POWER_CONSUMPTION_REPORT = 0, /**< power consumption report. */
    BCMOLT_ONU_POWER_CONSUMPTION_REPORT_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_power_consumption_report_data_id__begin BCMOLT_ONU_POWER_CONSUMPTION_REPORT_DATA_ID__BEGIN
#define bcmolt_onu_power_consumption_report_data_id_power_consumption_report BCMOLT_ONU_POWER_CONSUMPTION_REPORT_DATA_ID_POWER_CONSUMPTION_REPORT
#define bcmolt_onu_power_consumption_report_data_id__num_of BCMOLT_ONU_POWER_CONSUMPTION_REPORT_DATA_ID__NUM_OF
#define bcmolt_onu_power_consumption_report_data_id_all_properties 0xFF
#define bcmolt_onu_power_consumption_report_data_id_full_mask 0x1

} bcmolt_onu_power_consumption_report_data_id;

/** Identifiers for all fields in a 'onu_secure_mutual_authentication_failure_data'. */
typedef enum
{
    BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE_DATA_ID_STATUS = 0, /**< status. */
    BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE_DATA_ID_FAIL_REASON = 1, /**< secure mutual authentication fail reason. */
    BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_secure_mutual_authentication_failure_data_id__begin BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE_DATA_ID__BEGIN
#define bcmolt_onu_secure_mutual_authentication_failure_data_id_status BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE_DATA_ID_STATUS
#define bcmolt_onu_secure_mutual_authentication_failure_data_id_fail_reason BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE_DATA_ID_FAIL_REASON
#define bcmolt_onu_secure_mutual_authentication_failure_data_id__num_of BCMOLT_ONU_SECURE_MUTUAL_AUTHENTICATION_FAILURE_DATA_ID__NUM_OF
#define bcmolt_onu_secure_mutual_authentication_failure_data_id_all_properties 0xFF
#define bcmolt_onu_secure_mutual_authentication_failure_data_id_full_mask 0x3

} bcmolt_onu_secure_mutual_authentication_failure_data_id;

/** Identifiers for all fields in a 'onu_onu_tuning_out_completed_data'. */
typedef enum
{
    BCMOLT_ONU_ONU_TUNING_OUT_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_ONU_TUNING_OUT_COMPLETED_DATA_ID_RESULT = 0, /**< result. */
    BCMOLT_ONU_ONU_TUNING_OUT_COMPLETED_DATA_ID_FAIL_REASON = 1, /**< fail reason. */
    BCMOLT_ONU_ONU_TUNING_OUT_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_onu_tuning_out_completed_data_id__begin BCMOLT_ONU_ONU_TUNING_OUT_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_onu_tuning_out_completed_data_id_result BCMOLT_ONU_ONU_TUNING_OUT_COMPLETED_DATA_ID_RESULT
#define bcmolt_onu_onu_tuning_out_completed_data_id_fail_reason BCMOLT_ONU_ONU_TUNING_OUT_COMPLETED_DATA_ID_FAIL_REASON
#define bcmolt_onu_onu_tuning_out_completed_data_id__num_of BCMOLT_ONU_ONU_TUNING_OUT_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_onu_tuning_out_completed_data_id_all_properties 0xFF
#define bcmolt_onu_onu_tuning_out_completed_data_id_full_mask 0x3

} bcmolt_onu_onu_tuning_out_completed_data_id;

/** Identifiers for all fields in a 'onu_onu_tuning_in_completed_data'. */
typedef enum
{
    BCMOLT_ONU_ONU_TUNING_IN_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_ONU_TUNING_IN_COMPLETED_DATA_ID_RESULT = 0, /**< result. */
    BCMOLT_ONU_ONU_TUNING_IN_COMPLETED_DATA_ID_FAIL_REASON = 1, /**< fail reason. */
    BCMOLT_ONU_ONU_TUNING_IN_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_onu_tuning_in_completed_data_id__begin BCMOLT_ONU_ONU_TUNING_IN_COMPLETED_DATA_ID__BEGIN
#define bcmolt_onu_onu_tuning_in_completed_data_id_result BCMOLT_ONU_ONU_TUNING_IN_COMPLETED_DATA_ID_RESULT
#define bcmolt_onu_onu_tuning_in_completed_data_id_fail_reason BCMOLT_ONU_ONU_TUNING_IN_COMPLETED_DATA_ID_FAIL_REASON
#define bcmolt_onu_onu_tuning_in_completed_data_id__num_of BCMOLT_ONU_ONU_TUNING_IN_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_onu_onu_tuning_in_completed_data_id_all_properties 0xFF
#define bcmolt_onu_onu_tuning_in_completed_data_id_full_mask 0x3

} bcmolt_onu_onu_tuning_in_completed_data_id;

/** Identifiers for all fields in a 'onu_tuning_response_data'. */
typedef enum
{
    BCMOLT_ONU_TUNING_RESPONSE_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_TUNING_RESPONSE_DATA_ID_ACK = 0, /**< ack. */
    BCMOLT_ONU_TUNING_RESPONSE_DATA_ID_RESULT = 1, /**< result. */
    BCMOLT_ONU_TUNING_RESPONSE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_tuning_response_data_id__begin BCMOLT_ONU_TUNING_RESPONSE_DATA_ID__BEGIN
#define bcmolt_onu_tuning_response_data_id_ack BCMOLT_ONU_TUNING_RESPONSE_DATA_ID_ACK
#define bcmolt_onu_tuning_response_data_id_result BCMOLT_ONU_TUNING_RESPONSE_DATA_ID_RESULT
#define bcmolt_onu_tuning_response_data_id__num_of BCMOLT_ONU_TUNING_RESPONSE_DATA_ID__NUM_OF
#define bcmolt_onu_tuning_response_data_id_all_properties 0xFF
#define bcmolt_onu_tuning_response_data_id_full_mask 0x3

} bcmolt_onu_tuning_response_data_id;

/** Identifiers for all fields in a 'onu_ploam_packet_data'. */
typedef enum
{
    BCMOLT_ONU_PLOAM_PACKET_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_PLOAM_PACKET_DATA_ID_DEFAULT_KEY = 0, /**< default key. */
    BCMOLT_ONU_PLOAM_PACKET_DATA_ID_PLOAM = 1, /**< ploam. */
    BCMOLT_ONU_PLOAM_PACKET_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_ploam_packet_data_id__begin BCMOLT_ONU_PLOAM_PACKET_DATA_ID__BEGIN
#define bcmolt_onu_ploam_packet_data_id_default_key BCMOLT_ONU_PLOAM_PACKET_DATA_ID_DEFAULT_KEY
#define bcmolt_onu_ploam_packet_data_id_ploam BCMOLT_ONU_PLOAM_PACKET_DATA_ID_PLOAM
#define bcmolt_onu_ploam_packet_data_id__num_of BCMOLT_ONU_PLOAM_PACKET_DATA_ID__NUM_OF
#define bcmolt_onu_ploam_packet_data_id_all_properties 0xFF
#define bcmolt_onu_ploam_packet_data_id_full_mask 0x3

} bcmolt_onu_ploam_packet_data_id;

/** Identifiers for all fields in a 'onu_cpu_packets_data'. */
typedef enum
{
    BCMOLT_ONU_CPU_PACKETS_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_CPU_PACKETS_DATA_ID_PACKET_TYPE = 0, /**< packet type. */
    BCMOLT_ONU_CPU_PACKETS_DATA_ID_CALC_CRC = 1, /**< calc crc. */
    BCMOLT_ONU_CPU_PACKETS_DATA_ID_NUMBER_OF_PACKETS = 2, /**< number of packets. */
    BCMOLT_ONU_CPU_PACKETS_DATA_ID_PACKET_SIZE = 3, /**< Single packet size. */
    BCMOLT_ONU_CPU_PACKETS_DATA_ID_BUFFER = 4, /**< buffer. */
    BCMOLT_ONU_CPU_PACKETS_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_cpu_packets_data_id__begin BCMOLT_ONU_CPU_PACKETS_DATA_ID__BEGIN
#define bcmolt_onu_cpu_packets_data_id_packet_type BCMOLT_ONU_CPU_PACKETS_DATA_ID_PACKET_TYPE
#define bcmolt_onu_cpu_packets_data_id_calc_crc BCMOLT_ONU_CPU_PACKETS_DATA_ID_CALC_CRC
#define bcmolt_onu_cpu_packets_data_id_number_of_packets BCMOLT_ONU_CPU_PACKETS_DATA_ID_NUMBER_OF_PACKETS
#define bcmolt_onu_cpu_packets_data_id_packet_size BCMOLT_ONU_CPU_PACKETS_DATA_ID_PACKET_SIZE
#define bcmolt_onu_cpu_packets_data_id_buffer BCMOLT_ONU_CPU_PACKETS_DATA_ID_BUFFER
#define bcmolt_onu_cpu_packets_data_id__num_of BCMOLT_ONU_CPU_PACKETS_DATA_ID__NUM_OF
#define bcmolt_onu_cpu_packets_data_id_all_properties 0xFF
#define bcmolt_onu_cpu_packets_data_id_full_mask 0x1F

} bcmolt_onu_cpu_packets_data_id;

/** Identifiers for all fields in a 'onu_cpu_packet_data'. */
typedef enum
{
    BCMOLT_ONU_CPU_PACKET_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_CPU_PACKET_DATA_ID_PORT_ID = 0, /**< port id. */
    BCMOLT_ONU_CPU_PACKET_DATA_ID_CRC_OK = 1, /**< crc ok. */
    BCMOLT_ONU_CPU_PACKET_DATA_ID_PACKET_SIZE = 2, /**< packet size. */
    BCMOLT_ONU_CPU_PACKET_DATA_ID_BUFFER = 3, /**< buffer. */
    BCMOLT_ONU_CPU_PACKET_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_cpu_packet_data_id__begin BCMOLT_ONU_CPU_PACKET_DATA_ID__BEGIN
#define bcmolt_onu_cpu_packet_data_id_port_id BCMOLT_ONU_CPU_PACKET_DATA_ID_PORT_ID
#define bcmolt_onu_cpu_packet_data_id_crc_ok BCMOLT_ONU_CPU_PACKET_DATA_ID_CRC_OK
#define bcmolt_onu_cpu_packet_data_id_packet_size BCMOLT_ONU_CPU_PACKET_DATA_ID_PACKET_SIZE
#define bcmolt_onu_cpu_packet_data_id_buffer BCMOLT_ONU_CPU_PACKET_DATA_ID_BUFFER
#define bcmolt_onu_cpu_packet_data_id__num_of BCMOLT_ONU_CPU_PACKET_DATA_ID__NUM_OF
#define bcmolt_onu_cpu_packet_data_id_all_properties 0xFF
#define bcmolt_onu_cpu_packet_data_id_full_mask 0xF

} bcmolt_onu_cpu_packet_data_id;

/** Identifiers for all fields in a 'onu_omci_packet_data'. */
typedef enum
{
    BCMOLT_ONU_OMCI_PACKET_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_OMCI_PACKET_DATA_ID_PORT_ID = 0, /**< port id. */
    BCMOLT_ONU_OMCI_PACKET_DATA_ID_CRC_OK = 1, /**< crc ok. */
    BCMOLT_ONU_OMCI_PACKET_DATA_ID_PACKET_SIZE = 2, /**< packet size. */
    BCMOLT_ONU_OMCI_PACKET_DATA_ID_BUFFER = 3, /**< buffer. */
    BCMOLT_ONU_OMCI_PACKET_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_omci_packet_data_id__begin BCMOLT_ONU_OMCI_PACKET_DATA_ID__BEGIN
#define bcmolt_onu_omci_packet_data_id_port_id BCMOLT_ONU_OMCI_PACKET_DATA_ID_PORT_ID
#define bcmolt_onu_omci_packet_data_id_crc_ok BCMOLT_ONU_OMCI_PACKET_DATA_ID_CRC_OK
#define bcmolt_onu_omci_packet_data_id_packet_size BCMOLT_ONU_OMCI_PACKET_DATA_ID_PACKET_SIZE
#define bcmolt_onu_omci_packet_data_id_buffer BCMOLT_ONU_OMCI_PACKET_DATA_ID_BUFFER
#define bcmolt_onu_omci_packet_data_id__num_of BCMOLT_ONU_OMCI_PACKET_DATA_ID__NUM_OF
#define bcmolt_onu_omci_packet_data_id_all_properties 0xFF
#define bcmolt_onu_omci_packet_data_id_full_mask 0xF

} bcmolt_onu_omci_packet_data_id;

/** Identifiers for all fields in a 'onu_rei_data'. */
typedef enum
{
    BCMOLT_ONU_REI_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_REI_DATA_ID_BIP8_ERRORS = 0, /**< BIP8 errors. */
    BCMOLT_ONU_REI_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_rei_data_id__begin BCMOLT_ONU_REI_DATA_ID__BEGIN
#define bcmolt_onu_rei_data_id_bip8_errors BCMOLT_ONU_REI_DATA_ID_BIP8_ERRORS
#define bcmolt_onu_rei_data_id__num_of BCMOLT_ONU_REI_DATA_ID__NUM_OF
#define bcmolt_onu_rei_data_id_all_properties 0xFF
#define bcmolt_onu_rei_data_id_full_mask 0x1

} bcmolt_onu_rei_data_id;

/** Identifiers for all fields in a 'onu_state_change_data'. */
typedef enum
{
    BCMOLT_ONU_STATE_CHANGE_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_STATE_CHANGE_DATA_ID_NEW_ONU_STATE = 0, /**< New ONU state. */
    BCMOLT_ONU_STATE_CHANGE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_state_change_data_id__begin BCMOLT_ONU_STATE_CHANGE_DATA_ID__BEGIN
#define bcmolt_onu_state_change_data_id_new_onu_state BCMOLT_ONU_STATE_CHANGE_DATA_ID_NEW_ONU_STATE
#define bcmolt_onu_state_change_data_id__num_of BCMOLT_ONU_STATE_CHANGE_DATA_ID__NUM_OF
#define bcmolt_onu_state_change_data_id_all_properties 0xFF
#define bcmolt_onu_state_change_data_id_full_mask 0x1

} bcmolt_onu_state_change_data_id;

/** Identifiers for all fields in a 'onu_auto_cfg_data'. */
typedef enum
{
    BCMOLT_ONU_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_ONU_AUTO_CFG_DATA_ID_BER_INTERVAL_CONFIGURATION_COMPLETED = 0, /**< BER Interval Configuration Completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_CPU_PACKET = 1, /**< XGPON CPU packet. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_DFI = 2, /**< Receive Dying-Gasp of ONUi. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_DGI = 3, /**< Receive Dying-Gasp of ONUi. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_DOWI = 4, /**< Drift of Window of ONUi. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_ERR = 5, /**< ERR. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_GPON_ALARM = 6, /**< GPON ONU Alarm. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_INVALID_DBRU_REPORT = 7, /**< Invalid DBRu Report. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_COMPLETED = 8, /**< Key Exchange Completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_CYCLE_SKIPPED = 9, /**< Key Exchange Cycle Skipped. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_DECRYPT_REQUIRED = 10, /**< Key Exchange Decrypt Required. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_KEY_MISMATCH = 11, /**< Key Exchange Key Mismatch. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_KEY_REQUEST_TIMEOUT = 12, /**< Key Exchange Key Request Timeout. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_UNCONSECUTIVE_INDEX = 13, /**< Key Exchange Unconsecutive Index. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_LOAI = 14, /**< LOAi. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_LOKI = 15, /**< LOki. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_LOOCI = 16, /**< LOOCi. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_MEMI = 17, /**< MEMi. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_OMCI_PACKET = 18, /**< XGPON OMCI packet. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_OMCI_PORT_ID_CONFIGURATION_COMPLETED = 19, /**< OMCI PORT ID Configuration Completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_ACTIVATION_COMPLETED = 20, /**< ONU Activation Completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_ACTIVATION_STANDBY_COMPLETED = 21, /**< onu activation standby completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_DEACTIVATION_COMPLETED = 22, /**< ONU Deactivation Completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_DISABLE_COMPLETED = 23, /**< ONU Disable Completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_ENABLE_COMPLETED = 24, /**< ONU Enable Completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_READY_FOR_DATA_GRANT = 25, /**< ONU is ready to be granted data accesses. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_TUNING_IN_COMPLETED = 26, /**< ONU Tuning in completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_TUNING_OUT_COMPLETED = 27, /**< ONU Tuning out completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_OPTICAL_REFLECTION = 28, /**< Optical Reflection. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_PASSWORD_AUTHENTICATION_COMPLETED = 29, /**< Password Authentication Completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_PEE = 30, /**< PEE. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_POSSIBLE_DRIFT = 31, /**< Possible Drift. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_POWER_CONSUMPTION_REPORT = 32, /**< Power consumption report. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_POWER_LEVEL_REPORT = 33, /**< Power level report. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_POWER_MANAGEMENT_STATE_CHANGE = 34, /**< Power Management State Change. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_PQSI = 35, /**< ploam queue status. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_PST = 36, /**< PST. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_RANGING_COMPLETED = 37, /**< Ranging Completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_REGISTRATION_ID = 38, /**< Registration ID. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_REI = 39, /**< REI. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_RSSI_MEASUREMENT_COMPLETED = 40, /**< RSSI Measurement Completed. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_SDI = 41, /**< Signal Degraded of ONUi. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_SECURE_MUTUAL_AUTHENTICATION_FAILURE = 42, /**< secure mutual authentication failure. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_SFI = 43, /**< Signal Fail of ONUi. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_STATE_CHANGE = 44, /**< State Change. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_SUFI = 45, /**< SUFi. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_TIWI = 46, /**< Transmission Interference Warning. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_TUNING_RESPONSE = 47, /**< Tuning response. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID_XGPON_ALARM = 48, /**< XGPON ONU Alarm. */
    BCMOLT_ONU_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_onu_auto_cfg_data_id__begin BCMOLT_ONU_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_onu_auto_cfg_data_id_ber_interval_configuration_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_BER_INTERVAL_CONFIGURATION_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_cpu_packet BCMOLT_ONU_AUTO_CFG_DATA_ID_CPU_PACKET
#define bcmolt_onu_auto_cfg_data_id_dfi BCMOLT_ONU_AUTO_CFG_DATA_ID_DFI
#define bcmolt_onu_auto_cfg_data_id_dgi BCMOLT_ONU_AUTO_CFG_DATA_ID_DGI
#define bcmolt_onu_auto_cfg_data_id_dowi BCMOLT_ONU_AUTO_CFG_DATA_ID_DOWI
#define bcmolt_onu_auto_cfg_data_id_err BCMOLT_ONU_AUTO_CFG_DATA_ID_ERR
#define bcmolt_onu_auto_cfg_data_id_gpon_alarm BCMOLT_ONU_AUTO_CFG_DATA_ID_GPON_ALARM
#define bcmolt_onu_auto_cfg_data_id_invalid_dbru_report BCMOLT_ONU_AUTO_CFG_DATA_ID_INVALID_DBRU_REPORT
#define bcmolt_onu_auto_cfg_data_id_key_exchange_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_key_exchange_cycle_skipped BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_CYCLE_SKIPPED
#define bcmolt_onu_auto_cfg_data_id_key_exchange_decrypt_required BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_DECRYPT_REQUIRED
#define bcmolt_onu_auto_cfg_data_id_key_exchange_key_mismatch BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_KEY_MISMATCH
#define bcmolt_onu_auto_cfg_data_id_key_exchange_key_request_timeout BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_KEY_REQUEST_TIMEOUT
#define bcmolt_onu_auto_cfg_data_id_key_exchange_unconsecutive_index BCMOLT_ONU_AUTO_CFG_DATA_ID_KEY_EXCHANGE_UNCONSECUTIVE_INDEX
#define bcmolt_onu_auto_cfg_data_id_loai BCMOLT_ONU_AUTO_CFG_DATA_ID_LOAI
#define bcmolt_onu_auto_cfg_data_id_loki BCMOLT_ONU_AUTO_CFG_DATA_ID_LOKI
#define bcmolt_onu_auto_cfg_data_id_looci BCMOLT_ONU_AUTO_CFG_DATA_ID_LOOCI
#define bcmolt_onu_auto_cfg_data_id_memi BCMOLT_ONU_AUTO_CFG_DATA_ID_MEMI
#define bcmolt_onu_auto_cfg_data_id_omci_packet BCMOLT_ONU_AUTO_CFG_DATA_ID_OMCI_PACKET
#define bcmolt_onu_auto_cfg_data_id_omci_port_id_configuration_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_OMCI_PORT_ID_CONFIGURATION_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_onu_activation_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_ACTIVATION_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_onu_activation_standby_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_ACTIVATION_STANDBY_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_onu_deactivation_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_DEACTIVATION_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_onu_disable_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_DISABLE_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_onu_enable_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_ENABLE_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_onu_ready_for_data_grant BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_READY_FOR_DATA_GRANT
#define bcmolt_onu_auto_cfg_data_id_onu_tuning_in_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_TUNING_IN_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_onu_tuning_out_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_ONU_TUNING_OUT_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_optical_reflection BCMOLT_ONU_AUTO_CFG_DATA_ID_OPTICAL_REFLECTION
#define bcmolt_onu_auto_cfg_data_id_password_authentication_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_PASSWORD_AUTHENTICATION_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_pee BCMOLT_ONU_AUTO_CFG_DATA_ID_PEE
#define bcmolt_onu_auto_cfg_data_id_possible_drift BCMOLT_ONU_AUTO_CFG_DATA_ID_POSSIBLE_DRIFT
#define bcmolt_onu_auto_cfg_data_id_power_consumption_report BCMOLT_ONU_AUTO_CFG_DATA_ID_POWER_CONSUMPTION_REPORT
#define bcmolt_onu_auto_cfg_data_id_power_level_report BCMOLT_ONU_AUTO_CFG_DATA_ID_POWER_LEVEL_REPORT
#define bcmolt_onu_auto_cfg_data_id_power_management_state_change BCMOLT_ONU_AUTO_CFG_DATA_ID_POWER_MANAGEMENT_STATE_CHANGE
#define bcmolt_onu_auto_cfg_data_id_pqsi BCMOLT_ONU_AUTO_CFG_DATA_ID_PQSI
#define bcmolt_onu_auto_cfg_data_id_pst BCMOLT_ONU_AUTO_CFG_DATA_ID_PST
#define bcmolt_onu_auto_cfg_data_id_ranging_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_RANGING_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_registration_id BCMOLT_ONU_AUTO_CFG_DATA_ID_REGISTRATION_ID
#define bcmolt_onu_auto_cfg_data_id_rei BCMOLT_ONU_AUTO_CFG_DATA_ID_REI
#define bcmolt_onu_auto_cfg_data_id_rssi_measurement_completed BCMOLT_ONU_AUTO_CFG_DATA_ID_RSSI_MEASUREMENT_COMPLETED
#define bcmolt_onu_auto_cfg_data_id_sdi BCMOLT_ONU_AUTO_CFG_DATA_ID_SDI
#define bcmolt_onu_auto_cfg_data_id_secure_mutual_authentication_failure BCMOLT_ONU_AUTO_CFG_DATA_ID_SECURE_MUTUAL_AUTHENTICATION_FAILURE
#define bcmolt_onu_auto_cfg_data_id_sfi BCMOLT_ONU_AUTO_CFG_DATA_ID_SFI
#define bcmolt_onu_auto_cfg_data_id_state_change BCMOLT_ONU_AUTO_CFG_DATA_ID_STATE_CHANGE
#define bcmolt_onu_auto_cfg_data_id_sufi BCMOLT_ONU_AUTO_CFG_DATA_ID_SUFI
#define bcmolt_onu_auto_cfg_data_id_tiwi BCMOLT_ONU_AUTO_CFG_DATA_ID_TIWI
#define bcmolt_onu_auto_cfg_data_id_tuning_response BCMOLT_ONU_AUTO_CFG_DATA_ID_TUNING_RESPONSE
#define bcmolt_onu_auto_cfg_data_id_xgpon_alarm BCMOLT_ONU_AUTO_CFG_DATA_ID_XGPON_ALARM
#define bcmolt_onu_auto_cfg_data_id__num_of BCMOLT_ONU_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_onu_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_onu_auto_cfg_data_id_full_mask 0x1FFFFFFFFFFFF

} bcmolt_onu_auto_cfg_data_id;

/** Identifiers for all fields in a 'pbit_to_tc_key'. */
typedef enum
{
    BCMOLT_PBIT_TO_TC_KEY_ID__BEGIN = 0,
    BCMOLT_PBIT_TO_TC_KEY_ID_ID = 0, /**< id. */
    BCMOLT_PBIT_TO_TC_KEY_ID_DIR = 1, /**< dir. */
    BCMOLT_PBIT_TO_TC_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pbit_to_tc_key_id__begin BCMOLT_PBIT_TO_TC_KEY_ID__BEGIN
#define bcmolt_pbit_to_tc_key_id_id BCMOLT_PBIT_TO_TC_KEY_ID_ID
#define bcmolt_pbit_to_tc_key_id_dir BCMOLT_PBIT_TO_TC_KEY_ID_DIR
#define bcmolt_pbit_to_tc_key_id__num_of BCMOLT_PBIT_TO_TC_KEY_ID__NUM_OF
#define bcmolt_pbit_to_tc_key_id_all_properties 0xFF
#define bcmolt_pbit_to_tc_key_id_full_mask 0x3

} bcmolt_pbit_to_tc_key_id;

/** Identifiers for all fields in a 'pbit_to_tc_cfg_data'. */
typedef enum
{
    BCMOLT_PBIT_TO_TC_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_PBIT_TO_TC_CFG_DATA_ID_TC = 0, /**< tc. */
    BCMOLT_PBIT_TO_TC_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pbit_to_tc_cfg_data_id__begin BCMOLT_PBIT_TO_TC_CFG_DATA_ID__BEGIN
#define bcmolt_pbit_to_tc_cfg_data_id_tc BCMOLT_PBIT_TO_TC_CFG_DATA_ID_TC
#define bcmolt_pbit_to_tc_cfg_data_id__num_of BCMOLT_PBIT_TO_TC_CFG_DATA_ID__NUM_OF
#define bcmolt_pbit_to_tc_cfg_data_id_all_properties 0xFF
#define bcmolt_pbit_to_tc_cfg_data_id_full_mask 0x1

} bcmolt_pbit_to_tc_cfg_data_id;

/** Identifiers for all fields in a 'policer_profile_key'. */
typedef enum
{
    BCMOLT_POLICER_PROFILE_KEY_ID__BEGIN = 0,
    BCMOLT_POLICER_PROFILE_KEY_ID_ID = 0, /**< id. */
    BCMOLT_POLICER_PROFILE_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_policer_profile_key_id__begin BCMOLT_POLICER_PROFILE_KEY_ID__BEGIN
#define bcmolt_policer_profile_key_id_id BCMOLT_POLICER_PROFILE_KEY_ID_ID
#define bcmolt_policer_profile_key_id__num_of BCMOLT_POLICER_PROFILE_KEY_ID__NUM_OF
#define bcmolt_policer_profile_key_id_all_properties 0xFF
#define bcmolt_policer_profile_key_id_full_mask 0x1

} bcmolt_policer_profile_key_id;

/** Identifiers for all fields in a 'policer_profile_cfg_data'. */
typedef enum
{
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID_STATE = 0, /**< Config State. */
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID_TYPE = 1, /**< type. */
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID_TARGET_OBJECT = 2, /**< target_object. */
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID_TRAFFIC_TYPE = 3, /**< traffic_type. */
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID_CIR_KBPS = 4, /**< cir kbps. */
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID_PIR_KBPS = 5, /**< pir kbps. */
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID_CBS_KB = 6, /**< cbs kb. */
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID_PBS_KB = 7, /**< pbs kb. */
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID_COLOR_AWARENESS = 8, /**< color awareness. */
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID_COLOR_MARKING = 9, /**< color marking. */
    BCMOLT_POLICER_PROFILE_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_policer_profile_cfg_data_id__begin BCMOLT_POLICER_PROFILE_CFG_DATA_ID__BEGIN
#define bcmolt_policer_profile_cfg_data_id_state BCMOLT_POLICER_PROFILE_CFG_DATA_ID_STATE
#define bcmolt_policer_profile_cfg_data_id_type BCMOLT_POLICER_PROFILE_CFG_DATA_ID_TYPE
#define bcmolt_policer_profile_cfg_data_id_target_object BCMOLT_POLICER_PROFILE_CFG_DATA_ID_TARGET_OBJECT
#define bcmolt_policer_profile_cfg_data_id_traffic_type BCMOLT_POLICER_PROFILE_CFG_DATA_ID_TRAFFIC_TYPE
#define bcmolt_policer_profile_cfg_data_id_cir_kbps BCMOLT_POLICER_PROFILE_CFG_DATA_ID_CIR_KBPS
#define bcmolt_policer_profile_cfg_data_id_pir_kbps BCMOLT_POLICER_PROFILE_CFG_DATA_ID_PIR_KBPS
#define bcmolt_policer_profile_cfg_data_id_cbs_kb BCMOLT_POLICER_PROFILE_CFG_DATA_ID_CBS_KB
#define bcmolt_policer_profile_cfg_data_id_pbs_kb BCMOLT_POLICER_PROFILE_CFG_DATA_ID_PBS_KB
#define bcmolt_policer_profile_cfg_data_id_color_awareness BCMOLT_POLICER_PROFILE_CFG_DATA_ID_COLOR_AWARENESS
#define bcmolt_policer_profile_cfg_data_id_color_marking BCMOLT_POLICER_PROFILE_CFG_DATA_ID_COLOR_MARKING
#define bcmolt_policer_profile_cfg_data_id__num_of BCMOLT_POLICER_PROFILE_CFG_DATA_ID__NUM_OF
#define bcmolt_policer_profile_cfg_data_id_all_properties 0xFF
#define bcmolt_policer_profile_cfg_data_id_full_mask 0x3FF

} bcmolt_policer_profile_cfg_data_id;

/** Identifiers for all fields in a 'pon_interface_key'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_KEY_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_KEY_ID_PON_NI = 0, /**< pon_ni. */
    BCMOLT_PON_INTERFACE_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_key_id__begin BCMOLT_PON_INTERFACE_KEY_ID__BEGIN
#define bcmolt_pon_interface_key_id_pon_ni BCMOLT_PON_INTERFACE_KEY_ID_PON_NI
#define bcmolt_pon_interface_key_id__num_of BCMOLT_PON_INTERFACE_KEY_ID__NUM_OF
#define bcmolt_pon_interface_key_id_all_properties 0xFF
#define bcmolt_pon_interface_key_id_full_mask 0x1

} bcmolt_pon_interface_key_id;

/** Identifiers for all fields in a 'pon_interface_cfg_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_STATE = 0, /**< state. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_LOS_STATUS = 2, /**< LOS status. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_LOS_INITIAL_VALUE = 3, /**< los initialization value. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_DISCOVERY = 4, /**< PON service discovery control. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_ITU = 5, /**< ITU PON Attributes. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_PON_DISTANCE = 8, /**< PON distance. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_NUMBER_OF_ACTIVE_ONUS = 9, /**< number of active onus. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_NUMBER_OF_ACTIVE_STANDBY_ONUS = 10, /**< number of active standby onus. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_GPON_TRX = 11, /**< gpon transceiver. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_XGPON_TRX = 12, /**< xgpon transceiver. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID_XGS_NGPON2_TRX = 13, /**< xgs_ngpon2 transceiver params. */
    BCMOLT_PON_INTERFACE_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_cfg_data_id__begin BCMOLT_PON_INTERFACE_CFG_DATA_ID__BEGIN
#define bcmolt_pon_interface_cfg_data_id_state BCMOLT_PON_INTERFACE_CFG_DATA_ID_STATE
#define bcmolt_pon_interface_cfg_data_id_los_status BCMOLT_PON_INTERFACE_CFG_DATA_ID_LOS_STATUS
#define bcmolt_pon_interface_cfg_data_id_los_initial_value BCMOLT_PON_INTERFACE_CFG_DATA_ID_LOS_INITIAL_VALUE
#define bcmolt_pon_interface_cfg_data_id_discovery BCMOLT_PON_INTERFACE_CFG_DATA_ID_DISCOVERY
#define bcmolt_pon_interface_cfg_data_id_itu BCMOLT_PON_INTERFACE_CFG_DATA_ID_ITU
#define bcmolt_pon_interface_cfg_data_id_pon_distance BCMOLT_PON_INTERFACE_CFG_DATA_ID_PON_DISTANCE
#define bcmolt_pon_interface_cfg_data_id_number_of_active_onus BCMOLT_PON_INTERFACE_CFG_DATA_ID_NUMBER_OF_ACTIVE_ONUS
#define bcmolt_pon_interface_cfg_data_id_number_of_active_standby_onus BCMOLT_PON_INTERFACE_CFG_DATA_ID_NUMBER_OF_ACTIVE_STANDBY_ONUS
#define bcmolt_pon_interface_cfg_data_id_gpon_trx BCMOLT_PON_INTERFACE_CFG_DATA_ID_GPON_TRX
#define bcmolt_pon_interface_cfg_data_id_xgpon_trx BCMOLT_PON_INTERFACE_CFG_DATA_ID_XGPON_TRX
#define bcmolt_pon_interface_cfg_data_id_xgs_ngpon2_trx BCMOLT_PON_INTERFACE_CFG_DATA_ID_XGS_NGPON2_TRX
#define bcmolt_pon_interface_cfg_data_id__num_of BCMOLT_PON_INTERFACE_CFG_DATA_ID__NUM_OF
#define bcmolt_pon_interface_cfg_data_id_all_properties 0xFF
#define bcmolt_pon_interface_cfg_data_id_full_mask 0x3F3D

} bcmolt_pon_interface_cfg_data_id;

/** Identifiers for all fields in a 'pon_interface_set_pon_interface_state_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_SET_PON_INTERFACE_STATE_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_SET_PON_INTERFACE_STATE_DATA_ID_OPERATION = 0, /**< PON interface operation. */
    BCMOLT_PON_INTERFACE_SET_PON_INTERFACE_STATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_set_pon_interface_state_data_id__begin BCMOLT_PON_INTERFACE_SET_PON_INTERFACE_STATE_DATA_ID__BEGIN
#define bcmolt_pon_interface_set_pon_interface_state_data_id_operation BCMOLT_PON_INTERFACE_SET_PON_INTERFACE_STATE_DATA_ID_OPERATION
#define bcmolt_pon_interface_set_pon_interface_state_data_id__num_of BCMOLT_PON_INTERFACE_SET_PON_INTERFACE_STATE_DATA_ID__NUM_OF
#define bcmolt_pon_interface_set_pon_interface_state_data_id_all_properties 0xFF
#define bcmolt_pon_interface_set_pon_interface_state_data_id_full_mask 0x1

} bcmolt_pon_interface_set_pon_interface_state_data_id;

/** Identifiers for all fields in a 'pon_interface_set_onu_state_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_SET_ONU_STATE_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_SET_ONU_STATE_DATA_ID_ONU_STATE = 0, /**< ONU state. */
    BCMOLT_PON_INTERFACE_SET_ONU_STATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_set_onu_state_data_id__begin BCMOLT_PON_INTERFACE_SET_ONU_STATE_DATA_ID__BEGIN
#define bcmolt_pon_interface_set_onu_state_data_id_onu_state BCMOLT_PON_INTERFACE_SET_ONU_STATE_DATA_ID_ONU_STATE
#define bcmolt_pon_interface_set_onu_state_data_id__num_of BCMOLT_PON_INTERFACE_SET_ONU_STATE_DATA_ID__NUM_OF
#define bcmolt_pon_interface_set_onu_state_data_id_all_properties 0xFF
#define bcmolt_pon_interface_set_onu_state_data_id_full_mask 0x1

} bcmolt_pon_interface_set_onu_state_data_id;

/** Identifiers for all fields in a 'pon_interface_disable_serial_number_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_DISABLE_SERIAL_NUMBER_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_DISABLE_SERIAL_NUMBER_DATA_ID_CONTROL = 0, /**< control. */
    BCMOLT_PON_INTERFACE_DISABLE_SERIAL_NUMBER_DATA_ID_SERIAL_NUMBER = 1, /**< serial number. */
    BCMOLT_PON_INTERFACE_DISABLE_SERIAL_NUMBER_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_disable_serial_number_data_id__begin BCMOLT_PON_INTERFACE_DISABLE_SERIAL_NUMBER_DATA_ID__BEGIN
#define bcmolt_pon_interface_disable_serial_number_data_id_control BCMOLT_PON_INTERFACE_DISABLE_SERIAL_NUMBER_DATA_ID_CONTROL
#define bcmolt_pon_interface_disable_serial_number_data_id_serial_number BCMOLT_PON_INTERFACE_DISABLE_SERIAL_NUMBER_DATA_ID_SERIAL_NUMBER
#define bcmolt_pon_interface_disable_serial_number_data_id__num_of BCMOLT_PON_INTERFACE_DISABLE_SERIAL_NUMBER_DATA_ID__NUM_OF
#define bcmolt_pon_interface_disable_serial_number_data_id_all_properties 0xFF
#define bcmolt_pon_interface_disable_serial_number_data_id_full_mask 0x3

} bcmolt_pon_interface_disable_serial_number_data_id;

/** Identifiers for all fields in a 'pon_interface_run_special_bw_map_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_ID_NUMBER_OF_CYCLE = 0, /**< number of cycle. */
    BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_ID_ALLOCATION_NUMBER = 1, /**< allocation number. */
    BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_ID_BW_MAP_ARRAY = 2, /**< bw map array. */
    BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_run_special_bw_map_data_id__begin BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_ID__BEGIN
#define bcmolt_pon_interface_run_special_bw_map_data_id_number_of_cycle BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_ID_NUMBER_OF_CYCLE
#define bcmolt_pon_interface_run_special_bw_map_data_id_allocation_number BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_ID_ALLOCATION_NUMBER
#define bcmolt_pon_interface_run_special_bw_map_data_id_bw_map_array BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_ID_BW_MAP_ARRAY
#define bcmolt_pon_interface_run_special_bw_map_data_id__num_of BCMOLT_PON_INTERFACE_RUN_SPECIAL_BW_MAP_DATA_ID__NUM_OF
#define bcmolt_pon_interface_run_special_bw_map_data_id_all_properties 0xFF
#define bcmolt_pon_interface_run_special_bw_map_data_id_full_mask 0x7

} bcmolt_pon_interface_run_special_bw_map_data_id;

/** Identifiers for all fields in a 'pon_interface_start_onu_upgrade_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_START_ONU_UPGRADE_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_START_ONU_UPGRADE_DATA_ID_LIST_OF_ONU_IDS = 0, /**< List of ONU IDs. */
    BCMOLT_PON_INTERFACE_START_ONU_UPGRADE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_start_onu_upgrade_data_id__begin BCMOLT_PON_INTERFACE_START_ONU_UPGRADE_DATA_ID__BEGIN
#define bcmolt_pon_interface_start_onu_upgrade_data_id_list_of_onu_ids BCMOLT_PON_INTERFACE_START_ONU_UPGRADE_DATA_ID_LIST_OF_ONU_IDS
#define bcmolt_pon_interface_start_onu_upgrade_data_id__num_of BCMOLT_PON_INTERFACE_START_ONU_UPGRADE_DATA_ID__NUM_OF
#define bcmolt_pon_interface_start_onu_upgrade_data_id_all_properties 0xFF
#define bcmolt_pon_interface_start_onu_upgrade_data_id_full_mask 0x1

} bcmolt_pon_interface_start_onu_upgrade_data_id;

/** Identifiers for all fields in a
  * 'pon_interface_protection_switching_type_c_set_multiple_onu_state_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE_DATA_ID_ONU_STATE = 0, /**< onu state. */
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE_DATA_ID_ONU_LIST = 1, /**< onu list. */
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id__begin BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE_DATA_ID__BEGIN
#define bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id_onu_state BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE_DATA_ID_ONU_STATE
#define bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id_onu_list BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE_DATA_ID_ONU_LIST
#define bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id__num_of BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TYPE_C_SET_MULTIPLE_ONU_STATE_DATA_ID__NUM_OF
#define bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id_all_properties 0xFF
#define bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id_full_mask 0x3

} bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id;

/** Identifiers for all fields in a 'pon_interface_protection_switching_apply_rerange_delta_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA_DATA_ID_RERANGE_DELTA = 0, /**< Re-range delta. */
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_protection_switching_apply_rerange_delta_data_id__begin BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA_DATA_ID__BEGIN
#define bcmolt_pon_interface_protection_switching_apply_rerange_delta_data_id_rerange_delta BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA_DATA_ID_RERANGE_DELTA
#define bcmolt_pon_interface_protection_switching_apply_rerange_delta_data_id__num_of BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_APPLY_RERANGE_DELTA_DATA_ID__NUM_OF
#define bcmolt_pon_interface_protection_switching_apply_rerange_delta_data_id_all_properties 0xFF
#define bcmolt_pon_interface_protection_switching_apply_rerange_delta_data_id_full_mask 0x1

} bcmolt_pon_interface_protection_switching_apply_rerange_delta_data_id;

/** Identifiers for all fields in a 'pon_interface_cpu_packets_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID_PACKET_TYPE = 0, /**< packet type. */
    BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID_CALC_CRC = 1, /**< calc crc. */
    BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID_GEM_PORT_LIST = 2, /**< gem port list. */
    BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID_BUFFER = 3, /**< buffer. */
    BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_cpu_packets_data_id__begin BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID__BEGIN
#define bcmolt_pon_interface_cpu_packets_data_id_packet_type BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID_PACKET_TYPE
#define bcmolt_pon_interface_cpu_packets_data_id_calc_crc BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID_CALC_CRC
#define bcmolt_pon_interface_cpu_packets_data_id_gem_port_list BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID_GEM_PORT_LIST
#define bcmolt_pon_interface_cpu_packets_data_id_buffer BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID_BUFFER
#define bcmolt_pon_interface_cpu_packets_data_id__num_of BCMOLT_PON_INTERFACE_CPU_PACKETS_DATA_ID__NUM_OF
#define bcmolt_pon_interface_cpu_packets_data_id_all_properties 0xFF
#define bcmolt_pon_interface_cpu_packets_data_id_full_mask 0xF

} bcmolt_pon_interface_cpu_packets_data_id;

/** Identifiers for all fields in a 'pon_interface_broadcast_ploam_packet_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_ID_PLOAM = 0, /**< ploam. */
    BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_broadcast_ploam_packet_data_id__begin BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_ID__BEGIN
#define bcmolt_pon_interface_broadcast_ploam_packet_data_id_ploam BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_ID_PLOAM
#define bcmolt_pon_interface_broadcast_ploam_packet_data_id__num_of BCMOLT_PON_INTERFACE_BROADCAST_PLOAM_PACKET_DATA_ID__NUM_OF
#define bcmolt_pon_interface_broadcast_ploam_packet_data_id_all_properties 0xFF
#define bcmolt_pon_interface_broadcast_ploam_packet_data_id_full_mask 0x1

} bcmolt_pon_interface_broadcast_ploam_packet_data_id;

/** Identifiers for all fields in a 'pon_interface_state_change_completed_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_ID_RESULT = 0, /**< Result. */
    BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_ID_PREVIOUS_STATE = 1, /**< Previous state. */
    BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_ID_NEW_STATE = 2, /**< new state. */
    BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_state_change_completed_data_id__begin BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_ID__BEGIN
#define bcmolt_pon_interface_state_change_completed_data_id_result BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_ID_RESULT
#define bcmolt_pon_interface_state_change_completed_data_id_previous_state BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_ID_PREVIOUS_STATE
#define bcmolt_pon_interface_state_change_completed_data_id_new_state BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_ID_NEW_STATE
#define bcmolt_pon_interface_state_change_completed_data_id__num_of BCMOLT_PON_INTERFACE_STATE_CHANGE_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_pon_interface_state_change_completed_data_id_all_properties 0xFF
#define bcmolt_pon_interface_state_change_completed_data_id_full_mask 0x7

} bcmolt_pon_interface_state_change_completed_data_id;

/** Identifiers for all fields in a 'pon_interface_tod_request_completed_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID_TOD_STRING = 0, /**< tod_string. */
    BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID_SFC = 1, /**< sfc. */
    BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID_RTC_OFFSET_SEC = 2, /**< rtc_offset_sec. */
    BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID_RTC_OFFSET_NSEC = 3, /**< rtc_offset_nsec. */
    BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID_STATUS = 4, /**< status. */
    BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_tod_request_completed_data_id__begin BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID__BEGIN
#define bcmolt_pon_interface_tod_request_completed_data_id_tod_string BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID_TOD_STRING
#define bcmolt_pon_interface_tod_request_completed_data_id_sfc BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID_SFC
#define bcmolt_pon_interface_tod_request_completed_data_id_rtc_offset_sec BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID_RTC_OFFSET_SEC
#define bcmolt_pon_interface_tod_request_completed_data_id_rtc_offset_nsec BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID_RTC_OFFSET_NSEC
#define bcmolt_pon_interface_tod_request_completed_data_id_status BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID_STATUS
#define bcmolt_pon_interface_tod_request_completed_data_id__num_of BCMOLT_PON_INTERFACE_TOD_REQUEST_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_pon_interface_tod_request_completed_data_id_all_properties 0xFF
#define bcmolt_pon_interface_tod_request_completed_data_id_full_mask 0x1F

} bcmolt_pon_interface_tod_request_completed_data_id;

/** Identifiers for all fields in a 'pon_interface_los_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_LOS_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_LOS_DATA_ID_STATUS = 0, /**< status. */
    BCMOLT_PON_INTERFACE_LOS_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_los_data_id__begin BCMOLT_PON_INTERFACE_LOS_DATA_ID__BEGIN
#define bcmolt_pon_interface_los_data_id_status BCMOLT_PON_INTERFACE_LOS_DATA_ID_STATUS
#define bcmolt_pon_interface_los_data_id__num_of BCMOLT_PON_INTERFACE_LOS_DATA_ID__NUM_OF
#define bcmolt_pon_interface_los_data_id_all_properties 0xFF
#define bcmolt_pon_interface_los_data_id_full_mask 0x1

} bcmolt_pon_interface_los_data_id;

/** Identifiers for all fields in a 'pon_interface_protection_switching_traffic_resume_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TRAFFIC_RESUME_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TRAFFIC_RESUME_DATA_ID_RESULT = 0, /**< Result. */
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TRAFFIC_RESUME_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_protection_switching_traffic_resume_data_id__begin BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TRAFFIC_RESUME_DATA_ID__BEGIN
#define bcmolt_pon_interface_protection_switching_traffic_resume_data_id_result BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TRAFFIC_RESUME_DATA_ID_RESULT
#define bcmolt_pon_interface_protection_switching_traffic_resume_data_id__num_of BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_TRAFFIC_RESUME_DATA_ID__NUM_OF
#define bcmolt_pon_interface_protection_switching_traffic_resume_data_id_all_properties 0xFF
#define bcmolt_pon_interface_protection_switching_traffic_resume_data_id_full_mask 0x1

} bcmolt_pon_interface_protection_switching_traffic_resume_data_id;

/** Identifiers for all fields in a 'pon_interface_protection_switching_onus_ranged_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_ONUS_RANGED_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_ONUS_RANGED_DATA_ID_ONUS = 0, /**< ONUs. */
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_ONUS_RANGED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_protection_switching_onus_ranged_data_id__begin BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_ONUS_RANGED_DATA_ID__BEGIN
#define bcmolt_pon_interface_protection_switching_onus_ranged_data_id_onus BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_ONUS_RANGED_DATA_ID_ONUS
#define bcmolt_pon_interface_protection_switching_onus_ranged_data_id__num_of BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_ONUS_RANGED_DATA_ID__NUM_OF
#define bcmolt_pon_interface_protection_switching_onus_ranged_data_id_all_properties 0xFF
#define bcmolt_pon_interface_protection_switching_onus_ranged_data_id_full_mask 0x1

} bcmolt_pon_interface_protection_switching_onus_ranged_data_id;

/** Identifiers for all fields in a 'pon_interface_protection_switching_switchover_completed_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED_DATA_ID_RESULT = 0, /**< Result. */
    BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_protection_switching_switchover_completed_data_id__begin BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED_DATA_ID__BEGIN
#define bcmolt_pon_interface_protection_switching_switchover_completed_data_id_result BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED_DATA_ID_RESULT
#define bcmolt_pon_interface_protection_switching_switchover_completed_data_id__num_of BCMOLT_PON_INTERFACE_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_pon_interface_protection_switching_switchover_completed_data_id_all_properties 0xFF
#define bcmolt_pon_interface_protection_switching_switchover_completed_data_id_full_mask 0x1

} bcmolt_pon_interface_protection_switching_switchover_completed_data_id;

/** Identifiers for all fields in a 'pon_interface_standby_pon_monitoring_cycle_completed_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED_DATA_ID_NUMBER_OF_DETECTED_DELIMITER = 0, /**< number of detected delimiter. */
    BCMOLT_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED_DATA_ID_ENERGY_DETECT_SIGNAL = 1, /**< energy detect signal. */
    BCMOLT_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id__begin BCMOLT_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED_DATA_ID__BEGIN
#define bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id_number_of_detected_delimiter BCMOLT_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED_DATA_ID_NUMBER_OF_DETECTED_DELIMITER
#define bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id_energy_detect_signal BCMOLT_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED_DATA_ID_ENERGY_DETECT_SIGNAL
#define bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id__num_of BCMOLT_PON_INTERFACE_STANDBY_PON_MONITORING_CYCLE_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id_all_properties 0xFF
#define bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id_full_mask 0x3

} bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id;

/** Identifiers for all fields in a 'pon_interface_onu_discovered_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_SERIAL_NUMBER = 0, /**< serial number. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_RANGING_TIME = 1, /**< ranging time. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_ONU_ID = 2, /**< onu_id. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_UPSTREAM_LINE_RATE_CAPABILITIES = 3, /**< upstream line rate capabilities. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_CURRENT_DOWNSTREAM_PON_ID = 4, /**< current downstream pon id. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_CURRENT_UPSTREAM_PON_ID = 5, /**< current upstream pon id. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_CALIBRATION_RECORD = 6, /**< calibration record. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_TUNING_GRANULARITY = 7, /**< tuning granularity. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_STEP_TUNING_TIME = 8, /**< step tuning time. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_ATTENUATION = 9, /**< attenuetion. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_POWER_LEVELLING_CAPABILITIES = 10, /**< power levelling capabilities. */
    BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_onu_discovered_data_id__begin BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID__BEGIN
#define bcmolt_pon_interface_onu_discovered_data_id_serial_number BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_SERIAL_NUMBER
#define bcmolt_pon_interface_onu_discovered_data_id_ranging_time BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_RANGING_TIME
#define bcmolt_pon_interface_onu_discovered_data_id_onu_id BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_ONU_ID
#define bcmolt_pon_interface_onu_discovered_data_id_upstream_line_rate_capabilities BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_UPSTREAM_LINE_RATE_CAPABILITIES
#define bcmolt_pon_interface_onu_discovered_data_id_current_downstream_pon_id BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_CURRENT_DOWNSTREAM_PON_ID
#define bcmolt_pon_interface_onu_discovered_data_id_current_upstream_pon_id BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_CURRENT_UPSTREAM_PON_ID
#define bcmolt_pon_interface_onu_discovered_data_id_calibration_record BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_CALIBRATION_RECORD
#define bcmolt_pon_interface_onu_discovered_data_id_tuning_granularity BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_TUNING_GRANULARITY
#define bcmolt_pon_interface_onu_discovered_data_id_step_tuning_time BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_STEP_TUNING_TIME
#define bcmolt_pon_interface_onu_discovered_data_id_attenuation BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_ATTENUATION
#define bcmolt_pon_interface_onu_discovered_data_id_power_levelling_capabilities BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID_POWER_LEVELLING_CAPABILITIES
#define bcmolt_pon_interface_onu_discovered_data_id__num_of BCMOLT_PON_INTERFACE_ONU_DISCOVERED_DATA_ID__NUM_OF
#define bcmolt_pon_interface_onu_discovered_data_id_all_properties 0xFF
#define bcmolt_pon_interface_onu_discovered_data_id_full_mask 0x7FF

} bcmolt_pon_interface_onu_discovered_data_id;

/** Identifiers for all fields in a 'pon_interface_cpu_packets_failure_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_CPU_PACKETS_FAILURE_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_CPU_PACKETS_FAILURE_DATA_ID_ERROR = 0, /**< Error. */
    BCMOLT_PON_INTERFACE_CPU_PACKETS_FAILURE_DATA_ID_GEM_PORT_ID = 1, /**< GEM Port ID. */
    BCMOLT_PON_INTERFACE_CPU_PACKETS_FAILURE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_cpu_packets_failure_data_id__begin BCMOLT_PON_INTERFACE_CPU_PACKETS_FAILURE_DATA_ID__BEGIN
#define bcmolt_pon_interface_cpu_packets_failure_data_id_error BCMOLT_PON_INTERFACE_CPU_PACKETS_FAILURE_DATA_ID_ERROR
#define bcmolt_pon_interface_cpu_packets_failure_data_id_gem_port_id BCMOLT_PON_INTERFACE_CPU_PACKETS_FAILURE_DATA_ID_GEM_PORT_ID
#define bcmolt_pon_interface_cpu_packets_failure_data_id__num_of BCMOLT_PON_INTERFACE_CPU_PACKETS_FAILURE_DATA_ID__NUM_OF
#define bcmolt_pon_interface_cpu_packets_failure_data_id_all_properties 0xFF
#define bcmolt_pon_interface_cpu_packets_failure_data_id_full_mask 0x3

} bcmolt_pon_interface_cpu_packets_failure_data_id;

/** Identifiers for all fields in a 'pon_interface_onu_upgrade_complete_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ID_OVERALL_STATUS = 0, /**< Overall status. */
    BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ID_FILE_SIZE_IN_BYTES = 1, /**< File size in bytes. */
    BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ID_ONU_STATUS = 2, /**< ONU status. */
    BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_onu_upgrade_complete_data_id__begin BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ID__BEGIN
#define bcmolt_pon_interface_onu_upgrade_complete_data_id_overall_status BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ID_OVERALL_STATUS
#define bcmolt_pon_interface_onu_upgrade_complete_data_id_file_size_in_bytes BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ID_FILE_SIZE_IN_BYTES
#define bcmolt_pon_interface_onu_upgrade_complete_data_id_onu_status BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ID_ONU_STATUS
#define bcmolt_pon_interface_onu_upgrade_complete_data_id__num_of BCMOLT_PON_INTERFACE_ONU_UPGRADE_COMPLETE_DATA_ID__NUM_OF
#define bcmolt_pon_interface_onu_upgrade_complete_data_id_all_properties 0xFF
#define bcmolt_pon_interface_onu_upgrade_complete_data_id_full_mask 0x7

} bcmolt_pon_interface_onu_upgrade_complete_data_id;

/** Identifiers for all fields in a 'pon_interface_mpcp_timestamp_changed_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_MPCP_TIMESTAMP_CHANGED_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_MPCP_TIMESTAMP_CHANGED_DATA_ID_MPCP_TIMESTAMP = 0, /**< MPCP Timestamp. */
    BCMOLT_PON_INTERFACE_MPCP_TIMESTAMP_CHANGED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_mpcp_timestamp_changed_data_id__begin BCMOLT_PON_INTERFACE_MPCP_TIMESTAMP_CHANGED_DATA_ID__BEGIN
#define bcmolt_pon_interface_mpcp_timestamp_changed_data_id_mpcp_timestamp BCMOLT_PON_INTERFACE_MPCP_TIMESTAMP_CHANGED_DATA_ID_MPCP_TIMESTAMP
#define bcmolt_pon_interface_mpcp_timestamp_changed_data_id__num_of BCMOLT_PON_INTERFACE_MPCP_TIMESTAMP_CHANGED_DATA_ID__NUM_OF
#define bcmolt_pon_interface_mpcp_timestamp_changed_data_id_all_properties 0xFF
#define bcmolt_pon_interface_mpcp_timestamp_changed_data_id_full_mask 0x1

} bcmolt_pon_interface_mpcp_timestamp_changed_data_id;

/** Identifiers for all fields in a 'pon_interface_auto_cfg_data'. */
typedef enum
{
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_ACTIVATE_ALL_ONUS_COMPLETED = 0, /**< activate all onus completed. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_CPU_PACKETS_FAILURE = 1, /**< CPU Packets Failure. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_DEACTIVATE_ALL_ONUS_COMPLETED = 2, /**< deactivate all onus completed. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_DISABLE_ALL_ONUS_COMPLETED = 3, /**< disable all onus completed. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_ENABLE_ALL_ONUS_COMPLETED = 4, /**< enable all onus completed. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_IEEE_ROGUE_DETECTION_COMPLETED = 5, /**< IEEE Rogue Detection Completed. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_LOS = 6, /**< LOS. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_MPCP_TIMESTAMP_CHANGED = 7, /**< MPCP Timestamp Changed. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_ONU_DISCOVERED = 8, /**< ONU Discovered. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_ONU_UPGRADE_COMPLETE = 9, /**< ONU Upgrade Complete. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_PROTECTION_SWITCHING_ONUS_RANGED = 10, /**< Protection Switching ONUs Ranged. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_PROTECTION_SWITCHING_RERANGE_FAILURE = 11, /**< Protection Switching Re-range failure  (IEEE). */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED = 12, /**< Protection Switching Switchover Completed. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_PROTECTION_SWITCHING_TRAFFIC_RESUME = 13, /**< Protection Switching Traffic Resume. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_SERIAL_NUMBER_ACQUISITION_CYCLE_START = 14, /**< Serial Number Acquisition Cycle Start. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_STANDBY_PON_MONITORING_CYCLE_COMPLETED = 15, /**< Standby PON Monitoring Cycle Completed. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_STATE_CHANGE_COMPLETED = 16, /**< State Change Completed. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_TOD_REQUEST_COMPLETED = 17, /**< TOD request completed. */
    BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_pon_interface_auto_cfg_data_id__begin BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_pon_interface_auto_cfg_data_id_activate_all_onus_completed BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_ACTIVATE_ALL_ONUS_COMPLETED
#define bcmolt_pon_interface_auto_cfg_data_id_cpu_packets_failure BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_CPU_PACKETS_FAILURE
#define bcmolt_pon_interface_auto_cfg_data_id_deactivate_all_onus_completed BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_DEACTIVATE_ALL_ONUS_COMPLETED
#define bcmolt_pon_interface_auto_cfg_data_id_disable_all_onus_completed BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_DISABLE_ALL_ONUS_COMPLETED
#define bcmolt_pon_interface_auto_cfg_data_id_enable_all_onus_completed BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_ENABLE_ALL_ONUS_COMPLETED
#define bcmolt_pon_interface_auto_cfg_data_id_ieee_rogue_detection_completed BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_IEEE_ROGUE_DETECTION_COMPLETED
#define bcmolt_pon_interface_auto_cfg_data_id_los BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_LOS
#define bcmolt_pon_interface_auto_cfg_data_id_mpcp_timestamp_changed BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_MPCP_TIMESTAMP_CHANGED
#define bcmolt_pon_interface_auto_cfg_data_id_onu_discovered BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_ONU_DISCOVERED
#define bcmolt_pon_interface_auto_cfg_data_id_onu_upgrade_complete BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_ONU_UPGRADE_COMPLETE
#define bcmolt_pon_interface_auto_cfg_data_id_protection_switching_onus_ranged BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_PROTECTION_SWITCHING_ONUS_RANGED
#define bcmolt_pon_interface_auto_cfg_data_id_protection_switching_rerange_failure BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_PROTECTION_SWITCHING_RERANGE_FAILURE
#define bcmolt_pon_interface_auto_cfg_data_id_protection_switching_switchover_completed BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_PROTECTION_SWITCHING_SWITCHOVER_COMPLETED
#define bcmolt_pon_interface_auto_cfg_data_id_protection_switching_traffic_resume BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_PROTECTION_SWITCHING_TRAFFIC_RESUME
#define bcmolt_pon_interface_auto_cfg_data_id_serial_number_acquisition_cycle_start BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_SERIAL_NUMBER_ACQUISITION_CYCLE_START
#define bcmolt_pon_interface_auto_cfg_data_id_standby_pon_monitoring_cycle_completed BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_STANDBY_PON_MONITORING_CYCLE_COMPLETED
#define bcmolt_pon_interface_auto_cfg_data_id_state_change_completed BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_STATE_CHANGE_COMPLETED
#define bcmolt_pon_interface_auto_cfg_data_id_tod_request_completed BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID_TOD_REQUEST_COMPLETED
#define bcmolt_pon_interface_auto_cfg_data_id__num_of BCMOLT_PON_INTERFACE_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_pon_interface_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_pon_interface_auto_cfg_data_id_full_mask 0x3FFFF

} bcmolt_pon_interface_auto_cfg_data_id;

/** Identifiers for all fields in a 'protection_interface_key'. */
typedef enum
{
    BCMOLT_PROTECTION_INTERFACE_KEY_ID__BEGIN = 0,
    BCMOLT_PROTECTION_INTERFACE_KEY_ID_ID = 0, /**< Id. */
    BCMOLT_PROTECTION_INTERFACE_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_protection_interface_key_id__begin BCMOLT_PROTECTION_INTERFACE_KEY_ID__BEGIN
#define bcmolt_protection_interface_key_id_id BCMOLT_PROTECTION_INTERFACE_KEY_ID_ID
#define bcmolt_protection_interface_key_id__num_of BCMOLT_PROTECTION_INTERFACE_KEY_ID__NUM_OF
#define bcmolt_protection_interface_key_id_all_properties 0xFF
#define bcmolt_protection_interface_key_id_full_mask 0x1

} bcmolt_protection_interface_key_id;

/** Identifiers for all fields in a 'protection_interface_cfg_data'. */
typedef enum
{
    BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID_STATE = 0, /**< State. */
    BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID_PRIMARY_INTERFACE = 1, /**< Primary Interface. */
    BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID_SECONDARY_INTERFACE = 2, /**< Secondary Interface. */
    BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID_ACTIVE_INTERFACE = 3, /**< Active Interface. */
    BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_protection_interface_cfg_data_id__begin BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID__BEGIN
#define bcmolt_protection_interface_cfg_data_id_state BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID_STATE
#define bcmolt_protection_interface_cfg_data_id_primary_interface BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID_PRIMARY_INTERFACE
#define bcmolt_protection_interface_cfg_data_id_secondary_interface BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID_SECONDARY_INTERFACE
#define bcmolt_protection_interface_cfg_data_id_active_interface BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID_ACTIVE_INTERFACE
#define bcmolt_protection_interface_cfg_data_id__num_of BCMOLT_PROTECTION_INTERFACE_CFG_DATA_ID__NUM_OF
#define bcmolt_protection_interface_cfg_data_id_all_properties 0xFF
#define bcmolt_protection_interface_cfg_data_id_full_mask 0xF

} bcmolt_protection_interface_cfg_data_id;

/** Identifiers for all fields in a 'protection_interface_protection_switch_completed_data'. */
typedef enum
{
    BCMOLT_PROTECTION_INTERFACE_PROTECTION_SWITCH_COMPLETED_DATA_ID__BEGIN = 0,
    BCMOLT_PROTECTION_INTERFACE_PROTECTION_SWITCH_COMPLETED_DATA_ID_ACTIVE_INTERFACE = 0, /**< Active Interface. */
    BCMOLT_PROTECTION_INTERFACE_PROTECTION_SWITCH_COMPLETED_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_protection_interface_protection_switch_completed_data_id__begin BCMOLT_PROTECTION_INTERFACE_PROTECTION_SWITCH_COMPLETED_DATA_ID__BEGIN
#define bcmolt_protection_interface_protection_switch_completed_data_id_active_interface BCMOLT_PROTECTION_INTERFACE_PROTECTION_SWITCH_COMPLETED_DATA_ID_ACTIVE_INTERFACE
#define bcmolt_protection_interface_protection_switch_completed_data_id__num_of BCMOLT_PROTECTION_INTERFACE_PROTECTION_SWITCH_COMPLETED_DATA_ID__NUM_OF
#define bcmolt_protection_interface_protection_switch_completed_data_id_all_properties 0xFF
#define bcmolt_protection_interface_protection_switch_completed_data_id_full_mask 0x1

} bcmolt_protection_interface_protection_switch_completed_data_id;

/** Identifiers for all fields in a 'protection_interface_auto_cfg_data'. */
typedef enum
{
    BCMOLT_PROTECTION_INTERFACE_AUTO_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_PROTECTION_INTERFACE_AUTO_CFG_DATA_ID_PROTECTION_SWITCH_COMPLETED = 0, /**< Protection Switch Completed. */
    BCMOLT_PROTECTION_INTERFACE_AUTO_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_protection_interface_auto_cfg_data_id__begin BCMOLT_PROTECTION_INTERFACE_AUTO_CFG_DATA_ID__BEGIN
#define bcmolt_protection_interface_auto_cfg_data_id_protection_switch_completed BCMOLT_PROTECTION_INTERFACE_AUTO_CFG_DATA_ID_PROTECTION_SWITCH_COMPLETED
#define bcmolt_protection_interface_auto_cfg_data_id__num_of BCMOLT_PROTECTION_INTERFACE_AUTO_CFG_DATA_ID__NUM_OF
#define bcmolt_protection_interface_auto_cfg_data_id_all_properties 0xFF
#define bcmolt_protection_interface_auto_cfg_data_id_full_mask 0x1

} bcmolt_protection_interface_auto_cfg_data_id;

/** Identifiers for all fields in a 'software_error_key'. */
typedef enum
{
    BCMOLT_SOFTWARE_ERROR_KEY_ID__BEGIN = 0,
    BCMOLT_SOFTWARE_ERROR_KEY_ID_DEVICE_ID = 0, /**< Device ID. */
    BCMOLT_SOFTWARE_ERROR_KEY_ID_IDX = 1, /**< Index. */
    BCMOLT_SOFTWARE_ERROR_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_software_error_key_id__begin BCMOLT_SOFTWARE_ERROR_KEY_ID__BEGIN
#define bcmolt_software_error_key_id_device_id BCMOLT_SOFTWARE_ERROR_KEY_ID_DEVICE_ID
#define bcmolt_software_error_key_id_idx BCMOLT_SOFTWARE_ERROR_KEY_ID_IDX
#define bcmolt_software_error_key_id__num_of BCMOLT_SOFTWARE_ERROR_KEY_ID__NUM_OF
#define bcmolt_software_error_key_id_all_properties 0xFF
#define bcmolt_software_error_key_id_full_mask 0x3

} bcmolt_software_error_key_id;

/** Identifiers for all fields in a 'software_error_cfg_data'. */
typedef enum
{
    BCMOLT_SOFTWARE_ERROR_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_SOFTWARE_ERROR_CFG_DATA_ID_ENTRY = 0, /**< Entry. */
    BCMOLT_SOFTWARE_ERROR_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_software_error_cfg_data_id__begin BCMOLT_SOFTWARE_ERROR_CFG_DATA_ID__BEGIN
#define bcmolt_software_error_cfg_data_id_entry BCMOLT_SOFTWARE_ERROR_CFG_DATA_ID_ENTRY
#define bcmolt_software_error_cfg_data_id__num_of BCMOLT_SOFTWARE_ERROR_CFG_DATA_ID__NUM_OF
#define bcmolt_software_error_cfg_data_id_all_properties 0xFF
#define bcmolt_software_error_cfg_data_id_full_mask 0x1

} bcmolt_software_error_cfg_data_id;

/** Identifiers for all fields in a 'switch_inni_key'. */
typedef enum
{
    BCMOLT_SWITCH_INNI_KEY_ID__BEGIN = 0,
    BCMOLT_SWITCH_INNI_KEY_ID_ID = 0, /**< id. */
    BCMOLT_SWITCH_INNI_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_switch_inni_key_id__begin BCMOLT_SWITCH_INNI_KEY_ID__BEGIN
#define bcmolt_switch_inni_key_id_id BCMOLT_SWITCH_INNI_KEY_ID_ID
#define bcmolt_switch_inni_key_id__num_of BCMOLT_SWITCH_INNI_KEY_ID__NUM_OF
#define bcmolt_switch_inni_key_id_all_properties 0xFF
#define bcmolt_switch_inni_key_id_full_mask 0x1

} bcmolt_switch_inni_key_id;

/** Identifiers for all fields in a 'switch_inni_cfg_data'. */
typedef enum
{
    BCMOLT_SWITCH_INNI_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_SWITCH_INNI_CFG_DATA_ID_CONFIG_STATE = 0, /**< config state. */
    BCMOLT_SWITCH_INNI_CFG_DATA_ID_POLICER_PROFILE = 1, /**< policer profile id. */
    BCMOLT_SWITCH_INNI_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_switch_inni_cfg_data_id__begin BCMOLT_SWITCH_INNI_CFG_DATA_ID__BEGIN
#define bcmolt_switch_inni_cfg_data_id_config_state BCMOLT_SWITCH_INNI_CFG_DATA_ID_CONFIG_STATE
#define bcmolt_switch_inni_cfg_data_id_policer_profile BCMOLT_SWITCH_INNI_CFG_DATA_ID_POLICER_PROFILE
#define bcmolt_switch_inni_cfg_data_id__num_of BCMOLT_SWITCH_INNI_CFG_DATA_ID__NUM_OF
#define bcmolt_switch_inni_cfg_data_id_all_properties 0xFF
#define bcmolt_switch_inni_cfg_data_id_full_mask 0x3

} bcmolt_switch_inni_cfg_data_id;

/** Identifiers for all fields in a 'tc_to_queue_key'. */
typedef enum
{
    BCMOLT_TC_TO_QUEUE_KEY_ID__BEGIN = 0,
    BCMOLT_TC_TO_QUEUE_KEY_ID_ID = 0, /**< id. */
    BCMOLT_TC_TO_QUEUE_KEY_ID_DIR = 1, /**< dir. */
    BCMOLT_TC_TO_QUEUE_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tc_to_queue_key_id__begin BCMOLT_TC_TO_QUEUE_KEY_ID__BEGIN
#define bcmolt_tc_to_queue_key_id_id BCMOLT_TC_TO_QUEUE_KEY_ID_ID
#define bcmolt_tc_to_queue_key_id_dir BCMOLT_TC_TO_QUEUE_KEY_ID_DIR
#define bcmolt_tc_to_queue_key_id__num_of BCMOLT_TC_TO_QUEUE_KEY_ID__NUM_OF
#define bcmolt_tc_to_queue_key_id_all_properties 0xFF
#define bcmolt_tc_to_queue_key_id_full_mask 0x3

} bcmolt_tc_to_queue_key_id;

/** Identifiers for all fields in a 'tc_to_queue_cfg_data'. */
typedef enum
{
    BCMOLT_TC_TO_QUEUE_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_TC_TO_QUEUE_CFG_DATA_ID_QUEUE = 0, /**< queue. */
    BCMOLT_TC_TO_QUEUE_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tc_to_queue_cfg_data_id__begin BCMOLT_TC_TO_QUEUE_CFG_DATA_ID__BEGIN
#define bcmolt_tc_to_queue_cfg_data_id_queue BCMOLT_TC_TO_QUEUE_CFG_DATA_ID_QUEUE
#define bcmolt_tc_to_queue_cfg_data_id__num_of BCMOLT_TC_TO_QUEUE_CFG_DATA_ID__NUM_OF
#define bcmolt_tc_to_queue_cfg_data_id_all_properties 0xFF
#define bcmolt_tc_to_queue_cfg_data_id_full_mask 0x1

} bcmolt_tc_to_queue_cfg_data_id;

/** Identifiers for all fields in a 'tm_qmp_key'. */
typedef enum
{
    BCMOLT_TM_QMP_KEY_ID__BEGIN = 0,
    BCMOLT_TM_QMP_KEY_ID_ID = 0, /**< id. */
    BCMOLT_TM_QMP_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_qmp_key_id__begin BCMOLT_TM_QMP_KEY_ID__BEGIN
#define bcmolt_tm_qmp_key_id_id BCMOLT_TM_QMP_KEY_ID_ID
#define bcmolt_tm_qmp_key_id__num_of BCMOLT_TM_QMP_KEY_ID__NUM_OF
#define bcmolt_tm_qmp_key_id_all_properties 0xFF
#define bcmolt_tm_qmp_key_id_full_mask 0x1

} bcmolt_tm_qmp_key_id;

/** Identifiers for all fields in a 'tm_qmp_cfg_data'. */
typedef enum
{
    BCMOLT_TM_QMP_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_TM_QMP_CFG_DATA_ID_TYPE = 0, /**< type. */
    BCMOLT_TM_QMP_CFG_DATA_ID_PBITS_TO_TMQ_ID = 1, /**< pbits_to_tmq_id. */
    BCMOLT_TM_QMP_CFG_DATA_ID_REF_COUNT = 2, /**< ref_count. */
    BCMOLT_TM_QMP_CFG_DATA_ID_STATE = 3, /**< state. */
    BCMOLT_TM_QMP_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_qmp_cfg_data_id__begin BCMOLT_TM_QMP_CFG_DATA_ID__BEGIN
#define bcmolt_tm_qmp_cfg_data_id_type BCMOLT_TM_QMP_CFG_DATA_ID_TYPE
#define bcmolt_tm_qmp_cfg_data_id_pbits_to_tmq_id BCMOLT_TM_QMP_CFG_DATA_ID_PBITS_TO_TMQ_ID
#define bcmolt_tm_qmp_cfg_data_id_ref_count BCMOLT_TM_QMP_CFG_DATA_ID_REF_COUNT
#define bcmolt_tm_qmp_cfg_data_id_state BCMOLT_TM_QMP_CFG_DATA_ID_STATE
#define bcmolt_tm_qmp_cfg_data_id__num_of BCMOLT_TM_QMP_CFG_DATA_ID__NUM_OF
#define bcmolt_tm_qmp_cfg_data_id_all_properties 0xFF
#define bcmolt_tm_qmp_cfg_data_id_full_mask 0xF

} bcmolt_tm_qmp_cfg_data_id;

/** Identifiers for all fields in a 'tm_queue_key'. */
typedef enum
{
    BCMOLT_TM_QUEUE_KEY_ID__BEGIN = 0,
    BCMOLT_TM_QUEUE_KEY_ID_SCHED_ID = 0, /**< sched_id. */
    BCMOLT_TM_QUEUE_KEY_ID_TM_Q_SET_ID = 1, /**< tm_q_set_id. */
    BCMOLT_TM_QUEUE_KEY_ID_ID = 2, /**< id. */
    BCMOLT_TM_QUEUE_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_queue_key_id__begin BCMOLT_TM_QUEUE_KEY_ID__BEGIN
#define bcmolt_tm_queue_key_id_sched_id BCMOLT_TM_QUEUE_KEY_ID_SCHED_ID
#define bcmolt_tm_queue_key_id_tm_q_set_id BCMOLT_TM_QUEUE_KEY_ID_TM_Q_SET_ID
#define bcmolt_tm_queue_key_id_id BCMOLT_TM_QUEUE_KEY_ID_ID
#define bcmolt_tm_queue_key_id__num_of BCMOLT_TM_QUEUE_KEY_ID__NUM_OF
#define bcmolt_tm_queue_key_id_all_properties 0xFF
#define bcmolt_tm_queue_key_id_full_mask 0x7

} bcmolt_tm_queue_key_id;

/** Identifiers for all fields in a 'tm_queue_cfg_data'. */
typedef enum
{
    BCMOLT_TM_QUEUE_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_TM_QUEUE_CFG_DATA_ID_STATE = 0, /**< State. */
    BCMOLT_TM_QUEUE_CFG_DATA_ID_TM_SCHED_PARAM = 1, /**< TM Sched Param. */
    BCMOLT_TM_QUEUE_CFG_DATA_ID_RATE = 3, /**< rate. */
    BCMOLT_TM_QUEUE_CFG_DATA_ID_REF_COUNT = 4, /**< ref_count. */
    BCMOLT_TM_QUEUE_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_queue_cfg_data_id__begin BCMOLT_TM_QUEUE_CFG_DATA_ID__BEGIN
#define bcmolt_tm_queue_cfg_data_id_state BCMOLT_TM_QUEUE_CFG_DATA_ID_STATE
#define bcmolt_tm_queue_cfg_data_id_tm_sched_param BCMOLT_TM_QUEUE_CFG_DATA_ID_TM_SCHED_PARAM
#define bcmolt_tm_queue_cfg_data_id_rate BCMOLT_TM_QUEUE_CFG_DATA_ID_RATE
#define bcmolt_tm_queue_cfg_data_id_ref_count BCMOLT_TM_QUEUE_CFG_DATA_ID_REF_COUNT
#define bcmolt_tm_queue_cfg_data_id__num_of BCMOLT_TM_QUEUE_CFG_DATA_ID__NUM_OF
#define bcmolt_tm_queue_cfg_data_id_all_properties 0xFF
#define bcmolt_tm_queue_cfg_data_id_full_mask 0x1B

} bcmolt_tm_queue_cfg_data_id;

/** Identifiers for all fields in a 'tm_sched_key'. */
typedef enum
{
    BCMOLT_TM_SCHED_KEY_ID__BEGIN = 0,
    BCMOLT_TM_SCHED_KEY_ID_ID = 0, /**< id. */
    BCMOLT_TM_SCHED_KEY_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_sched_key_id__begin BCMOLT_TM_SCHED_KEY_ID__BEGIN
#define bcmolt_tm_sched_key_id_id BCMOLT_TM_SCHED_KEY_ID_ID
#define bcmolt_tm_sched_key_id__num_of BCMOLT_TM_SCHED_KEY_ID__NUM_OF
#define bcmolt_tm_sched_key_id_all_properties 0xFF
#define bcmolt_tm_sched_key_id_full_mask 0x1

} bcmolt_tm_sched_key_id;

/** Identifiers for all fields in a 'tm_sched_cfg_data'. */
typedef enum
{
    BCMOLT_TM_SCHED_CFG_DATA_ID__BEGIN = 0,
    BCMOLT_TM_SCHED_CFG_DATA_ID_ATTACHMENT_POINT = 0, /**< attachment_point. */
    BCMOLT_TM_SCHED_CFG_DATA_ID_SCHED_TYPE = 1, /**< type. */
    BCMOLT_TM_SCHED_CFG_DATA_ID_NUM_PRIORITIES = 2, /**< num_priorities. */
    BCMOLT_TM_SCHED_CFG_DATA_ID_RATE = 3, /**< rate. */
    BCMOLT_TM_SCHED_CFG_DATA_ID_STATE = 5, /**< state. */
    BCMOLT_TM_SCHED_CFG_DATA_ID__NUM_OF, /**< Constant to use for sizing arrays - note that enum may have holes. */

    /* Lower-case versions for macro support. */
#define bcmolt_tm_sched_cfg_data_id__begin BCMOLT_TM_SCHED_CFG_DATA_ID__BEGIN
#define bcmolt_tm_sched_cfg_data_id_attachment_point BCMOLT_TM_SCHED_CFG_DATA_ID_ATTACHMENT_POINT
#define bcmolt_tm_sched_cfg_data_id_sched_type BCMOLT_TM_SCHED_CFG_DATA_ID_SCHED_TYPE
#define bcmolt_tm_sched_cfg_data_id_num_priorities BCMOLT_TM_SCHED_CFG_DATA_ID_NUM_PRIORITIES
#define bcmolt_tm_sched_cfg_data_id_rate BCMOLT_TM_SCHED_CFG_DATA_ID_RATE
#define bcmolt_tm_sched_cfg_data_id_state BCMOLT_TM_SCHED_CFG_DATA_ID_STATE
#define bcmolt_tm_sched_cfg_data_id__num_of BCMOLT_TM_SCHED_CFG_DATA_ID__NUM_OF
#define bcmolt_tm_sched_cfg_data_id_all_properties 0xFF
#define bcmolt_tm_sched_cfg_data_id_full_mask 0x2F

} bcmolt_tm_sched_cfg_data_id;



/** @} */

#endif
