// sub_08059710 at 0x08059710 (thumb)

undefined4 sub_08059710(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,&UNK_082afc58 + (uint)*(byte *)(param_1 + 0x12) * 0x1c,param_1 + 0x4c,
               0x60);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(char *)(param_1 + 0x12) == '\a') {
    *(undefined4 *)(param_1 + 0xb0) = 0x8059821;
  }
  sub_08059778(param_1);
  return in_lr;
}

