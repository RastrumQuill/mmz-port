// sub_0804940C at 0x0804940C (thumb)

undefined4 sub_0804940C(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0xdc) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = *(undefined *)(param_1 + 0xd3);
    sub_080032EC(0x52);
  }
  puVar3 = (ushort *)(param_1 + 0xdc);
  *puVar3 = *puVar3 + 1;
  bVar1 = *(byte *)(param_1 + 0xf);
  pbVar6 = (byte *)(param_1 + 0xd2);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *pbVar6 = *pbVar6 - 2;
      }
      else if (bVar1 != 3) goto LAB_080494a4;
      *pbVar6 = *pbVar6 + 1;
      if (300 < *puVar3) {
        *puVar3 = 0x78;
        sub_080032EC(0x52);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + -2;
      }
      goto LAB_080494a4;
    }
    if (bVar1 != 0) goto LAB_080494a4;
    *pbVar6 = *pbVar6 + 2;
  }
  bVar1 = *pbVar6;
  *pbVar6 = bVar1 - 1;
  if ((300 < *puVar3) && ((bVar1 - 1 & 0x7f) == 0)) {
    *(undefined *)(param_1 + 0xd) = 0x27;
    *(undefined *)(param_1 + 0xe) = 0;
  }
LAB_080494a4:
  uVar4 = (uint)*pbVar6;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xd4) + (short)(&DAT_080ef450)[uVar4 + 0x40 & 0xff] * 0x58;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xd8) + (short)(&DAT_080ef450)[uVar4] * 0x30;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  iVar5 = (int)(uVar4 + 0x10 & 0xff) >> 5;
  iVar2 = iVar5 * 2;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar2 = iVar2 + 0x10;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar5 = iVar5 + 8;
  }
  bVar1 = (&DAT_0833af3c)[iVar5];
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) !=
      *(short *)(&DAT_0833af1c + iVar2)) {
    sub_080127E4(param_1,*(short *)(&DAT_0833af1c + iVar2));
    sub_08006E08(param_1 + 0x74,&DAT_0833ad0c + (uint)bVar1 * 0x18);
  }
  sub_080128D4(param_1);
  return in_lr;
}

