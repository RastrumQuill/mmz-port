// sub_08039594 at 0x08039594 (thumb)

undefined4 sub_08039594(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x14) & 0x40) != 0) &&
      (iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c), *(char *)(iVar2 + 8) == '\x04')) &&
     (*(char *)(iVar2 + 9) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar3 = *(undefined4 *)(iVar2 + 0x58);
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(iVar1 + 0x68) = uVar3;
    *(char *)(iVar1 + 0xc1) = *(char *)(iVar1 + 0xc1) + '\x01';
  }
  return in_lr;
}

