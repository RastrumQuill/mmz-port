// sub_0809B62C at 0x0809B62C (thumb)

undefined4 sub_0809B62C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  sub_08088120();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,(bVar1 >> 4 & 1) + 0xf);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    iVar3 = -0x100 - (uVar2 * 2 >> 0x11 & 0xff);
  }
  else {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    iVar3 = (uVar2 * 2 >> 0x11 & 0xff) + 0x100;
  }
  DAT_02022890 = uVar2 & 0x7fffffff;
  *(int *)(param_1 + 0x54) = iVar3;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = ((uVar2 * 2 >> 0x11 & 0xf) + 0xe) * -0x40;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809B3B8(param_1);
  return in_lr;
}

