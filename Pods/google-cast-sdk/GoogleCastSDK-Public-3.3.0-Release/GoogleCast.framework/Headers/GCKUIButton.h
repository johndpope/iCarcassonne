// Copyright 2015 Google Inc.

/** @cond ENABLE_FEATURE_GUI */

#import <GoogleCast/GCKDefines.h>

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifdef USE_CAST_DYNAMIC_FRAMEWORK
#define GCKUIButtonClass NSClassFromString(@"GCKUIButton")
#endif

GCK_ASSUME_NONNULL_BEGIN

/**
 * A subclass of <a href="https://goo.gl/VK61wU"><b>UIButton</b></a> that supports custom
 * application states. These states are ORed onto the value of the button's <b>state</b> property to
 * provide additional, application-specific states. Images can be assigned to these custom states,
 * for example:
 * @code
 * [button setImage:[UIImage imageNamed:@"myCustomStateImage"]
 *                             forState:(UIControlStateNormal | kMyControlStateCustom)];
 * @endcode
 * Application state values must only use the bits that are set in the
 * <a href="https://goo.gl/tZWsqZ"><b>UIControlStateApplication</b></a> bitmask.
 *
 * @since 3.0
 */
GCK_EXPORT
@interface GCKUIButton : UIButton

/**
 * The button's application state. This state is ORed onto the button's existing state.
 */
@property(nonatomic, assign, readwrite) UIControlState applicationState;

@end

GCK_ASSUME_NONNULL_END

/** @endcond */
