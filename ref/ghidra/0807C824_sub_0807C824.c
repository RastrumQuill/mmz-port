// sub_0807C824 at 0x0807C824 (thumb)

undefined4 sub_0807C824(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  DAT_02004f30 = DAT_02004f30 | 0x2400;
  sub_08001FA8(param_1 + 0x2c,0x807d611);
  *(int *)(param_1 + 0x34) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,&DAT_082b2160,param_1 + 0x4c,0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x807d585;
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  DAT_02004f38 = 0xa444;
  FUN_080c88ec(&DAT_082b21d0,&DAT_06002000,0xa0);
  DAT_02004f80 = DAT_02004f80 | 0x4000;
  DAT_02004f8d = 0xff;
  DAT_02004f8e = DAT_02004f8e & 0xfb;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x1e00;
    uVar4 = 2;
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x1e00;
    uVar4 = 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x2600;
  *(undefined *)(param_1 + 0x12) = 0xb4;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined2 *)(param_1 + 0xc4) = 0xffff;
  uVar2 = sub_08001EAC(0x2d);
  *(undefined2 *)(param_1 + 0xc4) = uVar2;
  sub_0807BE08(param_1,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_0807BEEC(param_1);
  return in_lr;
}

