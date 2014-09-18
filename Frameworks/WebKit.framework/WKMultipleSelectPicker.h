/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, WKContentView;

@interface WKMultipleSelectPicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
    double _fontSize;
    double _layoutWidth;
    double _maximumTextWidth;
    unsigned long long _singleSelectionIndex;
    long long _textAlignment;
    WKContentView *_view;
    bool_allowsMultipleSelection;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (long long)findItemIndexAt:(int)arg1;
- (id)initWithView:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(bool)arg4;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;

@end