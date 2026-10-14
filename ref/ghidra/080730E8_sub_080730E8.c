// sub_080730E8 at 0x080730E8 (thumb)

undefined8 sub_080730E8(int param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0xe4);
  if ((*pcVar3 < '\x06') && (iVar1 = sub_08005458(DAT_02022e98), iVar1 != 0)) {
    *(undefined *)(iVar1 + 9) = 0x3d;
    *(undefined4 *)(iVar1 + 0x14) = 0x8073161;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f1a;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f6d;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    iVar1 = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

