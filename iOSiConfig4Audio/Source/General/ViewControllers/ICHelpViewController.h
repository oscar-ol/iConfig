/*
;iConfig source code and documentation is released under a GPLv3 license. 
;
; A copy is available from the Open Source Initiative site at:
;	https://opensource.org/licenses/gpl-3.0.html
*/

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface ICHelpViewController : UIViewController

@property(strong, nonatomic) IBOutlet UIView *webViewContainer;
@property(strong, nonatomic) WKWebView *webView;

- (id)initWithNibName:(NSString *)nibNameOrNil
               bundle:(NSBundle *)nibBundleOrNil
              request:(NSURLRequest *)request;
@end
