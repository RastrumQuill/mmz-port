// sub_08018A58 at 0x08018A58 (thumb)

undefined4 sub_08018A58(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000a04)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_02000a04)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((((DAT_0202dad9 & 1) == 0) && (0x11d0 < *(int *)(param_1 + 0x34))) &&
     (0x1e0 < *(int *)(param_1 + 0x38))) {
    sub_08002B10(0x176);
    DAT_0202dad9 = DAT_0202dad9 | 1;
    sub_0801FE64(8,DAT_020359b8 + 0x54);
  }
  if ((((DAT_0202dad9 & 2) == 0) && (0x16d0 < *(int *)(param_1 + 0x34))) &&
     (*(int *)(param_1 + 0x38) < 0x1e0)) {
    sub_08002B10(0x176);
    DAT_0202dad9 = DAT_0202dad9 | 2;
    sub_0801FE64(8,DAT_020359b8 + 0x54);
  }
  if (*(int *)(param_1 + 0x38) < 0x1e1) {
    iVar1 = 0x2d02e;
  }
  else {
    iVar1 = 0x2d02c;
  }
  *(int *)(param_1 + 0x50) = (int)((uint)*(ushort *)(&DAT_02000ab0 + iVar1) << 0x10) >> 0x14;
  return in_lr;
}

