// sub_080AD554 at 0x080AD554 (thumb)

undefined4 sub_080AD554(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_1 + 0x54;
  sub_080CD114(iVar1,0,0);
  sub_08002B10(0xa5);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0802AB70(2,0xff,iVar1);
    sub_08006984(0x1c);
  }
  else {
    sub_0802AB70(2,0xff,iVar1);
    sub_08006984(0x1d);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

