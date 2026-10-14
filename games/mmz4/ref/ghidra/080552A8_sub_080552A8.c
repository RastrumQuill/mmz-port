// sub_080552A8 at 0x080552A8 (thumb)

undefined4 sub_080552A8(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54);
  bVar1 = iVar4 < *(int *)(DAT_0202dbf0 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = sub_08008534(iVar4,*(undefined4 *)(param_1 + 0x58),iVar4,0);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  pbVar5 = (byte *)(param_1 + 0xb4);
  *pbVar5 = 0;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_08050408(param_1,&DAT_08854f90,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x80594f1;
  sub_08059718(param_1);
  *pbVar5 = *pbVar5 & 0xfe;
  sub_080553A4(param_1);
  return in_lr;
}

