// sub_08025054 at 0x08025054 (thumb)

undefined4 sub_08025054(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  if (((int)*(char *)(param_1 + 0x71) == (uint)(byte)(&DAT_082a993e)[*(byte *)(param_1 + 0x11f)]) &&
     (*(char *)(param_1 + 0x72) < '\x02')) {
    puVar1 = (undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 3;
    *(undefined *)(param_1 + 0xc3) = *puVar1;
    *puVar1 = *puVar1;
    sub_080250B4(param_1);
  }
  return in_lr;
}

