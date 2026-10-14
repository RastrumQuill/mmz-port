// sub_0807BB3C at 0x0807BB3C (thumb)

undefined4 sub_0807BB3C(undefined4 *param_1,undefined param_2,short param_3,short param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x13;
    *(undefined4 *)(iVar1 + 0x14) = 0x807bed5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fa6;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ff3;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(int *)(iVar1 + 0x54) = (int)param_3;
    *(int *)(iVar1 + 0x58) = (int)param_4;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

