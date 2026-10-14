// sub_080AD060 at 0x080AD060 (thumb)

undefined8 sub_080AD060(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((DAT_02022ae9 & 0x40) == 0) {
    if ((DAT_02022af8 == '\0') && ((DAT_02022ae9 & 0x20) != 0)) {
      DAT_02022af8 = '\x03';
    }
    switch(DAT_02022af8) {
    case '\0':
      DAT_02022ae9 = DAT_02022ae9 | 0x20;
      uVar1 = 0x244;
      break;
    case '\x01':
      sub_0801D05C(DAT_0202286c,0xfa);
      DAT_02022ae9 = DAT_02022ae9 | 0x40;
      DAT_02022af8 = '\x02';
      uVar1 = 0x245;
      break;
    case '\x02':
      DAT_02022af8 = '\x03';
      uVar1 = 0x246;
      break;
    case '\x03':
      uVar1 = 0x248;
      break;
    case '\x04':
      sub_0801D05C(DAT_0202286c,0xfa);
      DAT_02022ae9 = DAT_02022ae9 | 0x40;
      DAT_02022af8 = '\x02';
      uVar1 = 0x249;
      break;
    case '\x05':
      DAT_02022af8 = '\x03';
      uVar1 = 0x24a;
      break;
    default:
      goto switchD_080ad13c_caseD_6;
    }
  }
  else {
    if (DAT_02022af8 != '\x02') {
      uVar2 = *(uint *)(DAT_02022b20 + 0x10);
      if ((uVar2 & 0x8000) == 0) {
        if ((uVar2 & 0x4000) == 0) {
          if ((uVar2 & 0x2000) == 0) {
            if (DAT_02022af8 == '\0') {
              DAT_02022af8 = '\x01';
              uVar1 = 0x24b;
            }
            else {
              uVar1 = 0x24c;
            }
          }
          else if (DAT_02022af8 == '\0') {
            DAT_02022af8 = '\x01';
            uVar1 = 0x24d;
          }
          else {
            uVar1 = 0x24e;
          }
        }
        else if (DAT_02022af8 == '\0') {
          DAT_02022af8 = '\x01';
          uVar1 = 0x24f;
        }
        else {
          uVar1 = 0x250;
        }
      }
      else if (DAT_02022af8 == '\0') {
        DAT_02022af8 = '\x01';
        uVar1 = 0x251;
      }
      else {
        uVar1 = 0x252;
      }
      goto LAB_080ad1e2;
    }
switchD_080ad13c_caseD_6:
    uVar1 = 0x247;
  }
LAB_080ad1e2:
  return CONCAT44(in_lr,uVar1);
}

