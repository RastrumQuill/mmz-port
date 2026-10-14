// sub_0804BAF8 at 0x0804BAF8 (thumb)

undefined4 sub_0804BAF8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    sub_08005760(param_1 + 0x74,&DAT_08854118,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x804bc29;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar2 = sub_08008534(iVar2,*(undefined4 *)(param_1 + 0x58));
  iVar4 = *(int *)(param_1 + 0x58) - iVar2;
  if (iVar4 < 0) {
    iVar4 = iVar2 - *(int *)(param_1 + 0x58);
  }
  if (iVar4 < 0xc00) {
    *(int *)(param_1 + 0x58) = iVar2;
    uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if ((0x4000 < uVar3) || ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0)) {
      if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
        sub_08002B10(0x2b);
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_0804BBF4(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_0804BBF4(param_1);
  }
  return in_lr;
}

