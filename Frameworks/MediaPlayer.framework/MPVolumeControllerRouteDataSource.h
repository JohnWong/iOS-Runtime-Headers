/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeControllerRouteDataSource : NSObject <MPVolumeControllerDataSource> {
    float  _EUVolumeLimit;
    <MPVolumeControllerDataSourceDelegate> * _delegate;
    MPAVRoute * _groupRoute;
    bool  _hasPendingVolume;
    bool  _hasVolumeInFlight;
    bool  _muted;
    MPAVRoute * _outputDeviceRoute;
    float  _pendingVolume;
    float  _volume;
    bool  _volumeControlAvailable;
    bool  _volumeWarningEnabled;
    long long  _volumeWarningState;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (nonatomic, readonly) bool applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPVolumeControllerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPAVRoute *groupRoute;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, retain) MPAVRoute *outputDeviceRoute;
@property (readonly) Class superclass;
@property (nonatomic) float volume;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (nonatomic, readonly, copy) NSString *volumeControlLabel;
@property (nonatomic, readonly) bool volumeWarningEnabled;
@property (nonatomic, readonly) long long volumeWarningState;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_pickedRouteVolumeControlAvailabilityChanged:(id)arg1;
- (void)_routeConnectionVolumeDidChangeNotification:(id)arg1;
- (void)_setPendingVolumeIfNeeded;
- (bool)applicationShouldOverrideHardwareVolumeBehavior;
- (void)dealloc;
- (id)delegate;
- (id)groupRoute;
- (id)initWithGroupRoute:(id)arg1 outputDeviceRoute:(id)arg2;
- (bool)isMuted;
- (bool)isVolumeControlAvailable;
- (id)outputDeviceRoute;
- (void)reload;
- (void)reloadWarning;
- (void)setDelegate:(id)arg1;
- (void)setGroupRoute:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setOutputDeviceRoute:(id)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (id)volumeControlLabel;
- (bool)volumeWarningEnabled;
- (long long)volumeWarningState;

@end