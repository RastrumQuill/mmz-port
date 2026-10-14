// sub_08051CB0 at 0x08051CB0 (thumb)

undefined4 sub_08051CB0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  bool bVar4;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
  sub_080055FC(param_1 + 0x74,&DAT_082af51c,param_1 + 0x4c,4);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x8052139;
  sub_080033F0(param_1 + 0x6c,1);
  *(undefined *)(param_1 + 0xd) = (&DAT_082af594)[*(byte *)(param_1 + 0x10)];
  iVar2 = *(int *)(DAT_0202286c + 0x4c);
  iVar3 = iVar2 - *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = 0 < iVar3;
  if (iVar2 == *(int *)(param_1 + 0x4c) || iVar3 < 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar4 = *(char *)(param_1 + 0x10) == '\x02';
  if (!bVar4) {
    iVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar2 + 0x800;
  }
  *(bool *)(param_1 + 0x11) = bVar4;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined *)(param_1 + 0x13) = 0;
  sub_08051D90(param_1);
  return in_lr;
}

