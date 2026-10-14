// sub_080838E8 at 0x080838E8 (thumb)

undefined4 sub_080838E8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x1c00);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885b468,param_1 + 0x54,0x10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8084769;
  uVar1 = sub_0808376C(param_1,1,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xd) = 2;
  return in_lr;
}

