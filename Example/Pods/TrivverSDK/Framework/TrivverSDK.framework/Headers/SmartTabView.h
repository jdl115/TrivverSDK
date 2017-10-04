//
//  SmartTabViewController.h
//  Trivver
//
//  Created by vu van long on 7/28/17.
//  Copyright © 2017 Saritasa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SmartTabLogs.h"

@interface SmartTabView : UIView
- (instancetype __nonnull)init;


/**
 Show at window view
 */
- (void)showAtWindow;

/**
 Open smart tab programmatically
  */
- (void)open;

/**
 Close smart tab programmatically
 */
- (void)close;


/**
 Toggle smart tab
 */
- (void)toggleSmartTab;

/**
 Check smart tab is opened or not

 @return opened or not
 */
- (BOOL)isOpened;

/**
 Check smart tab button is visible or not
 
 @return visible or not
 */
- (BOOL)isSmartTabButtonVisible;

/**
 Show toogle smart tab button
 */
- (void)showSmartTabButton;

/**
 Hide toogle smart tab button
 */
- (void)hideSmartTabButton;


/**
 Set transparency for button open

 @param alpha the transparency for button open
 */
- (void)setSmartTabButtonAlpha:(CGFloat)alpha;

- (void)changeRefreshDataTime:(int)time;
@end
