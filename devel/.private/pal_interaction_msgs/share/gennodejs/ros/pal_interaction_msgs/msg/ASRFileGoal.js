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

class ASRFileGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.file = null;
      this.lang_id = null;
      this.grammar = null;
    }
    else {
      if (initObj.hasOwnProperty('file')) {
        this.file = initObj.file
      }
      else {
        this.file = '';
      }
      if (initObj.hasOwnProperty('lang_id')) {
        this.lang_id = initObj.lang_id
      }
      else {
        this.lang_id = '';
      }
      if (initObj.hasOwnProperty('grammar')) {
        this.grammar = initObj.grammar
      }
      else {
        this.grammar = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ASRFileGoal
    // Serialize message field [file]
    bufferOffset = _serializer.string(obj.file, buffer, bufferOffset);
    // Serialize message field [lang_id]
    bufferOffset = _serializer.string(obj.lang_id, buffer, bufferOffset);
    // Serialize message field [grammar]
    bufferOffset = _serializer.string(obj.grammar, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ASRFileGoal
    let len;
    let data = new ASRFileGoal(null);
    // Deserialize message field [file]
    data.file = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [lang_id]
    data.lang_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [grammar]
    data.grammar = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.file);
    length += _getByteLength(object.lang_id);
    length += _getByteLength(object.grammar);
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'pal_interaction_msgs/ASRFileGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '31bee1dbb9e7542a0b7c4085dead9edf';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    ##goal definition
    # absolute path to the file to be recognised.
    # format has to be PCM 16 bits signed integer
    string file
    # language id. (i.e., en_US, es_ES, ...)
    string lang_id
    # grammar name
    string grammar
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ASRFileGoal(null);
    if (msg.file !== undefined) {
      resolved.file = msg.file;
    }
    else {
      resolved.file = ''
    }

    if (msg.lang_id !== undefined) {
      resolved.lang_id = msg.lang_id;
    }
    else {
      resolved.lang_id = ''
    }

    if (msg.grammar !== undefined) {
      resolved.grammar = msg.grammar;
    }
    else {
      resolved.grammar = ''
    }

    return resolved;
    }
};

module.exports = ASRFileGoal;
