// sub_080E24B4 at 0x080E24B4 (thumb)

undefined8 sub_080E24B4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_02030638);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 3;
    *(undefined4 *)(iVar1 + 0x14) = 0x80e2505;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(int *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x2c) = param_2;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = *(undefined *)(param_1 + 0x11);
  }
  return CONCAT44(in_lr,iVar1);
}

