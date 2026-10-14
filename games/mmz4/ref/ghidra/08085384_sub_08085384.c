// sub_08085384 at 0x08085384 (thumb)

undefined4 sub_08085384(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_08005760(param_1 + 0x74,&DAT_0885b6a4,param_1 + 0x54,2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8085641;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar3 == 0) {
    *(undefined *)(param_1 + 0xc2) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xc2) = 1;
  }
  sub_0801CC9C(param_1);
  bVar1 = 0 < *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801CF00(param_1,0x1b00);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x7ff;
  sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
  if (sVar3 != 0) {
    uVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  iVar5 = sub_0807F824(param_1);
  if (iVar5 != 0) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885b764 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885b77c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  *(undefined *)(param_1 + 0xc3) = 0;
  sub_080854C0(param_1);
  return in_lr;
}

