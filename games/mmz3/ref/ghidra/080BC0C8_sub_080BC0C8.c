// sub_080BC0C8 at 0x080BC0C8 (thumb)

undefined4 sub_080BC0C8(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_080070D8(DAT_0203062c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 0x25;
      *(undefined4 *)(iVar1 + 0x14) = 0x80bc315;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 2;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
      *(char *)(iVar1 + 0x12) = (char)iVar2;
      *(char *)(iVar1 + 0x13) = param_2 + (char)iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return in_lr;
}

