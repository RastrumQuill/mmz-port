// sub_0805E1B4 at 0x0805E1B4 (thumb)

undefined4 sub_0805E1B4(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b034c)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
  sub_080055FC(param_1 + 0x74,&DAT_082b0270,param_1 + 0x4c,8);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x805e4c5;
  sub_080033F0(param_1 + 0x6c,0);
  iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = iVar3 + 0x100;
  bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x4c);
  sub_0805E280(param_1);
  return in_lr;
}

