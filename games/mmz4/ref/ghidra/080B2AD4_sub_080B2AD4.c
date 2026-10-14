// sub_080B2AD4 at 0x080B2AD4 (thumb)

undefined4 sub_080B2AD4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar3 = *(byte *)(param_1 + 10) & 0xfe;
  *(byte *)(param_1 + 10) = bVar3 | 2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = bVar3 | 6;
  sub_08005760(param_1 + 0x74,&DAT_088601c0,param_1 + 0x54,5);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80b2dad;
  sub_0801CF00(param_1,0xc600);
  *(undefined *)(param_1 + 0xb5) = 1;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x11) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
  if (((int)(uint)(byte)DAT_0202dada >> *(sbyte *)(param_1 + 0x10) & 1U) == 0) {
    uVar1 = sub_08100C9C(param_1 + 0x54,0,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined *)(param_1 + 0xd) = 4;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  iVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar2 + -0x2c00;
  sub_080B2BC4(param_1);
  return in_lr;
}

