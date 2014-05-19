//
//  ViewController.h
//  uberZeit
//
//  Created by Raffael Schmid on 19/05/14.
//  Copyright (c) 2014 raffaelschmid. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UILabel *topText;
    IBOutlet UIButton *startStopButton;
        
    NSString *api_url;
    NSString *api_key;
}

- (IBAction)buttonPressed;

@end