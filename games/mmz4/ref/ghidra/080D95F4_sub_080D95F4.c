// sub_080D95F4 at 0x080D95F4 (thumb)

undefined4 sub_080D95F4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar2 = (uVar3 * 2 + -1) * -0x180;
  *(int *)(param_1 + 0x5c) = iVar2;
  *(undefined *)(param_1 + 0x12) = 0x10;
  iVar2 = FUN_081288bc(iVar2,*(undefined *)(param_1 + 0x12));
  *(int *)(param_1 + 100) = -iVar2;
  sub_0801CC9C(param_1);
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar3 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar3 & 1) << 4);
  sub_0801CF00(param_1,0x2109);
  sub_080D9688(param_1);
  return in_lr;
}

