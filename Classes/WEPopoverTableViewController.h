//
//  WEPopoverTableViewController.h
//  WEPopover
//
//  Created by Werner Altewischer on 1/4/11.
//  Copyright 2011 Werner IT Consultancy. All rights reserved.
//

#import "WEPopoverController.h"

@interface WEPopoverTableViewController : UITableViewController<WEPopoverControllerDelegate, UIPopoverControllerDelegate>
@property (nonatomic, strong) WEPopoverController *popoverController;

- (IBAction)showPopover:(id)sender;

@end
