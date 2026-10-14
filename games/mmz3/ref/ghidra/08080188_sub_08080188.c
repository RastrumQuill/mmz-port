// sub_08080188 at 0x08080188 (thumb)

undefined4 sub_08080188(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0x4c04);
        *(undefined *)(param_1 + 0x12) = 0x10;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 1;
        if (*(char *)(param_1 + 0xb8) == '\0') {
          *(undefined *)(param_1 + 0xe) = 0;
        }
        else {
          *(undefined *)(param_1 + 0x12) = 0;
          *(undefined *)(param_1 + 0xe) = 1;
        }
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_083646b0);
    *(undefined *)(param_1 + 0x25) = 0x18;
    *(undefined *)(param_1 + 0x13) = 0;
    if (*(char *)(param_1 + 0xb8) != '\0') {
      *(undefined *)(param_1 + 0x13) = 1;
      *(undefined *)(param_1 + 0xe) = 2;
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
    uVar4 = 0x280;
    *(undefined4 *)(param_1 + 0x5c) = 0x280;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0xfffffd80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    sub_08017700(param_1,0x4c01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x54) + 0x800;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar5 = *(int *)(param_1 + 0x54) + -0x800;
  }
  sVar3 = sub_08009A3C(iVar5,*(int *)(param_1 + 0x58) + -0x1000);
  if (sVar3 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (DAT_020302c0 + 0x77ff < *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = DAT_020302c0 + 0x77ff;
  }
  if (*(int *)(param_1 + 0x54) < DAT_020302c0 + -0x7800) {
    *(int *)(param_1 + 0x54) = DAT_020302c0 + -0x7800;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
  if (iVar5 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

