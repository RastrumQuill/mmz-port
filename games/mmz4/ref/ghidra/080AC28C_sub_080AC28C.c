// sub_080AC28C at 0x080AC28C (thumb)

undefined8 sub_080AC28C(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed90);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x4b;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ac2f9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0xb5) = 0;
    *(undefined *)(iVar1 + 0xb4) = 1;
    *(undefined *)(iVar1 + 0xb6) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

