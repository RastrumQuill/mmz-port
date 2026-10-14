// sub_080A6B6C at 0x080A6B6C (thumb)

undefined4 sub_080A6B6C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c)) {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      iVar3 = (uVar2 * 2 >> 0x11 & 0xff) + 0x180;
    }
    else {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      iVar3 = -((uVar2 * 2 >> 0x11 & 0xff) + 0x180);
    }
    DAT_02022890 = uVar2 & 0x7fffffff;
    *(int *)(param_1 + 0x54) = iVar3;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe00;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_0809C980(param_1);
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) < 2) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

