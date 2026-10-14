// sub_080AEEAC at 0x080AEEAC (thumb)

undefined4 sub_080AEEAC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar3 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar3 | 3;
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar3 = bVar3 & 0xef | 3;
  }
  else {
    bVar3 = bVar3 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar3;
  uVar4 = *(byte *)(param_1 + 0x10) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = sub_080AEE44(param_1 + 0x54,*(undefined *)(param_1 + 0x10),1);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885fc10,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80af199;
  }
  else {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0x18;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xb6) = 0;
  sub_0801CF00(param_1,*(byte *)(param_1 + 0x11) | 0xa300);
  sub_080AF4A8(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 100) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar2 >> 8;
  }
  sub_080AEFC8(param_1);
  return in_lr;
}

