// sub_080DCFF8 at 0x080DCFF8 (thumb)

undefined4 sub_080DCFF8(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 1;
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    pbVar4 = (byte *)(param_1 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef | (byte)(uVar3 << 4);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 1;
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4d) = (char)uVar3;
    *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar3 << 5);
    if (*(char *)(iVar5 + 0xd) != '\x04') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0xc0;
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
    if (sVar2 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080DC9FC(param_1);
    }
  }
  return in_lr;
}

