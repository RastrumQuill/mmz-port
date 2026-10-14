// sub_080406A0 at 0x080406A0 (thumb)

undefined4 sub_080406A0(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed88);
  if (iVar1 == 0) {
    return in_lr;
  }
  *(undefined *)(iVar1 + 0x11) = param_2;
  if (*(char *)(param_1 + 0xf8) == '\x02') {
    *(undefined *)(iVar1 + 9) = 9;
    *(undefined4 *)(iVar1 + 0x14) = 0x8040781;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 1;
    if (*(char *)(iVar1 + 0x11) == '\0') goto LAB_08040760;
    sub_0803A8E0(0,0,1);
  }
  else {
    *(undefined *)(iVar1 + 9) = 9;
    *(undefined4 *)(iVar1 + 0x14) = 0x8040781;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined2 *)(iVar1 + 0x20) = 0x30;
    *(undefined *)(iVar1 + 0x22) = 2;
    if (*(char *)(iVar1 + 0x11) == '\0') goto LAB_08040760;
    sub_0803A8E0(1,0,1);
  }
  if (*(char *)(iVar1 + 0x11) != '\0') {
    *(undefined2 *)(param_1 + 0x15a) = 0x80f8;
    sub_0803A970(0x8117dcd);
  }
LAB_08040760:
  *(int *)(iVar1 + 0x28) = param_1;
  *(undefined *)(iVar1 + 0x10) = 0;
  return in_lr;
}

