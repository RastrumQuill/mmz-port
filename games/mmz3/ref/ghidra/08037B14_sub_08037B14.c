// sub_08037B14 at 0x08037B14 (thumb)

undefined4 sub_08037B14(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = sub_080381EC(param_1,&DAT_0835b64c);
    if (cVar1 != '\0') {
      sub_08017700(param_1,*(undefined2 *)(&DAT_0835b7d0 + (uint)*(byte *)(param_1 + 0xc1) * 2));
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

