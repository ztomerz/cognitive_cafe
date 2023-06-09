// Auto-generated. Do not edit!

// (in-package pal_device_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let DoTimedLedEffectGoal = require('./DoTimedLedEffectGoal.js');
let std_msgs = _finder('std_msgs');
let actionlib_msgs = _finder('actionlib_msgs');

//-----------------------------------------------------------

class DoTimedLedEffectActionGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.goal_id = null;
      this.goal = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('goal_id')) {
        this.goal_id = initObj.goal_id
      }
      else {
        this.goal_id = new actionlib_msgs.msg.GoalID();
      }
      if (initObj.hasOwnProperty('goal')) {
        this.goal = initObj.goal
      }
      else {
        this.goal = new DoTimedLedEffectGoal();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DoTimedLedEffectActionGoal
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [goal_id]
    bufferOffset = actionlib_msgs.msg.GoalID.serialize(obj.goal_id, buffer, bufferOffset);
    // Serialize message field [goal]
    bufferOffset = DoTimedLedEffectGoal.serialize(obj.goal, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DoTimedLedEffectActionGoal
    let len;
    let data = new DoTimedLedEffectActionGoal(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [goal_id]
    data.goal_id = actionlib_msgs.msg.GoalID.deserialize(buffer, bufferOffset);
    // Deserialize message field [goal]
    data.goal = DoTimedLedEffectGoal.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += actionlib_msgs.msg.GoalID.getMessageSize(object.goal_id);
    length += DoTimedLedEffectGoal.getMessageSize(object.goal);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'pal_device_msgs/DoTimedLedEffectActionGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c967d8ff7a3d2fc9fa1fa55a3b65a68d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalID goal_id
    DoTimedLedEffectGoal goal
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: actionlib_msgs/GoalID
    # The stamp should store the time at which this goal was requested.
    # It is used by an action server when it tries to preempt all
    # goals that were requested before a certain time
    time stamp
    
    # The id provides a way to associate feedback and
    # result message with specific goal requests. The id
    # specified must be unique.
    string id
    
    
    ================================================================================
    MSG: pal_device_msgs/DoTimedLedEffectGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #uint16 because uint8 is char[] in Python
    uint32[] devices
    
    #Contains parameters for all led effects, but only the selected effect type parameters shall be provided
    LedEffectParams params
    #Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
    duration effectDuration
    
    #priority of the effect, 0 is no priority, 255 is max priority
    uint8 priority
    
    ================================================================================
    MSG: pal_device_msgs/LedEffectParams
    uint8 FIXED_COLOR=0
    uint8 RAINBOW=1
    uint8 FADE=2
    uint8 BLINK=3
    uint8 PROGRESS=4
    uint8 FLOW=5
    uint8 PREPROGRAMMED_EFFECT=6
    uint8 EFFECT_VIA_TOPIC=7
    uint8 DATA_ARRAY=8
    
    uint8 effectType
    
    # RGBA of color, alpha will be used as intensity if supported by the led
    pal_device_msgs/LedFixedColorParams fixed_color
    pal_device_msgs/LedRainbowParams rainbow
    pal_device_msgs/LedFadeParams fade
    pal_device_msgs/LedBlinkParams blink
    pal_device_msgs/LedProgressParams progress
    pal_device_msgs/LedFlowParams flow
    #Below are device specific, avoid them if you can
    pal_device_msgs/LedPreProgrammedParams preprogrammed
    pal_device_msgs/LedEffectViaTopicParams effect_via_topic
    pal_device_msgs/LedDataArrayParams data_array
    
    ================================================================================
    MSG: pal_device_msgs/LedFixedColorParams
    # RGBA of color, alpha will be used as intensity if supported by the led
    std_msgs/ColorRGBA color
    
    ================================================================================
    MSG: std_msgs/ColorRGBA
    float32 r
    float32 g
    float32 b
    float32 a
    
    ================================================================================
    MSG: pal_device_msgs/LedRainbowParams
    # Time to perform rainbow
    duration transition_duration
    
    ================================================================================
    MSG: pal_device_msgs/LedFadeParams
    # RGBA of color, alpha will be used as intensity if supported by the led
    std_msgs/ColorRGBA first_color
    std_msgs/ColorRGBA second_color
    
    #Duration of the transition from one color to the other
    duration transition_duration
    
    #Perform a fade when going from secondColor to firstColor
    bool reverse_fade
    
    
    ================================================================================
    MSG: pal_device_msgs/LedBlinkParams
    # RGBA of color, alpha will be used as intensity if supported by the led
    std_msgs/ColorRGBA first_color
    std_msgs/ColorRGBA second_color
    
    duration first_color_duration
    duration second_color_duration
    
    
    ================================================================================
    MSG: pal_device_msgs/LedProgressParams
    # RGBA of color, alpha will be used as intensity if supported by the led
    std_msgs/ColorRGBA first_color
    std_msgs/ColorRGBA second_color
    
    #Percentage of pixels painted with the first color
    float32 percentage
    #Offset to begin painting the first color
    float32 led_offset 
    
    
    ================================================================================
    MSG: pal_device_msgs/LedFlowParams
    # RGBA of color, alpha will be used as intensity if supported by the led
    std_msgs/ColorRGBA first_color
    std_msgs/ColorRGBA second_color
    
    # Percentage of pixels painted with the first color
    float32 percentage
    # Flow velocity
    float32 velocity
    
    
    ================================================================================
    MSG: pal_device_msgs/LedPreProgrammedParams
    #Id of pre-programmed effect, most likely device specific
    uint8 preprogrammed_id
    
    ================================================================================
    MSG: pal_device_msgs/LedEffectViaTopicParams
    #Topic name, must be of type pal_device_msgs/LedDataArray
    string topic_name
    
    ================================================================================
    MSG: pal_device_msgs/LedDataArrayParams
    #Data of the effect, each element in the array represents a led, 
    #length should match device led count
    #For devices with no RGB option, just the alpha channel will be used
    std_msgs/ColorRGBA[] data
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DoTimedLedEffectActionGoal(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.goal_id !== undefined) {
      resolved.goal_id = actionlib_msgs.msg.GoalID.Resolve(msg.goal_id)
    }
    else {
      resolved.goal_id = new actionlib_msgs.msg.GoalID()
    }

    if (msg.goal !== undefined) {
      resolved.goal = DoTimedLedEffectGoal.Resolve(msg.goal)
    }
    else {
      resolved.goal = new DoTimedLedEffectGoal()
    }

    return resolved;
    }
};

module.exports = DoTimedLedEffectActionGoal;
