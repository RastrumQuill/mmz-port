// sub_08089B90 at 0x08089B90 (thumb)

undefined4 sub_08089B90(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_28 = *(undefined4 *)(param_1 + 0x54);
  local_24 = *(int *)(param_1 + 0x58) + -0x800;
  sub_080D0894(1,&local_28);
  sub_08002B10(0x2a);
  sub_0802AB70(3,0x17,param_1 + 0x54);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  uVar1 = uVar1 * 2 >> 0x11 & 3;
  local_20 = *(undefined4 *)(param_1 + 0x54);
  local_1c = *(undefined4 *)(param_1 + 0x58);
  sub_080D8678(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x1f0b,uVar1,1);
  sub_080D8678(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x1f0c,uVar1,1);
  sub_080D8678(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0x1f0d,uVar1,1);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

