// sub_080B20C0 at 0x080B20C0 (thumb)

undefined4 sub_080B20C0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (*(char *)(iVar1 + 0x10) == '\0') {
      if (*(byte *)(iVar1 + 0x11) < 2) {
        sub_08006984(0x27);
      }
      else {
        sub_08006984(0x28);
      }
      if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)
         ) {
        *(undefined *)(iVar1 + 0xb4) = 1;
        if (DAT_0202dbf0 != 0) {
          if (*(byte *)(iVar1 + 0x11) < 2) {
            sub_0803A584(DAT_0202dbf0,5,0xb);
          }
          else {
            sub_0803A584(DAT_0202dbf0,6,8);
          }
        }
      }
    }
    else if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
      *(undefined *)(iVar1 + 0xb8) = 0;
      *(undefined *)(iVar1 + 0xb9) = 0;
      sub_080B25FC(iVar1);
      sub_08002B10(0x35);
      *(undefined4 *)(iVar1 + 0xc) = 2;
      *(undefined4 *)(iVar1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

