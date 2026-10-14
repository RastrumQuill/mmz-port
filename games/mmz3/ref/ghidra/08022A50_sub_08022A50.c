// sub_08022A50 at 0x08022A50 (thumb)

longlong sub_08022A50(int param_1)

{
  byte bVar1;
  uint in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (bVar1 == 1) {
    *(undefined2 *)(param_1 + 0x148) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x148) = 0x8000;
    }
  }
  else if (bVar1 == 2) {
    *(ushort *)(param_1 + 0x148) = (ushort)*(undefined4 *)(*(int *)(param_1 + 0xc) + 4) | 0x8000;
  }
  return (ulonglong)in_lr << 0x20;
}

