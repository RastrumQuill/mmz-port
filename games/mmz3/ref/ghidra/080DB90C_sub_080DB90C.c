// sub_080DB90C at 0x080DB90C (thumb)

undefined4 sub_080DB90C(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  sub_08017700(param_1,0xdf00);
  *(undefined **)(param_1 + 0x30) = &DAT_0836dc7c;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef | 8;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
  uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (((int)(uint)DAT_02030154 >> (uint)*(byte *)(param_1 + 0x10) & 1U) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  *(undefined *)(param_1 + 0xf) = uVar1;
  sub_080DB990(param_1);
  return in_lr;
}

