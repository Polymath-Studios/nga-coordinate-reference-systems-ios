//
//  CRSSimpleCoordinateReferenceSystem.h
//  crs-ios
//
//  Created by Brian Osborn on 7/19/21.
//  Copyright © 2021 NGA. All rights reserved.
//

#import <CoordinateReferenceSystems/CRSCoordinateReferenceSystem.h>
#import <CoordinateReferenceSystems/CRSCoordinateSystem.h>

/**
 * Simple Coordinate Reference System with Coordinate System
 */
@interface CRSSimpleCoordinateReferenceSystem : CRSCoordinateReferenceSystem

/**
 *  Coordinate System
 */
@property (nonatomic, strong) CRSCoordinateSystem *coordinateSystem;

/**
 *  Initialize
 *
 *  @return new instance
 */
-(instancetype) init;

/**
 *  Initialize
 *
 * @param type
 *            coordinate reference system type
 *
 *  @return new instance
 */
-(instancetype) initWithType: (CRSType) type;

/**
 *  Initialize
 *
 * @param name
 *            name
 * @param type
 *            coordinate reference system type
 *
 *  @return new instance
 */
-(instancetype) initWithName: (NSString *) name andType: (CRSType) type;

/**
 *  Initialize
 *
 * @param name
 *            name
 * @param type
 *            coordinate reference system type
 * @param coordinateSystem
 *            coordinate system
 *
 *  @return new instance
 */
-(instancetype) initWithName: (NSString *) name andType: (CRSType) type andCoordinateSystem: (CRSCoordinateSystem *) coordinateSystem;

@end
