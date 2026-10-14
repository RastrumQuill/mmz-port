// sub_080DC1A0 at 0x080DC1A0 (thumb)

undefined4 sub_080DC1A0(int param_1)

{
  byte bVar1;
  short sVar2;
  short *psVar3;
  undefined4 in_lr;
  
  psVar3 = *(short **)(param_1 + 0x2c);
  if (*psVar3 < 10) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sVar2 = sub_080EF1E8((int)*psVar3,5);
  *(int *)(param_1 + 0x54) = sVar2 * 0x1800 + 0x1c00;
  sVar2 = sub_080EF150((int)*psVar3,5);
  *(int *)(param_1 + 0x58) = sVar2 * 0x1800 + 0x2400;
  sub_080128D4(param_1);
  return in_lr;
}

