// sub_08107A74 at 0x08107A74 (thumb)

undefined4 sub_08107A74(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = *(int *)(param_1 + 0x2c);
    bVar1 = *(byte *)(param_1 + 0xb5);
    *(uint *)(iVar2 + 0xe18) = (uint)bVar1;
    if (bVar1 == 0) {
      *(undefined4 *)(iVar2 + 0xe18) = 1;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c);
    bVar1 = *(byte *)(param_1 + 0xb5);
    *(uint *)(iVar2 + 0xe1c) = (uint)bVar1;
    if (bVar1 == 0) {
      *(undefined4 *)(iVar2 + 0xe1c) = 1;
    }
  }
  return in_lr;
}

