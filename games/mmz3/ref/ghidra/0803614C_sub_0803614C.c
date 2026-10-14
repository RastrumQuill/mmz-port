// sub_0803614C at 0x0803614C (thumb)

undefined4 sub_0803614C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835ab9c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0835b428)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(undefined *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x14;
  sub_0800736C(param_1 + 0x74,&DAT_0835b3e0,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8036149;
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_080361E8(param_1);
  return in_lr;
}

