// sub_08079FA0 at 0x08079FA0 (thumb)

undefined4 sub_08079FA0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  sub_080032EC(0x2a);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_1c = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + (uVar1 * 2 >> 0x11 & 7) * 0x100 + -0x700;
  sub_080AC60C(2,&local_1c);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0801DD2C(0,param_1 + 0x54);
  }
  else {
    sub_0801DD2C(0,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

