// sub_080B3008 at 0x080B3008 (thumb)

undefined4 sub_080B3008(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        uVar5 = 0x1c0;
      }
      else {
        uVar5 = 0xfffffe40;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
      *(undefined *)(param_1 + 0x12) = 0x14;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if ((cVar1 == -1) || (sVar2 = sub_08008CFC(iVar6), sVar2 != 0)) {
      iVar6 = param_1 + 0x54;
      bVar7 = *(byte *)(param_1 + 0x11);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar7 = bVar7 | 0x10;
      }
      sub_080B0ACC(iVar6,&DAT_0833e89c,0,bVar7);
      bVar7 = *(byte *)(param_1 + 0x11);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar7 = bVar7 | 0x10;
      }
      sub_080B0ACC(iVar6,&DAT_0833e8b8,0,bVar7);
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      iVar4 = sub_080EF330(uVar3 * 2 >> 0x11,3);
      bVar7 = *(byte *)(param_1 + 0x11);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar7 = bVar7 | 0x10;
      }
      sub_080B0ACC(iVar6,&UNK_0833e8f0 + iVar4 * 0x1c,0,bVar7);
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      bVar7 = *(byte *)(param_1 + 0x11);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar7 = bVar7 | 0x10;
      }
      sub_080B0ACC(iVar6,&UNK_0833e944 + (uVar3 * 2 >> 0x11 & 3) * 0x1c,0,bVar7);
      sub_080AC60C(1,iVar6);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080B2AD0(param_1);
    }
  }
  return in_lr;
}

