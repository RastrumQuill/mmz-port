// sub_080758A4 at 0x080758A4 (thumb)

undefined4 sub_080758A4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x3201);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x5c) = 0x300;
  if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + -0x1400;
    *(undefined *)(param_1 + 0x12) = 0x70;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + 0x1400;
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + -0x2700;
  *(undefined2 *)(param_1 + 0xc0) = 0xffff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08075550(param_1);
  return in_lr;
}

