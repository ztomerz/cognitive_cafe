// Auto-generated. Do not edit!

// (in-package pal_interaction_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class AudioPlayGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.file = null;
      this.priority = null;
    }
    else {
      if (initObj.hasOwnProperty('file')) {
        this.file = initObj.file
      }
      else {
        this.file = '';
      }
      if (initObj.hasOwnProperty('priority')) {
        this.priority = initObj.priority
      }
      else {
        this.priority = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type AudioPlayGoal
    // Serialize message field [file]
    bufferOffset = _serializer.string(obj.file, buffer, bufferOffset);
    // Serialize message field [priority]
    bufferOffset = _serializer.uint8(obj.priority, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type AudioPlayGoal
    let len;
    let data = new AudioPlayGoal(null);
    // Deserialize message field [file]
    data.file = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [priority]
    data.priority = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.file);
    return length + 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'pal_interaction_msgs/AudioPlayGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3a48af595bc7feef87c948737c48e4a6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    ##goal definition
    # absolute path to the file to be recognised.
    # Must be playable with aplay
    string file
    #Priority of the file play, 0 is lowest and 100 is highest priority
    #Lower priority goals might be rejected/aborted in presence of a higher priority
    uint8 priority
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new AudioPlayGoal(null);
    if (msg.file !== undefined) {
      resolved.file = msg.file;
    }
    else {
      resolved.file = ''
    }

    if (msg.priority !== undefined) {
      resolved.priority = msg.priority;
    }
    else {
      resolved.priority = 0
    }

    return resolved;
    }
};

module.exports = AudioPlayGoal;
