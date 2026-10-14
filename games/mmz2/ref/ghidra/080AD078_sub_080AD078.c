// sub_080AD078 at 0x080AD078 (thumb)

undefined4 sub_080AD078(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  iVar7 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58);
  uVar6 = (uint)*(byte *)(param_1 + 0x12);
  if (uVar6 == 0) {
    iVar2 = sub_08009240(iVar7,iVar5);
  }
  else {
    iVar2 = sub_080090D4(iVar7,iVar5);
  }
  pbVar4 = (byte *)(param_1 + 0x4a);
  if (iVar2 == 0) {
    uVar6 = uVar6 * 0x2000 - 0x1000;
    do {
      iVar7 = iVar7 + uVar6;
      if ((int)uVar6 < 1) {
        iVar2 = sub_08009240(iVar7,iVar5);
      }
      else {
        iVar2 = sub_080090D4(iVar7,iVar5);
      }
    } while (iVar2 == 0);
    iVar7 = iVar7 + iVar2;
  }
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(int *)(param_1 + 0x54) = iVar7 + (((int)((uVar3 * 2 >> 0x11 & 7) + 1) >> 1) + -2) * 0x100;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  *(int *)(param_1 + 0x58) = iVar5 + (((int)((uVar3 * 2 >> 0x11 & 7) + 1) >> 1) + -2) * 0x100;
  sub_08012580(param_1);
  if ((int)uVar6 < 1) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(bool *)(param_1 + 0x4c) = 0 < (int)uVar6;
  *pbVar4 = *pbVar4 & 0xef | (0 < (int)uVar6) << 4;
  uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar6 & 0x7fffffff;
  uVar6 = uVar6 * 2 >> 0x11 & 1;
  if (uVar6 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4d) = (char)uVar6;
  *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar6 << 5);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08345b44 + (uint)*(byte *)(param_1 + 0x10) * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080AD204(param_1);
  return in_lr;
}

