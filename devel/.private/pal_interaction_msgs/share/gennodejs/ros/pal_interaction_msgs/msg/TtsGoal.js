// Auto-generated. Do not edit!

// (in-package pal_interaction_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let I18nText = require('./I18nText.js');
let TtsText = require('./TtsText.js');

//-----------------------------------------------------------

class TtsGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.text = null;
      this.rawtext = null;
      this.speakerName = null;
      this.wait_before_speaking = null;
    }
    else {
      if (initObj.hasOwnProperty('text')) {
        this.text = initObj.text
      }
      else {
        this.text = new I18nText();
      }
      if (initObj.hasOwnProperty('rawtext')) {
        this.rawtext = initObj.rawtext
      }
      else {
        this.rawtext = new TtsText();
      }
      if (initObj.hasOwnProperty('speakerName')) {
        this.speakerName = initObj.speakerName
      }
      else {
        this.speakerName = '';
      }
      if (initObj.hasOwnProperty('wait_before_speaking')) {
        this.wait_before_speaking = initObj.wait_before_speaking
      }
      else {
        this.wait_before_speaking = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TtsGoal
    // Serialize message field [text]
    bufferOffset = I18nText.serialize(obj.text, buffer, bufferOffset);
    // Serialize message field [rawtext]
    bufferOffset = TtsText.serialize(obj.rawtext, buffer, bufferOffset);
    // Serialize message field [speakerName]
    bufferOffset = _serializer.string(obj.speakerName, buffer, bufferOffset);
    // Serialize message field [wait_before_speaking]
    bufferOffset = _serializer.float64(obj.wait_before_speaking, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TtsGoal
    let len;
    let data = new TtsGoal(null);
    // Deserialize message field [text]
    data.text = I18nText.deserialize(buffer, bufferOffset);
    // Deserialize message field [rawtext]
    data.rawtext = TtsText.deserialize(buffer, bufferOffset);
    // Deserialize message field [speakerName]
    data.speakerName = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [wait_before_speaking]
    data.wait_before_speaking = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += I18nText.getMessageSize(object.text);
    length += TtsText.getMessageSize(object.rawtext);
    length += _getByteLength(object.speakerName);
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'pal_interaction_msgs/TtsGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9c88bf4a4d119474b8ae97c98892bc78';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    ## goal definition
    
    # utterance will contain indications to construct
    # the text to be spoken.
    # It must be specified in a section/key format 
    # for internationalisation. The actual text will
    # be obtained from configuration files as in pal_tts_cfg pkg.
     
    I18nText text
    TtsText rawtext
    
    # This is to suggest a voice name to the 
    # tts engine. For the same language we might have
    # a variety of voices available, and this variable 
    # is to choose one among them. 
    # (not implemented yet)
    string speakerName
    
    # Time to wait before synthesising the text itself.
    # It can be used to produced delayed speech.
    float64 wait_before_speaking
    
    
    ================================================================================
    MSG: pal_interaction_msgs/I18nText
    # section/key is used as in examples in the pal_tts_cfg pkg.
    string section
    string key
    
    # language id, must be speficied using RFC 3066
    string lang_id
    
    # arguments contain the values by which 
    # occurrences of '%s' will be replaced in the 
    # main text.
    # This only supports up to 2 arguments and no recursion.
    # However, recursion and more argumnents are
    # planned to be supported in the future.
    I18nArgument[] arguments
    
    ================================================================================
    MSG: pal_interaction_msgs/I18nArgument
    # section key, override the value in expanded.
    # Use expanded for text that do not need expansion.
    # Please note that expanded here will not be translated 
    # to any language.
    
    string section
    string key
    string expanded
    
    
    ================================================================================
    MSG: pal_interaction_msgs/TtsText
    # this message is to specify 
    # raw text to the TTS server. 
    
    string text
    
    # Language id in RFC 3066 format
    # This field is mandatory
    string lang_id
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TtsGoal(null);
    if (msg.text !== undefined) {
      resolved.text = I18nText.Resolve(msg.text)
    }
    else {
      resolved.text = new I18nText()
    }

    if (msg.rawtext !== undefined) {
      resolved.rawtext = TtsText.Resolve(msg.rawtext)
    }
    else {
      resolved.rawtext = new TtsText()
    }

    if (msg.speakerName !== undefined) {
      resolved.speakerName = msg.speakerName;
    }
    else {
      resolved.speakerName = ''
    }

    if (msg.wait_before_speaking !== undefined) {
      resolved.wait_before_speaking = msg.wait_before_speaking;
    }
    else {
      resolved.wait_before_speaking = 0.0
    }

    return resolved;
    }
};

module.exports = TtsGoal;
