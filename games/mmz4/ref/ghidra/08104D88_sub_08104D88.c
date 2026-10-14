// sub_08104D88 at 0x08104D88 (thumb)

undefined4 sub_08104D88(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar1 + 0xb4) == '\0') {
    *(char *)(iVar1 + 0xb4) = '\x01';
  }
  if ((*(char *)(iVar1 + 0x11) == '\x04') && ((*(uint *)(iVar1 + 0x8c) & 0x200) != 0)) {
    sub_080D0894(1,iVar1 + 0x54);
    *(int *)(*(int *)(iVar1 + 0x28) + 0xdd4) = *(int *)(*(int *)(iVar1 + 0x28) + 0xdd4) + 8;
  }
  return in_lr;
}

