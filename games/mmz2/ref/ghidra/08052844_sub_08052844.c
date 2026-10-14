// sub_08052844 at 0x08052844 (thumb)

undefined4 sub_08052844(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    iVar4 = *(int *)(param_1 + 0xc4);
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
      *(undefined4 *)(iVar4 + 0x8c) = 0;
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined *)(iVar4 + 0x94) = 0;
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
      *(undefined4 *)(iVar4 + 0xc) = 3;
      *(undefined4 *)(iVar4 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar4 + 9) * 4) + 0xc);
    }
    iVar4 = *(int *)(param_1 + 200);
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
      *(undefined4 *)(iVar4 + 0x8c) = 0;
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined *)(iVar4 + 0x94) = 0;
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
      *(undefined4 *)(iVar4 + 0xc) = 3;
      *(undefined4 *)(iVar4 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar4 + 9) * 4) + 0xc);
    }
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080127E4(param_1,0xa602);
    sub_08006E08(param_1 + 0x74,&DAT_0833c1f8);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar3 != 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xbc);
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfe;
    *(undefined *)(param_1 + 0xd0) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

