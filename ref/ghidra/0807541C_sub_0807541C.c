// sub_0807541C at 0x0807541C (thumb)

undefined4 sub_0807541C(undefined4 *param_1,undefined4 param_2,short param_3,short param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x41;
    *(undefined4 *)(iVar1 + 0x14) = 0x8075541;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f22;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f71;
    *(undefined *)(iVar1 + 0x10) = 3;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_2;
    *(int *)(iVar1 + 0x54) = (int)param_3;
    *(int *)(iVar1 + 0x58) = (int)param_4;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

