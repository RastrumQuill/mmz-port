// sub_080735E0 at 0x080735E0 (thumb)

undefined4 sub_080735E0(int param_1,byte param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(&DAT_08859468 + (uint)param_2 * 4);
  if (*(byte *)(param_1 + 0xb8) == 0xff) {
    sub_0801CF00(param_1,uVar1 & 0xffff);
  }
  else if ((uVar1 != 0xae01) ||
          (*(int *)(&DAT_08859468 + (uint)*(byte *)(param_1 + 0xb8) * 4) != 0xae01)) {
    sub_0801CF00(param_1,uVar1 & 0xffff);
  }
  *(byte *)(param_1 + 0xb8) = param_2;
  return in_lr;
}

