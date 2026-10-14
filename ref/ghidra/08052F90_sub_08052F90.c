// sub_08052F90 at 0x08052F90 (thumb)

undefined4 sub_08052F90(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  iVar3 = *(int *)(param_1 + 0x50) + 0x800;
  cVar1 = sub_080079CC(iVar2 + 0x400,iVar3);
  if ((cVar1 == '\0') && (cVar1 = sub_080079CC(iVar2 + -0x400,iVar3), cVar1 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

