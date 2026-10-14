// sub_08107B04 at 0x08107B04 (thumb)

undefined4 sub_08107B04(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(iVar1 + 0xe18) == (uint)*(byte *)(param_1 + 0xb5)) &&
       (iVar2 = *(uint *)(iVar1 + 0xe18) + 1, *(int *)(iVar1 + 0xe18) = iVar2, iVar2 == 6)) {
      *(undefined4 *)(iVar1 + 0xe18) = 0xff;
      *(undefined4 *)(iVar1 + 0xe10) = 0;
      *(undefined4 *)(iVar1 + 0xe38) = 0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(iVar1 + 0xe1c) == (uint)*(byte *)(param_1 + 0xb5)) &&
       (iVar2 = *(uint *)(iVar1 + 0xe1c) + 1, *(int *)(iVar1 + 0xe1c) = iVar2, iVar2 == 6)) {
      *(undefined4 *)(iVar1 + 0xe1c) = 0xff;
      *(undefined4 *)(iVar1 + 0xe14) = 0;
      *(undefined4 *)(iVar1 + 0xe3c) = 0;
    }
  }
  return in_lr;
}

