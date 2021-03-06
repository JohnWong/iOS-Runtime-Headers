/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPedometerDataCollector : HDAggregateDataCollector <HDUserCharacteristicsProfileObserver> {
    CMPedometer * _pedometer;
    NSNumber * _userCondition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createCollectorsForCurrentHardware:(id)arg1;
+ (Class)sensorDatumClass;

- (void).cxx_destruct;
- (id)_queue_pedometer;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithProfile:(id)arg1;
- (id)pedometer;
- (id)quantitySamplesFromPedometerData:(id)arg1 toPedometerData:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 containsWorkoutSamples:(bool)arg5;
- (bool)queue_userConditionIsSet;
- (bool)queue_userIsAbleBodied;
- (void)setPedometer:(id)arg1;
- (void)setUserCondition:(id)arg1;
- (void)stopPerformingUpdatesWithErrorEncountered:(bool)arg1;
- (void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2;

@end
