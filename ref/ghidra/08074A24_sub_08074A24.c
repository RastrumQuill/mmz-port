// sub_08074A24 at 0x08074A24 (thumb)

undefined8 sub_08074A24(undefined4 *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x3f;
    *(undefined4 *)(iVar1 + 0x14) = 0x8074a89;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f1e;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f6f;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return CONCAT44(in_lr,iVar1);
}

