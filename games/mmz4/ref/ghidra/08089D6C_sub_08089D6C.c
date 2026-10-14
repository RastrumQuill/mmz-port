// sub_08089D6C at 0x08089D6C (thumb)

undefined4 sub_08089D6C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08005760(param_1 + 0x74,&DAT_0885be90,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8089f5d;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar4 = *(byte *)(param_1 + 0x10) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 < 2) {
    *(byte *)(param_1 + 0xc0) = bVar1;
    *(undefined *)(param_1 + 0xc1) = 0;
  }
  else {
    *(byte *)(param_1 + 0xc0) = bVar1 - 2;
    *(undefined *)(param_1 + 0xc1) = 1;
  }
  pbVar5 = (byte *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc3) = 0;
  if (*(char *)(param_1 + 0xc1) == '\0') {
    if (*pbVar5 == 0) {
      uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      uVar2 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
  }
  else if (*pbVar5 == 0) {
    uVar2 = 0x25fff;
  }
  else {
    uVar2 = 0x1f000;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  iVar3 = sub_0807F824(param_1);
  if (iVar3 != 0) {
    sub_0801CF00(param_1,*pbVar5 | 0x2000);
    sub_0801CFF0(param_1);
  }
  *(undefined *)(param_1 + 0xc2) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 0xd) = *pbVar5;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08089EA0(param_1);
  return in_lr;
}

