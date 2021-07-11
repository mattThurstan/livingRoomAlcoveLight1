/*----------------------------mode1 sunrise and mode6 sunset----------------------------*/
/*
 * sunrise and sunset modes (1 & 6) are usually kept out of the preset lists and just triggered by the alarm interrupts
 * ..but it is a mode and can be selected as such 
 * eg. for testing/demo porpoises
 */
void mode1() {
  //name should be sunrise!
    //sunRise();

    //TEMP
    for(int i = ledSegment[1].first; i <= ledSegment[1].last; i++) {
      strip.SetPixelColor(i, _hslSunriseStart);
    }
    for(int i = ledSegment[2].first; i <= ledSegment[2].last; i++) {
      strip.SetPixelColor(i, _rgbBlack);
    }
    for(int i = ledSegment[3].first; i <= ledSegment[3].last; i++) {
      strip.SetPixelColor(i, _hslSunriseEnd);
    }
    for(int i = ledSegment[4].first; i <= ledSegment[4].last; i++) {
      strip.SetPixelColor(i, _rgbBlack);
    }
    //END TEMP
  
} //END mode1


void mode6() {
  //name should be sunset!
  //sunSet();

  //TEMP
  for(int i = ledSegment[1].first; i <= ledSegment[1].last; i++) {
    strip.SetPixelColor(i, _hslSunsetStart);
  }
  for(int i = ledSegment[2].first; i <= ledSegment[2].last; i++) {
    strip.SetPixelColor(i, _rgbBlack);
  }
  for(int i = ledSegment[3].first; i <= ledSegment[3].last; i++) {
    strip.SetPixelColor(i, _hslSunsetEnd);
  }
  for(int i = ledSegment[4].first; i <= ledSegment[4].last; i++) {
    strip.SetPixelColor(i, _rgbBlack);
  }
  //END TEMP
  
} //END mode6



/*----------------------------do----------------------------*/
/*
 * sunrise/set states can be used by such as static/moving
 * eg. static could go straight to the end colours, or the frozen midpoint of the 'do' state
 */
void sunRise() { }

void sunSet() { }
