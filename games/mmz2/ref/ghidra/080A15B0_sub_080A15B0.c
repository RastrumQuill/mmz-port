// sub_080A15B0 at 0x080A15B0 (thumb)

undefined4 sub_080A15B0(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08344504,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080127E4(param_1,*(undefined2 *)(&DAT_083445c4 + (uint)*(byte *)(param_1 + 0x11) * 2));
    iVar4 = DAT_0202e130;
    iVar5 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar5;
    iVar4 = *(int *)(iVar4 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1000);
    *(int *)(param_1 + 0x60) = iVar4;
    uVar2 = sub_080EEF7C(iVar5 * iVar5 + iVar4 * iVar4);
    iVar4 = sub_080EF150(*(int *)(param_1 + 0x5c) << 8,uVar2);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar5 = sub_080EF150(*(int *)(param_1 + 0x60) << 8,uVar2);
    *(int *)(param_1 + 0x5c) = iVar4 * 6;
    *(int *)(param_1 + 0x60) = iVar5 * 6;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  if ((*(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54)) + 0x380U < 0x700) {
    if (*(char *)(param_1 + 0x12) == '\x1e') {
      sub_080032EC(0x51);
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
  }
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  if ((bVar1 & 3) == 0) {
    sub_080A0E1C(param_1 + 0x54,*(undefined *)(param_1 + 0x11));
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (0x4000 < uVar3) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

