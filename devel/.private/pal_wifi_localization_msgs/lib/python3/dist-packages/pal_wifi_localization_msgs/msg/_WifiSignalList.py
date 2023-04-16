# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pal_wifi_localization_msgs/WifiSignalList.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import pal_wifi_localization_msgs.msg
import std_msgs.msg

class WifiSignalList(genpy.Message):
  _md5sum = "7e7cf55cfdfea3ed97058d9184eceb4c"
  _type = "pal_wifi_localization_msgs/WifiSignalList"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#list of wifi signal models learnt in a specific place

WifiSignal[] networks

time start_time
time end_time

================================================================================
MSG: pal_wifi_localization_msgs/WifiSignal
## Contains data relative to the learnt model of a wifi signal strenght in a specific location

# network id
std_msgs/String id

#Signal is represented through  a gaussian pdf.
#The signal strenght is measured in dB

float32  mean
float32  std_dev



================================================================================
MSG: std_msgs/String
string data
"""
  __slots__ = ['networks','start_time','end_time']
  _slot_types = ['pal_wifi_localization_msgs/WifiSignal[]','time','time']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       networks,start_time,end_time

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WifiSignalList, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.networks is None:
        self.networks = []
      if self.start_time is None:
        self.start_time = genpy.Time()
      if self.end_time is None:
        self.end_time = genpy.Time()
    else:
      self.networks = []
      self.start_time = genpy.Time()
      self.end_time = genpy.Time()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.networks)
      buff.write(_struct_I.pack(length))
      for val1 in self.networks:
        _v1 = val1.id
        _x = _v1.data
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_2f().pack(_x.mean, _x.std_dev))
      _x = self
      buff.write(_get_struct_4I().pack(_x.start_time.secs, _x.start_time.nsecs, _x.end_time.secs, _x.end_time.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.networks is None:
        self.networks = None
      if self.start_time is None:
        self.start_time = genpy.Time()
      if self.end_time is None:
        self.end_time = genpy.Time()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.networks = []
      for i in range(0, length):
        val1 = pal_wifi_localization_msgs.msg.WifiSignal()
        _v2 = val1.id
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v2.data = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v2.data = str[start:end]
        _x = val1
        start = end
        end += 8
        (_x.mean, _x.std_dev,) = _get_struct_2f().unpack(str[start:end])
        self.networks.append(val1)
      _x = self
      start = end
      end += 16
      (_x.start_time.secs, _x.start_time.nsecs, _x.end_time.secs, _x.end_time.nsecs,) = _get_struct_4I().unpack(str[start:end])
      self.start_time.canon()
      self.end_time.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.networks)
      buff.write(_struct_I.pack(length))
      for val1 in self.networks:
        _v3 = val1.id
        _x = _v3.data
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_2f().pack(_x.mean, _x.std_dev))
      _x = self
      buff.write(_get_struct_4I().pack(_x.start_time.secs, _x.start_time.nsecs, _x.end_time.secs, _x.end_time.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.networks is None:
        self.networks = None
      if self.start_time is None:
        self.start_time = genpy.Time()
      if self.end_time is None:
        self.end_time = genpy.Time()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.networks = []
      for i in range(0, length):
        val1 = pal_wifi_localization_msgs.msg.WifiSignal()
        _v4 = val1.id
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v4.data = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v4.data = str[start:end]
        _x = val1
        start = end
        end += 8
        (_x.mean, _x.std_dev,) = _get_struct_2f().unpack(str[start:end])
        self.networks.append(val1)
      _x = self
      start = end
      end += 16
      (_x.start_time.secs, _x.start_time.nsecs, _x.end_time.secs, _x.end_time.nsecs,) = _get_struct_4I().unpack(str[start:end])
      self.start_time.canon()
      self.end_time.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2f = None
def _get_struct_2f():
    global _struct_2f
    if _struct_2f is None:
        _struct_2f = struct.Struct("<2f")
    return _struct_2f
_struct_4I = None
def _get_struct_4I():
    global _struct_4I
    if _struct_4I is None:
        _struct_4I = struct.Struct("<4I")
    return _struct_4I
