// sub_0801CF48 at 0x0801CF48 (thumb)

undefined4 sub_0801CF48(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_1 + 0x10;
  *(undefined *)(param_1 + 0x10) = 1;
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x11) = 1;
  *(undefined *)(param_1 + 0x25) = 0;
  sub_0801C8A4(iVar1,param_2);
  sub_0801C8D4(iVar1,param_2);
  sub_0801C90C(iVar1,param_2);
  sub_0801C92C(iVar1,param_2);
  return in_lr;
}

