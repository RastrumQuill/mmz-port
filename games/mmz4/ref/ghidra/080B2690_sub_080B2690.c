// sub_080B2690 at 0x080B2690 (thumb)

undefined4 sub_080B2690(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0xc0) == 0)) &&
     ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_08860190);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      if (*(byte *)(param_1 + 0x11) < 2) {
        local_14 = *(undefined4 *)(param_1 + 0x54);
        local_10 = *(int *)(param_1 + 0x58) + -0x1d00;
        sub_080D0894(2,&local_14);
        sub_0801CF00(param_1,0xc508);
      }
      else {
        sub_0801CF00(param_1,0xc50d);
      }
      sub_08005784(param_1 + 0x74,&DAT_08860140);
    }
  }
  return in_lr;
}

