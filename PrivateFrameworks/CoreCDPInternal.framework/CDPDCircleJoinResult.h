/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDCircleJoinResult : NSObject {
    int  _circleStatus;
    bool  _didJoin;
    bool  _hasPeersForRemoteApproval;
    bool  _hasPeersWithBackupRecords;
    bool  _needsBackupRecovery;
    unsigned long long  _remotePeeriCKState;
    bool  _requiresEscrowRecordsFetch;
    bool  _requiresInitialSync;
}

@property int circleStatus;
@property bool didJoin;
@property bool hasPeersForRemoteApproval;
@property bool hasPeersWithBackupRecords;
@property bool needsBackupRecovery;
@property unsigned long long remotePeeriCKState;
@property bool requiresEscrowRecordsFetch;
@property bool requiresInitialSync;

- (int)circleStatus;
- (bool)didJoin;
- (bool)hasPeersForRemoteApproval;
- (bool)hasPeersWithBackupRecords;
- (bool)needsBackupRecovery;
- (unsigned long long)remotePeeriCKState;
- (bool)requiresEscrowRecordsFetch;
- (bool)requiresInitialSync;
- (void)setCircleStatus:(int)arg1;
- (void)setDidJoin:(bool)arg1;
- (void)setHasPeersForRemoteApproval:(bool)arg1;
- (void)setHasPeersWithBackupRecords:(bool)arg1;
- (void)setNeedsBackupRecovery:(bool)arg1;
- (void)setRemotePeeriCKState:(unsigned long long)arg1;
- (void)setRequiresEscrowRecordsFetch:(bool)arg1;
- (void)setRequiresInitialSync:(bool)arg1;

@end
