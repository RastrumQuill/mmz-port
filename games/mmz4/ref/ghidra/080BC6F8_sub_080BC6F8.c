// sub_080BC6F8 at 0x080BC6F8 (thumb)

undefined4 sub_080BC6F8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  sub_08005760(param_1 + 0x74,&DAT_088613d0,param_1 + 0x54,0x14);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80bc8c1;
  sub_0801CF00(param_1,0xeb00);
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar3 = *(byte *)(param_1 + 0x10) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = 0xfffffe00;
  }
  else {
    uVar2 = 0x200;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  sub_08002B10(0x6b);
  sub_080BC7C4(param_1);
  return in_lr;
}

