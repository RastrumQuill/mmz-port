// sub_080BBB50 at 0x080BBB50 (thumb)

undefined8 sub_080BBB50(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (param_3 - 1 < 0x4e) {
    if (((((int)(uint)*(byte *)(param_2 + 0x1ae + (param_3 >> 3)) >> (param_3 & 7) & 1U) == 0) ||
        (((int)(uint)*(byte *)(param_2 + 0x1b8 + (param_3 >> 3)) >> (param_3 & 7) & 1U) != 0)) ||
       (iVar1 = sub_080B47D8(param_2,param_3 & 0xff), iVar1 * 0x1000000 < 1)) {
      if (param_3 != param_4) {
        sub_080033F0(param_1 + 0x6c,0);
      }
      uVar2 = 0;
      goto LAB_080bbbb6;
    }
  }
  uVar2 = 0xffffffff;
LAB_080bbbb6:
  return CONCAT44(in_lr,uVar2);
}

