// sub_08061D38 at 0x08061D38 (thumb)

undefined4 sub_08061D38(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0xc0);
  if ((*pcVar3 < '\x04') && (iVar1 = sub_08005428(DAT_02022e98), iVar1 != 0)) {
    *(undefined *)(iVar1 + 9) = 0x24;
    *(undefined4 *)(iVar1 + 0x14) = 0x8061da5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ee8;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f54;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *pcVar3 = *pcVar3 + '\x01';
  }
  return in_lr;
}

