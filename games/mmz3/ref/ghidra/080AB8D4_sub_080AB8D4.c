// sub_080AB8D4 at 0x080AB8D4 (thumb)

undefined4 sub_080AB8D4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  iVar2 = *(int *)(DAT_0202f5c0 + 0x54);
  *(int *)(param_1 + 0x54) = iVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(iVar3 + 0x54);
    if (iVar2 <= iVar1) goto LAB_080ab904;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x54);
    if (iVar1 <= iVar2) goto LAB_080ab904;
  }
  *(int *)(param_1 + 0x54) = iVar1;
LAB_080ab904:
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

