// sub_0804A740 at 0x0804A740 (thumb)

undefined4 sub_0804A740(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0xdc) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = *(undefined *)(*(int *)(param_1 + 200) + 0xd3);
  }
  sub_080128D4(param_1);
  puVar3 = (ushort *)(param_1 + 0xdc);
  *puVar3 = *puVar3 + 1;
  bVar1 = *(byte *)(param_1 + 0xf);
  pbVar4 = (byte *)(param_1 + 0xd1);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *pbVar4 = *pbVar4 - 2;
      }
      else if (bVar1 != 3) goto LAB_0804a7d6;
      *pbVar4 = *pbVar4 + 1;
      if (300 < *puVar3) {
        *puVar3 = 0x78;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + -2;
      }
      goto LAB_0804a7d6;
    }
    if (bVar1 != 0) goto LAB_0804a7d6;
    *pbVar4 = *pbVar4 + 2;
  }
  bVar1 = *pbVar4;
  *pbVar4 = bVar1 - 1;
  if ((300 < *puVar3) && ((bVar1 - 1 & 0x7f) == 0)) {
    *(undefined *)(param_1 + 0xd) = 0x1f;
    *(undefined *)(param_1 + 0xe) = 0;
  }
LAB_0804a7d6:
  uVar5 = (uint)*pbVar4;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xd4) + (short)(&DAT_080ef450)[uVar5 + 0x40 & 0xff] * 0x58;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xd8) + (short)(&DAT_080ef450)[uVar5] * 0x30;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  iVar6 = (int)(uVar5 + 0x10 & 0xff) >> 5;
  iVar2 = iVar6 * 2;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar2 = iVar2 + 0x10;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar6 = iVar6 + 8;
  }
  bVar1 = (&DAT_0833b1d4)[iVar6];
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) !=
      *(short *)(&DAT_0833b1b4 + iVar2)) {
    sub_080127E4(param_1,*(short *)(&DAT_0833b1b4 + iVar2));
    sub_08006E08(param_1 + 0x74,&DAT_0833afe4 + (uint)bVar1 * 0x18);
  }
  sub_080128D4(param_1);
  return in_lr;
}

