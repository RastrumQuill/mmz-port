// sub_080DD990 at 0x080DD990 (thumb)

undefined4 sub_080DD990(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  if (*(short *)(iVar2 + 0xdf0 + (uint)*(byte *)(param_1 + 0x11) * 2) == 0xff) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}

