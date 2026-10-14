// sub_08023368 at 0x08023368 (thumb)

longlong sub_08023368(int param_1)

{
  byte bVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar2 + 1);
  if (bVar1 == 1) {
    sub_08004768((int)*(short *)(iVar2 + 4));
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sub_0800471C(*(undefined2 *)(iVar2 + 4));
    }
  }
  else if (bVar1 == 2) {
    sub_08004788((int)*(short *)(iVar2 + 4),*(undefined2 *)(iVar2 + 2));
  }
  return (ulonglong)in_lr << 0x20;
}

