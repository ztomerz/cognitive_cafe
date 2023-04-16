// Auto-generated. Do not edit!

// (in-package pal_behaviour_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let BehaviourArgument = require('./BehaviourArgument.js');

//-----------------------------------------------------------

class BehaviourTaskGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.taskName = null;
      this.arguments = null;
    }
    else {
      if (initObj.hasOwnProperty('taskName')) {
        this.taskName = initObj.taskName
      }
      else {
        this.taskName = '';
      }
      if (initObj.hasOwnProperty('arguments')) {
        this.arguments = initObj.arguments
      }
      else {
        this.arguments = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type BehaviourTaskGoal
    // Serialize message field [taskName]
    bufferOffset = _serializer.string(obj.taskName, buffer, bufferOffset);
    // Serialize message field [arguments]
    // Serialize the length for message field [arguments]
    bufferOffset = _serializer.uint32(obj.arguments.length, buffer, bufferOffset);
    obj.arguments.forEach((val) => {
      bufferOffset = BehaviourArgument.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type BehaviourTaskGoal
    let len;
    let data = new BehaviourTaskGoal(null);
    // Deserialize message field [taskName]
    data.taskName = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [arguments]
    // Deserialize array length for message field [arguments]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.arguments = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.arguments[i] = BehaviourArgument.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.taskName);
    object.arguments.forEach((val) => {
      length += BehaviourArgument.getMessageSize(val);
    });
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'pal_behaviour_msgs/BehaviourTaskGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'f29a8a8019064c8a1f3f3dbe3effeb54';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Example usage in axclient:
    #   taskName: 'presentation'
    #   arguments: [{key: 'path', 
    #   value: 'interaction/touchscreen/presentations/autoPresentation.presentation'}]
    #
    string taskName
    pal_behaviour_msgs/BehaviourArgument[] arguments
    
    ================================================================================
    MSG: pal_behaviour_msgs/BehaviourArgument
    ## SMC event
    
    #Header header
    
    string           key
    string           value
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new BehaviourTaskGoal(null);
    if (msg.taskName !== undefined) {
      resolved.taskName = msg.taskName;
    }
    else {
      resolved.taskName = ''
    }

    if (msg.arguments !== undefined) {
      resolved.arguments = new Array(msg.arguments.length);
      for (let i = 0; i < resolved.arguments.length; ++i) {
        resolved.arguments[i] = BehaviourArgument.Resolve(msg.arguments[i]);
      }
    }
    else {
      resolved.arguments = []
    }

    return resolved;
    }
};

module.exports = BehaviourTaskGoal;
