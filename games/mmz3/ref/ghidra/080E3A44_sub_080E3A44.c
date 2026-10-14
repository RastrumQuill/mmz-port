// sub_080E3A44 at 0x080E3A44 (thumb)

undefined4 sub_080E3A44(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)(param_1 + 0xc0);
  iVar1 = *piVar2;
  *piVar2 = iVar1 + 0x30;
  if (0x27ff < iVar1 + 0x30) {
    *piVar2 = 0x2800;
    *(undefined *)(param_1 + 0xbc) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

