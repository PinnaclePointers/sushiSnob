//
//  SushiDetailMKAnnotation.h
//  SushiSnob
//
//  Created by MasterRyuX on 2013-06-09.
//  Copyright (c) 2013 MasterRyuX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface SushiDetailMKAnnotation : NSObject <MKAnnotation>

@property (strong, nonatomic) NSString  *subtitle;
@property (strong, nonatomic) NSString  *title;
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) NSString *selectedFileName;
@property (nonatomic) BOOL isRatedGood;


@end
