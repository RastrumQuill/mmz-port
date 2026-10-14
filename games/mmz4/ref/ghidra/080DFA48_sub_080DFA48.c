// sub_080DFA48 at 0x080DFA48 (thumb)

/* WARNING: Removing unreachable block (ram,0x080dfa6e) */

undefined4 sub_080DFA48(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)(param_1 + 0x74);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x78) +
       *(short *)((int)&DAT_08128c10 + (((uint)*pbVar1 << 0x1a) >> 0x17)) * 2;
  *pbVar1 = (char)(*pbVar1 + 1) + (char)((int)(*pbVar1 + 1) >> 6) * -0x40;
  return in_lr;
}

