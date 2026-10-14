// sub_080EEF2C at 0x080EEF2C (thumb)

undefined4 sub_080EEF2C(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 in_lr;
  
  sub_0801A3C4();
  if ((DAT_02030104 & 0x40) != 0) {
    sub_08002398();
    return in_lr;
  }
  if ((DAT_020301a8 & 8) != 0) {
    if (*DAT_02030160 == '\0') {
      uVar3 = 0x900;
    }
    else {
      if (DAT_02030174 < 99) {
        DAT_02030174 = DAT_02030174 + 1;
      }
      *DAT_02030160 = *DAT_02030160 + -1;
      uVar3 = 0x300;
    }
    goto LAB_080ef088;
  }
  if (*(short *)(param_1 + 0x6260) == 0x11) {
    if (DAT_020301a2 == '\f') {
      uVar2 = 6;
    }
    else {
      if (DAT_020301a2 != '\x13') goto LAB_080eefa4;
LAB_080ef062:
      uVar2 = 0xf;
    }
LAB_080ef064:
    *(undefined2 *)(param_1 + 0x6260) = uVar2;
    sub_0801A02C();
  }
  else {
LAB_080eefa4:
    if ((DAT_02030104 & 0x20) != 0) {
      *(undefined2 *)(param_1 + 0x6260) = 0x11;
      sub_0801A03C(0x11,9);
      goto LAB_080ef09a;
    }
    psVar4 = (short *)(param_1 + 0x6260);
    sVar1 = *psVar4;
    if (sVar1 == 1) {
      *psVar4 = 0x11;
      sub_0801A03C(0x11,3);
      goto LAB_080ef09a;
    }
    if ((DAT_02030105 & 8) != 0) {
      if ((DAT_02030105 & 0x10) == 0) {
        if (sVar1 != 0x11) {
          *psVar4 = 0x11;
          sub_0801A03C(0x11,4);
          goto LAB_080ef09a;
        }
        uVar2 = 6;
        goto LAB_080ef064;
      }
      if (sVar1 == 6) {
        *psVar4 = 0x11;
        sub_0801A03C(0x11,0xd);
        goto LAB_080ef09a;
      }
      if (((DAT_02030105 & 0x80) != 0) && ((DAT_02030106 & 1) != 0)) {
        if (sVar1 == 10) {
          *psVar4 = 0x11;
          sub_0801A03C(0x11,0xf);
          goto LAB_080ef09a;
        }
        if ((DAT_02030106 & 4) != 0) {
          if ((DAT_02030106 & 0x20) == 0) {
            if (sVar1 != 0x11) {
              *psVar4 = 0x11;
              sub_0801A03C(0x11,0x10);
              goto LAB_080ef09a;
            }
            goto LAB_080ef062;
          }
          if (sVar1 != 0xf) {
            if (*(short *)(param_1 + 0x6260) == 0x10) {
              uVar3 = 0xb00;
LAB_080ef088:
              sub_080EDB10(param_1,uVar3);
              return in_lr;
            }
            *(short *)(param_1 + 0x6260) = 0x11;
            sub_0801A03C(0x11,7);
            goto LAB_080ef09a;
          }
        }
      }
    }
    *psVar4 = 0x11;
    sub_0801A03C(0x11,7);
  }
LAB_080ef09a:
  sub_080EDB10(param_1,0x300);
  return in_lr;
}

