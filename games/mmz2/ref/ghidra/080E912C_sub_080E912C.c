// sub_080E912C at 0x080E912C (thumb)

undefined8 sub_080E912C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar3 = *(byte *)(param_1 + 6) - 1;
  if (iVar3 < 1) {
    iVar6 = *(int *)(param_1 + 0x10);
    sVar2 = *(short *)(iVar6 + 0xa4);
    uVar4 = sub_08022AF0(iVar6);
    iVar3 = sub_08037AAC(iVar6,*(byte *)(param_1 + 5) + 1);
    pbVar5 = (byte *)(iVar6 + 0x206 + iVar3);
    bVar1 = *pbVar5;
    iVar3 = sVar2 + 1;
    *(short *)(iVar6 + 0xa4) = (short)iVar3;
    iVar7 = bVar1 - 1;
    *pbVar5 = (byte)iVar7;
    sub_080032EC(0x1f);
    if ((iVar3 < (int)(uVar4 & 0xff)) && (iVar7 != 0)) {
      *(undefined *)(param_1 + 6) = 4;
    }
    else {
      *(undefined *)(param_1 + 1) = 0;
      sub_08037A60(iVar6);
      sub_08037B4C(iVar6);
    }
  }
  else {
    *(char *)(param_1 + 6) = (char)iVar3;
  }
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080E96DC(param_1);
  }
  return CONCAT44(in_lr,2);
}

