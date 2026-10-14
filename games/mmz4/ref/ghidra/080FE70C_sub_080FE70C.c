// sub_080FE70C at 0x080FE70C (thumb)

undefined4 sub_080FE70C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) && (*(char *)(iVar1 + 8) == '\0')) {
    *(undefined4 *)(iVar1 + 0x1bc) = 0xfffffe80;
  }
  return in_lr;
}

