//
//  UIView+Snapshot.h
//  PanBackDemo
//
//  Created by clovelu on 6/4/14.
//  Copyright (c) 2014 clovelu. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIView (Snapshot)

/**
 *  返回当前view的快照
 *
 *  @return 返回当前view的快照
 */
- (UIImage *)snapshot;

@end
