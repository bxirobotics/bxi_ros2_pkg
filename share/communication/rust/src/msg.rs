#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to communication__msg__ActuatorCmds

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorCmds {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actuators_name: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque: Vec<f32>,

}



impl Default for ActuatorCmds {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActuatorCmds::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorCmds {
  type RmwMsg = super::msg::rmw::ActuatorCmds;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        actuators_name: msg.actuators_name
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        kp: msg.kp.into(),
        pos: msg.pos.into(),
        kd: msg.kd.into(),
        vel: msg.vel.into(),
        torque: msg.torque.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        actuators_name: msg.actuators_name
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        kp: msg.kp.as_slice().into(),
        pos: msg.pos.as_slice().into(),
        kd: msg.kd.as_slice().into(),
        vel: msg.vel.as_slice().into(),
        torque: msg.torque.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      actuators_name: msg.actuators_name
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      kp: msg.kp
          .into_iter()
          .collect(),
      pos: msg.pos
          .into_iter()
          .collect(),
      kd: msg.kd
          .into_iter()
          .collect(),
      vel: msg.vel
          .into_iter()
          .collect(),
      torque: msg.torque
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to communication__msg__ActuatorStates

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effort: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub driver_temperature: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_temperature: Vec<f64>,

}



impl Default for ActuatorStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActuatorStates::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorStates {
  type RmwMsg = super::msg::rmw::ActuatorStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        name: msg.name
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        position: msg.position.into(),
        velocity: msg.velocity.into(),
        effort: msg.effort.into(),
        driver_temperature: msg.driver_temperature.into(),
        motor_temperature: msg.motor_temperature.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        name: msg.name
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        position: msg.position.as_slice().into(),
        velocity: msg.velocity.as_slice().into(),
        effort: msg.effort.as_slice().into(),
        driver_temperature: msg.driver_temperature.as_slice().into(),
        motor_temperature: msg.motor_temperature.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      name: msg.name
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      position: msg.position
          .into_iter()
          .collect(),
      velocity: msg.velocity
          .into_iter()
          .collect(),
      effort: msg.effort
          .into_iter()
          .collect(),
      driver_temperature: msg.driver_temperature
          .into_iter()
          .collect(),
      motor_temperature: msg.motor_temperature
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to communication__msg__BatteryStates

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BatteryStates::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryStates {
  type RmwMsg = super::msg::rmw::BatteryStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        name: msg.name.as_str().into(),
        voltage: msg.voltage,
        current: msg.current,
        soc: msg.soc,
        battery_temperature: msg.battery_temperature,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        name: msg.name.as_str().into(),
      voltage: msg.voltage,
      current: msg.current,
      soc: msg.soc,
      battery_temperature: msg.battery_temperature,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      name: msg.name.to_string(),
      voltage: msg.voltage,
      current: msg.current,
      soc: msg.soc,
      battery_temperature: msg.battery_temperature,
    }
  }
}


// Corresponds to communication__msg__MotionCommands

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionCommands {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel_des: geometry_msgs::msg::Vector3,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotionCommands::default())
  }
}

