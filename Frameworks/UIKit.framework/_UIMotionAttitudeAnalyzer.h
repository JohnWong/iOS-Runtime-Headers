/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionAttitudeAnalyzer : _UIMotionAnalyzer <_UISettingsKeyObserver> {
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    }  _absoluteQuaternion;
    UIWindow * _diagnosticsWindow;
    double  _distanceMultiplier;
    bool  _hasHistory;
    bool  _hasReferenceQuaternion;
    UIView * _horizontalLockIndicator;
    UILabel * _idleIndicator;
    double  _idleLeeway;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _idleStartOffset;
    double  _idleStartTime;
    bool  _isApplyingHysteresis;
    double  _jumpThreshold;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    }  _lastAppliedRelativeQuaternion;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _lastAppliedViewerOffset;
    double  _lastUpdate;
    double  _lockStrength;
    double  _lockValue;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    }  _referenceQuaternion;
    double  _referenceShiftSpeed;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    }  _relativeQuaternionOnHysteresisEntry;
    double  _secondsBeforeIdle;
    double  _smoothingDegree;
    UIView * _verticalLockIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createDiagnosticsWindow;
- (void)_createDirectionLockIndicators;
- (void)_createIdleIndicator;
- (struct UIOffset { double x1; double x2; })_currentRawOffset:(union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })arg1;
- (long long)_directionLockStatus;
- (double)_directionLockStrength;
- (bool)_isIdleGivenTimestamp:(double)arg1;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })_relativeQuaternion;
- (void)_resetDirectionalLockWithViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })arg1;
- (bool)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(struct UIOffset { double x1; double x2; })arg1 wasSuspendingApplicationForHysteresis:(bool)arg2;
- (void)_showIdleUI:(bool)arg1;
- (void)_tearDownDiagnosticsWindow;
- (void)_tearDownDirectionLockIndicators;
- (void)_tearDownIdleIndicator;
- (void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_updateDirectionalLockIndicators;
- (void)_updateIdleStateForRawOffset:(struct UIOffset { double x1; double x2; })arg1 timestamp:(double)arg2;
- (void)_updateReferenceAttitude:(union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })arg1 timestamp:(double)arg2;
- (void)_updateSettings;
- (void)_updateSmoothedOffsetForRawOffset:(struct UIOffset { double x1; double x2; })arg1;
- (bool)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(bool)arg3 returningShouldToggleSlowUpdates:(bool*)arg4 logger:(id)arg5;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (void)reset;
- (void)resetHysteresis;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateHistory;
- (void)updateWithEvent:(id)arg1;

@end