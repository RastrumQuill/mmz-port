// sub_080ABE84 at 0x080ABE84 (thumb)

undefined8 sub_080ABE84(undefined4 param_1,undefined param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x3e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80abedd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined2 *)(iVar1 + 0xb4) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

