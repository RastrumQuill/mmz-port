// sub_080DAC78 at 0x080DAC78 (thumb)

undefined4 sub_080DAC78(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if ((DAT_0202ebb4 & 2) == 0) {
    puVar1 = &DAT_0834bb20;
  }
  else {
    puVar1 = &DAT_0834bae8;
  }
  *(undefined4 *)(param_1 + 0x58) =
       *(undefined4 *)(puVar1 + (uint)*(byte *)(param_1 + 0x10) * 8 + 4);
  sub_08012580(param_1);
  sub_080DACD8(param_1);
  return in_lr;
}

