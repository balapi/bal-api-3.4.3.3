/*
 *  <:Copyright 2016-2019 Broadcom. All rights reserved. 
 *    The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
 *  :>
*/

#ifndef BCMOLT_API_MODEL_SUPPORTING_ENUM_FUNCS_H_
#define BCMOLT_API_MODEL_SUPPORTING_ENUM_FUNCS_H_

#include <bcmos_system.h>
#include <bcmolt_buf.h>
#include <bcmolt_system_types.h>
#include "bcmolt_api_model_supporting_enums.h"

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_access_control_fwd_action_type_pack(
    bcmolt_access_control_fwd_action_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_access_control_fwd_action_type_unpack(
    bcmolt_access_control_fwd_action_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_action_cmd_id_pack(
    bcmolt_action_cmd_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_action_cmd_id_unpack(
    bcmolt_action_cmd_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_action_control_pkt_modifiers_pack(
    bcmolt_action_control_pkt_modifiers obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_action_control_pkt_modifiers_unpack(
    bcmolt_action_control_pkt_modifiers *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_action_tag_format_pack(
    bcmolt_action_tag_format obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_action_tag_format_unpack(
    bcmolt_action_tag_format *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_activation_fail_reason_pack(
    bcmolt_activation_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_activation_fail_reason_unpack(
    bcmolt_activation_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_activation_state_pack(
    bcmolt_activation_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_activation_state_unpack(
    bcmolt_activation_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_active_interface_pack(
    bcmolt_active_interface obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_active_interface_unpack(
    bcmolt_active_interface *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_additional_bw_eligibility_pack(
    bcmolt_additional_bw_eligibility obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_additional_bw_eligibility_unpack(
    bcmolt_additional_bw_eligibility *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_alloc_operation_pack(
    bcmolt_alloc_operation obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_alloc_operation_unpack(
    bcmolt_alloc_operation *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_alloc_type_pack(
    bcmolt_alloc_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_alloc_type_unpack(
    bcmolt_alloc_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_automatic_onu_deactivation_reason_pack(
    bcmolt_automatic_onu_deactivation_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_automatic_onu_deactivation_reason_unpack(
    bcmolt_automatic_onu_deactivation_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_bal_fail_reason_pack(
    bcmolt_bal_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_bal_fail_reason_unpack(
    bcmolt_bal_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_bal_state_pack(
    bcmolt_bal_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_bal_state_unpack(
    bcmolt_bal_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_burst_profile_type_pack(
    bcmolt_burst_profile_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_burst_profile_type_unpack(
    bcmolt_burst_profile_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_calibration_record_pack(
    bcmolt_calibration_record obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_calibration_record_unpack(
    bcmolt_calibration_record *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ccm_event_pack(
    bcmolt_ccm_event obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ccm_event_unpack(
    bcmolt_ccm_event *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ccm_interval_pack(
    bcmolt_ccm_interval obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ccm_interval_unpack(
    bcmolt_ccm_interval *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_chip_family_pack(
    bcmolt_chip_family obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_chip_family_unpack(
    bcmolt_chip_family *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_comm_mode_pack(
    bcmolt_comm_mode obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_comm_mode_unpack(
    bcmolt_comm_mode *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_config_state_pack(
    bcmolt_config_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_config_state_unpack(
    bcmolt_config_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_control_state_pack(
    bcmolt_control_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_control_state_unpack(
    bcmolt_control_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_dba_mode_pack(
    bcmolt_dba_mode obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_dba_mode_unpack(
    bcmolt_dba_mode *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ddr_test_result_pack(
    bcmolt_ddr_test_result obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ddr_test_result_unpack(
    bcmolt_ddr_test_result *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ddr_test_status_pack(
    bcmolt_ddr_test_status obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ddr_test_status_unpack(
    bcmolt_ddr_test_status *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_deactivation_fail_reason_pack(
    bcmolt_deactivation_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_deactivation_fail_reason_unpack(
    bcmolt_deactivation_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_chip_revision_pack(
    bcmolt_device_chip_revision obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_chip_revision_unpack(
    bcmolt_device_chip_revision *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_disconnect_reason_pack(
    bcmolt_device_disconnect_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_disconnect_reason_unpack(
    bcmolt_device_disconnect_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_image_type_pack(
    bcmolt_device_image_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_image_type_unpack(
    bcmolt_device_image_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_disable_serial_number_control_pack(
    bcmolt_disable_serial_number_control obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_disable_serial_number_control_unpack(
    bcmolt_disable_serial_number_control *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_egress_qos_type_pack(
    bcmolt_egress_qos_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_egress_qos_type_unpack(
    bcmolt_egress_qos_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_embedded_image_transfer_status_pack(
    bcmolt_embedded_image_transfer_status obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_embedded_image_transfer_status_unpack(
    bcmolt_embedded_image_transfer_status *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_erps_control_pack(
    bcmolt_erps_control obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_erps_control_unpack(
    bcmolt_erps_control *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ext_irq_pack(
    bcmolt_ext_irq obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ext_irq_unpack(
    bcmolt_ext_irq *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_flow_interface_type_pack(
    bcmolt_flow_interface_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_flow_interface_type_unpack(
    bcmolt_flow_interface_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_flow_state_pack(
    bcmolt_flow_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_flow_state_unpack(
    bcmolt_flow_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_flow_type_pack(
    bcmolt_flow_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_flow_type_unpack(
    bcmolt_flow_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_frequency_adjustment_direction_pack(
    bcmolt_frequency_adjustment_direction obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_frequency_adjustment_direction_unpack(
    bcmolt_frequency_adjustment_direction *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gem_port_direction_pack(
    bcmolt_gem_port_direction obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gem_port_direction_unpack(
    bcmolt_gem_port_direction *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gem_port_operation_pack(
    bcmolt_gem_port_operation obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gem_port_operation_unpack(
    bcmolt_gem_port_operation *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gem_port_type_pack(
    bcmolt_gem_port_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gem_port_type_unpack(
    bcmolt_gem_port_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpio_pin_pack(
    bcmolt_gpio_pin obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpio_pin_unpack(
    bcmolt_gpio_pin *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpio_pin_dir_pack(
    bcmolt_gpio_pin_dir obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpio_pin_dir_unpack(
    bcmolt_gpio_pin_dir *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpio_value_pack(
    bcmolt_gpio_value obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpio_value_unpack(
    bcmolt_gpio_value *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpon_key_exchange_mode_pack(
    bcmolt_gpon_key_exchange_mode obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpon_key_exchange_mode_unpack(
    bcmolt_gpon_key_exchange_mode *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_member_update_fail_reason_pack(
    bcmolt_group_member_update_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_member_update_fail_reason_unpack(
    bcmolt_group_member_update_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_state_pack(
    bcmolt_group_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_state_unpack(
    bcmolt_group_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_type_pack(
    bcmolt_group_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_type_unpack(
    bcmolt_group_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_host_connection_fail_reason_pack(
    bcmolt_host_connection_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_host_connection_fail_reason_unpack(
    bcmolt_host_connection_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_image_transfer_status_pack(
    bcmolt_image_transfer_status obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_image_transfer_status_unpack(
    bcmolt_image_transfer_status *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_inband_mgmt_action_type_pack(
    bcmolt_inband_mgmt_action_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_inband_mgmt_action_type_unpack(
    bcmolt_inband_mgmt_action_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_inband_mgmt_state_pack(
    bcmolt_inband_mgmt_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_inband_mgmt_state_unpack(
    bcmolt_inband_mgmt_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_inni_fec_modes_pack(
    bcmolt_inni_fec_modes obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_inni_fec_modes_unpack(
    bcmolt_inni_fec_modes *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_interface_operation_pack(
    bcmolt_interface_operation obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_interface_operation_unpack(
    bcmolt_interface_operation *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_interface_state_pack(
    bcmolt_interface_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_interface_state_unpack(
    bcmolt_interface_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_interface_type_pack(
    bcmolt_interface_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_interface_type_unpack(
    bcmolt_interface_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_internal_nni_redundancy_pack(
    bcmolt_internal_nni_redundancy obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_internal_nni_redundancy_unpack(
    bcmolt_internal_nni_redundancy *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_hash_field_flags_pack(
    bcmolt_lag_hash_field_flags obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_hash_field_flags_unpack(
    bcmolt_lag_hash_field_flags *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_hash_polynomial_pack(
    bcmolt_lag_hash_polynomial obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_hash_polynomial_unpack(
    bcmolt_lag_hash_polynomial *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_health_pack(
    bcmolt_lag_health obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_health_unpack(
    bcmolt_lag_health *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_member_update_fail_reason_pack(
    bcmolt_lag_member_update_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_member_update_fail_reason_unpack(
    bcmolt_lag_member_update_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_psc_mode_pack(
    bcmolt_lag_psc_mode obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_psc_mode_unpack(
    bcmolt_lag_psc_mode *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_link_fault_code_pack(
    bcmolt_link_fault_code obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_link_fault_code_unpack(
    bcmolt_link_fault_code *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_link_state_pack(
    bcmolt_link_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_link_state_unpack(
    bcmolt_link_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_link_type_pack(
    bcmolt_link_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_link_type_unpack(
    bcmolt_link_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_loc_clear_threshold_pack(
    bcmolt_loc_clear_threshold obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_loc_clear_threshold_unpack(
    bcmolt_loc_clear_threshold *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_file_id_pack(
    bcmolt_log_file_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_file_id_unpack(
    bcmolt_log_file_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_level_pack(
    bcmolt_log_level obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_level_unpack(
    bcmolt_log_level *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_style_pack(
    bcmolt_log_style obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_style_unpack(
    bcmolt_log_style *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_type_pack(
    bcmolt_log_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_type_unpack(
    bcmolt_log_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_meg_format_pack(
    bcmolt_meg_format obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_meg_format_unpack(
    bcmolt_meg_format *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_meg_level_pack(
    bcmolt_meg_level obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_meg_level_unpack(
    bcmolt_meg_level *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_members_update_command_pack(
    bcmolt_members_update_command obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_members_update_command_unpack(
    bcmolt_members_update_command *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_mep_type_pack(
    bcmolt_mep_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_mep_type_unpack(
    bcmolt_mep_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_mpcp_discovery_info_pack(
    bcmolt_mpcp_discovery_info obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_mpcp_discovery_info_unpack(
    bcmolt_mpcp_discovery_info *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_connection_pack(
    bcmolt_nni_connection obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_connection_unpack(
    bcmolt_nni_connection *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_loopback_type_pack(
    bcmolt_nni_loopback_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_loopback_type_unpack(
    bcmolt_nni_loopback_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_protection_mode_pack(
    bcmolt_nni_protection_mode obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_protection_mode_unpack(
    bcmolt_nni_protection_mode *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_odn_class_pack(
    bcmolt_odn_class obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_odn_class_unpack(
    bcmolt_odn_class *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_olt_disconnect_reason_pack(
    bcmolt_olt_disconnect_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_olt_disconnect_reason_unpack(
    bcmolt_olt_disconnect_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_omci_device_id_pack(
    bcmolt_omci_device_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_omci_device_id_unpack(
    bcmolt_omci_device_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_omci_port_id_operation_pack(
    bcmolt_omci_port_id_operation obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_omci_port_id_operation_unpack(
    bcmolt_omci_port_id_operation *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_operation_pack(
    bcmolt_onu_operation obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_operation_unpack(
    bcmolt_onu_operation *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_post_discovery_mode_pack(
    bcmolt_onu_post_discovery_mode obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_post_discovery_mode_unpack(
    bcmolt_onu_post_discovery_mode *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_rate_pack(
    bcmolt_onu_rate obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_rate_unpack(
    bcmolt_onu_rate *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_state_pack(
    bcmolt_onu_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_state_unpack(
    bcmolt_onu_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_upgrade_status_code_pack(
    bcmolt_onu_upgrade_status_code obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_upgrade_status_code_unpack(
    bcmolt_onu_upgrade_status_code *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_packet_injection_error_pack(
    bcmolt_packet_injection_error obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_packet_injection_error_unpack(
    bcmolt_packet_injection_error *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_packet_type_pack(
    bcmolt_packet_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_packet_type_unpack(
    bcmolt_packet_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_password_authentication_fail_reason_pack(
    bcmolt_password_authentication_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_password_authentication_fail_reason_unpack(
    bcmolt_password_authentication_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pkt_tag_type_pack(
    bcmolt_pkt_tag_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pkt_tag_type_unpack(
    bcmolt_pkt_tag_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_policer_app_pack(
    bcmolt_policer_app obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_policer_app_unpack(
    bcmolt_policer_app *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_policer_type_pack(
    bcmolt_policer_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_policer_type_unpack(
    bcmolt_policer_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_ni_onu_upgrade_status_code_pack(
    bcmolt_pon_ni_onu_upgrade_status_code obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_ni_onu_upgrade_status_code_unpack(
    bcmolt_pon_ni_onu_upgrade_status_code *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_protection_switching_options_pack(
    bcmolt_pon_protection_switching_options obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_protection_switching_options_unpack(
    bcmolt_pon_protection_switching_options *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_power_levelling_control_pack(
    bcmolt_power_levelling_control obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_power_levelling_control_unpack(
    bcmolt_power_levelling_control *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_power_management_transition_reason_pack(
    bcmolt_power_management_transition_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_power_management_transition_reason_unpack(
    bcmolt_power_management_transition_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_prbs_checker_mode_pack(
    bcmolt_prbs_checker_mode obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_prbs_checker_mode_unpack(
    bcmolt_prbs_checker_mode *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_prbs_lock_state_pack(
    bcmolt_prbs_lock_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_prbs_lock_state_unpack(
    bcmolt_prbs_lock_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_prbs_polynomial_pack(
    bcmolt_prbs_polynomial obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_prbs_polynomial_unpack(
    bcmolt_prbs_polynomial *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ranging_fail_reason_pack(
    bcmolt_ranging_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ranging_fail_reason_unpack(
    bcmolt_ranging_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ras_ddr_usage_mode_pack(
    bcmolt_ras_ddr_usage_mode obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ras_ddr_usage_mode_unpack(
    bcmolt_ras_ddr_usage_mode *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_request_registration_fail_reason_pack(
    bcmolt_request_registration_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_request_registration_fail_reason_unpack(
    bcmolt_request_registration_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_reset_mode_pack(
    bcmolt_reset_mode obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_reset_mode_unpack(
    bcmolt_reset_mode *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_result_pack(
    bcmolt_result obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_result_unpack(
    bcmolt_result *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ring_instance_pack(
    bcmolt_ring_instance obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ring_instance_unpack(
    bcmolt_ring_instance *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ring_port_pack(
    bcmolt_ring_port obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ring_port_unpack(
    bcmolt_ring_port *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ring_port_state_pack(
    bcmolt_ring_port_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ring_port_state_unpack(
    bcmolt_ring_port_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_rssi_measurement_fail_reason_pack(
    bcmolt_rssi_measurement_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_rssi_measurement_fail_reason_unpack(
    bcmolt_rssi_measurement_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_secure_mutual_authentication_fail_reason_pack(
    bcmolt_secure_mutual_authentication_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_secure_mutual_authentication_fail_reason_unpack(
    bcmolt_secure_mutual_authentication_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_sign_pack(
    bcmolt_sign obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_sign_unpack(
    bcmolt_sign *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_stat_condition_type_pack(
    bcmolt_stat_condition_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_stat_condition_type_unpack(
    bcmolt_stat_condition_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_status_pack(
    bcmolt_status obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_status_unpack(
    bcmolt_status *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_switch_over_type_c_onu_state_pack(
    bcmolt_switch_over_type_c_onu_state obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_switch_over_type_c_onu_state_unpack(
    bcmolt_switch_over_type_c_onu_state *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_system_mode_pack(
    bcmolt_system_mode obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_system_mode_unpack(
    bcmolt_system_mode *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tc_protocol_pack(
    bcmolt_tc_protocol obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tc_protocol_unpack(
    bcmolt_tc_protocol *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_qmp_type_pack(
    bcmolt_tm_qmp_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_qmp_type_unpack(
    bcmolt_tm_qmp_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_dir_pack(
    bcmolt_tm_sched_dir obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_dir_unpack(
    bcmolt_tm_sched_dir *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_output_type_pack(
    bcmolt_tm_sched_output_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_output_type_unpack(
    bcmolt_tm_sched_output_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_param_type_pack(
    bcmolt_tm_sched_param_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_param_type_unpack(
    bcmolt_tm_sched_param_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_type_pack(
    bcmolt_tm_sched_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_type_unpack(
    bcmolt_tm_sched_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_traffic_resume_result_pack(
    bcmolt_traffic_resume_result obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_traffic_resume_result_unpack(
    bcmolt_traffic_resume_result *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_traffic_type_pack(
    bcmolt_traffic_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_traffic_type_unpack(
    bcmolt_traffic_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_trivalent_pack(
    bcmolt_trivalent obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_trivalent_unpack(
    bcmolt_trivalent *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_trx_type_pack(
    bcmolt_trx_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_trx_type_unpack(
    bcmolt_trx_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tune_in_fail_reason_pack(
    bcmolt_tune_in_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tune_in_fail_reason_unpack(
    bcmolt_tune_in_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tune_out_fail_reason_pack(
    bcmolt_tune_out_fail_reason obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tune_out_fail_reason_unpack(
    bcmolt_tune_out_fail_reason *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_uart_baudrate_pack(
    bcmolt_uart_baudrate obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_uart_baudrate_unpack(
    bcmolt_uart_baudrate *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_upstream_line_rate_capabilities_pack(
    bcmolt_upstream_line_rate_capabilities obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_upstream_line_rate_capabilities_unpack(
    bcmolt_upstream_line_rate_capabilities *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_us_gem_port_destination_pack(
    bcmolt_us_gem_port_destination obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_us_gem_port_destination_unpack(
    bcmolt_us_gem_port_destination *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_us_operating_wavelength_bands_pack(
    bcmolt_us_operating_wavelength_bands obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_us_operating_wavelength_bands_unpack(
    bcmolt_us_operating_wavelength_bands *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_trx_type_pack(
    bcmolt_xgpon_trx_type obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_trx_type_unpack(
    bcmolt_xgpon_trx_type *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_obj_id_pack(
    bcmolt_obj_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_obj_id_unpack(
    bcmolt_obj_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_api_group_id_pack(
    bcmolt_api_group_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_api_group_id_unpack(
    bcmolt_api_group_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_access_control_auto_subgroup_pack(
    bcmolt_access_control_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_access_control_auto_subgroup_unpack(
    bcmolt_access_control_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_access_control_oper_subgroup_pack(
    bcmolt_access_control_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_access_control_oper_subgroup_unpack(
    bcmolt_access_control_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_auto_subgroup_pack(
    bcmolt_device_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_auto_subgroup_unpack(
    bcmolt_device_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_oper_subgroup_pack(
    bcmolt_device_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_oper_subgroup_unpack(
    bcmolt_device_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_erps_interface_auto_subgroup_pack(
    bcmolt_erps_interface_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_erps_interface_auto_subgroup_unpack(
    bcmolt_erps_interface_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_erps_interface_oper_subgroup_pack(
    bcmolt_erps_interface_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_erps_interface_oper_subgroup_unpack(
    bcmolt_erps_interface_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_eth_oam_auto_subgroup_pack(
    bcmolt_eth_oam_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_eth_oam_auto_subgroup_unpack(
    bcmolt_eth_oam_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_eth_oam_oper_subgroup_pack(
    bcmolt_eth_oam_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_eth_oam_oper_subgroup_unpack(
    bcmolt_eth_oam_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_flow_oper_subgroup_pack(
    bcmolt_flow_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_flow_oper_subgroup_unpack(
    bcmolt_flow_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_auto_subgroup_pack(
    bcmolt_group_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_auto_subgroup_unpack(
    bcmolt_group_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_oper_subgroup_pack(
    bcmolt_group_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_oper_subgroup_unpack(
    bcmolt_group_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_internal_nni_auto_subgroup_pack(
    bcmolt_internal_nni_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_internal_nni_auto_subgroup_unpack(
    bcmolt_internal_nni_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_auto_subgroup_pack(
    bcmolt_itupon_alloc_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_auto_subgroup_unpack(
    bcmolt_itupon_alloc_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_oper_subgroup_pack(
    bcmolt_itupon_alloc_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_oper_subgroup_unpack(
    bcmolt_itupon_alloc_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_gem_auto_subgroup_pack(
    bcmolt_itupon_gem_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_gem_auto_subgroup_unpack(
    bcmolt_itupon_gem_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_gem_oper_subgroup_pack(
    bcmolt_itupon_gem_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_gem_oper_subgroup_unpack(
    bcmolt_itupon_gem_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_auto_subgroup_pack(
    bcmolt_lag_interface_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_auto_subgroup_unpack(
    bcmolt_lag_interface_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_oper_subgroup_pack(
    bcmolt_lag_interface_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_oper_subgroup_unpack(
    bcmolt_lag_interface_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_file_oper_subgroup_pack(
    bcmolt_log_file_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_file_oper_subgroup_unpack(
    bcmolt_log_file_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_interface_auto_subgroup_pack(
    bcmolt_nni_interface_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_interface_auto_subgroup_unpack(
    bcmolt_nni_interface_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_interface_oper_subgroup_pack(
    bcmolt_nni_interface_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_interface_oper_subgroup_unpack(
    bcmolt_nni_interface_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_olt_auto_subgroup_pack(
    bcmolt_olt_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_olt_auto_subgroup_unpack(
    bcmolt_olt_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_olt_oper_subgroup_pack(
    bcmolt_olt_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_olt_oper_subgroup_unpack(
    bcmolt_olt_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_auto_subgroup_pack(
    bcmolt_onu_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_auto_subgroup_unpack(
    bcmolt_onu_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_oper_subgroup_pack(
    bcmolt_onu_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_oper_subgroup_unpack(
    bcmolt_onu_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_auto_subgroup_pack(
    bcmolt_pon_interface_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_auto_subgroup_unpack(
    bcmolt_pon_interface_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_oper_subgroup_pack(
    bcmolt_pon_interface_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_oper_subgroup_unpack(
    bcmolt_pon_interface_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_protection_interface_auto_subgroup_pack(
    bcmolt_protection_interface_auto_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_protection_interface_auto_subgroup_unpack(
    bcmolt_protection_interface_auto_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_protection_interface_oper_subgroup_pack(
    bcmolt_protection_interface_oper_subgroup obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_protection_interface_oper_subgroup_unpack(
    bcmolt_protection_interface_oper_subgroup *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_access_control_fwd_action_id_pack(
    bcmolt_access_control_fwd_action_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_access_control_fwd_action_id_unpack(
    bcmolt_access_control_fwd_action_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_access_control_pkt_modifier_id_pack(
    bcmolt_access_control_pkt_modifier_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_access_control_pkt_modifier_id_unpack(
    bcmolt_access_control_pkt_modifier_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_action_id_pack(
    bcmolt_action_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_action_id_unpack(
    bcmolt_action_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_aes_key_id_pack(
    bcmolt_aes_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_aes_key_id_unpack(
    bcmolt_aes_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_automatic_onu_deactivation_id_pack(
    bcmolt_automatic_onu_deactivation_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_automatic_onu_deactivation_id_unpack(
    bcmolt_automatic_onu_deactivation_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ber_monitor_params_id_pack(
    bcmolt_ber_monitor_params_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ber_monitor_params_id_unpack(
    bcmolt_ber_monitor_params_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_cbr_rt_allocation_profile_id_pack(
    bcmolt_cbr_rt_allocation_profile_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_cbr_rt_allocation_profile_id_unpack(
    bcmolt_cbr_rt_allocation_profile_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_channel_profile_id_pack(
    bcmolt_channel_profile_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_channel_profile_id_unpack(
    bcmolt_channel_profile_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_classifier_id_pack(
    bcmolt_classifier_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_classifier_id_unpack(
    bcmolt_classifier_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_classifier_ip_v_6_id_pack(
    bcmolt_classifier_ip_v_6_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_classifier_ip_v_6_id_unpack(
    bcmolt_classifier_ip_v_6_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ddr_test_completed_id_pack(
    bcmolt_ddr_test_completed_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ddr_test_completed_id_unpack(
    bcmolt_ddr_test_completed_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ddr_test_completed_default_id_pack(
    bcmolt_ddr_test_completed_default_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ddr_test_completed_default_id_unpack(
    bcmolt_ddr_test_completed_default_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ddr_test_completed_completed_id_pack(
    bcmolt_ddr_test_completed_completed_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ddr_test_completed_completed_id_unpack(
    bcmolt_ddr_test_completed_completed_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ddr_test_completed_connection_failed_id_pack(
    bcmolt_ddr_test_completed_connection_failed_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ddr_test_completed_connection_failed_id_unpack(
    bcmolt_ddr_test_completed_connection_failed_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_debug_device_cfg_id_pack(
    bcmolt_debug_device_cfg_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_debug_device_cfg_id_unpack(
    bcmolt_debug_device_cfg_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_debug_flow_config_id_pack(
    bcmolt_debug_flow_config_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_debug_flow_config_id_unpack(
    bcmolt_debug_flow_config_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ds_frequency_offset_id_pack(
    bcmolt_ds_frequency_offset_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ds_frequency_offset_id_unpack(
    bcmolt_ds_frequency_offset_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_egress_qos_id_pack(
    bcmolt_egress_qos_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_egress_qos_id_unpack(
    bcmolt_egress_qos_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_egress_qos_fixed_queue_id_pack(
    bcmolt_egress_qos_fixed_queue_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_egress_qos_fixed_queue_id_unpack(
    bcmolt_egress_qos_fixed_queue_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_egress_qos_tc_to_queue_id_pack(
    bcmolt_egress_qos_tc_to_queue_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_egress_qos_tc_to_queue_id_unpack(
    bcmolt_egress_qos_tc_to_queue_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_egress_qos_pbit_to_tc_id_pack(
    bcmolt_egress_qos_pbit_to_tc_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_egress_qos_pbit_to_tc_id_unpack(
    bcmolt_egress_qos_pbit_to_tc_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_egress_qos_priority_to_queue_id_pack(
    bcmolt_egress_qos_priority_to_queue_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_egress_qos_priority_to_queue_id_unpack(
    bcmolt_egress_qos_priority_to_queue_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_embedded_image_entry_id_pack(
    bcmolt_embedded_image_entry_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_embedded_image_entry_id_unpack(
    bcmolt_embedded_image_entry_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_firmware_sw_version_id_pack(
    bcmolt_firmware_sw_version_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_firmware_sw_version_id_unpack(
    bcmolt_firmware_sw_version_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_flow_intf_ref_id_pack(
    bcmolt_flow_intf_ref_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_flow_intf_ref_id_unpack(
    bcmolt_flow_intf_ref_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gem_port_configuration_id_pack(
    bcmolt_gem_port_configuration_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gem_port_configuration_id_unpack(
    bcmolt_gem_port_configuration_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpon_onu_alarm_state_id_pack(
    bcmolt_gpon_onu_alarm_state_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpon_onu_alarm_state_id_unpack(
    bcmolt_gpon_onu_alarm_state_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpon_onu_alarms_id_pack(
    bcmolt_gpon_onu_alarms_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpon_onu_alarms_id_unpack(
    bcmolt_gpon_onu_alarms_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpon_onu_alarms_thresholds_id_pack(
    bcmolt_gpon_onu_alarms_thresholds_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpon_onu_alarms_thresholds_id_unpack(
    bcmolt_gpon_onu_alarms_thresholds_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpon_onu_params_id_pack(
    bcmolt_gpon_onu_params_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpon_onu_params_id_unpack(
    bcmolt_gpon_onu_params_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpon_pon_params_id_pack(
    bcmolt_gpon_pon_params_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpon_pon_params_id_unpack(
    bcmolt_gpon_pon_params_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpon_trx_id_pack(
    bcmolt_gpon_trx_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpon_trx_id_unpack(
    bcmolt_gpon_trx_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_member_info_id_pack(
    bcmolt_group_member_info_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_member_info_id_unpack(
    bcmolt_group_member_info_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_members_update_command_id_pack(
    bcmolt_group_members_update_command_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_members_update_command_id_unpack(
    bcmolt_group_members_update_command_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_host_sw_version_id_pack(
    bcmolt_host_sw_version_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_host_sw_version_id_unpack(
    bcmolt_host_sw_version_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_hw_pon_id_id_pack(
    bcmolt_hw_pon_id_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_hw_pon_id_id_unpack(
    bcmolt_hw_pon_id_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ieee_8021_as_tod_id_pack(
    bcmolt_ieee_8021_as_tod_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ieee_8021_as_tod_id_unpack(
    bcmolt_ieee_8021_as_tod_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_inband_conn_data_id_pack(
    bcmolt_inband_conn_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_inband_conn_data_id_unpack(
    bcmolt_inband_conn_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_indication_shaping_id_pack(
    bcmolt_indication_shaping_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_indication_shaping_id_unpack(
    bcmolt_indication_shaping_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_inni_config_id_pack(
    bcmolt_inni_config_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_inni_config_id_unpack(
    bcmolt_inni_config_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_intf_ref_id_pack(
    bcmolt_intf_ref_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_intf_ref_id_unpack(
    bcmolt_intf_ref_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itu_onu_params_id_pack(
    bcmolt_itu_onu_params_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itu_onu_params_id_unpack(
    bcmolt_itu_onu_params_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itu_pon_params_id_pack(
    bcmolt_itu_pon_params_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itu_pon_params_id_unpack(
    bcmolt_itu_pon_params_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itu_tod_id_pack(
    bcmolt_itu_tod_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itu_tod_id_unpack(
    bcmolt_itu_tod_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ituonu_upgrade_params_id_pack(
    bcmolt_ituonu_upgrade_params_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ituonu_upgrade_params_id_unpack(
    bcmolt_ituonu_upgrade_params_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_onu_aes_key_id_pack(
    bcmolt_itupon_onu_aes_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_onu_aes_key_id_unpack(
    bcmolt_itupon_onu_aes_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_onu_eqd_id_pack(
    bcmolt_itupon_onu_eqd_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_onu_eqd_id_unpack(
    bcmolt_itupon_onu_eqd_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_protection_switching_id_pack(
    bcmolt_itupon_protection_switching_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_protection_switching_id_unpack(
    bcmolt_itupon_protection_switching_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_key_exchange_id_pack(
    bcmolt_key_exchange_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_key_exchange_id_unpack(
    bcmolt_key_exchange_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_global_parms_id_pack(
    bcmolt_lag_global_parms_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_global_parms_id_unpack(
    bcmolt_lag_global_parms_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_members_update_command_id_pack(
    bcmolt_lag_interface_members_update_command_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_members_update_command_id_unpack(
    bcmolt_lag_interface_members_update_command_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_layer_4_port_range_id_pack(
    bcmolt_layer_4_port_range_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_layer_4_port_range_id_unpack(
    bcmolt_layer_4_port_range_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_local_mep_id_pack(
    bcmolt_local_mep_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_local_mep_id_unpack(
    bcmolt_local_mep_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_level_msg_count_id_pack(
    bcmolt_log_level_msg_count_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_level_msg_count_id_unpack(
    bcmolt_log_level_msg_count_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_level_per_file_id_pack(
    bcmolt_log_level_per_file_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_level_per_file_id_unpack(
    bcmolt_log_level_per_file_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_meg_cfg_id_pack(
    bcmolt_meg_cfg_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_meg_cfg_id_unpack(
    bcmolt_meg_cfg_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ngpon2_onu_params_id_pack(
    bcmolt_ngpon2_onu_params_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ngpon2_onu_params_id_unpack(
    bcmolt_ngpon2_onu_params_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ngpon2_pon_params_id_pack(
    bcmolt_ngpon2_pon_params_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ngpon2_pon_params_id_unpack(
    bcmolt_ngpon2_pon_params_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_link_status_id_pack(
    bcmolt_nni_link_status_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_link_status_id_unpack(
    bcmolt_nni_link_status_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_activation_id_pack(
    bcmolt_onu_activation_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_activation_id_unpack(
    bcmolt_onu_activation_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_power_management_configuration_id_pack(
    bcmolt_onu_power_management_configuration_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_power_management_configuration_id_unpack(
    bcmolt_onu_power_management_configuration_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_tuning_configuration_id_pack(
    bcmolt_onu_tuning_configuration_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_tuning_configuration_id_unpack(
    bcmolt_onu_tuning_configuration_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_upgrade_status_id_pack(
    bcmolt_onu_upgrade_status_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_upgrade_status_id_unpack(
    bcmolt_onu_upgrade_status_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_operation_control_id_pack(
    bcmolt_operation_control_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_operation_control_id_unpack(
    bcmolt_operation_control_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pcie_conn_data_id_pack(
    bcmolt_pcie_conn_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pcie_conn_data_id_unpack(
    bcmolt_pcie_conn_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_periodic_ploams_id_pack(
    bcmolt_periodic_ploams_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_periodic_ploams_id_unpack(
    bcmolt_periodic_ploams_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_periodic_standby_pon_monitoring_id_pack(
    bcmolt_periodic_standby_pon_monitoring_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_periodic_standby_pon_monitoring_id_unpack(
    bcmolt_periodic_standby_pon_monitoring_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ploam_retransmission_id_pack(
    bcmolt_ploam_retransmission_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ploam_retransmission_id_unpack(
    bcmolt_ploam_retransmission_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_alloc_sla_id_pack(
    bcmolt_pon_alloc_sla_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_alloc_sla_id_unpack(
    bcmolt_pon_alloc_sla_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_available_bandwidth_id_pack(
    bcmolt_pon_available_bandwidth_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_available_bandwidth_id_unpack(
    bcmolt_pon_available_bandwidth_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_distance_id_pack(
    bcmolt_pon_distance_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_distance_id_unpack(
    bcmolt_pon_distance_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_drift_control_id_pack(
    bcmolt_pon_drift_control_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_drift_control_id_unpack(
    bcmolt_pon_drift_control_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_id_id_pack(
    bcmolt_pon_id_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_id_id_unpack(
    bcmolt_pon_id_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_onu_upgrade_status_id_pack(
    bcmolt_pon_onu_upgrade_status_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_onu_upgrade_status_id_unpack(
    bcmolt_pon_onu_upgrade_status_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_power_level_id_pack(
    bcmolt_pon_power_level_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_power_level_id_unpack(
    bcmolt_pon_power_level_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_power_consumption_channel_report_id_pack(
    bcmolt_power_consumption_channel_report_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_power_consumption_channel_report_id_unpack(
    bcmolt_power_consumption_channel_report_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_prbs_checker_config_id_pack(
    bcmolt_prbs_checker_config_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_prbs_checker_config_id_unpack(
    bcmolt_prbs_checker_config_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_prbs_generator_config_id_pack(
    bcmolt_prbs_generator_config_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_prbs_generator_config_id_unpack(
    bcmolt_prbs_generator_config_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_prbs_status_id_pack(
    bcmolt_prbs_status_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_prbs_status_id_unpack(
    bcmolt_prbs_status_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_protection_type_id_pack(
    bcmolt_protection_type_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_protection_type_id_unpack(
    bcmolt_protection_type_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_remote_mep_id_pack(
    bcmolt_remote_mep_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_remote_mep_id_unpack(
    bcmolt_remote_mep_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_request_registration_status_id_pack(
    bcmolt_request_registration_status_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_request_registration_status_id_unpack(
    bcmolt_request_registration_status_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_serial_number_id_pack(
    bcmolt_serial_number_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_serial_number_id_unpack(
    bcmolt_serial_number_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_service_discovery_id_pack(
    bcmolt_service_discovery_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_service_discovery_id_unpack(
    bcmolt_service_discovery_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_stat_alarm_config_id_pack(
    bcmolt_stat_alarm_config_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_stat_alarm_config_id_unpack(
    bcmolt_stat_alarm_config_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_stat_alarm_soak_config_id_pack(
    bcmolt_stat_alarm_soak_config_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_stat_alarm_soak_config_id_unpack(
    bcmolt_stat_alarm_soak_config_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_stat_alarm_trigger_config_id_pack(
    bcmolt_stat_alarm_trigger_config_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_stat_alarm_trigger_config_id_unpack(
    bcmolt_stat_alarm_trigger_config_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_stat_alarm_trigger_config_rate_threshold_id_pack(
    bcmolt_stat_alarm_trigger_config_rate_threshold_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_stat_alarm_trigger_config_rate_threshold_id_unpack(
    bcmolt_stat_alarm_trigger_config_rate_threshold_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_stat_alarm_trigger_config_rate_range_id_pack(
    bcmolt_stat_alarm_trigger_config_rate_range_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_stat_alarm_trigger_config_rate_range_id_unpack(
    bcmolt_stat_alarm_trigger_config_rate_range_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_stat_alarm_trigger_config_value_threshold_id_pack(
    bcmolt_stat_alarm_trigger_config_value_threshold_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_stat_alarm_trigger_config_value_threshold_id_unpack(
    bcmolt_stat_alarm_trigger_config_value_threshold_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_stat_alarm_trigger_config_none_id_pack(
    bcmolt_stat_alarm_trigger_config_none_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_stat_alarm_trigger_config_none_id_unpack(
    bcmolt_stat_alarm_trigger_config_none_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_sw_error_id_pack(
    bcmolt_sw_error_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_sw_error_id_unpack(
    bcmolt_sw_error_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_system_profile_id_pack(
    bcmolt_system_profile_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_system_profile_id_unpack(
    bcmolt_system_profile_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_queue_ref_id_pack(
    bcmolt_tm_queue_ref_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_queue_ref_id_unpack(
    bcmolt_tm_queue_ref_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_attachment_point_id_pack(
    bcmolt_tm_sched_attachment_point_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_attachment_point_id_unpack(
    bcmolt_tm_sched_attachment_point_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_attachment_point_interface_id_pack(
    bcmolt_tm_sched_attachment_point_interface_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_attachment_point_interface_id_unpack(
    bcmolt_tm_sched_attachment_point_interface_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_attachment_point_tm_sched_id_pack(
    bcmolt_tm_sched_attachment_point_tm_sched_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_attachment_point_tm_sched_id_unpack(
    bcmolt_tm_sched_attachment_point_tm_sched_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_param_id_pack(
    bcmolt_tm_sched_param_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_param_id_unpack(
    bcmolt_tm_sched_param_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_param_priority_id_pack(
    bcmolt_tm_sched_param_priority_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_param_priority_id_unpack(
    bcmolt_tm_sched_param_priority_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_param_weight_id_pack(
    bcmolt_tm_sched_param_weight_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_param_weight_id_unpack(
    bcmolt_tm_sched_param_weight_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_ref_id_pack(
    bcmolt_tm_sched_ref_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_ref_id_unpack(
    bcmolt_tm_sched_ref_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_shaping_id_pack(
    bcmolt_tm_shaping_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_shaping_id_unpack(
    bcmolt_tm_shaping_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_topology_id_pack(
    bcmolt_topology_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_topology_id_unpack(
    bcmolt_topology_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_topology_map_id_pack(
    bcmolt_topology_map_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_topology_map_id_unpack(
    bcmolt_topology_map_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_burst_profile_id_pack(
    bcmolt_xgpon_burst_profile_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_burst_profile_id_unpack(
    bcmolt_xgpon_burst_profile_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_multicast_key_id_pack(
    bcmolt_xgpon_multicast_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_multicast_key_id_unpack(
    bcmolt_xgpon_multicast_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_alarm_indication_control_id_pack(
    bcmolt_xgpon_onu_alarm_indication_control_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_alarm_indication_control_id_unpack(
    bcmolt_xgpon_onu_alarm_indication_control_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_alarm_state_id_pack(
    bcmolt_xgpon_onu_alarm_state_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_alarm_state_id_unpack(
    bcmolt_xgpon_onu_alarm_state_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_alarms_id_pack(
    bcmolt_xgpon_onu_alarms_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_alarms_id_unpack(
    bcmolt_xgpon_onu_alarms_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_alarms_thresholds_id_pack(
    bcmolt_xgpon_onu_alarms_thresholds_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_alarms_thresholds_id_unpack(
    bcmolt_xgpon_onu_alarms_thresholds_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_params_id_pack(
    bcmolt_xgpon_onu_params_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_params_id_unpack(
    bcmolt_xgpon_onu_params_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_registration_keys_id_pack(
    bcmolt_xgpon_onu_registration_keys_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_onu_registration_keys_id_unpack(
    bcmolt_xgpon_onu_registration_keys_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_pon_params_id_pack(
    bcmolt_xgpon_pon_params_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_pon_params_id_unpack(
    bcmolt_xgpon_pon_params_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_xgpon_trx_id_pack(
    bcmolt_xgpon_trx_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_xgpon_trx_id_unpack(
    bcmolt_xgpon_trx_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_access_control_key_id_pack(
    bcmolt_access_control_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_access_control_key_id_unpack(
    bcmolt_access_control_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_access_control_cfg_data_id_pack(
    bcmolt_access_control_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_access_control_cfg_data_id_unpack(
    bcmolt_access_control_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_access_control_receive_eth_packet_data_id_pack(
    bcmolt_access_control_receive_eth_packet_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_access_control_receive_eth_packet_data_id_unpack(
    bcmolt_access_control_receive_eth_packet_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_access_control_interfaces_update_data_id_pack(
    bcmolt_access_control_interfaces_update_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_access_control_interfaces_update_data_id_unpack(
    bcmolt_access_control_interfaces_update_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_access_control_auto_cfg_data_id_pack(
    bcmolt_access_control_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_access_control_auto_cfg_data_id_unpack(
    bcmolt_access_control_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_bal_system_cfg_data_id_pack(
    bcmolt_bal_system_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_bal_system_cfg_data_id_unpack(
    bcmolt_bal_system_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_bal_system_key_id_pack(
    bcmolt_bal_system_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_bal_system_key_id_unpack(
    bcmolt_bal_system_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_key_id_pack(
    bcmolt_device_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_key_id_unpack(
    bcmolt_device_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_cfg_data_id_pack(
    bcmolt_device_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_cfg_data_id_unpack(
    bcmolt_device_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_connect_data_id_pack(
    bcmolt_device_connect_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_connect_data_id_unpack(
    bcmolt_device_connect_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_host_keep_alive_data_id_pack(
    bcmolt_device_host_keep_alive_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_host_keep_alive_data_id_unpack(
    bcmolt_device_host_keep_alive_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_set_8021_as_tod_string_data_id_pack(
    bcmolt_device_set_8021_as_tod_string_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_set_8021_as_tod_string_data_id_unpack(
    bcmolt_device_set_8021_as_tod_string_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_image_transfer_start_data_id_pack(
    bcmolt_device_image_transfer_start_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_image_transfer_start_data_id_unpack(
    bcmolt_device_image_transfer_start_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_image_transfer_data_data_id_pack(
    bcmolt_device_image_transfer_data_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_image_transfer_data_data_id_unpack(
    bcmolt_device_image_transfer_data_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_run_ddr_test_data_id_pack(
    bcmolt_device_run_ddr_test_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_run_ddr_test_data_id_unpack(
    bcmolt_device_run_ddr_test_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_device_ready_data_id_pack(
    bcmolt_device_device_ready_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_device_ready_data_id_unpack(
    bcmolt_device_device_ready_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_device_keep_alive_data_id_pack(
    bcmolt_device_device_keep_alive_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_device_keep_alive_data_id_unpack(
    bcmolt_device_device_keep_alive_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_connection_failure_data_id_pack(
    bcmolt_device_connection_failure_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_connection_failure_data_id_unpack(
    bcmolt_device_connection_failure_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_connection_complete_data_id_pack(
    bcmolt_device_connection_complete_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_connection_complete_data_id_unpack(
    bcmolt_device_connection_complete_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_disconnection_complete_data_id_pack(
    bcmolt_device_disconnection_complete_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_disconnection_complete_data_id_unpack(
    bcmolt_device_disconnection_complete_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_sw_error_data_id_pack(
    bcmolt_device_sw_error_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_sw_error_data_id_unpack(
    bcmolt_device_sw_error_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_sw_exception_data_id_pack(
    bcmolt_device_sw_exception_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_sw_exception_data_id_unpack(
    bcmolt_device_sw_exception_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_image_transfer_complete_data_id_pack(
    bcmolt_device_image_transfer_complete_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_image_transfer_complete_data_id_unpack(
    bcmolt_device_image_transfer_complete_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_ddr_test_complete_data_id_pack(
    bcmolt_device_ddr_test_complete_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_ddr_test_complete_data_id_unpack(
    bcmolt_device_ddr_test_complete_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_sw_health_check_failure_data_id_pack(
    bcmolt_device_sw_health_check_failure_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_sw_health_check_failure_data_id_unpack(
    bcmolt_device_sw_health_check_failure_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_device_auto_cfg_data_id_pack(
    bcmolt_device_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_device_auto_cfg_data_id_unpack(
    bcmolt_device_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_erps_interface_key_id_pack(
    bcmolt_erps_interface_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_erps_interface_key_id_unpack(
    bcmolt_erps_interface_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_erps_interface_cfg_data_id_pack(
    bcmolt_erps_interface_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_erps_interface_cfg_data_id_unpack(
    bcmolt_erps_interface_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_erps_interface_set_ring_port_control_data_id_pack(
    bcmolt_erps_interface_set_ring_port_control_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_erps_interface_set_ring_port_control_data_id_unpack(
    bcmolt_erps_interface_set_ring_port_control_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_erps_interface_ring_port_control_data_id_pack(
    bcmolt_erps_interface_ring_port_control_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_erps_interface_ring_port_control_data_id_unpack(
    bcmolt_erps_interface_ring_port_control_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_erps_interface_auto_cfg_data_id_pack(
    bcmolt_erps_interface_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_erps_interface_auto_cfg_data_id_unpack(
    bcmolt_erps_interface_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_eth_oam_key_id_pack(
    bcmolt_eth_oam_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_eth_oam_key_id_unpack(
    bcmolt_eth_oam_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_eth_oam_cfg_data_id_pack(
    bcmolt_eth_oam_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_eth_oam_cfg_data_id_unpack(
    bcmolt_eth_oam_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_eth_oam_ccm_event_data_id_pack(
    bcmolt_eth_oam_ccm_event_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_eth_oam_ccm_event_data_id_unpack(
    bcmolt_eth_oam_ccm_event_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_eth_oam_set_mep_state_data_id_pack(
    bcmolt_eth_oam_set_mep_state_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_eth_oam_set_mep_state_data_id_unpack(
    bcmolt_eth_oam_set_mep_state_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_eth_oam_state_change_data_id_pack(
    bcmolt_eth_oam_state_change_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_eth_oam_state_change_data_id_unpack(
    bcmolt_eth_oam_state_change_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_eth_oam_auto_cfg_data_id_pack(
    bcmolt_eth_oam_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_eth_oam_auto_cfg_data_id_unpack(
    bcmolt_eth_oam_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_flow_cfg_data_id_pack(
    bcmolt_flow_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_flow_cfg_data_id_unpack(
    bcmolt_flow_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_flow_key_id_pack(
    bcmolt_flow_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_flow_key_id_unpack(
    bcmolt_flow_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_flow_send_eth_packet_data_id_pack(
    bcmolt_flow_send_eth_packet_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_flow_send_eth_packet_data_id_unpack(
    bcmolt_flow_send_eth_packet_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpio_key_id_pack(
    bcmolt_gpio_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpio_key_id_unpack(
    bcmolt_gpio_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_gpio_cfg_data_id_pack(
    bcmolt_gpio_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_gpio_cfg_data_id_unpack(
    bcmolt_gpio_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_cfg_data_id_pack(
    bcmolt_group_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_cfg_data_id_unpack(
    bcmolt_group_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_key_id_pack(
    bcmolt_group_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_key_id_unpack(
    bcmolt_group_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_members_update_data_id_pack(
    bcmolt_group_members_update_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_members_update_data_id_unpack(
    bcmolt_group_members_update_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_complete_members_update_data_id_pack(
    bcmolt_group_complete_members_update_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_complete_members_update_data_id_unpack(
    bcmolt_group_complete_members_update_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_group_auto_cfg_data_id_pack(
    bcmolt_group_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_group_auto_cfg_data_id_unpack(
    bcmolt_group_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_inband_mgmt_channel_cfg_data_id_pack(
    bcmolt_inband_mgmt_channel_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_inband_mgmt_channel_cfg_data_id_unpack(
    bcmolt_inband_mgmt_channel_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_inband_mgmt_channel_key_id_pack(
    bcmolt_inband_mgmt_channel_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_inband_mgmt_channel_key_id_unpack(
    bcmolt_inband_mgmt_channel_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_internal_nni_key_id_pack(
    bcmolt_internal_nni_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_internal_nni_key_id_unpack(
    bcmolt_internal_nni_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_internal_nni_cfg_data_id_pack(
    bcmolt_internal_nni_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_internal_nni_cfg_data_id_unpack(
    bcmolt_internal_nni_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_internal_nni_status_changed_data_id_pack(
    bcmolt_internal_nni_status_changed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_internal_nni_status_changed_data_id_unpack(
    bcmolt_internal_nni_status_changed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_internal_nni_auto_cfg_data_id_pack(
    bcmolt_internal_nni_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_internal_nni_auto_cfg_data_id_unpack(
    bcmolt_internal_nni_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_key_id_pack(
    bcmolt_itupon_alloc_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_key_id_unpack(
    bcmolt_itupon_alloc_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_cfg_data_id_pack(
    bcmolt_itupon_alloc_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_cfg_data_id_unpack(
    bcmolt_itupon_alloc_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_configuration_completed_data_id_pack(
    bcmolt_itupon_alloc_configuration_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_configuration_completed_data_id_unpack(
    bcmolt_itupon_alloc_configuration_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_get_stats_data_id_pack(
    bcmolt_itupon_alloc_get_stats_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_get_stats_data_id_unpack(
    bcmolt_itupon_alloc_get_stats_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_get_alloc_stats_completed_data_id_pack(
    bcmolt_itupon_alloc_get_alloc_stats_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_get_alloc_stats_completed_data_id_unpack(
    bcmolt_itupon_alloc_get_alloc_stats_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_set_state_data_id_pack(
    bcmolt_itupon_alloc_set_state_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_set_state_data_id_unpack(
    bcmolt_itupon_alloc_set_state_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_auto_cfg_data_id_pack(
    bcmolt_itupon_alloc_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_alloc_auto_cfg_data_id_unpack(
    bcmolt_itupon_alloc_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_gem_key_id_pack(
    bcmolt_itupon_gem_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_gem_key_id_unpack(
    bcmolt_itupon_gem_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_gem_cfg_data_id_pack(
    bcmolt_itupon_gem_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_gem_cfg_data_id_unpack(
    bcmolt_itupon_gem_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_gem_configuration_completed_data_id_pack(
    bcmolt_itupon_gem_configuration_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_gem_configuration_completed_data_id_unpack(
    bcmolt_itupon_gem_configuration_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_gem_set_state_data_id_pack(
    bcmolt_itupon_gem_set_state_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_gem_set_state_data_id_unpack(
    bcmolt_itupon_gem_set_state_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_itupon_gem_auto_cfg_data_id_pack(
    bcmolt_itupon_gem_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_itupon_gem_auto_cfg_data_id_unpack(
    bcmolt_itupon_gem_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_key_id_pack(
    bcmolt_lag_interface_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_key_id_unpack(
    bcmolt_lag_interface_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_cfg_data_id_pack(
    bcmolt_lag_interface_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_cfg_data_id_unpack(
    bcmolt_lag_interface_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_members_update_data_id_pack(
    bcmolt_lag_interface_members_update_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_members_update_data_id_unpack(
    bcmolt_lag_interface_members_update_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_complete_members_update_data_id_pack(
    bcmolt_lag_interface_complete_members_update_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_complete_members_update_data_id_unpack(
    bcmolt_lag_interface_complete_members_update_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_state_update_data_id_pack(
    bcmolt_lag_interface_state_update_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_state_update_data_id_unpack(
    bcmolt_lag_interface_state_update_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_state_updated_data_id_pack(
    bcmolt_lag_interface_state_updated_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_state_updated_data_id_unpack(
    bcmolt_lag_interface_state_updated_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_lag_health_change_data_id_pack(
    bcmolt_lag_interface_lag_health_change_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_lag_health_change_data_id_unpack(
    bcmolt_lag_interface_lag_health_change_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_lag_interface_auto_cfg_data_id_pack(
    bcmolt_lag_interface_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_lag_interface_auto_cfg_data_id_unpack(
    bcmolt_lag_interface_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_key_id_pack(
    bcmolt_log_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_key_id_unpack(
    bcmolt_log_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_cfg_data_id_pack(
    bcmolt_log_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_cfg_data_id_unpack(
    bcmolt_log_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_file_key_id_pack(
    bcmolt_log_file_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_file_key_id_unpack(
    bcmolt_log_file_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_log_file_cfg_data_id_pack(
    bcmolt_log_file_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_log_file_cfg_data_id_unpack(
    bcmolt_log_file_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ngpon2_channel_key_id_pack(
    bcmolt_ngpon2_channel_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ngpon2_channel_key_id_unpack(
    bcmolt_ngpon2_channel_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_ngpon2_channel_cfg_data_id_pack(
    bcmolt_ngpon2_channel_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_ngpon2_channel_cfg_data_id_unpack(
    bcmolt_ngpon2_channel_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_interface_key_id_pack(
    bcmolt_nni_interface_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_interface_key_id_unpack(
    bcmolt_nni_interface_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_interface_state_change_data_id_pack(
    bcmolt_nni_interface_state_change_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_interface_state_change_data_id_unpack(
    bcmolt_nni_interface_state_change_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_interface_cfg_data_id_pack(
    bcmolt_nni_interface_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_interface_cfg_data_id_unpack(
    bcmolt_nni_interface_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_interface_set_nni_state_data_id_pack(
    bcmolt_nni_interface_set_nni_state_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_interface_set_nni_state_data_id_unpack(
    bcmolt_nni_interface_set_nni_state_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_interface_link_state_change_data_id_pack(
    bcmolt_nni_interface_link_state_change_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_interface_link_state_change_data_id_unpack(
    bcmolt_nni_interface_link_state_change_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_nni_interface_auto_cfg_data_id_pack(
    bcmolt_nni_interface_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_nni_interface_auto_cfg_data_id_unpack(
    bcmolt_nni_interface_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_olt_key_id_pack(
    bcmolt_olt_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_olt_key_id_unpack(
    bcmolt_olt_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_olt_cfg_data_id_pack(
    bcmolt_olt_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_olt_cfg_data_id_unpack(
    bcmolt_olt_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_olt_disconnected_data_id_pack(
    bcmolt_olt_disconnected_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_olt_disconnected_data_id_unpack(
    bcmolt_olt_disconnected_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_olt_bal_failure_data_id_pack(
    bcmolt_olt_bal_failure_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_olt_bal_failure_data_id_unpack(
    bcmolt_olt_bal_failure_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_olt_sw_error_data_id_pack(
    bcmolt_olt_sw_error_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_olt_sw_error_data_id_unpack(
    bcmolt_olt_sw_error_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_olt_reset_data_id_pack(
    bcmolt_olt_reset_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_olt_reset_data_id_unpack(
    bcmolt_olt_reset_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_olt_auto_cfg_data_id_pack(
    bcmolt_olt_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_olt_auto_cfg_data_id_unpack(
    bcmolt_olt_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_key_id_pack(
    bcmolt_onu_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_key_id_unpack(
    bcmolt_onu_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_cfg_data_id_pack(
    bcmolt_onu_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_cfg_data_id_unpack(
    bcmolt_onu_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_set_onu_state_data_id_pack(
    bcmolt_onu_set_onu_state_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_set_onu_state_data_id_unpack(
    bcmolt_onu_set_onu_state_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_request_registration_data_id_pack(
    bcmolt_onu_request_registration_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_request_registration_data_id_unpack(
    bcmolt_onu_request_registration_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_change_power_levelling_data_id_pack(
    bcmolt_onu_change_power_levelling_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_change_power_levelling_data_id_unpack(
    bcmolt_onu_change_power_levelling_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_adjust_tx_wavelength_data_id_pack(
    bcmolt_onu_adjust_tx_wavelength_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_adjust_tx_wavelength_data_id_unpack(
    bcmolt_onu_adjust_tx_wavelength_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_secure_mutual_authentication_data_id_pack(
    bcmolt_onu_secure_mutual_authentication_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_secure_mutual_authentication_data_id_unpack(
    bcmolt_onu_secure_mutual_authentication_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_tuning_out_data_id_pack(
    bcmolt_onu_tuning_out_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_tuning_out_data_id_unpack(
    bcmolt_onu_tuning_out_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_xgpon_alarm_data_id_pack(
    bcmolt_onu_xgpon_alarm_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_xgpon_alarm_data_id_unpack(
    bcmolt_onu_xgpon_alarm_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_gpon_alarm_data_id_pack(
    bcmolt_onu_gpon_alarm_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_gpon_alarm_data_id_unpack(
    bcmolt_onu_gpon_alarm_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_dowi_data_id_pack(
    bcmolt_onu_dowi_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_dowi_data_id_unpack(
    bcmolt_onu_dowi_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_sfi_data_id_pack(
    bcmolt_onu_sfi_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_sfi_data_id_unpack(
    bcmolt_onu_sfi_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_sdi_data_id_pack(
    bcmolt_onu_sdi_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_sdi_data_id_unpack(
    bcmolt_onu_sdi_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_dfi_data_id_pack(
    bcmolt_onu_dfi_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_dfi_data_id_unpack(
    bcmolt_onu_dfi_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_pqsi_data_id_pack(
    bcmolt_onu_pqsi_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_pqsi_data_id_unpack(
    bcmolt_onu_pqsi_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_sufi_data_id_pack(
    bcmolt_onu_sufi_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_sufi_data_id_unpack(
    bcmolt_onu_sufi_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_tiwi_data_id_pack(
    bcmolt_onu_tiwi_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_tiwi_data_id_unpack(
    bcmolt_onu_tiwi_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_looci_data_id_pack(
    bcmolt_onu_looci_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_looci_data_id_unpack(
    bcmolt_onu_looci_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_loai_data_id_pack(
    bcmolt_onu_loai_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_loai_data_id_unpack(
    bcmolt_onu_loai_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_dgi_data_id_pack(
    bcmolt_onu_dgi_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_dgi_data_id_unpack(
    bcmolt_onu_dgi_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_pee_data_id_pack(
    bcmolt_onu_pee_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_pee_data_id_unpack(
    bcmolt_onu_pee_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_pst_data_id_pack(
    bcmolt_onu_pst_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_pst_data_id_unpack(
    bcmolt_onu_pst_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_ranging_completed_data_id_pack(
    bcmolt_onu_ranging_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_ranging_completed_data_id_unpack(
    bcmolt_onu_ranging_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_onu_activation_completed_data_id_pack(
    bcmolt_onu_onu_activation_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_onu_activation_completed_data_id_unpack(
    bcmolt_onu_onu_activation_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_onu_deactivation_completed_data_id_pack(
    bcmolt_onu_onu_deactivation_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_onu_deactivation_completed_data_id_unpack(
    bcmolt_onu_onu_deactivation_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_onu_enable_completed_data_id_pack(
    bcmolt_onu_onu_enable_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_onu_enable_completed_data_id_unpack(
    bcmolt_onu_onu_enable_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_onu_disable_completed_data_id_pack(
    bcmolt_onu_onu_disable_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_onu_disable_completed_data_id_unpack(
    bcmolt_onu_onu_disable_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_rssi_measurement_completed_data_id_pack(
    bcmolt_onu_rssi_measurement_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_rssi_measurement_completed_data_id_unpack(
    bcmolt_onu_rssi_measurement_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_invalid_dbru_report_data_id_pack(
    bcmolt_onu_invalid_dbru_report_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_invalid_dbru_report_data_id_unpack(
    bcmolt_onu_invalid_dbru_report_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_key_exchange_completed_data_id_pack(
    bcmolt_onu_key_exchange_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_key_exchange_completed_data_id_unpack(
    bcmolt_onu_key_exchange_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_key_exchange_key_mismatch_data_id_pack(
    bcmolt_onu_key_exchange_key_mismatch_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_key_exchange_key_mismatch_data_id_unpack(
    bcmolt_onu_key_exchange_key_mismatch_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_loki_data_id_pack(
    bcmolt_onu_loki_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_loki_data_id_unpack(
    bcmolt_onu_loki_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_memi_data_id_pack(
    bcmolt_onu_memi_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_memi_data_id_unpack(
    bcmolt_onu_memi_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_omci_port_id_configuration_completed_data_id_pack(
    bcmolt_onu_omci_port_id_configuration_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_omci_port_id_configuration_completed_data_id_unpack(
    bcmolt_onu_omci_port_id_configuration_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_ber_interval_configuration_completed_data_id_pack(
    bcmolt_onu_ber_interval_configuration_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_ber_interval_configuration_completed_data_id_unpack(
    bcmolt_onu_ber_interval_configuration_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_err_data_id_pack(
    bcmolt_onu_err_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_err_data_id_unpack(
    bcmolt_onu_err_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_password_authentication_completed_data_id_pack(
    bcmolt_onu_password_authentication_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_password_authentication_completed_data_id_unpack(
    bcmolt_onu_password_authentication_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_key_exchange_unconsecutive_index_data_id_pack(
    bcmolt_onu_key_exchange_unconsecutive_index_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_key_exchange_unconsecutive_index_data_id_unpack(
    bcmolt_onu_key_exchange_unconsecutive_index_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_key_exchange_decrypt_required_data_id_pack(
    bcmolt_onu_key_exchange_decrypt_required_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_key_exchange_decrypt_required_data_id_unpack(
    bcmolt_onu_key_exchange_decrypt_required_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_onu_activation_standby_completed_data_id_pack(
    bcmolt_onu_onu_activation_standby_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_onu_activation_standby_completed_data_id_unpack(
    bcmolt_onu_onu_activation_standby_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_power_management_state_change_data_id_pack(
    bcmolt_onu_power_management_state_change_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_power_management_state_change_data_id_unpack(
    bcmolt_onu_power_management_state_change_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_possible_drift_data_id_pack(
    bcmolt_onu_possible_drift_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_possible_drift_data_id_unpack(
    bcmolt_onu_possible_drift_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_registration_id_data_id_pack(
    bcmolt_onu_registration_id_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_registration_id_data_id_unpack(
    bcmolt_onu_registration_id_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_power_level_report_data_id_pack(
    bcmolt_onu_power_level_report_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_power_level_report_data_id_unpack(
    bcmolt_onu_power_level_report_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_power_consumption_report_data_id_pack(
    bcmolt_onu_power_consumption_report_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_power_consumption_report_data_id_unpack(
    bcmolt_onu_power_consumption_report_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_secure_mutual_authentication_failure_data_id_pack(
    bcmolt_onu_secure_mutual_authentication_failure_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_secure_mutual_authentication_failure_data_id_unpack(
    bcmolt_onu_secure_mutual_authentication_failure_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_onu_tuning_out_completed_data_id_pack(
    bcmolt_onu_onu_tuning_out_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_onu_tuning_out_completed_data_id_unpack(
    bcmolt_onu_onu_tuning_out_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_onu_tuning_in_completed_data_id_pack(
    bcmolt_onu_onu_tuning_in_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_onu_tuning_in_completed_data_id_unpack(
    bcmolt_onu_onu_tuning_in_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_tuning_response_data_id_pack(
    bcmolt_onu_tuning_response_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_tuning_response_data_id_unpack(
    bcmolt_onu_tuning_response_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_ploam_packet_data_id_pack(
    bcmolt_onu_ploam_packet_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_ploam_packet_data_id_unpack(
    bcmolt_onu_ploam_packet_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_cpu_packets_data_id_pack(
    bcmolt_onu_cpu_packets_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_cpu_packets_data_id_unpack(
    bcmolt_onu_cpu_packets_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_cpu_packet_data_id_pack(
    bcmolt_onu_cpu_packet_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_cpu_packet_data_id_unpack(
    bcmolt_onu_cpu_packet_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_omci_packet_data_id_pack(
    bcmolt_onu_omci_packet_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_omci_packet_data_id_unpack(
    bcmolt_onu_omci_packet_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_rei_data_id_pack(
    bcmolt_onu_rei_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_rei_data_id_unpack(
    bcmolt_onu_rei_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_state_change_data_id_pack(
    bcmolt_onu_state_change_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_state_change_data_id_unpack(
    bcmolt_onu_state_change_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_onu_auto_cfg_data_id_pack(
    bcmolt_onu_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_onu_auto_cfg_data_id_unpack(
    bcmolt_onu_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pbit_to_tc_key_id_pack(
    bcmolt_pbit_to_tc_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pbit_to_tc_key_id_unpack(
    bcmolt_pbit_to_tc_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pbit_to_tc_cfg_data_id_pack(
    bcmolt_pbit_to_tc_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pbit_to_tc_cfg_data_id_unpack(
    bcmolt_pbit_to_tc_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_policer_profile_key_id_pack(
    bcmolt_policer_profile_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_policer_profile_key_id_unpack(
    bcmolt_policer_profile_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_policer_profile_cfg_data_id_pack(
    bcmolt_policer_profile_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_policer_profile_cfg_data_id_unpack(
    bcmolt_policer_profile_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_key_id_pack(
    bcmolt_pon_interface_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_key_id_unpack(
    bcmolt_pon_interface_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_cfg_data_id_pack(
    bcmolt_pon_interface_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_cfg_data_id_unpack(
    bcmolt_pon_interface_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_set_pon_interface_state_data_id_pack(
    bcmolt_pon_interface_set_pon_interface_state_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_set_pon_interface_state_data_id_unpack(
    bcmolt_pon_interface_set_pon_interface_state_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_set_onu_state_data_id_pack(
    bcmolt_pon_interface_set_onu_state_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_set_onu_state_data_id_unpack(
    bcmolt_pon_interface_set_onu_state_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_disable_serial_number_data_id_pack(
    bcmolt_pon_interface_disable_serial_number_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_disable_serial_number_data_id_unpack(
    bcmolt_pon_interface_disable_serial_number_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_run_special_bw_map_data_id_pack(
    bcmolt_pon_interface_run_special_bw_map_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_run_special_bw_map_data_id_unpack(
    bcmolt_pon_interface_run_special_bw_map_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_start_onu_upgrade_data_id_pack(
    bcmolt_pon_interface_start_onu_upgrade_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_start_onu_upgrade_data_id_unpack(
    bcmolt_pon_interface_start_onu_upgrade_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id_pack(
    bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id_unpack(
    bcmolt_pon_interface_protection_switching_type_c_set_multiple_onu_state_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_protection_switching_apply_rerange_delta_data_id_pack(
    bcmolt_pon_interface_protection_switching_apply_rerange_delta_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_protection_switching_apply_rerange_delta_data_id_unpack(
    bcmolt_pon_interface_protection_switching_apply_rerange_delta_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_cpu_packets_data_id_pack(
    bcmolt_pon_interface_cpu_packets_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_cpu_packets_data_id_unpack(
    bcmolt_pon_interface_cpu_packets_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_broadcast_ploam_packet_data_id_pack(
    bcmolt_pon_interface_broadcast_ploam_packet_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_broadcast_ploam_packet_data_id_unpack(
    bcmolt_pon_interface_broadcast_ploam_packet_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_state_change_completed_data_id_pack(
    bcmolt_pon_interface_state_change_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_state_change_completed_data_id_unpack(
    bcmolt_pon_interface_state_change_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_tod_request_completed_data_id_pack(
    bcmolt_pon_interface_tod_request_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_tod_request_completed_data_id_unpack(
    bcmolt_pon_interface_tod_request_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_los_data_id_pack(
    bcmolt_pon_interface_los_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_los_data_id_unpack(
    bcmolt_pon_interface_los_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_protection_switching_traffic_resume_data_id_pack(
    bcmolt_pon_interface_protection_switching_traffic_resume_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_protection_switching_traffic_resume_data_id_unpack(
    bcmolt_pon_interface_protection_switching_traffic_resume_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_protection_switching_onus_ranged_data_id_pack(
    bcmolt_pon_interface_protection_switching_onus_ranged_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_protection_switching_onus_ranged_data_id_unpack(
    bcmolt_pon_interface_protection_switching_onus_ranged_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_protection_switching_switchover_completed_data_id_pack(
    bcmolt_pon_interface_protection_switching_switchover_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_protection_switching_switchover_completed_data_id_unpack(
    bcmolt_pon_interface_protection_switching_switchover_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id_pack(
    bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id_unpack(
    bcmolt_pon_interface_standby_pon_monitoring_cycle_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_onu_discovered_data_id_pack(
    bcmolt_pon_interface_onu_discovered_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_onu_discovered_data_id_unpack(
    bcmolt_pon_interface_onu_discovered_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_cpu_packets_failure_data_id_pack(
    bcmolt_pon_interface_cpu_packets_failure_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_cpu_packets_failure_data_id_unpack(
    bcmolt_pon_interface_cpu_packets_failure_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_onu_upgrade_complete_data_id_pack(
    bcmolt_pon_interface_onu_upgrade_complete_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_onu_upgrade_complete_data_id_unpack(
    bcmolt_pon_interface_onu_upgrade_complete_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_mpcp_timestamp_changed_data_id_pack(
    bcmolt_pon_interface_mpcp_timestamp_changed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_mpcp_timestamp_changed_data_id_unpack(
    bcmolt_pon_interface_mpcp_timestamp_changed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_pon_interface_auto_cfg_data_id_pack(
    bcmolt_pon_interface_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_pon_interface_auto_cfg_data_id_unpack(
    bcmolt_pon_interface_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_protection_interface_key_id_pack(
    bcmolt_protection_interface_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_protection_interface_key_id_unpack(
    bcmolt_protection_interface_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_protection_interface_cfg_data_id_pack(
    bcmolt_protection_interface_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_protection_interface_cfg_data_id_unpack(
    bcmolt_protection_interface_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_protection_interface_protection_switch_completed_data_id_pack(
    bcmolt_protection_interface_protection_switch_completed_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_protection_interface_protection_switch_completed_data_id_unpack(
    bcmolt_protection_interface_protection_switch_completed_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_protection_interface_auto_cfg_data_id_pack(
    bcmolt_protection_interface_auto_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_protection_interface_auto_cfg_data_id_unpack(
    bcmolt_protection_interface_auto_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_software_error_key_id_pack(
    bcmolt_software_error_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_software_error_key_id_unpack(
    bcmolt_software_error_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_software_error_cfg_data_id_pack(
    bcmolt_software_error_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_software_error_cfg_data_id_unpack(
    bcmolt_software_error_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_switch_inni_key_id_pack(
    bcmolt_switch_inni_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_switch_inni_key_id_unpack(
    bcmolt_switch_inni_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_switch_inni_cfg_data_id_pack(
    bcmolt_switch_inni_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_switch_inni_cfg_data_id_unpack(
    bcmolt_switch_inni_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tc_to_queue_key_id_pack(
    bcmolt_tc_to_queue_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tc_to_queue_key_id_unpack(
    bcmolt_tc_to_queue_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tc_to_queue_cfg_data_id_pack(
    bcmolt_tc_to_queue_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tc_to_queue_cfg_data_id_unpack(
    bcmolt_tc_to_queue_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_qmp_key_id_pack(
    bcmolt_tm_qmp_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_qmp_key_id_unpack(
    bcmolt_tm_qmp_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_qmp_cfg_data_id_pack(
    bcmolt_tm_qmp_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_qmp_cfg_data_id_unpack(
    bcmolt_tm_qmp_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_queue_key_id_pack(
    bcmolt_tm_queue_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_queue_key_id_unpack(
    bcmolt_tm_queue_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_queue_cfg_data_id_pack(
    bcmolt_tm_queue_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_queue_cfg_data_id_unpack(
    bcmolt_tm_queue_cfg_data_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_key_id_pack(
    bcmolt_tm_sched_key_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_key_id_unpack(
    bcmolt_tm_sched_key_id *obj,
    bcmolt_buf *buf);

/** Packs an enumeration to bytes for transmission on the wire.
  *
  * \param obj The enumeration to pack.
  * \param buf Pointer to the buffer to write to.
  * \return Whether or not the pack was successful.
  */
bcmos_bool bcmolt_tm_sched_cfg_data_id_pack(
    bcmolt_tm_sched_cfg_data_id obj,
    bcmolt_buf *buf);

/** Unpacks an enumeration from bytes as received on the wire.
  *
  * \param obj Pointer to the enumeration to unpack.
  * \param buf Pointer to the buffer to read from.
  * \return Whether or not the unpack was successful.
  */
bcmos_bool bcmolt_tm_sched_cfg_data_id_unpack(
    bcmolt_tm_sched_cfg_data_id *obj,
    bcmolt_buf *buf);



#endif
