#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to communication__srv__SimulationReset_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulationReset_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_state: sensor_msgs::msg::JointState,

}



impl Default for SimulationReset_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SimulationReset_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SimulationReset_Request {
  type RmwMsg = super::srv::rmw::SimulationReset_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        base_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.base_pose)).into_owned(),
        joint_state: sensor_msgs::msg::JointState::into_rmw_message(std::borrow::Cow::Owned(msg.joint_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        base_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.base_pose)).into_owned(),
        joint_state: sensor_msgs::msg::JointState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.joint_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      base_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.base_pose),
      joint_state: sensor_msgs::msg::JointState::from_rmw_message(msg.joint_state),
    }
  }
}


// Corresponds to communication__srv__SimulationReset_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulationReset_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_success: bool,

}



impl Default for SimulationReset_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SimulationReset_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SimulationReset_Response {
  type RmwMsg = super::srv::rmw::SimulationReset_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_success: msg.is_success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_success: msg.is_success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_success: msg.is_success,
    }
  }
}


// Corresponds to communication__srv__GaitSwitch_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GaitSwitch_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gait_name: std::string::String,

}



impl Default for GaitSwitch_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GaitSwitch_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GaitSwitch_Request {
  type RmwMsg = super::srv::rmw::GaitSwitch_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        gait_name: msg.gait_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        gait_name: msg.gait_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      gait_name: msg.gait_name.to_string(),
    }
  }
}


// Corresponds to communication__srv__GaitSwitch_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GaitSwitch_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_success: bool,

}



impl Default for GaitSwitch_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GaitSwitch_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GaitSwitch_Response {
  type RmwMsg = super::srv::rmw::GaitSwitch_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_success: msg.is_success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_success: msg.is_success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_success: msg.is_success,
    }
  }
}


// Corresponds to communication__srv__RobotReset_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotReset_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reset_step: i32,

    /// only for simulation
    pub release: bool,

}



impl Default for RobotReset_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RobotReset_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RobotReset_Request {
  type RmwMsg = super::srv::rmw::RobotReset_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        reset_step: msg.reset_step,
        release: msg.release,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      reset_step: msg.reset_step,
      release: msg.release,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      reset_step: msg.reset_step,
      release: msg.release,
    }
  }
}


// Corresponds to communication__srv__RobotReset_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotReset_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_success: bool,

}



impl Default for RobotReset_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RobotReset_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RobotReset_Response {
  type RmwMsg = super::srv::rmw::RobotReset_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_success: msg.is_success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_success: msg.is_success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_success: msg.is_success,
    }
  }
}


// Corresponds to communication__srv__ApplyExternalWrench_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyExternalWrench_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: u8,

    /// Caller-provided identifier. APPLY replaces an existing command with the same
    /// identifier; CLEAR removes it. It is ignored by CLEAR_ALL.
    pub wrench_id: std::string::String,

    /// MuJoCo body name. Required by APPLY.
    pub body_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reference_frame: u8,

    /// If true, application_point is ignored and the wrench is applied at the body
    /// center of mass. Otherwise, the point is interpreted in reference_frame.
    pub at_center_of_mass: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub application_point: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wrench: geometry_msgs::msg::Wrench,

    /// A persistent wrench remains active until CLEAR, CLEAR_ALL, reset, or model
    /// reload. For a non-persistent wrench, zero duration means one simulation step.
    pub persistent: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration: builtin_interfaces::msg::Duration,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ApplyExternalWrench_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ApplyExternalWrench_Request {
  type RmwMsg = super::srv::rmw::ApplyExternalWrench_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        operation: msg.operation,
        wrench_id: msg.wrench_id.as_str().into(),
        body_name: msg.body_name.as_str().into(),
        reference_frame: msg.reference_frame,
        at_center_of_mass: msg.at_center_of_mass,
        application_point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.application_point)).into_owned(),
        wrench: geometry_msgs::msg::Wrench::into_rmw_message(std::borrow::Cow::Owned(msg.wrench)).into_owned(),
        persistent: msg.persistent,
        duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.duration)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      operation: msg.operation,
        wrench_id: msg.wrench_id.as_str().into(),
        body_name: msg.body_name.as_str().into(),
      reference_frame: msg.reference_frame,
      at_center_of_mass: msg.at_center_of_mass,
        application_point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.application_point)).into_owned(),
        wrench: geometry_msgs::msg::Wrench::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wrench)).into_owned(),
      persistent: msg.persistent,
        duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.duration)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      operation: msg.operation,
      wrench_id: msg.wrench_id.to_string(),
      body_name: msg.body_name.to_string(),
      reference_frame: msg.reference_frame,
      at_center_of_mass: msg.at_center_of_mass,
      application_point: geometry_msgs::msg::Point::from_rmw_message(msg.application_point),
      wrench: geometry_msgs::msg::Wrench::from_rmw_message(msg.wrench),
      persistent: msg.persistent,
      duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.duration),
    }
  }
}


// Corresponds to communication__srv__ApplyExternalWrench_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyExternalWrench_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ApplyExternalWrench_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ApplyExternalWrench_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ApplyExternalWrench_Response {
  type RmwMsg = super::srv::rmw::ApplyExternalWrench_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


