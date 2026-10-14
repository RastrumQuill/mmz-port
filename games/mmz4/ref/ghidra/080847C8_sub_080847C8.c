// sub_080847C8 at 0x080847C8 (thumb)

undefined8 sub_080847C8(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080054CC(DAT_0202ed90);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 5;
    *(undefined4 *)(iVar1 + 0x14) = 0x8084a11;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

