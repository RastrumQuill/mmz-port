// sub_08037A84 at 0x08037A84 (thumb)

undefined4 sub_08037A84(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = sub_080381EC(param_1,&DAT_0835b644);
    if (cVar1 != '\0') {
      sub_08017700(param_1,0x8700);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  cVar1 = sub_08038330(param_1);
  if (cVar1 == '\0') {
    cVar1 = sub_0803814C(param_1);
    if (cVar1 == '\0') {
      return in_lr;
    }
  }
  else {
    sub_080B322C(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_0800471C(0x2b);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

