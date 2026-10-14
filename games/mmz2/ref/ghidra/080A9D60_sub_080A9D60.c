// sub_080A9D60 at 0x080A9D60 (thumb)

undefined4 sub_080A9D60(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar2 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A9BC4(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(iVar2 + 0xd) != '\x02') goto LAB_080a9dd0;
    sub_080127E4(param_1,0x230a);
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (*(char *)(iVar2 + 0xd) == '\x02') goto LAB_080a9dd0;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,0x2306);
    }
    else {
      sub_080127E4(param_1,0x2308);
    }
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0xd) = cVar1;
LAB_080a9dd0:
  sub_080128D4(param_1);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  return in_lr;
}

