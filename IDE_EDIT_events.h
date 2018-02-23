/********************************************************************************\
**                                                                              **
**  Copyright (C) 2008 Josh Ventura                                             **
**                                                                              **
**  This file is a part of the ENIGMA Development Environment.                  **
**                                                                              **
**                                                                              **
**  ENIGMA is free software: you can redistribute it and/or modify it under the **
**  terms of the GNU General Public License as published by the Free Software   **
**  Foundation, version 3 of the license or any later version.                  **
**                                                                              **
**  This application and its source code is distributed AS-IS, WITHOUT ANY      **
**  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS   **
**  FOR A PARTICULAR PURPOSE. See the GNU General Public License for more       **
**  details.                                                                    **
**                                                                              **
**  You should have recieved a copy of the GNU General Public License along     **
**  with this code. If not, see <http://www.gnu.org/licenses/>                  **
**                                                                              **
**  ENIGMA is an environment designed to create games and other programs with a **
**  high-level, fully compilable language. Developers of ENIGMA or anything     **
**  associated with ENIGMA are in no way responsible for its users or           **
**  applications created by its users, or damages caused by the environment     **
**  or programs made in the environment.                                        **
**                                                                              **
\********************************************************************************/

//This file was generated by the ENIGMA Development Environment.
//Editing it is a sign of a certain medical condition. We're not sure which one.

namespace enigma
{
  event_iter *event_beforecollisionautomaticcollisionhandling; // Defined in 0 objects
  event_iter *event_beginstep; // Defined in 0 objects
  event_iter *event_create; // Defined in 1 objects
  event_iter *event_draw; // Defined in 0 objects
  event_iter *event_endstep; // Defined in 0 objects
  event_iter *event_localsweep; // Defined in 0 objects
  event_iter *event_particlesystemsupdate; // Defined in 0 objects
  event_iter *event_step; // Defined in 1 objects
  int event_system_initialize()
  {
    events = new event_iter[8]; // Allocated here; not really meant to change.
    objects = new objectid_base[62]; // Allocated here; not really meant to change.
    event_beforecollisionautomaticcollisionhandling = events + 0;  event_beforecollisionautomaticcollisionhandling->name = "Before collision automatic collision handling";
    event_beginstep = events + 1;  event_beginstep->name = "Begin Step";
    event_create = events + 2;  event_create->name = "Create";
    event_draw = events + 3;  event_draw->name = "Draw";
    event_endstep = events + 4;  event_endstep->name = "End Step";
    event_localsweep = events + 5;  event_localsweep->name = "Locals sweep";
    event_particlesystemsupdate = events + 6;  event_particlesystemsupdate->name = "Particle Systems Update";
    event_step = events + 7;  event_step->name = "Step";
    return 0;
  }
  int game_settings_initialize()
  {
    return 0;
  }
  variant ev_perf(int type, int numb)
  {
    return ((enigma::event_parent*)(instance_event_iterator->inst))->myevents_perf(type, numb);
  }
  int ENIGMA_events()
  {
    for (instance_event_iterator = event_beginstep->next; instance_event_iterator != NULL; instance_event_iterator = instance_event_iterator->next) {
      ((enigma::event_parent*)(instance_event_iterator->inst))->myevent_beginstep();
      if (enigma::room_switching_id != -1) goto after_events;
    }
    
    enigma::update_globals();
    
    for (instance_event_iterator = event_step->next; instance_event_iterator != NULL; instance_event_iterator = instance_event_iterator->next) {
      ((enigma::event_parent*)(instance_event_iterator->inst))->myevent_step();
      if (enigma::room_switching_id != -1) goto after_events;
    }
    
    enigma::update_globals();
    
    for (instance_event_iterator = event_localsweep->next; instance_event_iterator != NULL; instance_event_iterator = instance_event_iterator->next) {
      ((enigma::event_parent*)(instance_event_iterator->inst))->myevent_localsweep();
      if (enigma::room_switching_id != -1) goto after_events;
    }
    
    enigma::update_globals();
    
    enigma::perform_callbacks_before_collision_event();    
    
    enigma::update_globals();
    
    for (instance_event_iterator = event_endstep->next; instance_event_iterator != NULL; instance_event_iterator = instance_event_iterator->next) {
      ((enigma::event_parent*)(instance_event_iterator->inst))->myevent_endstep();
      if (enigma::room_switching_id != -1) goto after_events;
    }
    
    enigma::update_globals();
    
    enigma::perform_callbacks_particle_updating();    
    
    enigma::update_globals();
    
    if (automatic_redraw) screen_redraw();    
    
    enigma::update_globals();
    
    after_events:
    if (keyboard_check_pressed(vk_escape)) game_end();
    if (keyboard_check_pressed(vk_f4)) window_set_fullscreen(!window_get_fullscreen());
    if (keyboard_check_pressed(vk_f1)) show_info();
    enigma::dispose_destroyed_instances();
    enigma::rooms_switch();
    enigma::set_room_speed(room_speed);
    
    return 0;
  } // event function
  bool gui_used = 0;
} // namespace enigma