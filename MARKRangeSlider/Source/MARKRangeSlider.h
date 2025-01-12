#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//! Project version number for MARKRangeSlider.
FOUNDATION_EXPORT double MARKRangeSliderVersionNumber;

//! Project version string for MARKRangeSlider.
FOUNDATION_EXPORT const unsigned char MARKRangeSliderVersionString[];

@protocol MARKRangeSliderDelegate
- (void) onHandlePanGesture:(UIView *)sender recognizer:(UIPanGestureRecognizer *)recognizer;
@end

@interface MARKRangeSlider : UIControl

// delegate
@property (nonatomic, weak) id <MARKRangeSliderDelegate> delegate;

// Values
@property (nonatomic, assign, readonly) CGFloat minimumValue;
@property (nonatomic, assign, readonly) CGFloat maximumValue;

@property (nonatomic, assign, readonly) CGFloat leftValue;
@property (nonatomic, assign, readonly) CGFloat rightValue;

@property (nonatomic, readonly) UIView *leftThumbView;
@property (nonatomic, readonly) UIView *rightThumbView;

@property (nonatomic, assign) CGFloat minimumDistance;

@property (nonatomic) BOOL pushable;
@property (nonatomic) BOOL disableOverlapping;

// Images
@property (nonatomic) UIImage *trackImage;
@property (nonatomic) UIImage *rangeImage;

@property (nonatomic) UIImage *leftThumbImage;
@property (nonatomic) UIImage *rightThumbImage;

// Configuration
- (void)setMinValue:(CGFloat)minValue maxValue:(CGFloat)maxValue;
- (void)setLeftValue:(CGFloat)leftValue rightValue:(CGFloat)rightValue;

@end



