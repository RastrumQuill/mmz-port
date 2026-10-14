// sub_0809A720 at 0x0809A720 (thumb)

undefined4 sub_0809A720(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (((DAT_0202ebbb & 0x20) == 0) && (bVar2 = DAT_0202ebbb & 1, (DAT_0202ebbb & 1) == 0)) {
    iVar1 = *(int *)(param_1 + 0x28);
    if ((iVar1 == 0) || (1 < *(byte *)(iVar1 + 0xc))) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(byte *)(param_1 + 0xd) = bVar2;
      sub_0809A7FC(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
      *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + 0x600;
      if (*(char *)(iVar1 + 0xb5) == '\0') {
        if (*(char *)(param_1 + 0xba) != '\0') {
          *(char *)(param_1 + 0xba) = '\0';
          *(undefined *)(param_1 + 0xd) = 3;
          *(undefined *)(param_1 + 0xe) = 0;
        }
        sub_080EF118(param_1,*(undefined4 *)(&DAT_08343694 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
      else if (*(char *)(param_1 + 0xba) == '\0') {
        *(char *)(param_1 + 0xba) = '\x01';
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

