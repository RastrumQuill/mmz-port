// sub_080488D4 at 0x080488D4 (thumb)

undefined4 sub_080488D4(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 in_lr;
  
  sub_080297C0();
  psVar2 = (short *)(param_1 + 0xb8);
  sVar1 = *psVar2;
  *psVar2 = sVar1 + 4;
  if (0x1c0 < (short)(sVar1 + 4)) {
    *psVar2 = 0x1c0;
  }
  *(short *)(param_1 + 0x48) = *psVar2;
  *(short *)(param_1 + 0x4a) = *psVar2;
  if (*psVar2 == 0x1c0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08048930(param_1);
  }
  return in_lr;
}

