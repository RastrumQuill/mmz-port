// sub_080C0570 at 0x080C0570 (thumb)

undefined4 sub_080C0570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x33;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c05bd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_3;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return in_lr;
}

