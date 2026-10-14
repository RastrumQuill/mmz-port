// sub_080B4350 at 0x080B4350 (thumb)

undefined4 sub_080B4350(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0x10) * 9 + -0x36fa);
    uVar5 = *(byte *)(param_1 + 0xbc) ^ 1;
    if (uVar5 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar5 = uVar5 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    sub_080DD180(param_1 + 0x54,9,*(undefined *)(param_1 + 0x10),*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
  if (sVar3 != 0) {
    uVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x800;
    pbVar6 = (byte *)(param_1 + 0xbc);
    bVar1 = *pbVar6;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar1 = bVar1 | 0x10;
    }
    sub_080D4898(&local_1c,&DAT_0886037c,0,bVar1);
    if (*(char *)(param_1 + 0x10) == '\0') {
      bVar1 = *pbVar6;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        bVar1 = bVar1 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_088603b4,0,bVar1);
    }
    else {
      bVar1 = *pbVar6;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        bVar1 = bVar1 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_088603ec,0,bVar1);
    }
    sub_080D0894(1,&local_1c);
    sub_08002B10(0x2a);
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_0802AB70(3,0x1e,&local_1c);
    }
    else {
      sub_0802AB70(3,0x1d,&local_1c);
    }
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

