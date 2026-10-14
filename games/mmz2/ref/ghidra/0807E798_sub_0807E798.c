// sub_0807E798 at 0x0807E798 (thumb)

undefined4 sub_0807E798(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x5c04);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x5c) + 0x40;
    *(int *)(param_1 + 0x5c) = iVar2;
    if (iVar2 < 1) goto LAB_0807e7e0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c) + -0x40;
    *(int *)(param_1 + 0x5c) = iVar2;
    if (-1 < iVar2) goto LAB_0807e7e0;
  }
  bVar1 = true;
LAB_0807e7e0:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
  if (bVar1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

