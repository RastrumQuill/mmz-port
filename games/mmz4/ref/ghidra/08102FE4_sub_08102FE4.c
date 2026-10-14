// sub_08102FE4 at 0x08102FE4 (thumb)

undefined4 sub_08102FE4(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar2 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar2 | 3;
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar2 = bVar2 & 0xef | 3;
  }
  else {
    bVar2 = bVar2 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar3 = *(byte *)(param_1 + 0x10) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0886888c,param_1 + 0x54,0x80);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8103161;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_0801CF00(param_1,0xcf00);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    uVar1 = 0xffffff00;
  }
  else {
    uVar1 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    uVar1 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  if (((int)(uint)(byte)(&DAT_0202e8b4)[(byte)(&DAT_08868888)[*(byte *)(param_1 + 0x11)] >> 3] >>
       ((byte)(&DAT_08868888)[*(byte *)(param_1 + 0x11)] & 7) & 1U) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 0xc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_08103100(param_1);
  return in_lr;
}

