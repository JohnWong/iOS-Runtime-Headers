/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GKABSearchDelegate : NSObject <ABSearchOperationDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    BOOL _gotOne;
}

@property BOOL gotOne;
@property(copy) id completionHandler;


- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (BOOL)gotOne;
- (void)completedSearchWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)setGotOne:(BOOL)arg1;
- (id)completionHandler;
- (void)setCompletionHandler:(id)arg1;
- (void)dealloc;

@end