// sub_08032328 at 0x08032328 (thumb)

undefined4 sub_08032328(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,4);
    *(undefined4 *)(param_1 + 0x54) = 0x100;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xffffff00;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0807A5F8(param_1,2,0);
    sub_08001EAC(0x37);
  }
  sub_080297C0(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 1;
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 0xb;
    }
  }
  return in_lr;
}

