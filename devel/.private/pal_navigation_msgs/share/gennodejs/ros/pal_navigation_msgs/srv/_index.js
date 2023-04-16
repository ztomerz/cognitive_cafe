
"use strict";

let Acknowledgment = require('./Acknowledgment.js')
let SetPOI = require('./SetPOI.js')
let GetMapConfiguration = require('./GetMapConfiguration.js')
let FinalApproachPose = require('./FinalApproachPose.js')
let RegisterSync = require('./RegisterSync.js')
let GetSubMap = require('./GetSubMap.js')
let DisableEmergency = require('./DisableEmergency.js')
let ListMaps = require('./ListMaps.js')
let GetNodes = require('./GetNodes.js')
let GetPOI = require('./GetPOI.js')
let SafetyZone = require('./SafetyZone.js')
let ChangeBuilding = require('./ChangeBuilding.js')
let RenameMap = require('./RenameMap.js')
let SaveMap = require('./SaveMap.js')
let ChangeMap = require('./ChangeMap.js')
let SetMapConfiguration = require('./SetMapConfiguration.js')
let VisualLocRecognize = require('./VisualLocRecognize.js')
let ChangeSyncMap = require('./ChangeSyncMap.js')
let SetSubMapFloor = require('./SetSubMapFloor.js')

module.exports = {
  Acknowledgment: Acknowledgment,
  SetPOI: SetPOI,
  GetMapConfiguration: GetMapConfiguration,
  FinalApproachPose: FinalApproachPose,
  RegisterSync: RegisterSync,
  GetSubMap: GetSubMap,
  DisableEmergency: DisableEmergency,
  ListMaps: ListMaps,
  GetNodes: GetNodes,
  GetPOI: GetPOI,
  SafetyZone: SafetyZone,
  ChangeBuilding: ChangeBuilding,
  RenameMap: RenameMap,
  SaveMap: SaveMap,
  ChangeMap: ChangeMap,
  SetMapConfiguration: SetMapConfiguration,
  VisualLocRecognize: VisualLocRecognize,
  ChangeSyncMap: ChangeSyncMap,
  SetSubMapFloor: SetSubMapFloor,
};
