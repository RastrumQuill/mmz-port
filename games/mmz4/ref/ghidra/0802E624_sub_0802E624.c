// sub_0802E624 at 0x0802E624 (thumb)

undefined4 sub_0802E624(int param_1,uint param_2)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  while( true ) {
    psVar2 = (short *)(param_1 + 0x198 + uVar3 * 2);
    sVar1 = *psVar2;
    if (sVar1 == -1) {
      *psVar2 = (&DAT_02000c84)[(param_2 & 0xffff) * 0xc];
      if (((&DAT_02000c86)[(param_2 & 0xffff) * 0xc] & 0x200) != 0) {
        *(undefined *)(param_1 + 0x1cf) = 1;
      }
      return in_lr;
    }
    if (sVar1 == (&DAT_02000c84)[(param_2 & 0xffff) * 0xc]) break;
    uVar3 = uVar3 + 1;
    if (0xf < uVar3) {
      return in_lr;
    }
  }
  return in_lr;
}

