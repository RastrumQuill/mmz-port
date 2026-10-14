// sub_0805B5F8 at 0x0805B5F8 (thumb)

undefined4 sub_0805B5F8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1a;
    *(undefined4 *)(iVar1 + 0x14) = 0x805b64d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ed4;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f4a;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

