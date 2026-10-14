// sub_080DEFA8 at 0x080DEFA8 (thumb)

undefined4 sub_080DEFA8(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CFF0(param_1);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  if (*(char *)(param_1 + 0x11) == -1) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      local_18 = *(int *)(param_1 + 0x58) + -0xf00;
      sub_080DEEF8(param_1 + 0x54,*(undefined *)(param_1 + 0x10),0,*(byte *)(param_1 + 10) >> 4 & 1,
                   *(undefined *)(param_1 + 0x74));
      *(undefined *)(param_1 + 0x11) = 1;
      *(undefined *)(param_1 + 0x25) = 0x18;
    }
    else {
      local_18 = *(int *)(param_1 + 0x58) + -0xf00;
      sub_080D0894(1,&local_1c);
      sub_08002B10(0x2a);
      iVar2 = param_1 + 0x54;
      puVar1 = (undefined *)(param_1 + 0x74);
      sub_080DEEF8(iVar2,*(undefined *)(param_1 + 0x10),3,*(byte *)(param_1 + 10) >> 4 & 1,*puVar1);
      sub_080DEEF8(iVar2,*(undefined *)(param_1 + 0x10),4,*(byte *)(param_1 + 10) >> 4 & 1,*puVar1);
      if (*(char *)(param_1 + 0x10) != '\x02') {
        sub_080DEEF8(iVar2,*(char *)(param_1 + 0x10),5,*(byte *)(param_1 + 10) >> 4 & 1,*puVar1);
      }
      *(undefined *)(param_1 + 0x11) = 2;
    }
  }
  *(undefined *)(param_1 + 0x75) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_080DF0A0(param_1);
  return in_lr;
}

