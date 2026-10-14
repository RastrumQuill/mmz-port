// sub_080C1E94 at 0x080C1E94 (thumb)

undefined4 sub_080C1E94(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  if (*(char *)(iVar3 + 0xd) == '\x0e') {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar1 = *(int *)(iVar3 + 0x54);
      iVar2 = -0x1b00;
    }
    else {
      iVar1 = *(int *)(iVar3 + 0x54);
      iVar2 = 0x1b00;
    }
    *(int *)(param_1 + 0x54) = iVar1 + iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x1000;
    *(undefined *)(param_1 + 0x12) = 6;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

