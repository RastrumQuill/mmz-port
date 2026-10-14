// sub_0804EBF8 at 0x0804EBF8 (thumb)

undefined4 sub_0804EBF8(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0xb8) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  psVar3 = (short *)(param_1 + 0xb8);
  sVar1 = *psVar3;
  *psVar3 = sVar1 + -1;
  if (((short)(sVar1 + -1) == 0) && (iVar2 = sub_08005428(DAT_02022e98), iVar2 != 0)) {
    *(undefined *)(iVar2 + 9) = 7;
    *(undefined4 *)(iVar2 + 0x14) = 0x804e2f9;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022eae;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022f37;
    *(undefined *)(iVar2 + 0x10) = 4;
    *(undefined *)(iVar2 + 0x11) = 1;
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(int *)(iVar2 + 0x50) = *(int *)(param_1 + 0x50) + -0x3200;
    *psVar3 = 0x180;
  }
  return in_lr;
}

