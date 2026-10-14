// sub_080BC9F8 at 0x080BC9F8 (thumb)

undefined4 sub_080BC9F8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0801CF00(param_1,0xee00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08861414,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    uVar1 = 0x80bcc7d;
  }
  else {
    sub_0801CF00(param_1,0xee01);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08861414,param_1 + 0x54,0x78);
    *(int *)(param_1 + 0xa0) = param_1;
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0xbd) = 0;
  iVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0x2000;
  *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x11) * -6 + -0x180;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080BCAFC(param_1);
  return in_lr;
}

