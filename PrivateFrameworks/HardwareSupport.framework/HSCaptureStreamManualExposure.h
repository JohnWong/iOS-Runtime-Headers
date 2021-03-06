/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

@interface HSCaptureStreamManualExposure : NSObject {
    NSNumber * _AGC;
    NSNumber * _exposureMilliseconds;
    NSMeasurement * _frameRate;
    NSNumber * _identifer;
    NSNumber * _ispDGain;
    NSNumber * _sensorDGain;
}

@property (nonatomic, retain) NSNumber *AGC;
@property (nonatomic, retain) NSNumber *exposureMilliseconds;
@property (nonatomic, retain) NSMeasurement *frameRate;
@property (nonatomic, retain) NSNumber *identifer;
@property (nonatomic, retain) NSNumber *ispDGain;
@property (nonatomic, retain) NSNumber *sensorDGain;

- (void).cxx_destruct;
- (id)AGC;
- (id)exposureMilliseconds;
- (id)frameRate;
- (id)identifer;
- (id)init;
- (id)initWithExposureMilliseconds:(id)arg1 sensorDGain:(id)arg2 ispDGain:(id)arg3 AGC:(id)arg4;
- (id)ispDGain;
- (id)sensorDGain;
- (void)setAGC:(id)arg1;
- (void)setExposureMilliseconds:(id)arg1;
- (void)setFrameRate:(id)arg1;
- (void)setIdentifer:(id)arg1;
- (void)setIspDGain:(id)arg1;
- (void)setSensorDGain:(id)arg1;

@end
