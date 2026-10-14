// sub_080B5EC8 at 0x080B5EC8 (thumb)

undefined4 sub_080B5EC8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar2 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(byte *)(param_1 + 0x11) + 0x3b06);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0x11);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  puVar3 = (uint *)(iVar2 + 0xbc);
  if ((*puVar3 & 8) != 0) {
    *(undefined *)(param_1 + 0x22) = 1;
    sub_080127E4(param_1,*(byte *)(param_1 + 0x11) + 0x3b06);
    if (*(char *)(param_1 + 0x11) == '\0') {
      *puVar3 = *puVar3 & 0xfffffff7;
    }
  }
  if ((*puVar3 & 2) == 0) {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((((bVar1 & 1) == 0) || (uVar4 = sub_08015188(&DAT_0202ed18,iVar2 + 0x54), 0x1fff < uVar4))
       || ((*puVar3 & 0x10) != 0)) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    piVar7 = (int *)(&DAT_08346d4c + (uint)*(byte *)(param_1 + 0x11) * 4);
    iVar5 = ((DAT_0202ed50 * 2 + -1 >> 1) - *(int *)(iVar2 + 0x54)) * 2 * *piVar7;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + (iVar5 >> 8);
    iVar5 = DAT_0202ed54 * 2 + -1 >> 1;
    if ((*puVar3 & 0x40) == 0) {
      iVar6 = *(int *)(iVar2 + 0x58);
      iVar2 = (iVar5 - iVar6) * 2 * *piVar7;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      iVar2 = iVar2 >> 8;
    }
    else {
      iVar6 = *(int *)(iVar2 + 0x58);
      iVar2 = ((iVar5 + 0x1c00) - iVar6) * 2 * *piVar7;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      iVar2 = (iVar2 >> 8) + -0x1c00;
    }
    *(int *)(param_1 + 0x58) = iVar6 + iVar2;
    sub_080128D4(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

