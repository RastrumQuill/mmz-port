// sub_080C83F0 at 0x080C83F0 (thumb)

undefined8 sub_080C83F0(undefined4 param_1,undefined param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c84a9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(undefined *)(iVar1 + 0xbc) = param_4;
  }
  return CONCAT44(in_lr,iVar1);
}

