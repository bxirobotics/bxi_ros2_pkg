#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__msg__ActuatorCmds() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__msg__ActuatorCmds__init(msg: *mut ActuatorCmds) -> bool;
    fn communication__msg__ActuatorCmds__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorCmds>, size: usize) -> bool;
    fn communication__msg__ActuatorCmds__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorCmds>);
    fn communication__msg__ActuatorCmds__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorCmds>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorCmds>) -> bool;
}

// Corresponds to communication__msg__ActuatorCmds
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorCmds {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actuators_name: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for ActuatorCmds {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__msg__ActuatorCmds__init(&mut msg as *mut _) {
        panic!("Call to communication__msg__ActuatorCmds__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorCmds {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__ActuatorCmds__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__ActuatorCmds__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__ActuatorCmds__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorCmds {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorCmds where Self: Sized {
  const TYPE_NAME: &'static str = "communication/msg/ActuatorCmds";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__msg__ActuatorCmds() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__msg__ActuatorStates() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__msg__ActuatorStates__init(msg: *mut ActuatorStates) -> bool;
    fn communication__msg__ActuatorStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorStates>, size: usize) -> bool;
    fn communication__msg__ActuatorStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorStates>);
    fn communication__msg__ActuatorStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorStates>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorStates>) -> bool;
}

// Corresponds to communication__msg__ActuatorStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effort: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub driver_temperature: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_temperature: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for ActuatorStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__msg__ActuatorStates__init(&mut msg as *mut _) {
        panic!("Call to communication__msg__ActuatorStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__ActuatorStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__ActuatorStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__ActuatorStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorStates where Self: Sized {
  const TYPE_NAME: &'static str = "communication/msg/ActuatorStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__msg__ActuatorStates() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__msg__BatteryStates() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__msg__BatteryStates__init(msg: *mut BatteryStates) -> bool;
    fn communication__msg__BatteryStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BatteryStates>, size: usize) -> bool;
    fn communication__msg__BatteryStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BatteryStates>);
    fn communication__msg__BatteryStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BatteryStates>, out_seq: *mut rosidl_runtime_rs::Sequence<BatteryStates>) -> bool;
}

// Corresponds to communication__msg__BatteryStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub soc: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_temperature: f64,

}



impl Default for BatteryStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__msg__BatteryStates__init(&mut msg as *mut _) {
        panic!("Call to communication__msg__BatteryStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BatteryStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__BatteryStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__BatteryStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__BatteryStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BatteryStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BatteryStates where Self: Sized {
  const TYPE_NAME: &'static str = "communication/msg/BatteryStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__msg__BatteryStates() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__msg__MotionCommands() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__msg__MotionCommands__init(msg: *mut MotionCommands) -> bool;
    fn communication__msg__MotionCommands__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotionCommands>, size: usize) -> bool;
    fn communication__msg__MotionCommands__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotionCommands>);
    fn communication__msg__MotionCommands__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotionCommands>, out_seq: *mut rosidl_runtime_rs::Sequence<MotionCommands>) -> bool;
}

// Corresponds to communication__msg__MotionCommands
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionCommands {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel_des: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height_des: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yawdot_des: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_1: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_2: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_3: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_4: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_5: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_6: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_7: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_8: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_9: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_10: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_1: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_2: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_3: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_4: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_5: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_6: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_7: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_8: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_9: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axis_10: i32,

}



impl Default for MotionCommands {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__msg__MotionCommands__init(&mut msg as *mut _) {
        panic!("Call to communication__msg__MotionCommands__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotionCommands {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__MotionCommands__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__MotionCommands__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__MotionCommands__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotionCommands {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotionCommands where Self: Sized {
  const TYPE_NAME: &'static str = "communication/msg/MotionCommands";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__msg__MotionCommands() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__msg__TouchSensor() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__msg__TouchSensor__init(msg: *mut TouchSensor) -> bool;
    fn communication__msg__TouchSensor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TouchSensor>, size: usize) -> bool;
    fn communication__msg__TouchSensor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TouchSensor>);
    fn communication__msg__TouchSensor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TouchSensor>, out_seq: *mut rosidl_runtime_rs::Sequence<TouchSensor>) -> bool;
}

