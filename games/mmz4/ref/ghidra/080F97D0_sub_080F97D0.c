// sub_080F97D0 at 0x080F97D0 (thumb)

undefined4 sub_080F97D0(int param_1)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_24 = 0;
  psVar2 = &DAT_0886719c;
  iVar3 = 2;
  do {
    local_2c = *(int *)(param_1 + 0x54) + (int)*psVar2 * (uVar1 * 2 + -1);
    local_28 = *(int *)(param_1 + 0x58) + (int)psVar2[1];
    sub_080D4898(&local_2c,&UNK_08867148 + local_24,0,uVar1 | uVar1 << 4);
    local_24 = local_24 + 0x1c;
    psVar2 = psVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}

