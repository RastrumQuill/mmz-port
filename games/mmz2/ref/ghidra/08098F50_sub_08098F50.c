// sub_08098F50 at 0x08098F50 (thumb)

undefined4 sub_08098F50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((DAT_0202ebbb & 0x20) == 0) {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      iVar1 = sub_08065A24(iVar2);
      if ((iVar1 == 0) && (*(char *)(iVar2 + 0xc2) == '\0')) {
        if (*(char *)(param_1 + 0x10) == '\0') {
          sub_080992F4(param_1);
          return in_lr;
        }
        sub_08099490(param_1);
        return in_lr;
      }
    }
    else if (*(char *)(iVar2 + 0xc1) == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_08099004(param_1);
      return in_lr;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

