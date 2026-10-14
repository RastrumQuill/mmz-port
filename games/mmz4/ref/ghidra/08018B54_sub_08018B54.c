// sub_08018B54 at 0x08018B54 (thumb)

undefined4 sub_08018B54(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x38) < 0x1e1) {
      uVar1 = 0xb40;
    }
    else {
      uVar1 = 0x870;
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    DAT_02000a40 = 0x3748;
    DAT_02000a42 = 0x1008;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x38) < 0x1e1) {
    iVar2 = 0x2d02e;
  }
  else {
    iVar2 = 0x2d02c;
  }
  if (-0x200 < (int)((uint)*(ushort *)(&DAT_02000ab0 + iVar2) << 0x10) >> 0x10) {
    iVar2 = (int)((uint)*(ushort *)(&DAT_02000ab0 + iVar2) << 0x10) >> 0x14;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    DAT_02000a42 = (short)(iVar2 >> 2) + 0x10U & 0x1f | 0x1000;
  }
  return in_lr;
}

