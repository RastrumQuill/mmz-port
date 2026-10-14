// sub_0807FA2C at 0x0807FA2C (thumb)

undefined4 sub_0807FA2C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x1a00);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885a824,param_1 + 0x54,0xe);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8080531;
  iVar4 = *(int *)(DAT_0202dbf0 + 0x54);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 < iVar4) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(bool *)(param_1 + 0x4c) = iVar2 < iVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (iVar2 < iVar4) << 4;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0xb8) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xb8) = 1;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xc2) = 0;
  *(undefined *)(param_1 + 0xc3) = 0;
  *(undefined *)(param_1 + 0xb9) = 0x3c;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0807FB44(param_1);
  return in_lr;
}

