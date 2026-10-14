// sub_080E05EC at 0x080E05EC (thumb)

undefined4 sub_080E05EC(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x234);
  iVar1 = 0;
  if (*pcVar2 == '\0') {
    iVar1 = 2;
  }
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[*(ushort *)((int)&DAT_0835e32c + iVar1)],7,
               0xc);
  iVar1 = 0;
  if (*pcVar2 == '\x01') {
    iVar1 = 2;
  }
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[*(ushort *)((int)&DAT_0835e330 + iVar1)],7,
               0xe);
  iVar1 = 0;
  if (*pcVar2 == '\x02') {
    iVar1 = 2;
  }
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[*(ushort *)((int)&DAT_0835e334 + iVar1)],6,
               0x10);
  return in_lr;
}

