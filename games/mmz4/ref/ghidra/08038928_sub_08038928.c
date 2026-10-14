// sub_08038928 at 0x08038928 (thumb)

undefined8 sub_08038928(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x27a) == '\0') {
    if (*(char *)(param_1 + 199) == '\x02') {
      uVar2 = 0xb;
    }
    else if (*(char *)(param_1 + 199) == '\x01') {
      uVar2 = 10;
    }
    else {
      cVar1 = *(char *)(param_1 + 0xc5);
      if (cVar1 == '\x13') {
        if (((*(uint *)(param_1 + 0xc4) & 0xff00ff) == 0x1a0009) &&
           ((*(uint *)(param_1 + 0xf0) & 0xffffff00) == 0)) {
          uVar2 = 0xc;
          goto LAB_0803898e;
        }
      }
      else if (cVar1 != -1) {
        uVar2 = (uint)(byte)(cVar1 - 9);
        goto LAB_0803898e;
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xd;
  }
LAB_0803898e:
  return CONCAT44(in_lr,uVar2);
}

