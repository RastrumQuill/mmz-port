// sub_0808A378 at 0x0808A378 (thumb)

undefined4 sub_0808A378(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  if (0x3000 < *(int *)(param_1 + 0xb4)) {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 4;
  }
  iVar4 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + 0x1a00);
  iVar5 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + 0x1a00);
  if ((iVar4 < 0) || (iVar5 < 0)) {
    cVar2 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\x03') {
      if (iVar4 < iVar5) {
        iVar4 = *(int *)(param_1 + 0x58) + iVar4;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x58) + iVar5;
      }
      *(int *)(param_1 + 0x58) = iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1a00;
      iVar5 = *(int *)(param_1 + 0x2c);
      if (iVar5 != 0) {
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
        *(undefined4 *)(iVar5 + 0x8c) = 0;
        *(undefined4 *)(iVar5 + 0x90) = 0;
        *(undefined *)(iVar5 + 0x94) = 0;
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
        *(undefined4 *)(iVar5 + 0xc) = 3;
        *(undefined4 *)(iVar5 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar5 + 9) * 4) + 0xc);
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      *(undefined *)(param_1 + 0x10) = 2;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      bVar1 = *(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0x54);
      if (bVar1) {
        uVar6 = 0x240;
      }
      else {
        uVar6 = 0xfffffdc0;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar6;
      if (bVar1) {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(bool *)(param_1 + 0x4c) = bVar1;
      pbVar7 = (byte *)(param_1 + 0x4a);
      *pbVar7 = *pbVar7 & 0xef | bVar1 << 4;
      sub_0801260C(param_1);
      sub_080127E4(param_1,0x7401);
      sub_080128D4(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      *pbVar7 = *pbVar7 & 0xdf | 0x20;
      *(undefined *)(param_1 + 0x12) = 0;
    }
    else {
      sub_080127E4(param_1,0x7407);
    }
  }
  if (0x7fff < *(uint *)(param_1 + 0xb8)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0xe00;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    pbVar7 = (byte *)(param_1 + 0x4a);
    *pbVar7 = *pbVar7 & 0xdf | 0x20;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
      *(undefined4 *)(iVar5 + 0x8c) = 0;
      *(undefined4 *)(iVar5 + 0x90) = 0;
      *(undefined *)(iVar5 + 0x94) = 0;
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
      *(undefined4 *)(iVar5 + 0xc) = 3;
      *(undefined4 *)(iVar5 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar5 + 9) * 4) + 0xc);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    *(undefined *)(param_1 + 0x10) = 2;
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0801260C(param_1);
    sub_080127E4(param_1,0x7401);
    sub_080128D4(param_1);
    bVar1 = *(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0x54);
    if (bVar1) {
      uVar6 = 0x240;
    }
    else {
      uVar6 = 0xfffffdc0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *pbVar7 = *pbVar7 & 0xef | bVar1 << 4;
  }
  return in_lr;
}

