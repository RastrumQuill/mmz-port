// sub_080C9A14 at 0x080C9A14 (thumb)

undefined4 sub_080C9A14(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0836c450;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0836c458)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (((DAT_02002443 & 0x20) == 0) || (uVar1 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
    uVar1 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar2 = 8;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar2 = 0xc;
  }
  sub_0800736C(param_1 + 0x74,&DAT_0836c400,param_1 + 0x54,uVar2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(uint *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = 0x80c995d;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar2 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_080C9AF8(param_1);
  return in_lr;
}

