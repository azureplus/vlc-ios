/*****************************************************************************
 * VLCFirstStepsThirdPageViewController.h
 * VLC for iOS
 *****************************************************************************
 * Copyright (c) 2013 VideoLAN. All rights reserved.
 * $Id$
 *
 * Authors: Felix Paul Kühne <fkuehne # videolan.org>
 *
 * Refer to the COPYING file of the official project for license.
 *****************************************************************************/

#import <UIKit/UIKit.h>

@interface VLCFirstStepsThirdPageViewController : UIViewController

@property (readonly) NSString *pageTitle;
@property (readonly) NSUInteger page;

@property (nonatomic, strong) IBOutlet UILabel *connectDescriptionLabel;
@property (nonatomic, strong) IBOutlet UILabel *uploadDescriptionLabel;

@end