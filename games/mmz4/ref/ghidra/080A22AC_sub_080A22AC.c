// sub_080A22AC at 0x080A22AC (thumb)

undefined4 sub_080A22AC(int param_1)

{
  undefined uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = *(undefined *)(param_1 + 0x10);
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar3 = bVar2 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb4) = 0x78;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_0801CC9C(param_1);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  sub_0801CF00(param_1,0x8402);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885e7ec,param_1 + 0x54,10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80a29d9;
  if (*(short *)(DAT_0202ed90 + 10) < 6) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    uVar3 = 0;
    do {
      sub_080A2A1C(param_1,param_1 + 0x54,uVar1,uVar3 & 0xff);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 6);
    sub_080A23E4(param_1);
  }
  return in_lr;
}

