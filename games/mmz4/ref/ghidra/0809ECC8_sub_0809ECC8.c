// sub_0809ECC8 at 0x0809ECC8 (thumb)

undefined4 sub_0809ECC8(int param_1)

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
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885e208,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x809eef9;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  else {
    uVar1 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  sub_0809ED88(param_1);
  return in_lr;
}

