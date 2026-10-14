// sub_08036164 at 0x08036164 (thumb)

undefined4 sub_08036164(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    iVar8 = *(int *)(param_1 + 0x4c);
    iVar6 = *(int *)(param_1 + 0xb8) - (iVar8 + -0xf000);
    if (iVar6 < 0x7801) {
      iVar7 = *(int *)(DAT_0202286c + 0x4c) - iVar8;
      if (iVar7 < 0x5001) {
        if ((iVar6 < 0xa001) &&
           (uVar5 = DAT_02022890 * 0x343fd + 0x269ec3, DAT_02022890 = uVar5 & 0x7fffffff,
           (uVar5 * 2 >> 0x11 & 1) != 0)) {
          uVar4 = sub_080C8AD0(iVar7,0x1a);
          *(undefined4 *)(param_1 + 0x54) = uVar4;
          *(undefined *)(param_1 + 0x13) = 2;
        }
        else {
          uVar4 = sub_080C8AD0(iVar8 - *(int *)(DAT_0202286c + 0x4c),0x1a);
          *(undefined4 *)(param_1 + 0x54) = uVar4;
          *(undefined *)(param_1 + 0x13) = 1;
        }
      }
      else {
        uVar4 = sub_080C8AD0(iVar7,0x34);
        *(undefined4 *)(param_1 + 0x54) = uVar4;
        *(undefined *)(param_1 + 0x13) = 0;
      }
    }
    else {
      uVar4 = sub_080C8AD0(*(int *)(DAT_0202286c + 0x4c) - iVar8,0x1a);
      *(undefined4 *)(param_1 + 0x54) = uVar4;
      *(undefined *)(param_1 + 0x13) = 2;
    }
    *(undefined4 *)(param_1 + 0x58) = 0xfffff640;
    *(undefined *)(param_1 + 0x12) = 0x10;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar6 = *(int *)(param_1 + 0x58) + 0x60;
  *(int *)(param_1 + 0x58) = iVar6;
  if (0x700 < iVar6) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

