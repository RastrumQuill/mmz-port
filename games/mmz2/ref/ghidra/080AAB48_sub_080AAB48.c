// sub_080AAB48 at 0x080AAB48 (thumb)

undefined4 sub_080AAB48(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0834575c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar5 + 0x54);
    iVar3 = -0x1a00;
  }
  else {
    iVar2 = *(int *)(iVar5 + 0x54);
    iVar3 = 0x1a00;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0xc00;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  *(undefined *)(param_1 + 0x12) = 0x80;
  if (DAT_0202e130 == 0) {
    iVar2 = iRam00000058 + -0x1000;
    iVar5 = iRam00000054;
  }
  else {
    iVar5 = sub_0801EFE8();
    iVar2 = sub_0801F004(DAT_0202e130,0);
  }
  uVar4 = sub_080EEF64((iVar5 - *(int *)(param_1 + 0x54)) * 0x10 >> 0x10,
                       (iVar2 - *(int *)(param_1 + 0x58)) * 0x10 >> 0x10);
  *(char *)(param_1 + 0x13) = (char)((uVar4 & 0xffff) + 0x4000 >> 8) + -0x40;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  sub_080AAA70(param_1,1,0);
  sub_080AAA70(param_1,1,1);
  sub_080AAA70(param_1,1,2);
  sub_080AAA70(param_1,1,3);
  sub_080AAA70(param_1,1,4);
  sub_080AAA70(param_1,1,5);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080AAAE8(param_1);
  return in_lr;
}

