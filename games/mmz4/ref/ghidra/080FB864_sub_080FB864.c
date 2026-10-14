// sub_080FB864 at 0x080FB864 (thumb)

undefined4 sub_080FB864(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    (&DAT_0202e8b4)[*(uint *)(&DAT_088677a4 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
         (byte)(1 << (*(uint *)(&DAT_088677a4 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7)) |
         (&DAT_0202e8b4)[*(uint *)(&DAT_088677a4 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
    (&DAT_02035880)[*(uint *)(&DAT_088677a4 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
         (byte)(1 << (*(uint *)(&DAT_088677a4 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7)) |
         (&DAT_02035880)[*(uint *)(&DAT_088677a4 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = param_1 + 0x54;
  sub_080D4898(iVar2,&DAT_088676e0,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar2,&DAT_088676fc,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar2,&DAT_08867718,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar2,&DAT_08867734,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar2,&DAT_08867750,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar2,&DAT_0886776c,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar2,&DAT_08867788,0,*(byte *)(param_1 + 10) & 0x10);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  local_24 = *(int *)(param_1 + 0x54) + (8 - (uVar1 * 2 >> 0x11 & 0xf)) * 0x100;
  local_20 = *(undefined4 *)(param_1 + 0x58);
  sub_080D0894(1,&local_24);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  local_24 = *(int *)(param_1 + 0x54) + (8 - (uVar1 * 2 >> 0x11 & 0xf)) * 0x100;
  local_20 = *(int *)(param_1 + 0x58) + -0x1400;
  sub_080D0894(1,&local_24);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  local_24 = *(int *)(param_1 + 0x54) + (8 - (uVar1 * 2 >> 0x11 & 0xf)) * 0x100;
  local_20 = *(int *)(param_1 + 0x58) + -0x2800;
  sub_080D0894(1,&local_24);
  sub_08002B10(0xa6);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

