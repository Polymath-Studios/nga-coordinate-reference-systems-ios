//
//  CRSEngineeringDatum.h
//  crs-ios
//
//  Created by Brian Osborn on 7/20/21.
//  Copyright © 2021 NGA. All rights reserved.
//

#import <CoordinateReferenceSystems/CRSReferenceFrame.h>

/**
 * Engineering Datum
 */
@interface CRSEngineeringDatum : CRSReferenceFrame

/**
 *  Create
 *
 *  @return new instance
 */
+(CRSEngineeringDatum *) create;

/**
 *  Initialize
 *
 *  @return new instance
 */
-(instancetype) init;

/**
 *  Initialize
 *
 * @param name
 *            name
 *
 *  @return new instance
 */
-(instancetype) initWithName: (NSString *) name;

@end
