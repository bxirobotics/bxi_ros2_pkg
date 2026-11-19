#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__srv__SimulationReset_Request() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__srv__SimulationReset_Request__init(msg: *mut SimulationReset_Request) -> bool;
    fn communication__srv__SimulationReset_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulationReset_Request>, size: usize) -> bool;
    fn communication__srv__SimulationReset_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulationReset_Request>);
    fn communication__srv__SimulationReset_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulationReset_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulationReset_Request>) -> bool;
}

// Corresponds to communication__srv__SimulationReset_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulationReset_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_state: sensor_msgs::msg::rmw::JointState,

}



impl Default for SimulationReset_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__srv__SimulationReset_Request__init(&mut msg as *mut _) {
        panic!("Call to communication__srv__SimulationReset_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulationReset_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__SimulationReset_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__SimulationReset_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__SimulationReset_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulationReset_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulationReset_Request where Self: Sized {
  const TYPE_NAME: &'static str = "communication/srv/SimulationReset_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__srv__SimulationReset_Request() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__srv__SimulationReset_Response() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__srv__SimulationReset_Response__init(msg: *mut SimulationReset_Response) -> bool;
    fn communication__srv__SimulationReset_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulationReset_Response>, size: usize) -> bool;
    fn communication__srv__SimulationReset_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulationReset_Response>);
    fn communication__srv__SimulationReset_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulationReset_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulationReset_Response>) -> bool;
}

// Corresponds to communication__srv__SimulationReset_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulationReset_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_success: bool,

}



impl Default for SimulationReset_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__srv__SimulationReset_Response__init(&mut msg as *mut _) {
        panic!("Call to communication__srv__SimulationReset_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulationReset_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__SimulationReset_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__SimulationReset_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__SimulationReset_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulationReset_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulationReset_Response where Self: Sized {
  const TYPE_NAME: &'static str = "communication/srv/SimulationReset_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__srv__SimulationReset_Response() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__srv__GaitSwitch_Request() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__srv__GaitSwitch_Request__init(msg: *mut GaitSwitch_Request) -> bool;
    fn communication__srv__GaitSwitch_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GaitSwitch_Request>, size: usize) -> bool;
    fn communication__srv__GaitSwitch_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GaitSwitch_Request>);
    fn communication__srv__GaitSwitch_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GaitSwitch_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GaitSwitch_Request>) -> bool;
}

// Corresponds to communication__srv__GaitSwitch_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GaitSwitch_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gait_name: rosidl_runtime_rs::String,

}



impl Default for GaitSwitch_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__srv__GaitSwitch_Request__init(&mut msg as *mut _) {
        panic!("Call to communication__srv__GaitSwitch_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GaitSwitch_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__GaitSwitch_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__GaitSwitch_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__GaitSwitch_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GaitSwitch_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GaitSwitch_Request where Self: Sized {
  const TYPE_NAME: &'static str = "communication/srv/GaitSwitch_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__srv__GaitSwitch_Request() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__srv__GaitSwitch_Response() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__srv__GaitSwitch_Response__init(msg: *mut GaitSwitch_Response) -> bool;
    fn communication__srv__GaitSwitch_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GaitSwitch_Response>, size: usize) -> bool;
    fn communication__srv__GaitSwitch_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GaitSwitch_Response>);
    fn communication__srv__GaitSwitch_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GaitSwitch_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GaitSwitch_Response>) -> bool;
}

// Corresponds to communication__srv__GaitSwitch_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GaitSwitch_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_success: bool,

}



impl Default for GaitSwitch_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__srv__GaitSwitch_Response__init(&mut msg as *mut _) {
        panic!("Call to communication__srv__GaitSwitch_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GaitSwitch_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__GaitSwitch_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__GaitSwitch_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__GaitSwitch_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GaitSwitch_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GaitSwitch_Response where Self: Sized {
  const TYPE_NAME: &'static str = "communication/srv/GaitSwitch_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__srv__GaitSwitch_Response() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__srv__RobotReset_Request() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__srv__RobotReset_Request__init(msg: *mut RobotReset_Request) -> bool;
    fn communication__srv__RobotReset_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotReset_Request>, size: usize) -> bool;
    fn communication__srv__RobotReset_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotReset_Request>);
    fn communication__srv__RobotReset_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotReset_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotReset_Request>) -> bool;
}

// Corresponds to communication__srv__RobotReset_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotReset_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reset_step: i32,

    /// only for simulation
    pub release: bool,

}



impl Default for RobotReset_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__srv__RobotReset_Request__init(&mut msg as *mut _) {
        panic!("Call to communication__srv__RobotReset_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotReset_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__RobotReset_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__RobotReset_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__RobotReset_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotReset_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotReset_Request where Self: Sized {
  const TYPE_NAME: &'static str = "communication/srv/RobotReset_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__srv__RobotReset_Request() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__srv__RobotReset_Response() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__srv__RobotReset_Response__init(msg: *mut RobotReset_Response) -> bool;
    fn communication__srv__RobotReset_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotReset_Response>, size: usize) -> bool;
    fn communication__srv__RobotReset_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotReset_Response>);
    fn communication__srv__RobotReset_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotReset_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotReset_Response>) -> bool;
}

// Corresponds to communication__srv__RobotReset_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotReset_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_success: bool,

}



