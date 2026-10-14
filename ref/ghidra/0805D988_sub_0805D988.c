// sub_0805D988 at 0x0805D988 (thumb)

undefined4 sub_0805D988(int param_1)

{
  undefined4 in_lr;
  
  sub_08001FA8(param_1 + 0x2c,0x805db55);
  *(int *)(param_1 + 0x34) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0xb0) = 0x805db01;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0805D9E8(param_1);
  return in_lr;
}

