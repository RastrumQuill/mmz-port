// sub_0800FC20 at 0x0800FC20 (thumb)

undefined4 sub_0800FC20(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) || (DAT_02022b60 == 4)) {
    if (DAT_02022868 != 0) {
      DAT_02022ae0 = DAT_02022ae0 & 0xfd;
      sub_08001DFC();
      DAT_02022868 = 0;
    }
    sub_08001EE8(0xe7);
    sub_08001EE8(0xe9);
    if (((DAT_02022ae0 & 1) != 0) && ((*(byte *)(iVar1 + 10) & 4) != 0)) {
      *(ushort *)(iVar1 + 0x8c) = (ushort)((int)(*(ushort *)(iVar1 + 0x8c) + 1) >> 1);
      DAT_02022ae0 = DAT_02022ae0 & 0xfe;
    }
  }
  return in_lr;
}

