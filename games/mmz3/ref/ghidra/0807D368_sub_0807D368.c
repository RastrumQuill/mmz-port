// sub_0807D368 at 0x0807D368 (thumb)

undefined4 sub_0807D368(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = sub_0800E41C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

