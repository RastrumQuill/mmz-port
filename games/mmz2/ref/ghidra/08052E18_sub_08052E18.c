// sub_08052E18 at 0x08052E18 (thumb)

undefined4 sub_08052E18(int param_1)

{
  undefined uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  undefined4 in_lr;
  undefined auStack_20 [8];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa60f);
    *(undefined *)(param_1 + 0xcd) = 0;
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    uVar1 = sub_080EF330(uVar3 * 2 >> 0x11,3);
    *(undefined *)(param_1 + 0xc2) = uVar1;
    *(undefined *)(param_1 + 0xce) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if ((bVar2 & 0xf) == 0) {
    sub_080032EC(0x96);
  }
  sub_08015518(1,param_1 + 0x54);
  bVar2 = *(byte *)(param_1 + 0x12);
  if (bVar2 != 10) {
    if (bVar2 < 0xb) {
      if (bVar2 != 2) {
        return in_lr;
      }
    }
    else if (bVar2 != 0x2a) {
      if (bVar2 != 0x58) {
        return in_lr;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
  }
  pbVar4 = (byte *)(param_1 + 0xcd);
  if ((*pbVar4 < 3) && (pbVar5 = (byte *)(param_1 + 0xcc), *pbVar5 < 6)) {
    uVar3 = sub_080579B4(param_1,auStack_20);
    pcVar6 = (char *)(param_1 + 0xc2);
    if (*pcVar6 == '\0') {
      iVar7 = sub_08079C14(param_1,auStack_20,2,0);
    }
    else {
      iVar7 = sub_08079C14(param_1,auStack_20,1,0);
    }
    if (iVar7 != 0) {
      *pbVar5 = *pbVar5 + 1;
      *pbVar4 = *pbVar4 + 1;
    }
    *(byte *)(param_1 + 0xce) = (byte)(1 << (uVar3 & 0xff)) | *(byte *)(param_1 + 0xce);
    *pcVar6 = *pcVar6 + -1;
  }
  return in_lr;
}

