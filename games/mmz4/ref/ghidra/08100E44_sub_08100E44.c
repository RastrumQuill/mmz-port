// sub_08100E44 at 0x08100E44 (thumb)

undefined4 sub_08100E44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if ((*(char *)(param_1 + 0x10) == '\x01') || (*(char *)(param_1 + 0x10) == '\x03')) {
    sub_0801CF00(param_1,0xc001);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_088684f0;
    *(undefined2 *)(param_1 + 0x26) = 0x201;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar3 = &DAT_088684d0;
  }
  else {
    sub_0801CF00(param_1,0xc000);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_088684e8;
    *(undefined2 *)(param_1 + 0x26) = 0x201;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar3 = &DAT_088684b8;
  }
  sub_08005760(param_1 + 0x74,puVar3,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_0801CFF0(param_1);
  *(undefined4 *)(param_1 + 0x98) = 0x81010f9;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x25) = 0x17;
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_088684f8 + (uint)*(byte *)(param_1 + 0x10) * 4);
  *(int *)(param_1 + 0x54) = iVar1;
  uVar2 = sub_08008534(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08100F68(param_1);
  return in_lr;
}

