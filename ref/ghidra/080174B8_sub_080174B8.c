// sub_080174B8 at 0x080174B8 (thumb)

void sub_080174B8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (((iVar1 == 0) || (*(char *)(iVar1 + 9) != '\x01')) ||
     (((*(char *)(param_1 + 0xc0) != '\x03' ||
       ((*(int *)(iVar1 + 0xb8) << 8 | (uint)*(byte *)(iVar1 + 0x70)) == 0x201)) &&
      (*(char *)(iVar1 + 0x73) == '\x03')))) {
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 1;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
  }
  return;
}

