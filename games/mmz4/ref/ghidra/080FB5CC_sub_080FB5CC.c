// sub_080FB5CC at 0x080FB5CC (thumb)

undefined4 sub_080FB5CC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_0801CFF0(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
      sub_08002B10(0x17a);
      (&DAT_0202e8b4)[*(uint *)(&DAT_088676a8 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
           (byte)(1 << (*(uint *)(&DAT_088676a8 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7)) |
           (&DAT_0202e8b4)[*(uint *)(&DAT_088676a8 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
      sub_0801CF00(param_1,0xbc01);
      sub_0801CFF0(param_1);
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      sub_080DD218(param_1,param_1 + 0x54,8,0,1);
      sub_080DD218(param_1,param_1 + 0x54,8,1,0);
      *(undefined4 *)(param_1 + 100) = 900;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    if ((*(uint *)(param_1 + 100) & 7) == 0) {
      local_1c = *(int *)(param_1 + 0x54) + -0x1800;
      local_18 = *(int *)(param_1 + 0x58) + 0x1600;
      sub_0804933C(&local_1c,0,0);
      local_1c = *(int *)(param_1 + 0x54) + 0x1800;
      sub_0804933C(&local_1c,0,1);
    }
    iVar1 = *(int *)(param_1 + 100);
    *(int *)(param_1 + 100) = iVar1 + -1;
    if (iVar1 == 0) {
      sub_08002B5C(0x17a);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080FB6F0(param_1);
    }
  }
  return in_lr;
}

