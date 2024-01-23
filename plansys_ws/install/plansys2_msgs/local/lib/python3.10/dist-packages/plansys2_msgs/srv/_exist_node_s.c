// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from plansys2_msgs:srv/ExistNode.idl
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
#include "plansys2_msgs/srv/detail/exist_node__struct.h"
#include "plansys2_msgs/srv/detail/exist_node__functions.h"

bool plansys2_msgs__msg__node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * plansys2_msgs__msg__node__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool plansys2_msgs__srv__exist_node__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("plansys2_msgs.srv._exist_node.ExistNode_Request", full_classname_dest, 47) == 0);
  }
  plansys2_msgs__srv__ExistNode_Request * ros_message = _ros_message;
  {  // node
    PyObject * field = PyObject_GetAttrString(_pymsg, "node");
    if (!field) {
      return false;
    }
    if (!plansys2_msgs__msg__node__convert_from_py(field, &ros_message->node)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * plansys2_msgs__srv__exist_node__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExistNode_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("plansys2_msgs.srv._exist_node");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExistNode_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  plansys2_msgs__srv__ExistNode_Request * ros_message = (plansys2_msgs__srv__ExistNode_Request *)raw_ros_message;
  {  // node
    PyObject * field = NULL;
    field = plansys2_msgs__msg__node__convert_to_py(&ros_message->node);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "plansys2_msgs/srv/detail/exist_node__struct.h"
// already included above
// #include "plansys2_msgs/srv/detail/exist_node__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool plansys2_msgs__srv__exist_node__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("plansys2_msgs.srv._exist_node.ExistNode_Response", full_classname_dest, 48) == 0);
  }
  plansys2_msgs__srv__ExistNode_Response * ros_message = _ros_message;
  {  // exist
    PyObject * field = PyObject_GetAttrString(_pymsg, "exist");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->exist = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * plansys2_msgs__srv__exist_node__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExistNode_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("plansys2_msgs.srv._exist_node");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExistNode_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  plansys2_msgs__srv__ExistNode_Response * ros_message = (plansys2_msgs__srv__ExistNode_Response *)raw_ros_message;
  {  // exist
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->exist ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
