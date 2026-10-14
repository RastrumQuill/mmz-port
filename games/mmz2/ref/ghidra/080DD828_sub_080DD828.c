// sub_080DD828 at 0x080DD828 (thumb)

undefined8 sub_080DD828(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    iVar1 = sub_08006B84(DAT_0202f094);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined *)(iVar1 + 9) = 0xc;
      *(undefined4 *)(iVar1 + 0x14) = 0x80dd715;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(char *)(iVar1 + 0x10) = (char)uVar2;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
    }
    uVar2 = uVar2 + 1;
  } while ((iVar1 != 0) && (uVar2 < 4));
  return CONCAT44(in_lr,iVar1);
}

