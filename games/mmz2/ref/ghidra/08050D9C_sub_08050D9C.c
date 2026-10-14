// sub_08050D9C at 0x08050D9C (thumb)

undefined4 sub_08050D9C(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 200);
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar6 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar10 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar8 = (iVar6 + iVar10 >> 1) + -0x3c00;
    iVar10 = 0x7fffffff;
    iVar9 = 0;
    iVar7 = 0;
    iVar6 = iVar8;
    do {
      iVar4 = *(int *)(DAT_0202e130 + 0x54) - iVar6;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < iVar10) {
        iVar10 = iVar4;
        iVar9 = iVar7;
      }
      iVar6 = iVar6 + 0x2800;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    *(int *)(param_1 + 0xbc) = iVar8 + iVar9 * 0x2800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x6800;
    iVar6 = sub_080EF150(*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x54),0x28);
    *(int *)(param_1 + 0x5c) = iVar6;
    *(bool *)(param_1 + 0x4c) = 0 < iVar6;
    bVar1 = 0 < *(int *)(param_1 + 0x5c);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_0809F624(uVar3,0x12);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0xa405);
    sub_08006E08(param_1 + 0x74,&DAT_0833baec);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar6;
  if (0x700 < iVar6) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  uVar5 = sub_0804ED6C(param_1);
  if ((uVar5 & 1) != 0) {
    sub_080032EC(0xe2);
    *(undefined *)(param_1 + 0xcd) = 0;
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x380;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffcc0;
    iVar6 = param_1 + 0x54;
    iVar10 = param_1 + 0x5c;
    sub_080A0344(param_1,iVar6,iVar10,1);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffc80;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffcc0;
    sub_080A0344(param_1,iVar6,iVar10,0);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
    uVar3 = 0xfffffe00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
    sub_080A0344(param_1,iVar6,iVar10,0);
  }
  sub_080128D4(param_1);
  return in_lr;
}

