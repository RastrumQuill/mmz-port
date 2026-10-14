// sub_08054A54 at 0x08054A54 (thumb)

undefined4 sub_08054A54(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  undefined4 in_lr;
  undefined auStack_20 [8];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa620);
    *(undefined *)(param_1 + 0xcd) = 0;
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    *(byte *)(param_1 + 0xc2) = (byte)(uVar2 * 2 >> 0x11) & 3;
    *(undefined *)(param_1 + 0xce) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 0xf) == 0) {
    sub_080032EC(0x97);
  }
  sub_08015518(4,param_1 + 0x54);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0x2a) {
    if (bVar1 < 0x2b) {
      if ((bVar1 != 2) && (bVar1 != 10)) {
        return in_lr;
      }
    }
    else if (bVar1 != 0x4a) {
      if (bVar1 != 0x80) {
        return in_lr;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
  }
  pbVar3 = (byte *)(param_1 + 0xcd);
  if ((*pbVar3 < 4) && (pbVar4 = (byte *)(param_1 + 0xcc), *pbVar4 < 6)) {
    uVar2 = sub_080579B4(param_1,auStack_20);
    pcVar5 = (char *)(param_1 + 0xc2);
    if (*pcVar5 == '\0') {
      iVar6 = sub_08079C14(param_1,auStack_20,2,0);
    }
    else {
      iVar6 = sub_08079C14(param_1,auStack_20,1,0);
    }
    if (iVar6 != 0) {
      *pbVar4 = *pbVar4 + 1;
      *pbVar3 = *pbVar3 + 1;
    }
    *(byte *)(param_1 + 0xce) = (byte)(1 << (uVar2 & 0xff)) | *(byte *)(param_1 + 0xce);
    *pcVar5 = *pcVar5 + -1;
  }
  return in_lr;
}

