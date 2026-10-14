// sub_080AD558 at 0x080AD558 (thumb)

undefined8 sub_080AD558(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(DAT_02022b20 + 0xf);
  if (cVar1 == '\x01') {
    if (DAT_02022af6 == '\0') {
      DAT_02022af6 = '\x01';
      uVar2 = 0x221;
    }
    else {
      uVar2 = 0x222;
    }
    goto LAB_080ad73c;
  }
  if (cVar1 == '\x03') {
    if ((DAT_02022af6 == '\0') && ((*(uint *)(DAT_02022b20 + 0x18) & 8) != 0)) {
      DAT_02022af6 = '\x03';
    }
    switch(DAT_02022af6) {
    case '\0':
      DAT_02022af6 = DAT_02022af6 + '\x01';
      uVar2 = 0x223;
      break;
    case '\x01':
      DAT_02022af6 = DAT_02022af6 + '\x01';
      uVar2 = 0x225;
      break;
    case '\x02':
      uVar2 = 0x2dc;
      break;
    case '\x03':
      DAT_02022af6 = DAT_02022af6 + '\x01';
      uVar2 = 0x224;
      break;
    case '\x04':
      uVar2 = 0x226;
      break;
    default:
      goto switchD_080ad5c2_caseD_5;
    }
  }
  else {
    if (cVar1 == '\x05') {
      if (DAT_02022af6 == '\0') {
        DAT_02022af6 = '\x01';
        if ((0x7bc >> *(sbyte *)(DAT_02022b20 + 2) & 1U) == 0) {
          if ((0x5f800 >> *(sbyte *)(DAT_02022b20 + 2) & 1U) == 0) {
            uVar2 = 0x229;
          }
          else {
            uVar2 = 0x228;
          }
        }
        else {
          uVar2 = 0x227;
        }
      }
      else {
        uVar2 = 0x22a;
      }
      goto LAB_080ad73c;
    }
    if (cVar1 == '\r') {
      if (DAT_02022af6 == '\0') {
        DAT_02022af6 = '\x01';
        uVar2 = 0x22d;
      }
      else if (DAT_02022af6 == '\x01') {
        DAT_02022af6 = '\x02';
        uVar2 = 0x22e;
      }
      else {
        uVar2 = 0x2dd;
      }
      goto LAB_080ad73c;
    }
    if ((*(uint *)(DAT_02022b20 + 0x10) & 0x8000) != 0) {
      if (DAT_02022af6 == '\0') {
        DAT_02022af6 = '\x01';
        uVar2 = 0x231;
      }
      else {
        uVar2 = 0x232;
      }
      goto LAB_080ad73c;
    }
    if ((*(uint *)(DAT_02022b20 + 0x10) & 0x4000) != 0) {
      if (DAT_02022af6 == '\0') {
        DAT_02022af6 = '\x01';
        uVar2 = 0x22f;
      }
      else {
        uVar2 = 0x230;
      }
      goto LAB_080ad73c;
    }
    if (DAT_02022af6 == '\0') {
      DAT_02022af6 = '\x01';
      uVar2 = 0x22b;
      goto LAB_080ad73c;
    }
switchD_080ad5c2_caseD_5:
    uVar2 = 0x22c;
  }
LAB_080ad73c:
  return CONCAT44(in_lr,uVar2);
}

