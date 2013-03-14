//
//  InstaEmailViewController.h
//  InstaEmail
//
//  Created by Marcio de Oliveira on 2/20/13.
//  Copyright (c) 2013 Yellow Monkey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MFMailComposeViewController.h>

@interface InstaEmailViewController : UIViewController
<UIPickerViewDataSource, UIPickerViewDelegate, MFMailComposeViewControllerDelegate> {
    UIPickerView* emailPicker_;
    NSArray* activities_;
    NSArray* feelings_;
}

@property (nonatomic, retain) IBOutlet UIPickerView *emailPicker;

- (IBAction)sendButtonTapped:(id)sender;

@end
