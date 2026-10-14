// sub_080AF13C at 0x080AF13C (thumb)

undefined4 sub_080AF13C(int param_1)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar8 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  uVar4 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  uVar5 = (uint)*(byte *)(param_1 + 0x78) << 0x18;
  if ((uVar5 >> 0x19 < (uVar4 & 0xff)) ||
     (((uVar5 >> 0x1a < (uVar4 & 0xff) && ((uVar4 & 1) == 0)) || ((uVar4 & 3) == 0)))) {
    bVar3 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar3;
  uVar4 = (uint)*(byte *)(iVar8 + 10);
  if ((*(byte *)(iVar8 + 10) & 0x40) == 0) {
    if (((uVar4 & 0x30) >> 4 & 1) == 0) {
      iVar7 = *(int *)(iVar8 + 0x54) + *(int *)(param_1 + 0x74);
    }
    else {
      iVar7 = *(int *)(iVar8 + 0x54) - *(int *)(param_1 + 0x74);
    }
    *(int *)(param_1 + 0x54) = iVar7;
    if (((*(byte *)(iVar8 + 10) & 0x30) >> 4 & 2) == 0) {
      iVar8 = *(int *)(iVar8 + 0x58) + *(int *)(param_1 + 0x78);
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x58) - *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x58) = iVar8;
  }
  else {
    sVar1 = (&DAT_080ef450)[0xff - *(byte *)(iVar8 + 0x24) & 0xff];
    sVar2 = (&DAT_080ef450)[0x13f - *(byte *)(iVar8 + 0x24) & 0xff];
    if (((uVar4 & 0x30) >> 4 & 1) == 0) {
      iVar7 = *(int *)(param_1 + 0x74);
    }
    else {
      iVar7 = -*(int *)(param_1 + 0x74);
    }
    if (((uVar4 & 0x30) >> 4 & 2) == 0) {
      iVar6 = *(int *)(param_1 + 0x78);
    }
    else {
      iVar6 = -*(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar8 + 0x54) + (iVar7 * sVar2 >> 8) + (iVar6 * sVar1 >> 8);
    *(int *)(param_1 + 0x58) =
         (*(int *)(iVar8 + 0x58) - (iVar7 * sVar1 >> 8)) + (iVar6 * sVar2 >> 8);
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

