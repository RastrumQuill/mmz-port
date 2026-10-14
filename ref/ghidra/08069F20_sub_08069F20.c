// sub_08069F20 at 0x08069F20 (thumb)

undefined4 sub_08069F20(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 2;
    *(undefined *)(param_1 + 0xc0) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xc0) + 1;
  *(byte *)(param_1 + 0xc0) = bVar1;
  if ((bVar1 & 3) < 2) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (((DAT_02004ca8 & 0x200) != 0) && (iVar2 = *(byte *)(param_1 + 0x12) - 1, -1 < iVar2)) {
    *(char *)(param_1 + 0x12) = (char)iVar2;
  }
  if (((DAT_02004ca8 & 0x100) != 0) && (uVar3 = *(byte *)(param_1 + 0x12) + 1, uVar3 < 4)) {
    *(char *)(param_1 + 0x12) = (char)uVar3;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar6 = *(int *)(iVar5 + 0x4c);
      iVar2 = -0xf00;
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x4c);
      iVar2 = 0xf00;
    }
    *(int *)(param_1 + 0x4c) = iVar6 + iVar2;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0x50);
    cVar4 = '\0';
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
      if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(iVar5 + 0x4c) + (char)(&DAT_082b0d7c)[*(byte *)(iVar5 + 0x70)] * 0x100;
      }
      else {
        iVar2 = *(int *)(iVar5 + 0x4c) + (char)(&DAT_082b0d7c)[*(byte *)(iVar5 + 0x70)] * -0x100;
      }
      *(int *)(param_1 + 0x4c) = iVar2;
      if (*(char *)(param_1 + 0x10) == '\x03') {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar2 = *(int *)(param_1 + 0x4c) +
                  (char)(&DAT_082b0d7c)[*(byte *)(param_1 + 0x70)] * 0x100;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x4c) +
                  (char)(&DAT_082b0d7c)[*(byte *)(param_1 + 0x70)] * -0x100;
        }
        *(int *)(iVar6 + 0x4c) = iVar2;
        *(int *)(iVar6 + 0x50) =
             *(int *)(param_1 + 0x50) + (char)(&DAT_082b0d8e)[*(byte *)(param_1 + 0x70)] * 0x100;
      }
    }
    else {
      if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
        iVar6 = *(int *)(iVar5 + 0x4c) + (char)(&DAT_082b0d7c)[*(byte *)(iVar5 + 0x70)] * 0x100;
      }
      else {
        iVar6 = *(int *)(iVar5 + 0x4c) + (char)(&DAT_082b0d7c)[*(byte *)(iVar5 + 0x70)] * -0x100;
      }
      *(int *)(param_1 + 0x4c) = iVar6;
    }
    *(int *)(param_1 + 0x50) =
         *(int *)(iVar5 + 0x50) + (char)(&DAT_082b0d8e)[*(byte *)(iVar5 + 0x70)] * 0x100;
    cVar4 = *(char *)(param_1 + 0x10);
  }
  if (cVar4 == *(char *)(param_1 + 0x12)) {
    if (((DAT_02004ca8 & 0x40) != 0) && (iVar5 = *(byte *)(param_1 + 0x13) - 1, -1 < iVar5)) {
      *(char *)(param_1 + 0x13) = (char)iVar5;
    }
    if (((DAT_02004ca8 & 0x80) != 0) && (uVar3 = *(byte *)(param_1 + 0x13) + 1, uVar3 < 5)) {
      *(char *)(param_1 + 0x13) = (char)uVar3;
    }
    if (((DAT_02004ca8 & 0x10) != 0) && (iVar5 = *(byte *)(param_1 + 0xf) - 1, -1 < iVar5)) {
      *(char *)(param_1 + 0xf) = (char)iVar5;
    }
    if (((DAT_02004ca8 & 0x20) != 0) && (uVar3 = *(byte *)(param_1 + 0xf) + 1, uVar3 < 3)) {
      *(char *)(param_1 + 0xf) = (char)uVar3;
    }
    if ((DAT_02004ca8 & 1) != 0) {
      bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar1;
      if (bVar1 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0xf) + *(char *)(param_1 + 0x13) * '\x03');
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  return in_lr;
}

