// sub_080287B4 at 0x080287B4 (thumb)

undefined4 sub_080287B4(int param_1,short param_2)

{
  short *psVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  psVar1 = (short *)(param_1 + 0x16c);
  while( true ) {
    if (*psVar1 == -1) {
      *psVar1 = param_2;
      return in_lr;
    }
    if (*psVar1 == param_2) break;
    psVar1 = psVar1 + 1;
    uVar2 = uVar2 + 1;
    if (0xf < uVar2) {
      return in_lr;
    }
  }
  return in_lr;
}

