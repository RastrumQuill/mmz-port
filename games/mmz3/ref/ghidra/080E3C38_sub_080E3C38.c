// sub_080E3C38 at 0x080E3C38 (thumb)

undefined8 sub_080E3C38(int param_1,undefined param_2,undefined param_3,char param_4)

{
  int iVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_02030638);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 8;
    *(undefined4 *)(iVar1 + 0x14) = 0x80e3cad;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(int *)(iVar1 + 0xb4) = param_1;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(char *)(iVar1 + 0xc1) = param_4;
    if (param_4 == '\0') {
      uVar2 = *(undefined *)(param_1 + 0xb4);
    }
    else {
      uVar2 = *(undefined *)(param_1 + 0xb5);
    }
    *(undefined *)(iVar1 + 0xb8) = uVar2;
  }
  return CONCAT44(in_lr,iVar1);
}

