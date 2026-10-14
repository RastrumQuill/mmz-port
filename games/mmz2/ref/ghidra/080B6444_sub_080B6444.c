// sub_080B6444 at 0x080B6444 (thumb)

undefined4 sub_080B6444(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 in_lr;
  
  puVar5 = (ushort *)(param_1 + 0x7e);
  uVar2 = *puVar5;
  uVar4 = uVar2 - 1;
  *puVar5 = uVar4;
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B6354(param_1);
    return in_lr;
  }
  uVar2 = uVar2 - 1;
  if (uVar2 < 0x18) {
    if ((*puVar5 & 1) == 0) {
LAB_080b64a8:
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    if (0x3f < uVar2) goto LAB_080b64b0;
    if ((*puVar5 & 3) == 0) goto LAB_080b64a8;
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080b64b0:
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080128D4(param_1);
    uVar6 = *(byte *)(param_1 + 0x12) + 4;
    *(char *)(param_1 + 0x12) = (char)uVar6;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x74) +
         (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff] * 4;
    iVar3 = (short)(&DAT_080ef450)[uVar6 & 0x7f] * 0x120;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  }
  return in_lr;
}

