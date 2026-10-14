// sub_080BCD40 at 0x080BCD40 (thumb)

undefined4 sub_080BCD40(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  sub_0801CD28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08005760(param_1 + 0x74,&DAT_08861488,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801CF00(param_1,0x4802);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    uVar1 = 0xc0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x180;
    uVar1 = 0x40;
  }
  *(undefined *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined *)(param_1 + 0xb8) = 1;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080BCDD8(param_1);
  return in_lr;
}

