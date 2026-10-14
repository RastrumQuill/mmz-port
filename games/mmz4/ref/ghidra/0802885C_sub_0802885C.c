// sub_0802885C at 0x0802885C (thumb)

longlong sub_0802885C(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_lr;
  int local_10;
  int local_c;
  
  iVar2 = *(int *)(param_1 + 0xc);
  local_10 = (int)*(short *)(iVar2 + 2) << 8;
  local_c = (int)*(short *)(iVar2 + 6) << 8;
  iVar1 = *(int *)(param_1 + 0x10 + (uint)*(byte *)(iVar2 + 1) * 0x10);
  if (iVar1 != 0) {
    sub_080D4754(*(ushort *)(iVar2 + 4) & 0xff,iVar1 + 0x54,&local_10);
  }
  return (ulonglong)in_lr << 0x20;
}