// Corresponds to communication__msg__TouchSensor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TouchSensor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for TouchSensor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__msg__TouchSensor__init(&mut msg as *mut _) {
        panic!("Call to communication__msg__TouchSensor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TouchSensor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__TouchSensor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__TouchSensor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__TouchSensor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TouchSensor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TouchSensor where Self: Sized {
  const TYPE_NAME: &'static str = "communication/msg/TouchSensor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__msg__TouchSensor() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__msg__StateEstimator() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__msg__StateEstimator__init(msg: *mut StateEstimator) -> bool;
    fn communication__msg__StateEstimator__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StateEstimator>, size: usize) -> bool;
    fn communication__msg__StateEstimator__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StateEstimator>);
    fn communication__msg__StateEstimator__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StateEstimator>, out_seq: *mut rosidl_runtime_rs::Sequence<StateEstimator>) -> bool;
}

// Corresponds to communication__msg__StateEstimator
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateEstimator {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qpos: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qvel: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for StateEstimator {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__msg__StateEstimator__init(&mut msg as *mut _) {
        panic!("Call to communication__msg__StateEstimator__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StateEstimator {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__StateEstimator__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__StateEstimator__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__StateEstimator__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StateEstimator {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StateEstimator where Self: Sized {
  const TYPE_NAME: &'static str = "communication/msg/StateEstimator";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__msg__StateEstimator() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__msg__CANFD() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__msg__CANFD__init(msg: *mut CANFD) -> bool;
    fn communication__msg__CANFD__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CANFD>, size: usize) -> bool;
    fn communication__msg__CANFD__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CANFD>);
    fn communication__msg__CANFD__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CANFD>, out_seq: *mut rosidl_runtime_rs::Sequence<CANFD>) -> bool;
}

// Corresponds to communication__msg__CANFD
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Mirrors linux/can.h struct canfd_frame.
/// canid_t can_id: low bits contain the 11-bit or 29-bit CAN ID, high bits
/// contain CAN_EFF_FLAG, CAN_RTR_FLAG, and CAN_ERR_FLAG.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CANFD {

    // This member is not documented.
    #[allow(missing_docs)]
    pub can_id: u32,

    /// Payload length in bytes, valid range: 0..64.
    pub len: u8,

    /// CAN FD flags: CANFD_BRS, CANFD_ESI, CANFD_FDF.
    pub flags: u8,

    /// Reserved fields matching struct canfd_frame layout.
    pub res0: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub res1: u8,

    /// Fixed-size payload buffer. Only data is valid.
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 64],

}



impl Default for CANFD {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__msg__CANFD__init(&mut msg as *mut _) {
        panic!("Call to communication__msg__CANFD__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CANFD {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__CANFD__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__CANFD__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__CANFD__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CANFD {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CANFD where Self: Sized {
  const TYPE_NAME: &'static str = "communication/msg/CANFD";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__msg__CANFD() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__msg__CANFDPacket() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__msg__CANFDPacket__init(msg: *mut CANFDPacket) -> bool;
    fn communication__msg__CANFDPacket__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CANFDPacket>, size: usize) -> bool;
    fn communication__msg__CANFDPacket__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CANFDPacket>);
    fn communication__msg__CANFDPacket__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CANFDPacket>, out_seq: *mut rosidl_runtime_rs::Sequence<CANFDPacket>) -> bool;
}

// Corresponds to communication__msg__CANFDPacket
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ROS wrapper for a CAN FD frame carried by a physical CAN bus.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CANFDPacket {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Physical CAN bus index.
    pub bus: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame: super::super::msg::rmw::CANFD,

}



impl Default for CANFDPacket {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__msg__CANFDPacket__init(&mut msg as *mut _) {
        panic!("Call to communication__msg__CANFDPacket__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CANFDPacket {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__CANFDPacket__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__CANFDPacket__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__msg__CANFDPacket__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CANFDPacket {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CANFDPacket where Self: Sized {
  const TYPE_NAME: &'static str = "communication/msg/CANFDPacket";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__msg__CANFDPacket() }
  }
}


