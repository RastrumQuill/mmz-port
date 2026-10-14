// sub_08021EE8 at 0x08021EE8 (thumb)

undefined4 sub_08021EE8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x73) == '\x04') &&
     (iVar1 = *(byte *)(param_1 + 0x11f) - 1, *(byte *)(param_1 + 0x11f) = (byte)iVar1, iVar1 == 0))
  {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 7;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 5;
    sub_08018BE8(param_1,0x53);
  }
  return in_lr;
}

