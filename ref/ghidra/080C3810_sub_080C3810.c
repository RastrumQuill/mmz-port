// sub_080C3810 at 0x080C3810 (thumb)

undefined8 sub_080C3810(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((('\x03' < *(char *)(*(int *)(param_1 + 0x14) + 0x71)) &&
      (*(char *)(*(int *)(param_1 + 0x14) + 0x72) < '\x02')) &&
     (iVar1 = sub_080BA788(param_1,*(undefined *)(*(int *)(param_1 + 0x10) + 0x17b)), iVar1 != 0)) {
    *(undefined *)(param_1 + 3) = 2;
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return CONCAT44(in_lr,2);
}

