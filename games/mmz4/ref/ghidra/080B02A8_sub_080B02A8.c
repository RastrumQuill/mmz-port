// sub_080B02A8 at 0x080B02A8 (thumb)

undefined4 sub_080B02A8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined *)(param_1 + 0x11) = 2;
  sub_0801CF00(param_1,0xb200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885fdb8,param_1 + 0x54,0xc);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80b0211;
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

