//
//  Taking_Photos_with_the_CameraAppDelegate.h
//  Taking Photos with the Camera
//
//  Created by Vandad Nahavandipoor on 22/07/2011.
//  Copyright 2011 Pixolity Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Taking_Photos_with_the_CameraViewController;

@interface Taking_Photos_with_the_CameraAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) Taking_Photos_with_the_CameraViewController *viewController;
@property (nonatomic, strong) UINavigationController *navigationController;

@end
