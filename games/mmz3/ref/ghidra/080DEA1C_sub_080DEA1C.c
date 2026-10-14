// sub_080DEA1C at 0x080DEA1C (thumb)

undefined4 sub_080DEA1C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if (*(char *)(param_1 + 0x11) == '\x04') {
    *(undefined4 *)(param_1 + 100) = 0x7006;
    uVar1 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x54) = uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0x7002;
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  return in_lr;
}

