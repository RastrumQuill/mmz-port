// sub_0809BE8C at 0x0809BE8C (thumb)

undefined4 sub_0809BE8C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885dcd0);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0xb4) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0xb4);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0xb8);
  return in_lr;
}

