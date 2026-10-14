// sub_0809BCDC at 0x0809BCDC (thumb)

undefined4 sub_0809BCDC(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0800DEB4(param_1,*(undefined4 *)(param_1 + 0x20));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,*(undefined *)(param_1 + 0x10));
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = 0 < *(int *)(param_1 + 0x54);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  *(int *)(param_1 + 0x4c) = iVar3 + 0xc00;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1000;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

