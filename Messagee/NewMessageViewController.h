//
//  NewMessageViewController.h
//  Messagee
//
//  Created by Ernesto Vargas on 2/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RestKit/RestKit.h>
#import <RestKit/RKRequestSerialization.h>
#import "UGClient.h"
#import "UGUser.h"

@interface NewMessageViewController : UIViewController <RKRequestDelegate> {
    
}

@property (weak, nonatomic) IBOutlet UITextView *messageTextField;

@end
