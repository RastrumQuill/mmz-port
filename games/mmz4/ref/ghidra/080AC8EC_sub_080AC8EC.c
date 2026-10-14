// sub_080AC8EC at 0x080AC8EC (thumb)

undefined4 sub_080AC8EC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x7800;
  *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xbc) + 0x5000;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xba) = 0;
  *(undefined *)(param_1 + 0xbb) = 0;
  *(undefined *)(param_1 + 0xb7) = 1;
  sub_080AC9E4(param_1);
  return in_lr;
}

