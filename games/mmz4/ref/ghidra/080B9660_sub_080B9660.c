// sub_080B9660 at 0x080B9660 (thumb)

undefined4 sub_080B9660(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\x03') {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        iVar1 = *(int *)(param_1 + 0xb8);
        iVar2 = 0x1600;
      }
      else {
        iVar1 = *(int *)(param_1 + 0xb8);
        iVar2 = -0x1600;
      }
      *(int *)(param_1 + 0xc0) = iVar1 + iVar2;
      *(char *)(param_1 + 0xb7) = '\x01';
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(undefined *)(param_1 + 0xb6) = 1;
    *(undefined4 *)(param_1 + 0x28) = param_2;
  }
  return in_lr;
}

