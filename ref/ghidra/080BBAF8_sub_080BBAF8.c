// sub_080BBAF8 at 0x080BBAF8 (thumb)

undefined8 sub_080BBAF8(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_3 - 1 < 0x4e) {
    if ((((int)(uint)*(byte *)(param_2 + 0x1a4 + (param_3 >> 3)) >> (param_3 & 7) & 1U) != 0) &&
       (((int)(uint)*(byte *)(param_2 + 0x1b8 + (param_3 >> 3)) >> (param_3 & 7) & 1U) != 0)) {
      if (param_3 != param_4) {
        sub_080033F0(param_1 + 0x6c,0);
      }
      uVar1 = 0;
      goto LAB_080bbb48;
    }
  }
  uVar1 = 0xffffffff;
LAB_080bbb48:
  return CONCAT44(in_lr,uVar1);
}

