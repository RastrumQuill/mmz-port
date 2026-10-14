// sub_0805F1DC at 0x0805F1DC (thumb)

undefined4 sub_0805F1DC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  sub_0801CF00(param_1,0xa525);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_08857518,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x8061f05;
  uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xcd) = 3;
  *(undefined *)(param_1 + 0xce) = 0;
  *(undefined *)(param_1 + 0xcf) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined *)(param_1 + 0xd0) = 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0805F290(param_1);
  return in_lr;
}

