// sub_080C6E3C at 0x080C6E3C (thumb)

undefined8 sub_080C6E3C(undefined4 param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_080054CC(DAT_0202ed94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1b;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c6e95;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

