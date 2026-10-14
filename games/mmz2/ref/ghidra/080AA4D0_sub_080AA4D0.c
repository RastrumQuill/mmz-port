// sub_080AA4D0 at 0x080AA4D0 (thumb)

undefined4 sub_080AA4D0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    iVar3 = *(int *)(param_1 + 0x2c);
    if ((*(char *)(iVar2 + 8) != '\0') || (cVar1 = sub_08022A9C(iVar2), cVar1 != '\0')) {
      *(undefined *)(iVar3 + 0xb4) = 1;
    }
  }
  return in_lr;
}

