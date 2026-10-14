// sub_080A92C8 at 0x080A92C8 (thumb)

undefined4 sub_080A92C8(int param_1)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x930d);
    pbVar3 = (byte *)(param_1 + 0xbc);
    *(byte *)(param_1 + 0x4c) = *pbVar3 & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar3 & 1) << 4);
    if ((*pbVar3 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080DD180(param_1 + 0x54,6,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
  if (sVar2 != 0) {
    iVar4 = param_1 + 0x54;
    bVar1 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar1 = bVar1 | 0x10;
    }
    sub_080D4898(iVar4,&DAT_0885f3e4,0,bVar1);
    sub_080D0894(1,iVar4);
    sub_08002B10(0x2a);
    sub_0802AB70(0,0x10,iVar4);
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,iVar4);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

