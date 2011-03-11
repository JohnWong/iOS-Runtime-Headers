/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPickerViewControllerDelegate>, UIBarButtonItem, <ABStyleProvider>, <ABPickerViewControllerDismissDelegate>;

@interface ABPickerViewController : UITableViewController  {
    void *_context;
    SEL _selectionAction;
    <ABPickerViewControllerDelegate> *_delegate;
    <ABPickerViewControllerDismissDelegate> *_dismissDelegate;
    <ABStyleProvider> *_styleProvider;
}

@property(readonly) UIBarButtonItem * cancelBarButtonItem;
@property(readonly) UIBarButtonItem * doneBarButtonItem;
@property(retain) <ABStyleProvider> * styleProvider;
@property SEL selectionAction;
@property <ABPickerViewControllerDismissDelegate> * dismissDelegate;
@property <ABPickerViewControllerDelegate> * delegate;
@property void* context;


- (void)viewDidLoad;
- (void)setContext:(void*)arg1;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void*)context;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)cancelButtonClicked:(id)arg1;
- (id)doneBarButtonItem;
- (SEL)selectionAction;
- (id)dismissDelegate;
- (void)attemptDismissAfterSelectingItem:(id)arg1;
- (void)setSelectionAction:(SEL)arg1;
- (void)setDismissDelegate:(id)arg1;
- (id)cancelBarButtonItem;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end