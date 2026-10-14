// sub_0803E3F8 at 0x0803E3F8 (thumb)

undefined8 sub_0803E3F8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x28);
  } while (*(char *)(param_1 + 8) != '\0');
  return CONCAT44(in_lr,*(undefined4 *)(iVar1 + 0x28));
}

