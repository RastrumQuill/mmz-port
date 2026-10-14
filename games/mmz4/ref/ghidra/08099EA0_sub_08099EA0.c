// sub_08099EA0 at 0x08099EA0 (thumb)

undefined4 sub_08099EA0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar1 = sub_08128A9C(*(undefined *)(param_1 + 0x11),3);
  sub_0801CF00(param_1,((uint)(iVar1 << 0x18) >> 8) + 0x61040000 >> 0x10);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885d9bc,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + (int)(char)(&DAT_0885da9a)[*(byte *)(param_1 + 0x11)];
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + (int)(char)(&DAT_0885daa0)[*(byte *)(param_1 + 0x11)];
  *(int *)(param_1 + 0x5c) =
       *(short *)((int)&DAT_08128c10 +
                 (((byte)(&DAT_0885da94)[*(byte *)(param_1 + 0x11)] + 0x40) * 0x1000000 >> 0x17)) *
       -0x380 >> 8;
  *(int *)(param_1 + 0x60) =
       (short)(&DAT_08128c10)[(byte)(&DAT_0885da94)[*(byte *)(param_1 + 0x11)]] * -0x380 >> 8;
  *(undefined *)(param_1 + 0x12) = 0;
  return in_lr;
}

