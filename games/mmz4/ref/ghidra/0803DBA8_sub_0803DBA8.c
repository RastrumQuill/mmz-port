// sub_0803DBA8 at 0x0803DBA8 (thumb)

undefined4 sub_0803DBA8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0803DC50();
  if ((cVar1 == '\0') && (*(byte *)(*(int *)(param_1 + 0xb4) + 0xc) < 2)) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08851d1c + (uint)*(byte *)(param_1 + 0x10) * 4));
    sub_0801CFF0(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

