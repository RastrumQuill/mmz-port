// sub_0804AE6C at 0x0804AE6C (thumb)

undefined4 sub_0804AE6C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0xb8);
  iVar3 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CDBC(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801D3D0(param_1,0xf);
  sub_0801CF00(param_1,32000);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xef | (byte)(uVar5 << 4);
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar5 = *(byte *)(param_1 + 0x10) & 1;
  *(char *)(param_1 + 0x4d) = (char)uVar5;
  *pbVar6 = *pbVar6 & 0xdf | (byte)(uVar5 << 5);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08853ee8,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    cVar2 = sub_0803A4F4(uVar4);
    sub_08005794(param_1 + 0x74,&DAT_08853ee8,cVar2 + '\b',0xffffffff,0xffffffff,0xffffffff);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + -0x2200;
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      uVar4 = 0x55;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + 0x2200;
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      uVar4 = 0xffffffab;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x1400;
    *(undefined *)(param_1 + 0x12) = 0x12;
    *(undefined4 *)(param_1 + 0x98) = 0x804b175;
  }
  sub_0804AFDC(param_1);
  return in_lr;
}

