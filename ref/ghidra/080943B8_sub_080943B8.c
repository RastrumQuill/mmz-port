// sub_080943B8 at 0x080943B8 (thumb)

undefined4 sub_080943B8(undefined4 *param_1,undefined param_2,short param_3,short param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x30;
    *(undefined4 *)(iVar1 + 0x14) = 0x8094425;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023070;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230f0;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x54) = (int)param_3;
    *(int *)(iVar1 + 0x58) = (int)param_4;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

