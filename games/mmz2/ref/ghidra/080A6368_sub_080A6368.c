// sub_080A6368 at 0x080A6368 (thumb)

undefined4 sub_080A6368(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar5 + 0xc) < 2) {
    sub_080128D4(param_1);
    if ((*(char *)(param_1 + 0xd) == '\0') &&
       (bVar1 = *(byte *)(param_1 + 0xe), *(byte *)(param_1 + 0xe) = bVar1 + 1, 9 < bVar1)) {
      if (*(char *)(param_1 + 0x12) != '\0') {
        sub_080A623C(param_1,0,*(undefined *)(param_1 + 0x11),*(char *)(param_1 + 0x12) + -1);
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    puVar2 = (undefined *)(param_1 + 0xbc);
    iVar3 = 0xe;
    do {
      puVar2[1] = *puVar2;
      puVar2 = puVar2 + -1;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    *(undefined *)(param_1 + 0xb4) = *(undefined *)(param_1 + 0x13);
    *(undefined *)(param_1 + 0x13) = *(undefined *)(iVar5 + 0xbd);
    uVar4 = *(byte *)(param_1 + 0x13) + 0x80 & 0xff;
    iVar5 = (short)(&DAT_080ef450)[uVar4 + 0x40 & 0xff] * 0x180;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar5 >> 8);
    iVar5 = (short)(&DAT_080ef450)[uVar4] * 0x180;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar5 >> 8);
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x13);
    }
  }
  else if (*(char *)(iVar5 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A6474(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    *(undefined *)(param_1 + 0x10) = 1;
  }
  return in_lr;
}

