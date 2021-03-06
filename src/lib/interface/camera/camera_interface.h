/*********************************************************
 *
 * This source code is part of the Carnegie Mellon Robot
 * Navigation Toolkit (CARMEN)
 *
 * CARMEN Copyright (c) 2002 Michael Montemerlo, Nicholas
 * Roy, Sebastian Thrun, Dirk Haehnel, Cyrill Stachniss,
 * and Jared Glover
 *
 * CARMEN is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public 
 * License as published by the Free Software Foundation; 
 * either version 2 of the License, or (at your option)
 * any later version.
 *
 * CARMEN is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied 
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more 
 * details.
 *
 * You should have received a copy of the GNU General 
 * Public License along with CARMEN; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, 
 * Suite 330, Boston, MA  02111-1307 USA
 *
 ********************************************************/


/** @addtogroup camera libcamera_interface **/
// @{

/** \file camera_interface.h
 * \brief Definition of the interface of the module camera.
 *
 * This file specifies the interface to subscribe the messages of
 * that module and to receive its data via ipc.
 **/


#ifndef CARMEN_CAMERA_INTERFACE_H
#define CARMEN_CAMERA_INTERFACE_H

#include "camera_messages.h"

#ifdef __cplusplus
extern "C" {
#endif

  /** Subscribe to images from camera_xxxxcam (e.g., camera_quickcam). */

void
carmen_camera_subscribe_images(carmen_camera_image_message *image,
			       carmen_handler_t handler,
			       carmen_subscribe_t subscribe_how);
#ifdef __cplusplus
}
#endif

#endif

// @}

