// sub_0808361C at 0x0808361C (thumb)

undefined4 sub_0808361C(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4);
    sub_0801260C(param_1);
    *(undefined *)(param_1 + 0x24) = 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_080127E4(param_1,0x6e02);
    sub_08006E08(param_1 + 0x74,&DAT_08341118);
    *(undefined4 *)(param_1 + 0x5c) = 0x40;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar2 = *(byte *)(param_1 + 10);
  bVar3 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  if (bVar3 < 0x11) {
    if (0 < *(int *)(param_1 + 0x5c)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -4;
    }
  }
  else {
    sub_080128D4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      *(byte *)(param_1 + 0x24) = ((*(byte *)(param_1 + 0x12) >> 2 & 1) * '\x02' + -1) * '\x04';
    }
  }
  iVar5 = *(int *)(param_1 + 0x54) + ((bVar2 >> 4 & 1) * 2 + -1) * *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  sVar4 = sub_08008CFC(iVar5,*(int *)(param_1 + 0x58) + -0x800);
  if (sVar4 != 0) {
    if (*(int *)(param_1 + 0x5c) < 0) {
      sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
    }
    else {
      sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
    }
  }
  sVar4 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if (sVar4 == 0) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    uVar6 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      sub_080826E0(param_1);
    }
  }
  return in_lr;
}

