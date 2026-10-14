// sub_08095A8C at 0x08095A8C (thumb)

undefined4 sub_08095A8C(int param_1)

{
  short sVar1;
  char cVar2;
  short *psVar3;
  undefined4 in_lr;
  
  psVar3 = (short *)(param_1 + 0xb8);
  cVar2 = *(char *)(param_1 + 0xb4) - (char)((ushort)*psVar3 >> 8);
  *(char *)(param_1 + 0xb4) = cVar2;
  *(char *)(param_1 + 0x24) = cVar2;
  sVar1 = *psVar3;
  *psVar3 = sVar1 + 0x200;
  if (0x4000 < (short)(sVar1 + 0x200)) {
    *psVar3 = 0x4000;
  }
  return in_lr;
}

