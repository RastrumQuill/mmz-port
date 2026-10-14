// sub_080CA5BC at 0x080CA5BC (thumb)

undefined4 sub_080CA5BC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = (uint)(*(byte *)(param_1 + 0x10) >> 1);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08005760(param_1 + 0x74,&DAT_08862eac,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar4 = *(byte *)(param_1 + 0x10) & 1;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x5c) = (int)*(short *)(&DAT_08862ec4 + uVar5 * 4);
  }
  else {
    iVar3 = *(short *)(&DAT_08862ec4 + uVar5 * 4) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  if (*(byte *)(param_1 + 0x10) < 4) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x10);
    uVar2 = 0x80;
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0xff;
    uVar2 = 0x50;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(int *)(param_1 + 0x60) = (int)*(short *)(&DAT_08862ec6 + (uVar5 & 3) * 4);
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08862ed4 + uVar5 * 2));
  if (*(char *)(param_1 + 0x11) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x5c) * 0x17f;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080CA6EC(param_1);
  return in_lr;
}

