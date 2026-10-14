// sub_080AF404 at 0x080AF404 (thumb)

undefined4 sub_080AF404(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0x11) == '\0') && (piVar2 = (int *)(param_1 + 0xc0), *piVar2 == 0)) &&
     ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_0885fc78);
    *piVar2 = iVar1;
    if (iVar1 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_0885fc58);
      *(int *)(*(int *)(param_1 + 0x2c) + 0xc0) = *piVar2;
    }
  }
  return in_lr;
}

