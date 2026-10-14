// sub_080644EC at 0x080644EC (thumb)

undefined4 sub_080644EC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(byte *)(param_1 + 0x13) = *(byte *)(*(int *)(param_1 + 0x20) + 10) >> 4 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08064528();
  return in_lr;
}

