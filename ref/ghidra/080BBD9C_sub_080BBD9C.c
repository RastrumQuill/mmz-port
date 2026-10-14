// sub_080BBD9C at 0x080BBD9C (thumb)

undefined8 sub_080BBD9C(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    iVar1 = sub_08005458(DAT_02023210);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 9) = 0x30;
      *(undefined4 *)(iVar1 + 0x14) = 0x80bbc65;
      *(undefined2 *)(iVar1 + 0x1c) = 0x200;
      *(undefined *)(iVar1 + 0x1e) = 4;
      *(char *)(iVar1 + 0x10) = (char)uVar2;
      *(undefined4 *)(iVar1 + 0x20) = param_1;
    }
    uVar2 = uVar2 + 1;
  } while ((iVar1 != 0) && (uVar2 < 4));
  return CONCAT44(in_lr,iVar1);
}

