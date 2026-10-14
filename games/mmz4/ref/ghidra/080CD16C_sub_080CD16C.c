// sub_080CD16C at 0x080CD16C (thumb)

undefined4 sub_080CD16C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088634b0,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  iVar2 = (int)*(short *)((int)&DAT_08128c10 +
                         (((byte)(&DAT_088634c8)[*(byte *)(param_1 + 0x11)] + 0x40) * 0x1000000 >>
                         0x17));
  *(int *)(param_1 + 0x5c) = iVar2 * 3;
  iVar1 = (short)(&DAT_08128c10)[(byte)(&DAT_088634c8)[*(byte *)(param_1 + 0x11)]] * -0x300;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar1 >> 8;
  if (*(int *)(param_1 + 0xb4) < *(int *)(DAT_0202dbf0 + 0x54)) {
    iVar2 = iVar2 * -0x300;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  *(undefined *)(param_1 + 0x12) = 0;
  sub_0801CF00(param_1,0x9d02);
  sub_080CD260(param_1);
  return in_lr;
}

