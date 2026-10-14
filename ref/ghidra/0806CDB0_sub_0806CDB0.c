// sub_0806CDB0 at 0x0806CDB0 (thumb)

undefined4 sub_0806CDB0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x33;
    *(undefined4 *)(iVar1 + 0x14) = 0x806ce6d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f06;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f63;
    *(byte *)(iVar1 + 0x10) = param_2 & 0xf;
    *(byte *)(iVar1 + 0x11) = param_2 & 0xf0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

