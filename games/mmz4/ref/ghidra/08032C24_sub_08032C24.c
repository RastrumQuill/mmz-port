// sub_08032C24 at 0x08032C24 (thumb)

undefined4 sub_08032C24(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08038A54();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0884faa8 + (uint)*(byte *)(param_1 + 0xe) * 4));
  }
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xbf;
  return in_lr;
}

