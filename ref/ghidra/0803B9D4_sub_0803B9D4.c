// sub_0803B9D4 at 0x0803B9D4 (thumb)

undefined4 sub_0803B9D4(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x58);
    *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0x1f);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xd9) = 0x3c;
    *(undefined *)(param_1 + 0xe0) = 0;
    sub_08080420(*(undefined4 *)(param_1 + 0xcc));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  pcVar2 = (char *)(param_1 + 0xd9);
  if (*pcVar2 != '\0') {
    *pcVar2 = *pcVar2 + -1;
  }
  if (*(char *)(param_1 + 0x12) < '\0') {
    iVar3 = (0x100 - (uint)*(byte *)(param_1 + 0x12)) * 0xfa;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    cVar1 = -(char)((uint)iVar3 >> 8);
  }
  else {
    cVar1 = (char)((uint)*(byte *)(param_1 + 0x12) * 0xfa >> 8);
  }
  *(char *)(param_1 + 0x12) = cVar1;
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x12);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = sub_08007B30();
  if (iVar3 < 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) >> 1;
    iVar3 = -*(int *)(param_1 + 0x58) >> 1;
    *(int *)(param_1 + 0x58) = iVar3;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if ((iVar3 < 0x80) && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      sub_08029778(param_1,10);
    }
    iVar3 = *(int *)(param_1 + 0x58);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (0x100 < iVar3) {
      sub_0801412C(2,param_1 + 0x4c);
      sub_08001EAC(0x48);
    }
  }
  if ((*(char *)(param_1 + 0x13) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0xe0) + '\x01', *(char *)(param_1 + 0xe0) = cVar1, cVar1 == '\f'))
  {
    sub_0800561C(param_1 + 0x74,&DAT_082adbd0);
  }
  if (*(int *)(param_1 + 0x54) < 0) {
    iVar3 = sub_08008120(*(int *)(param_1 + 0x4c) + -0xc00,*(int *)(param_1 + 0x50) + -0x1000);
    if (iVar3 < 1) goto LAB_0803bb40;
  }
  else {
    iVar3 = sub_08007EE0(*(int *)(param_1 + 0x4c) + 0xc00,*(int *)(param_1 + 0x50) + -0x1000);
    if (-1 < iVar3) goto LAB_0803bb40;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
  *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
LAB_0803bb40:
  sub_0803AC44(param_1);
  if (((*(char *)(param_1 + 0x13) != '\0') && (*pcVar2 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    cVar1 = *(char *)(param_1 + 0xd8);
    while (cVar1 != '\0') {
      sub_0803A964(param_1);
      cVar1 = *(char *)(param_1 + 0xd8);
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  return in_lr;
}

