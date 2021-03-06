/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationSummaryItemsView : UIView {
    NSMutableArray * _constraints;
    NSLayoutConstraint * _emptyConstraint;
    NSMutableArray * _hasBottomPadding;
    NSMutableArray * _labelViews;
    PKPaymentAuthorizationLayout * _layout;
    NSMutableArray * _valueViews;
}

@property (nonatomic) PKPaymentAuthorizationLayout *layout;

- (void).cxx_destruct;
- (id)_labelAttributedStringWithString:(id)arg1;
- (id)_valueAttributedStringWithString:(id)arg1 type:(unsigned long long)arg2;
- (void)addLabel:(id)arg1 value:(id)arg2 itemType:(unsigned long long)arg3 maxLabelLines:(long long)arg4 hasBottomPadding:(bool)arg5;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayout:(id)arg1;
- (id)layout;
- (void)removeLabelsAndValues;
- (void)setLayout:(id)arg1;
- (void)updateConstraints;

@end
