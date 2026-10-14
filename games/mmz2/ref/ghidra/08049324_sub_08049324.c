// sub_08049324 at 0x08049324 (thumb)

undefined4 sub_08049324(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa502);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if ((0 < iVar1) && (iVar1 = *(int *)(param_1 + 0xd8) + 0x1c00, iVar1 < iVar2)) {
    *(int *)(param_1 + 0x58) = iVar1;
    *(undefined *)(param_1 + 0xd) = 0x25;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

