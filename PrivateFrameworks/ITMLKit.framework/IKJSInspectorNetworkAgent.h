/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler> {
    IKJSInspectorController * _controller;
    NSMutableSet * _requestRecords;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearAllTrackedLoaders;
- (id)controller;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getResponseBodyWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 requestId:(id)arg3;
- (id)initWithInspectorController:(id)arg1;
- (void)loadResourceWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3 url:(id)arg4;
- (id)registerNetworkRequestLoader:(id)arg1;
- (void)resolveWebSocketWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 requestId:(id)arg3 objectGroup:(id*)arg4;
- (void)setCacheDisabledWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 cacheDisabled:(bool)arg3;
- (void)setExtraHTTPHeadersWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 headers:(id)arg3;
- (void)setResourceCachingDisabledWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 disabled:(bool)arg3;

@end
