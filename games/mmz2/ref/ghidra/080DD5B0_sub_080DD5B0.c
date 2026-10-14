// sub_080DD5B0 at 0x080DD5B0 (thumb)

undefined8 sub_080DD5B0(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_3 - 1 < 0x51) {
    if ((((int)(uint)*(byte *)(param_2 + 0x228 + (param_3 >> 3)) >> (param_3 & 7) & 1U) != 0) &&
       (((int)(uint)*(byte *)(param_2 + 0x23e + (param_3 >> 3)) >> (param_3 & 7) & 1U) != 0)) {
      uVar1 = 0xcb00;
      if (param_3 != param_4) {
        sub_080127E4(param_1,0xcb00);
      }
      goto LAB_080dd602;
    }
  }
  uVar1 = 0;
LAB_080dd602:
  return CONCAT44(in_lr,uVar1);
}

