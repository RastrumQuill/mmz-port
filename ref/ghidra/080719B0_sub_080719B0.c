// sub_080719B0 at 0x080719B0 (thumb)

undefined8 sub_080719B0(undefined4 *param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x3a;
    *(undefined4 *)(iVar1 + 0x14) = 0x8071a71;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f14;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f6a;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return CONCAT44(in_lr,iVar1);
}

