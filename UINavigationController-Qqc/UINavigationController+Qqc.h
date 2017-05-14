//
//  UINavigationController+Qqc.h
//  QqcFramework
//
//  Created by mahailin on 15/8/7.
//  Copyright (c) 2015年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  UINavigationController类别
 */
@interface UINavigationController (Qqc)

/**
 *  创建UINavigationController
 *
 *  @param viewController 根控制器
 *
 *  @return 返回UINavigationController
 */
+ (id)controllerWithRootViewController:(UIViewController *)viewController;

@end
