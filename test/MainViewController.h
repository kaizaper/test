//
//  MainViewController.h
//  test
//
//  Created by Kai Coenen on 30-06-13.
//  Copyright (c) 2013 Kai Coenen. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
