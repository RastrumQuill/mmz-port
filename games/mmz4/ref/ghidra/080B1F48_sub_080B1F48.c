// sub_080B1F48 at 0x080B1F48 (thumb)

undefined4 sub_080B1F48(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (cVar1 = sub_080B2A04(param_1), cVar1 != '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B1FF8(param_1);
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080B2690(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_08860114 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      sub_080B2718(param_1);
    }
    sub_0801CFF0(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(undefined *)(param_1 + 0xb8) = 0;
      *(undefined *)(param_1 + 0xb9) = 0;
      sub_080B25FC(param_1);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B1FF8(param_1);
  }
  return in_lr;
}

