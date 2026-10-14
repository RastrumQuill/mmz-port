// sub_080DFA20 at 0x080DFA20 (thumb)

undefined4 sub_080DFA20(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar2 = (uint)DAT_02030104;
  if ((DAT_02030104 & 0x20) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836e13c,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar2 & 0x20;
    *(undefined4 *)(param_1 + 0xc) = 1;
    uVar1 = *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar1 = *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}

