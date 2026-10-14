// sub_0808203C at 0x0808203C (thumb)

undefined4 sub_0808203C(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0885b3d4)[*(byte *)(param_1 + 0x10)];
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar4 = *(byte *)(param_1 + 0x11) & 1;
  *(char *)(param_1 + 0x4d) = (char)uVar4;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xdf | (byte)(uVar4 << 5);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
  sub_08005760(param_1 + 0x74,&DAT_0885b24c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80823b9;
  sub_0801CF00(param_1,0x1600);
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar5 = 0x100;
  }
  else {
    iVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar5 = -0x100;
  }
  *(int *)(param_1 + 0x58) = iVar3 + iVar5;
  bVar1 = 0 < *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *pbVar6 = *pbVar6 & 0xef | bVar1 << 4;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x54);
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  sub_08082168(param_1);
  return in_lr;
}

