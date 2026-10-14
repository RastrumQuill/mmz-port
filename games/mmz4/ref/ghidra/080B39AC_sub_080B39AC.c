// sub_080B39AC at 0x080B39AC (thumb)

undefined4 sub_080B39AC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0xb5) != '\0') && (*(int *)(param_1 + 0x2c) == 0)) &&
     ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_08860318);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_08860248);
      sub_0801CF00(param_1,0xc704);
    }
  }
  return in_lr;
}

