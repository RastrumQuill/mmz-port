// sub_080A12F4 at 0x080A12F4 (thumb)

undefined8 sub_080A12F4(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xd;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a0fc1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202318a;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202312d;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

