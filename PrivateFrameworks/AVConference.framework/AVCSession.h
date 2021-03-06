/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCSession : NSObject {
    NSMutableDictionary * _cachedParticipants;
    AVCSessionConfiguration * _configuration;
    AVConferenceXPCClient * _connection;
    <AVCSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateNotificationQueue;
    AVCSessionParticipant * _localParticipant;
    NSMutableDictionary * _remoteParticipants;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSString * _transportToken;
}

@property (nonatomic, retain) AVCSessionConfiguration *configuration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateNotificationQueue;
@property (nonatomic, readonly) AVCSessionParticipant *localParticipant;
@property (nonatomic, readonly) NSMutableDictionary *remoteParticipants;

- (void)addParticipantWithID:(id)arg1 data:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id)delegateNotificationQueue;
- (void)deregisterFromNotifications;
- (id)description;
- (id)initWithTransportToken:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
- (id)localParticipant;
- (id)participantForID:(id)arg1;
- (void)registerBlocksForNotifications;
- (id)remoteParticipants;
- (void)removeParticipantWithID:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setupNotificationQueue:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateConfiguration:(id)arg1;
- (bool)validateParticipantToAddWithID:(id)arg1 data:(id)arg2 initFailed:(bool)arg3;
- (bool)validateParticipantToRemoveWithID:(id)arg1;

@end
