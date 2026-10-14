// sub_08073DCC at 0x08073DCC (thumb)

undefined4 sub_08073DCC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar2 + 0xbd);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar2 + 0xb8) +
       *(short *)((int)&DAT_080ef450 + ((bVar1 + 0xc0) * 0x1000000 >> 0x17)) * -2;
  return in_lr;
}

