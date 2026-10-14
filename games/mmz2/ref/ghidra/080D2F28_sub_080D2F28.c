// sub_080D2F28 at 0x080D2F28 (thumb)

undefined4 sub_080D2F28(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0xbe) =
       *(undefined2 *)(&DAT_08349fcc + (uint)*(byte *)(param_1 + 0x10) * 2);
  *(short *)(param_1 + 0xc0) = *(short *)(&DAT_08349fcc + (uint)*(byte *)(param_1 + 0x10) * 2) + 1;
  *(undefined2 *)(param_1 + 0xc2) =
       *(undefined2 *)(&DAT_08349fcc + (uint)*(byte *)(param_1 + 0x10) * 2);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0834a008,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0xb9) = 1;
  *(undefined *)(param_1 + 0xb8) = 0x30;
  *(undefined2 *)(param_1 + 0xbc) = 0x100;
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080D292C(param_1);
  return in_lr;
}

