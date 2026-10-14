// sub_0806BA20 at 0x0806BA20 (thumb)

undefined4 sub_0806BA20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar1 = *(int *)(iVar2 + 0x4c) + -0xe00;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x4c) + 0xe00;
    }
    *(int *)(param_1 + 0x4c) = iVar1;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  }
  else {
    if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(iVar2 + 0x4c) + (char)(&DAT_082b0d7c)[*(byte *)(iVar2 + 0x70)] * 0x100;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x4c) + (char)(&DAT_082b0d7c)[*(byte *)(iVar2 + 0x70)] * -0x100;
    }
    *(int *)(param_1 + 0x4c) = iVar1;
    *(int *)(param_1 + 0x50) =
         *(int *)(iVar2 + 0x50) + (char)(&DAT_082b0d8e)[*(byte *)(iVar2 + 0x70)] * 0x100;
    if (*(char *)(param_1 + 0x10) == '\x03') {
      iVar2 = *(int *)(param_1 + 0x24);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar1 = *(int *)(param_1 + 0x4c) + (char)(&DAT_082b0d7c)[*(byte *)(param_1 + 0x70)] * 0x100;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x4c) + (char)(&DAT_082b0d7c)[*(byte *)(param_1 + 0x70)] * -0x100
        ;
      }
      *(int *)(iVar2 + 0x4c) = iVar1;
      *(int *)(iVar2 + 0x50) =
           *(int *)(param_1 + 0x50) + (char)(&DAT_082b0d8e)[*(byte *)(param_1 + 0x70)] * 0x100;
    }
  }
  return in_lr;
}

