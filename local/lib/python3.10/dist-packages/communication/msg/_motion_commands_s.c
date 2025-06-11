// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from communication:msg/MotionCommands.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "communication/msg/detail/motion_commands__struct.h"
#include "communication/msg/detail/motion_commands__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool communication__msg__motion_commands__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("communication.msg._motion_commands.MotionCommands", full_classname_dest, 49) == 0);
  }
  communication__msg__MotionCommands * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vel_des
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_des");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->vel_des)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // height_des
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_des");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_des = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yawdot_des
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawdot_des");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yawdot_des = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btn_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btn_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btn_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btn_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_4 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btn_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_5 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btn_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_6 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btn_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_7 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btn_8
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_8 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btn_9
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_9");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_9 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // btn_10
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_10");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_10 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // axis_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->axis_1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // axis_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->axis_2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // axis_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->axis_3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // axis_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->axis_4 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // axis_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->axis_5 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // axis_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->axis_6 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // axis_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->axis_7 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // axis_8
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->axis_8 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // axis_9
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_9");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->axis_9 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // axis_10
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_10");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->axis_10 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * communication__msg__motion_commands__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotionCommands */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("communication.msg._motion_commands");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotionCommands");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  communication__msg__MotionCommands * ros_message = (communication__msg__MotionCommands *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_des
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->vel_des);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_des", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_des
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_des);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_des", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yawdot_des
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yawdot_des);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawdot_des", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btn_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btn_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btn_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btn_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_5
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btn_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_6
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btn_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_7
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btn_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_8
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btn_8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_9
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btn_9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_10
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->btn_10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->axis_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->axis_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->axis_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->axis_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_5
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->axis_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_6
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->axis_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_7
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->axis_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_8
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->axis_8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_9
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->axis_9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_10
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->axis_10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
