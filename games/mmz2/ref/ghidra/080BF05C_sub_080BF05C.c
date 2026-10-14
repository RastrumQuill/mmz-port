// sub_080BF05C at 0x080BF05C (thumb)

undefined8 sub_080BF05C(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0xc;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = sub_08006B84(DAT_0202f084);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 0x47;
      *(undefined4 *)(iVar1 + 0x14) = 0x80bef49;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
      *(char *)(iVar1 + 0x10) = (char)iVar2;
    }
  } while ((iVar2 != 0) && (iVar1 != 0));
  return CONCAT44(in_lr,iVar1);
}

