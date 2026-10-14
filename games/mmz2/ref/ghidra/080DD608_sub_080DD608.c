// sub_080DD608 at 0x080DD608 (thumb)

undefined8 sub_080DD608(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (param_3 - 1 < 0x51) {
    if (((((int)(uint)*(byte *)(param_2 + 0x233 + (param_3 >> 3)) >> (param_3 & 7) & 1U) == 0) ||
        (((int)(uint)*(byte *)(param_2 + 0x23e + (param_3 >> 3)) >> (param_3 & 7) & 1U) != 0)) ||
       (iVar1 = sub_080D5A34(param_2,param_3), iVar1 * 0x1000000 < 1)) {
      uVar2 = 0xcb00;
      if (param_3 != param_4) {
        sub_080127E4(param_1,0xcb00);
      }
      goto LAB_080dd66e;
    }
  }
  uVar2 = 0;
LAB_080dd66e:
  return CONCAT44(in_lr,uVar2);
}

