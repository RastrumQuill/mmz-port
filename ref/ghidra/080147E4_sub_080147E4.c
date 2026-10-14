// sub_080147E4 at 0x080147E4 (thumb)

undefined4 sub_080147E4(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x14c);
  if (uVar1 != 0) {
    iVar2 = 8 - ((int)((uint)(ushort)(&DAT_080c8ea4)[(uVar1 & 0x3f) * 4] << 0x10) >> 0x15);
    *(ushort *)(param_1 + 0x14c) = uVar1 + 1 & 0xff | 0x8000;
    DAT_03001ba0 = (char)(iVar2 >> 1) + ' ';
    DAT_03001ba1 = ' ' - (char)iVar2;
    DAT_03001ba2 = DAT_03001ba1;
  }
  return in_lr;
}