impl Default for RobotReset_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__srv__RobotReset_Response__init(&mut msg as *mut _) {
        panic!("Call to communication__srv__RobotReset_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotReset_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__RobotReset_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__RobotReset_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__RobotReset_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotReset_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotReset_Response where Self: Sized {
  const TYPE_NAME: &'static str = "communication/srv/RobotReset_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__srv__RobotReset_Response() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__srv__ApplyExternalWrench_Request() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__srv__ApplyExternalWrench_Request__init(msg: *mut ApplyExternalWrench_Request) -> bool;
    fn communication__srv__ApplyExternalWrench_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApplyExternalWrench_Request>, size: usize) -> bool;
    fn communication__srv__ApplyExternalWrench_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApplyExternalWrench_Request>);
    fn communication__srv__ApplyExternalWrench_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApplyExternalWrench_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ApplyExternalWrench_Request>) -> bool;
}

// Corresponds to communication__srv__ApplyExternalWrench_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyExternalWrench_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: u8,

    /// Caller-provided identifier. APPLY replaces an existing command with the same
    /// identifier; CLEAR removes it. It is ignored by CLEAR_ALL.
    pub wrench_id: rosidl_runtime_rs::String,

    /// MuJoCo body name. Required by APPLY.
    pub body_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reference_frame: u8,

    /// If true, application_point is ignored and the wrench is applied at the body
    /// center of mass. Otherwise, the point is interpreted in reference_frame.
    pub at_center_of_mass: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub application_point: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wrench: geometry_msgs::msg::rmw::Wrench,

    /// A persistent wrench remains active until CLEAR, CLEAR_ALL, reset, or model
    /// reload. For a non-persistent wrench, zero duration means one simulation step.
    pub persistent: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration: builtin_interfaces::msg::rmw::Duration,

}

impl ApplyExternalWrench_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const APPLY: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLEAR: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLEAR_ALL: u8 = 2;

    /// The frame in which wrench and application_point are expressed.
    pub const WORLD_FRAME: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BODY_FRAME: u8 = 1;

}


impl Default for ApplyExternalWrench_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__srv__ApplyExternalWrench_Request__init(&mut msg as *mut _) {
        panic!("Call to communication__srv__ApplyExternalWrench_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApplyExternalWrench_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__ApplyExternalWrench_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__ApplyExternalWrench_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__ApplyExternalWrench_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApplyExternalWrench_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApplyExternalWrench_Request where Self: Sized {
  const TYPE_NAME: &'static str = "communication/srv/ApplyExternalWrench_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__srv__ApplyExternalWrench_Request() }
  }
}


#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__communication__srv__ApplyExternalWrench_Response() -> *const std::ffi::c_void;
}

#[link(name = "communication__rosidl_generator_c")]
extern "C" {
    fn communication__srv__ApplyExternalWrench_Response__init(msg: *mut ApplyExternalWrench_Response) -> bool;
    fn communication__srv__ApplyExternalWrench_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApplyExternalWrench_Response>, size: usize) -> bool;
    fn communication__srv__ApplyExternalWrench_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApplyExternalWrench_Response>);
    fn communication__srv__ApplyExternalWrench_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApplyExternalWrench_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ApplyExternalWrench_Response>) -> bool;
}

// Corresponds to communication__srv__ApplyExternalWrench_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyExternalWrench_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ApplyExternalWrench_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !communication__srv__ApplyExternalWrench_Response__init(&mut msg as *mut _) {
        panic!("Call to communication__srv__ApplyExternalWrench_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApplyExternalWrench_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__ApplyExternalWrench_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__ApplyExternalWrench_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { communication__srv__ApplyExternalWrench_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApplyExternalWrench_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApplyExternalWrench_Response where Self: Sized {
  const TYPE_NAME: &'static str = "communication/srv/ApplyExternalWrench_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__communication__srv__ApplyExternalWrench_Response() }
  }
}






#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__communication__srv__SimulationReset() -> *const std::ffi::c_void;
}

// Corresponds to communication__srv__SimulationReset
#[allow(missing_docs, non_camel_case_types)]
pub struct SimulationReset;

impl rosidl_runtime_rs::Service for SimulationReset {
    type Request = SimulationReset_Request;
    type Response = SimulationReset_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__communication__srv__SimulationReset() }
    }
}




#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__communication__srv__GaitSwitch() -> *const std::ffi::c_void;
}

// Corresponds to communication__srv__GaitSwitch
#[allow(missing_docs, non_camel_case_types)]
pub struct GaitSwitch;

impl rosidl_runtime_rs::Service for GaitSwitch {
    type Request = GaitSwitch_Request;
    type Response = GaitSwitch_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__communication__srv__GaitSwitch() }
    }
}




#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__communication__srv__RobotReset() -> *const std::ffi::c_void;
}

// Corresponds to communication__srv__RobotReset
#[allow(missing_docs, non_camel_case_types)]
pub struct RobotReset;

impl rosidl_runtime_rs::Service for RobotReset {
    type Request = RobotReset_Request;
    type Response = RobotReset_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__communication__srv__RobotReset() }
    }
}




#[link(name = "communication__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__communication__srv__ApplyExternalWrench() -> *const std::ffi::c_void;
}

// Corresponds to communication__srv__ApplyExternalWrench
#[allow(missing_docs, non_camel_case_types)]
pub struct ApplyExternalWrench;

impl rosidl_runtime_rs::Service for ApplyExternalWrench {
    type Request = ApplyExternalWrench_Request;
    type Response = ApplyExternalWrench_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__communication__srv__ApplyExternalWrench() }
    }
}


