// sub_0806E29C at 0x0806E29C (thumb)

undefined4 sub_0806E29C(int param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x36;
    *(undefined4 *)(iVar1 + 0x14) = 0x806e35d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f0c;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f66;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(int *)(iVar1 + 0x20) = param_1;
    *(int *)(iVar1 + 0x24) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

