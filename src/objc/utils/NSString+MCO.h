//
//  NSString+MCO.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 1/21/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#import <Foundation/Foundation.h>

#include <mailcore/mailcore.h>

@interface NSString (MCO)

#ifdef __cplusplus
+ (NSString *) mco_stringWithMCString:(mailcore::String *)cppString;
#endif

@end
