// sub_08097FDC at 0x08097FDC (thumb)

undefined4 sub_08097FDC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar5 + 0xc) < 2) {
    cVar2 = *(char *)(param_1 + 0x10);
    if (cVar2 == '\0') {
      iVar3 = *(int *)(iVar5 + 0x4c);
      iVar4 = -0x4800;
    }
    else {
      iVar3 = *(int *)(iVar5 + 0x4c);
      iVar4 = 0x100;
    }
    *(int *)(param_1 + 0x4c) = iVar3 + iVar4;
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      if (cVar2 != '\0') {
        sub_08001904(0x3d,0x60);
      }
      if (*(char *)(param_1 + 0x12) == '\x12') {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined *)(param_1 + 0x12) = 0;
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (cVar2 != '\0') {
          DAT_02004f70 = 0x3f4c;
          DAT_02004f72 = 0x1010;
          sub_08001904(0x3c,0x40);
        }
        cVar2 = *(char *)(param_1 + 0x12) + '\x01';
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 == '6') {
          DAT_02004f70 = 0;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          *(undefined *)(param_1 + 0x12) = 0;
          sub_08001904(0x3d,0x60);
        }
      }
    }
    else if ((bVar1 == 2) && (cVar2 != '\0')) {
      sub_08001904(0x3e,0x60);
    }
    *(int *)(param_1 + 0x50) = *(int *)(iVar5 + 0x50) + -0x3b00;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0x11) = 1;
  }
  return in_lr;
}

