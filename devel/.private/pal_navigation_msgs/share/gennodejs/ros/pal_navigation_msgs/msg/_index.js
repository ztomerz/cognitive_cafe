
"use strict";

let GoToPOIFeedback = require('./GoToPOIFeedback.js');
let ExecuteParkingAction = require('./ExecuteParkingAction.js');
let VisualTrainingFeedback = require('./VisualTrainingFeedback.js');
let GoToPOIActionResult = require('./GoToPOIActionResult.js');
let JoyTurboAction = require('./JoyTurboAction.js');
let ExecuteParkingGoal = require('./ExecuteParkingGoal.js');
let GoToActionFeedback = require('./GoToActionFeedback.js');
let JoyTurboActionGoal = require('./JoyTurboActionGoal.js');
let GoToPOIResult = require('./GoToPOIResult.js');
let ExecuteParkingActionGoal = require('./ExecuteParkingActionGoal.js');
let VisualTrainingActionGoal = require('./VisualTrainingActionGoal.js');
let GoToPOIActionGoal = require('./GoToPOIActionGoal.js');
let GoToPOIAction = require('./GoToPOIAction.js');
let ExecuteParkingResult = require('./ExecuteParkingResult.js');
let JoyPriorityActionResult = require('./JoyPriorityActionResult.js');
let JoyTurboActionResult = require('./JoyTurboActionResult.js');
let GoToAction = require('./GoToAction.js');
let GoToFeedback = require('./GoToFeedback.js');
let ExecuteParkingFeedback = require('./ExecuteParkingFeedback.js');
let JoyPriorityGoal = require('./JoyPriorityGoal.js');
let GoToPOIGoal = require('./GoToPOIGoal.js');
let VisualTrainingActionResult = require('./VisualTrainingActionResult.js');
let JoyTurboGoal = require('./JoyTurboGoal.js');
let ExecuteParkingActionFeedback = require('./ExecuteParkingActionFeedback.js');
let GoToGoal = require('./GoToGoal.js');
let GoToPOIActionFeedback = require('./GoToPOIActionFeedback.js');
let VisualTrainingResult = require('./VisualTrainingResult.js');
let JoyPriorityResult = require('./JoyPriorityResult.js');
let JoyPriorityActionGoal = require('./JoyPriorityActionGoal.js');
let ExecuteParkingActionResult = require('./ExecuteParkingActionResult.js');
let JoyTurboFeedback = require('./JoyTurboFeedback.js');
let GoToActionGoal = require('./GoToActionGoal.js');
let JoyPriorityAction = require('./JoyPriorityAction.js');
let JoyTurboActionFeedback = require('./JoyTurboActionFeedback.js');
let JoyPriorityFeedback = require('./JoyPriorityFeedback.js');
let VisualTrainingGoal = require('./VisualTrainingGoal.js');
let VisualTrainingActionFeedback = require('./VisualTrainingActionFeedback.js');
let JoyTurboResult = require('./JoyTurboResult.js');
let GoToResult = require('./GoToResult.js');
let GoToActionResult = require('./GoToActionResult.js');
let VisualTrainingAction = require('./VisualTrainingAction.js');
let JoyPriorityActionFeedback = require('./JoyPriorityActionFeedback.js');
let POI = require('./POI.js');
let LaserImage = require('./LaserImage.js');
let Highways = require('./Highways.js');
let EulerAngles = require('./EulerAngles.js');
let VisualLocDB = require('./VisualLocDB.js');
let AvailableMaps = require('./AvailableMaps.js');
let PolarReading = require('./PolarReading.js');
let POIGroup = require('./POIGroup.js');
let ServiceStatus = require('./ServiceStatus.js');
let PolarReadingScan = require('./PolarReadingScan.js');
let Emergency = require('./Emergency.js');
let NavigationStatus = require('./NavigationStatus.js');
let TabletPOI = require('./TabletPOI.js');
let NiceMapTransformation = require('./NiceMapTransformation.js');
let MapConfiguration = require('./MapConfiguration.js');
let EulerAnglesStamped = require('./EulerAnglesStamped.js');

module.exports = {
  GoToPOIFeedback: GoToPOIFeedback,
  ExecuteParkingAction: ExecuteParkingAction,
  VisualTrainingFeedback: VisualTrainingFeedback,
  GoToPOIActionResult: GoToPOIActionResult,
  JoyTurboAction: JoyTurboAction,
  ExecuteParkingGoal: ExecuteParkingGoal,
  GoToActionFeedback: GoToActionFeedback,
  JoyTurboActionGoal: JoyTurboActionGoal,
  GoToPOIResult: GoToPOIResult,
  ExecuteParkingActionGoal: ExecuteParkingActionGoal,
  VisualTrainingActionGoal: VisualTrainingActionGoal,
  GoToPOIActionGoal: GoToPOIActionGoal,
  GoToPOIAction: GoToPOIAction,
  ExecuteParkingResult: ExecuteParkingResult,
  JoyPriorityActionResult: JoyPriorityActionResult,
  JoyTurboActionResult: JoyTurboActionResult,
  GoToAction: GoToAction,
  GoToFeedback: GoToFeedback,
  ExecuteParkingFeedback: ExecuteParkingFeedback,
  JoyPriorityGoal: JoyPriorityGoal,
  GoToPOIGoal: GoToPOIGoal,
  VisualTrainingActionResult: VisualTrainingActionResult,
  JoyTurboGoal: JoyTurboGoal,
  ExecuteParkingActionFeedback: ExecuteParkingActionFeedback,
  GoToGoal: GoToGoal,
  GoToPOIActionFeedback: GoToPOIActionFeedback,
  VisualTrainingResult: VisualTrainingResult,
  JoyPriorityResult: JoyPriorityResult,
  JoyPriorityActionGoal: JoyPriorityActionGoal,
  ExecuteParkingActionResult: ExecuteParkingActionResult,
  JoyTurboFeedback: JoyTurboFeedback,
  GoToActionGoal: GoToActionGoal,
  JoyPriorityAction: JoyPriorityAction,
  JoyTurboActionFeedback: JoyTurboActionFeedback,
  JoyPriorityFeedback: JoyPriorityFeedback,
  VisualTrainingGoal: VisualTrainingGoal,
  VisualTrainingActionFeedback: VisualTrainingActionFeedback,
  JoyTurboResult: JoyTurboResult,
  GoToResult: GoToResult,
  GoToActionResult: GoToActionResult,
  VisualTrainingAction: VisualTrainingAction,
  JoyPriorityActionFeedback: JoyPriorityActionFeedback,
  POI: POI,
  LaserImage: LaserImage,
  Highways: Highways,
  EulerAngles: EulerAngles,
  VisualLocDB: VisualLocDB,
  AvailableMaps: AvailableMaps,
  PolarReading: PolarReading,
  POIGroup: POIGroup,
  ServiceStatus: ServiceStatus,
  PolarReadingScan: PolarReadingScan,
  Emergency: Emergency,
  NavigationStatus: NavigationStatus,
  TabletPOI: TabletPOI,
  NiceMapTransformation: NiceMapTransformation,
  MapConfiguration: MapConfiguration,
  EulerAnglesStamped: EulerAnglesStamped,
};
