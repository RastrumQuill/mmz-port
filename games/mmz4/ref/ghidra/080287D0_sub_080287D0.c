// sub_080287D0 at 0x080287D0 (thumb)

longlong sub_080287D0(int param_1)

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
    if (cVar1 != '\x01') goto LAB_08028804;
    uVar2 = *(ushort *)(param_1 + 0x14c);
    uVar3 = 0x4000;
  }
  *(ushort *)(param_1 + 0x14c) = uVar3 | uVar2;
LAB_08028804:
  return (ulonglong)in_lr << 0x20;
}

