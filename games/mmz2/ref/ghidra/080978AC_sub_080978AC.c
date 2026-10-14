// sub_080978AC at 0x080978AC (thumb)

undefined4 sub_080978AC(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0834304c)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar4 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  else {
    uVar4 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  if (*(byte *)(param_1 + 0x10) < 2) {
    iVar5 = sub_08006B84(DAT_0202f078);
    if (iVar5 != 0) {
      *(undefined *)(iVar5 + 0x25) = 0x18;
      *(undefined *)(iVar5 + 9) = 0x57;
      *(undefined4 *)(iVar5 + 0x14) = 0x80978ad;
      *(undefined2 *)(iVar5 + 0x20) = 0;
      *(undefined *)(iVar5 + 0x22) = 0;
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) | 0x10;
      *(undefined *)(iVar5 + 0x1d) = *(undefined *)(iVar5 + 0x1c);
      iVar6 = *(int *)(param_1 + 0x54) + 0x1000;
      *(int *)(iVar5 + 0x54) = iVar6;
      *(uint *)(iVar5 + 0x54) = iVar6 + (uint)*(byte *)(param_1 + 0x10) * -0x2000;
      *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined *)(iVar5 + 0x10) = 2;
      *(int *)(iVar5 + 0x28) = param_1;
      sub_0801260C(iVar5);
      *(byte *)(iVar5 + 0x49) = *(byte *)(iVar5 + 0x49) | 0xc;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08342fb8,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8097ca1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    sub_08012580(param_1);
    *(undefined *)(param_1 + 0x13) = 0xf;
    *(undefined *)(param_1 + 0xc0) = 0;
    bVar3 = *(byte *)(param_1 + 0x10);
    if (bVar3 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar3 & 1) << 4);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  bVar1 = 0 < *(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58);
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x20;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xdf;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(bool *)(param_1 + 0x4d) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar1 << 5;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08343050 + (uint)*(byte *)(param_1 + 0x10) * 2));
  if (*(char *)(param_1 + 0x10) == '\x02') {
    sub_08097F54(param_1);
  }
  sub_08097A68(param_1);
  return in_lr;
}

