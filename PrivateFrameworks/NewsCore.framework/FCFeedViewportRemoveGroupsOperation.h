/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportRemoveGroupsOperation : FCOperation {
    <FCAppConfiguration> * _appConfiguration;
    FCFeedDescriptor * _feedDescriptor;
    id /* block */  _groupRemovalTestBlock;
    id /* block */  _removeGroupsCompletionHandler;
    FCFeedViewport * _resultViewport;
    FCFeedViewport * _viewport;
    FCFeedViewportDiff * _viewportDiff;
}

@property (nonatomic, copy) <FCAppConfiguration> *appConfiguration;
@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, copy) id /* block */ groupRemovalTestBlock;
@property (nonatomic, copy) id /* block */ removeGroupsCompletionHandler;
@property (nonatomic, retain) FCFeedViewport *resultViewport;
@property (nonatomic, retain) FCFeedViewport *viewport;
@property (nonatomic, retain) FCFeedViewportDiff *viewportDiff;

- (void).cxx_destruct;
- (id)appConfiguration;
- (id)feedDescriptor;
- (id /* block */)groupRemovalTestBlock;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)removeGroupsCompletionHandler;
- (id)resultViewport;
- (void)setAppConfiguration:(id)arg1;
- (void)setFeedDescriptor:(id)arg1;
- (void)setGroupRemovalTestBlock:(id /* block */)arg1;
- (void)setRemoveGroupsCompletionHandler:(id /* block */)arg1;
- (void)setResultViewport:(id)arg1;
- (void)setViewport:(id)arg1;
- (void)setViewportDiff:(id)arg1;
- (bool)validateOperation;
- (id)viewport;
- (id)viewportDiff;

@end