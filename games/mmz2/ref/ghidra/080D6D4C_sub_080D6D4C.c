// sub_080D6D4C at 0x080D6D4C (thumb)

undefined4 sub_080D6D4C(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)iVar2 + (char)(iVar2 >> 5) * -0x20;
  piVar3 = (int *)(param_1 + 0xb4);
  iVar4 = *(int *)(param_1 + 0xbc) - *piVar3;
  iVar2 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb8);
  if (((iVar4 + 0x200U < 0x401) && (iVar2 + 0x200U < 0x401)) &&
     (iVar4 * iVar4 + iVar2 * iVar2 < 0x40001)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *piVar3 = *(int *)(param_1 + 0xbc);
    iVar2 = *(int *)(param_1 + 0xc0);
  }
  else {
    uVar1 = sub_08038E6C(iVar4,iVar2);
    *piVar3 = *piVar3 + (short)(&DAT_080ef450)[uVar1 + 0x40 & 0xff] * 2;
    iVar2 = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[uVar1 & 0xff] * 2;
  }
  *(int *)(param_1 + 0xb8) = iVar2;
  return in_lr;
}

