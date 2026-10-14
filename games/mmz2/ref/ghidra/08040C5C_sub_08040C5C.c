// sub_08040C5C at 0x08040C5C (thumb)

undefined4 sub_08040C5C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa21b);
    sub_080032EC(0x47);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0xfffffaab;
    }
    else {
      uVar3 = 0x555;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) != '\0') goto LAB_08040cda;
    sub_080032EC(0x47);
    cVar2 = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0x71) == '\0') goto LAB_08040cda;
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0xf) = cVar2;
LAB_08040cda:
  if ('\x01' < *(char *)(param_1 + 0x71)) {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 1) != 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_14 = 0x2400;
      }
      else {
        local_14 = -0x2400;
      }
      local_14 = iVar4 + local_14;
      local_10 = *(undefined4 *)(param_1 + 0x58);
      sub_080AC60C(3,&local_14);
    }
  }
  sub_08006E08(param_1 + 0x74,
               &DAT_0833a2b0 + (uint)(byte)(&DAT_0833a510)[*(char *)(param_1 + 0x71)] * 0x18);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xc4) + 0x54);
    if (*(int *)(param_1 + 0x54) < iVar4) {
      *(int *)(param_1 + 0x54) = iVar4;
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0xe0) + 0x54);
    if (iVar4 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar4;
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