impl rosidl_runtime_rs::Message for MotionCommands {
  type RmwMsg = super::msg::rmw::MotionCommands;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vel_des: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.vel_des)).into_owned(),
        height_des: msg.height_des,
        yawdot_des: msg.yawdot_des,
        mode: msg.mode,
        btn_1: msg.btn_1,
        btn_2: msg.btn_2,
        btn_3: msg.btn_3,
        btn_4: msg.btn_4,
        btn_5: msg.btn_5,
        btn_6: msg.btn_6,
        btn_7: msg.btn_7,
        btn_8: msg.btn_8,
        btn_9: msg.btn_9,
        btn_10: msg.btn_10,
        axis_1: msg.axis_1,
        axis_2: msg.axis_2,
        axis_3: msg.axis_3,
        axis_4: msg.axis_4,
        axis_5: msg.axis_5,
        axis_6: msg.axis_6,
        axis_7: msg.axis_7,
        axis_8: msg.axis_8,
        axis_9: msg.axis_9,
        axis_10: msg.axis_10,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        vel_des: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.vel_des)).into_owned(),
      height_des: msg.height_des,
      yawdot_des: msg.yawdot_des,
      mode: msg.mode,
      btn_1: msg.btn_1,
      btn_2: msg.btn_2,
      btn_3: msg.btn_3,
      btn_4: msg.btn_4,
      btn_5: msg.btn_5,
      btn_6: msg.btn_6,
      btn_7: msg.btn_7,
      btn_8: msg.btn_8,
      btn_9: msg.btn_9,
      btn_10: msg.btn_10,
      axis_1: msg.axis_1,
      axis_2: msg.axis_2,
      axis_3: msg.axis_3,
      axis_4: msg.axis_4,
      axis_5: msg.axis_5,
      axis_6: msg.axis_6,
      axis_7: msg.axis_7,
      axis_8: msg.axis_8,
      axis_9: msg.axis_9,
      axis_10: msg.axis_10,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vel_des: geometry_msgs::msg::Vector3::from_rmw_message(msg.vel_des),
      height_des: msg.height_des,
      yawdot_des: msg.yawdot_des,
      mode: msg.mode,
      btn_1: msg.btn_1,
      btn_2: msg.btn_2,
      btn_3: msg.btn_3,
      btn_4: msg.btn_4,
      btn_5: msg.btn_5,
      btn_6: msg.btn_6,
      btn_7: msg.btn_7,
      btn_8: msg.btn_8,
      btn_9: msg.btn_9,
      btn_10: msg.btn_10,
      axis_1: msg.axis_1,
      axis_2: msg.axis_2,
      axis_3: msg.axis_3,
      axis_4: msg.axis_4,
      axis_5: msg.axis_5,
      axis_6: msg.axis_6,
      axis_7: msg.axis_7,
      axis_8: msg.axis_8,
      axis_9: msg.axis_9,
      axis_10: msg.axis_10,
    }
  }
}


// Corresponds to communication__msg__TouchSensor

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TouchSensor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: Vec<f32>,

}



impl Default for TouchSensor {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TouchSensor::default())
  }
}

impl rosidl_runtime_rs::Message for TouchSensor {
  type RmwMsg = super::msg::rmw::TouchSensor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        value: msg.value.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        value: msg.value.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      value: msg.value
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to communication__msg__StateEstimator

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateEstimator {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qpos: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qvel: Vec<f32>,

}



impl Default for StateEstimator {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StateEstimator::default())
  }
}

impl rosidl_runtime_rs::Message for StateEstimator {
  type RmwMsg = super::msg::rmw::StateEstimator;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        qpos: msg.qpos.into(),
        qvel: msg.qvel.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        qpos: msg.qpos.as_slice().into(),
        qvel: msg.qvel.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      qpos: msg.qpos
          .into_iter()
          .collect(),
      qvel: msg.qvel
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to communication__msg__CANFD
/// Mirrors linux/can.h struct canfd_frame.
/// canid_t can_id: low bits contain the 11-bit or 29-bit CAN ID, high bits
/// contain CAN_EFF_FLAG, CAN_RTR_FLAG, and CAN_ERR_FLAG.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CANFD::default())
  }
}

impl rosidl_runtime_rs::Message for CANFD {
  type RmwMsg = super::msg::rmw::CANFD;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        can_id: msg.can_id,
        len: msg.len,
        flags: msg.flags,
        res0: msg.res0,
        res1: msg.res1,
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      can_id: msg.can_id,
      len: msg.len,
      flags: msg.flags,
      res0: msg.res0,
      res1: msg.res1,
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      can_id: msg.can_id,
      len: msg.len,
      flags: msg.flags,
      res0: msg.res0,
      res1: msg.res1,
      data: msg.data,
    }
  }
}


// Corresponds to communication__msg__CANFDPacket
/// ROS wrapper for a CAN FD frame carried by a physical CAN bus.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CANFDPacket {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Physical CAN bus index.
    pub bus: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame: super::msg::CANFD,

}



impl Default for CANFDPacket {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CANFDPacket::default())
  }
}

impl rosidl_runtime_rs::Message for CANFDPacket {
  type RmwMsg = super::msg::rmw::CANFDPacket;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bus: msg.bus,
        frame: super::msg::CANFD::into_rmw_message(std::borrow::Cow::Owned(msg.frame)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bus: msg.bus,
        frame: super::msg::CANFD::into_rmw_message(std::borrow::Cow::Borrowed(&msg.frame)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bus: msg.bus,
      frame: super::msg::CANFD::from_rmw_message(msg.frame),
    }
  }
}


