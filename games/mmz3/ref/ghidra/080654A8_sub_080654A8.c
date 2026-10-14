// sub_080654A8 at 0x080654A8 (thumb)

undefined4 sub_080654A8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08017700(param_1,0x1304);
    sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 == 0) {
      sub_080B5F14(param_1 + 0x54,&DAT_08362430,0,*(byte *)(param_1 + 10) & 0x10);
    }
    else {
      sub_080B66AC(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1,*(undefined *)(param_1 + 0xbc))
      ;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2000;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar2 = 0x80;
    }
    else {
      uVar2 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080177F4(param_1);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  sVar1 = sub_08009A3C(iVar3,iVar4 + 0x800);
  if (sVar1 != 0) {
    iVar3 = param_1 + 0x54;
    pbVar5 = (byte *)(param_1 + 0xbc);
    bVar6 = *pbVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar6 = bVar6 | 0x10;
    }
    sub_080B5F14(iVar3,&DAT_083623dc,0,bVar6);
    bVar6 = *pbVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar6 = bVar6 | 0x10;
    }
    sub_080B5F14(iVar3,&DAT_083623f8,0,bVar6);
    bVar6 = *pbVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar6 = bVar6 | 0x10;
    }
    sub_080B5F14(iVar3,&DAT_08362414,0,bVar6);
    sub_080B2484(1,iVar3);
    sub_0800471C(0x2a);
    sub_08024FE4(4,iVar3);
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
    sub_080250C4(param_1,iVar3);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

