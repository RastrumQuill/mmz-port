// sub_08099D48 at 0x08099D48 (thumb)

undefined4 sub_08099D48(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0x100;
    }
    else {
      uVar2 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x204) == 0) {
    bVar1 = *(byte *)(param_1 + 0xf);
    if (bVar1 == 1) {
      iVar4 = *(int *)(param_1 + 0x60) + -0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x12) << 1;
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if (0xf < bVar1) {
        *(undefined *)(param_1 + 0xf) = 3;
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar4 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar4;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
        *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x12) << 1;
        bVar1 = *(byte *)(param_1 + 0x12);
        *(byte *)(param_1 + 0x12) = bVar1 + 1;
        if (8 < bVar1) {
          sub_080127E4(param_1,0xe0e);
          sub_080128D4(param_1);
          *(undefined *)(param_1 + 0x13) = 5;
          *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        }
      }
    }
    else if ((bVar1 != 2) && (bVar1 == 3)) {
      psVar5 = (short *)(param_1 + 0xbe);
      *psVar5 = *psVar5 + 0x20;
      iVar4 = (int)*psVar5 * (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      iVar4 = iVar4 >> 8;
      *(int *)(param_1 + 0x5c) = iVar4;
      iVar3 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * (int)*psVar5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar3 >> 8;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = *(int *)(param_1 + 0x54) - iVar4;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x54) + iVar4;
      }
      *(int *)(param_1 + 0x54) = iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - (iVar3 >> 8);
      *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x12) << 1;
      if (*(char *)(param_1 + 0x12) != '\0') {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      }
      iVar4 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
      }
      if (0xf000 < iVar4) {
        *(undefined4 *)(param_1 + 0xc) = 4;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_08099B68(param_1);
  }
  return in_lr;
}

