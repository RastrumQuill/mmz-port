// sub_08086C78 at 0x08086C78 (thumb)

undefined4 sub_08086C78(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
  cVar2 = *(char *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb5) = 1;
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  sub_0801CC9C(param_1);
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
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar6 = param_1 + 0x74;
  sub_08005760(iVar6,&DAT_0885ba98,param_1 + 0x54,10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8088a1d;
  if (cVar2 == '\0') {
    uVar8 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar8;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08005784(iVar6,&DAT_0885ba98);
    sub_0801CF00(param_1,0x1d00);
    sub_0801CFF0(param_1);
  }
  else if (cVar2 == '\x01') {
    uVar8 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar8;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08005784(iVar6,&DAT_0885ba98);
    sub_0801CF00(param_1,0x1d00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *pbVar7 = *pbVar7 & 0xdf | 0x20;
    sub_0801CFF0(param_1);
  }
  iVar6 = *(int *)(param_1 + 0x54) + -0x800;
  uVar8 = *(undefined4 *)(param_1 + 0x58);
  sVar4 = sub_08007C7C(iVar6,uVar8);
  if (sVar4 == 0) {
    iVar6 = *(int *)(param_1 + 0x54) + 0x800;
    uVar8 = *(undefined4 *)(param_1 + 0x58);
    sVar4 = sub_08007C7C(iVar6,uVar8);
    if (sVar4 == 0) goto LAB_08086e16;
    iVar6 = sub_08008868(iVar6,uVar8);
    iVar5 = -0x800;
  }
  else {
    iVar6 = sub_08008988(iVar6,uVar8);
    iVar5 = 0x800;
  }
  *(int *)(param_1 + 0x54) = iVar6 + iVar5;
LAB_08086e16:
  sub_08086E30(param_1);
  return in_lr;
}

