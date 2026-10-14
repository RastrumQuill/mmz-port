// sub_080A3EDC at 0x080A3EDC (thumb)

undefined4 sub_080A3EDC(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(param_1 + 0x71) == '\0') goto LAB_080a3fce;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_08344a38,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_18 = *(int *)(param_1 + 0x54);
        iVar2 = -0x800;
      }
      else {
        local_18 = *(int *)(param_1 + 0x54);
        iVar2 = 0x800;
      }
      local_18 = local_18 + iVar2;
      local_14 = *(undefined4 *)(param_1 + 0x58);
      if (*(char *)(param_1 + 0x13) != '\0') {
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
        sub_080A3DB4(&local_18,*(undefined *)(param_1 + 0x10),*(byte *)(param_1 + 10) >> 4 & 1,
                     *(undefined *)(param_1 + 0x13));
      }
      goto LAB_080a3fc8;
    }
    if (*(char *)(param_1 + 0x71) < '\x04') goto LAB_080a3fce;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    pcVar3 = (char *)(param_1 + 0x71);
    sub_08006E08(param_1 + 0x74,&DAT_08344a38 + (uint)(byte)(&DAT_08344b10)[*pcVar3] * 0x18);
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*pcVar3 < '\x04') goto LAB_080a3fce;
      if (*(char *)(param_1 + 0x13) != '\0') {
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
      }
LAB_080a3fc8:
      cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      if (*pcVar3 < '\x06') goto LAB_080a3fce;
      cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  *(char *)(param_1 + 0xd) = cVar1;
LAB_080a3fce:
  if (1 < *(byte *)(param_1 + 0xd)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A4014(param_1);
  }
  return in_lr;
}

