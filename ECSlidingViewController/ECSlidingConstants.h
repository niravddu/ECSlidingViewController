//
//  ECSlidingConstants.h
//  ECSlidingViewController
//
//  Created by Michael Enriquez on 10/14/13.
//  Copyright (c) 2013 Mike Enriquez. All rights reserved.
//

#ifndef ECSlidingViewController_ECSlidingConstants_h
#define ECSlidingViewController_ECSlidingConstants_h

static NSString *const ECTransitionContextTopViewControllerKey    = @"ECTransitionContextTopViewControllerKey";
static NSString *const ECTransitionContextUnderLeftControllerKey  = @"ECTransitionContextUnderLeftControllerKey";
static NSString *const ECTransitionContextUnderRightControllerKey = @"ECTransitionContextUnderRightControllerKey";

typedef NS_ENUM(NSInteger, ECSlidingViewControllerOperation) {
    ECSlidingViewControllerOperationNone,
    ECSlidingViewControllerOperationAnchorLeft,
    ECSlidingViewControllerOperationAnchorRight,
    ECSlidingViewControllerOperationResetFromLeft,
    ECSlidingViewControllerOperationResetFromRight
};

typedef NS_ENUM(NSInteger, ECSlidingViewControllerTopViewPosition) {
    ECSlidingViewControllerTopViewPositionAnchoredLeft,
    ECSlidingViewControllerTopViewPositionAnchoredRight,
    ECSlidingViewControllerTopViewPositionCentered
};

typedef NS_OPTIONS(NSInteger, ECSlidingViewControllerAnchoredGesture) {
    ECSlidingViewControllerAnchoredGestureNone     = 0,
    ECSlidingViewControllerAnchoredGesturePanning  = 1 << 0,
    ECSlidingViewControllerAnchoredGestureTapping  = 1 << 1,
    ECSlidingViewControllerAnchoredGestureCustom   = 1 << 2,
    ECSlidingViewControllerAnchoredGestureDisabled = 1 << 3
};

#endif
