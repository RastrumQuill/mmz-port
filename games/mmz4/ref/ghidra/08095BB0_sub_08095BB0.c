// sub_08095BB0 at 0x08095BB0 (thumb)

undefined8 sub_08095BB0(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed90);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x1b;
    *(undefined4 *)(iVar1 + 0x14) = 0x8095c81;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0xb4) = 0;
    *(undefined *)(iVar1 + 0xb5) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

