// sub_08039B7C at 0x08039B7C (thumb)

undefined4 sub_08039B7C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  uVar3 = sub_08039F88(iVar6);
  cVar2 = sub_080EF11C(param_1,iVar6,*(undefined4 *)(&DAT_08336528 + (uVar3 & 0xff) * 4));
  if (cVar2 == '\0') {
    pbVar5 = (byte *)(param_1 + 0x67);
    bVar1 = *pbVar5;
    if ((bVar1 & 0x80) == 0) {
      if ((bVar1 & 1) == 0) {
        *pbVar5 = bVar1 & 0xfd;
      }
      else {
        if ((bVar1 & 2) == 0) {
          sub_080032EC(0x2b);
          *pbVar5 = *pbVar5 | 0x80;
        }
        *pbVar5 = *pbVar5 & 0xfe | 2;
      }
    }
    sub_080EF11C(param_1,iVar6,*(undefined4 *)(&DAT_08336530 + (uVar3 & 0xff) * 4));
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    uVar4 = *(undefined4 *)(iVar6 + 0x2c8);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x2c4);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    sub_080128D4(param_1);
  }
  else {
    sub_08039D34(param_1);
  }
  return in_lr;
}

