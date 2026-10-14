// sub_0801C4E4 at 0x0801C4E4 (thumb)

longlong sub_0801C4E4(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  if (cVar1 == '\0') {
    uVar3 = (ushort)*(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    uVar2 = 0x8000;
  }
  else {
    if (cVar1 != '\x01') goto LAB_0801c518;
    uVar2 = *(ushort *)(param_1 + 0x14c);
    uVar3 = 0x4000;
  }
  *(ushort *)(param_1 + 0x14c) = uVar3 | uVar2;
LAB_0801c518:
  return (ulonglong)in_lr << 0x20;
}

