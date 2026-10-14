// sub_080293B8 at 0x080293B8 (thumb)

undefined4 sub_080293B8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0809BF48();
  if (iVar1 == 0) {
    sub_080294EC(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_080055FC(param_1 + 0x74,&DAT_082acbdc,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x80295e9;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08029428(param_1);
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 4)
      ;
    }
  }
  return in_lr;
}

