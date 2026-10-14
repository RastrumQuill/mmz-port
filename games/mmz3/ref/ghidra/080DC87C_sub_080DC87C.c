// sub_080DC87C at 0x080DC87C (thumb)

undefined4 sub_080DC87C(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xda00);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined *)(param_1 + 0x25) = 0x1d;
  piVar2 = (int *)(param_1 + 0xb4);
  *piVar2 = *(int *)(param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = DAT_020302c0 + 0x87ff;
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    *(uint *)(param_1 + 0xb8) = *piVar2 - ((uVar1 * 2 >> 0x11 & 0x3f) * 0x100 + 0x2000);
    *(uint *)(param_1 + 0x5c) = *(byte *)(param_1 + 10) & 0x10;
  }
  else {
    *(int *)(param_1 + 0x54) = DAT_020302c0 + -0x8800;
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    *(uint *)(param_1 + 0xb8) = *piVar2 + (uVar1 * 2 >> 0x11 & 0x3f) * 0x100 + 0x2000;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080DC798(param_1);
  return in_lr;
}

