// sub_08037944 at 0x08037944 (thumb)

undefined4 sub_08037944(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) & 0xbf;
    sub_0803A2C4(param_1);
    *pcVar1 = *pcVar1 + '\x01';
  }
  sub_0803A3BC(param_1,0x2c00);
  sub_0803A3FC(param_1,0x2c00);
  if ((*(byte *)(param_1 + 0x153) & 0x40) != 0) {
    *(undefined *)(param_1 + 0x101) = 4;
    *pcVar1 = '\0';
  }
  return in_lr;
}

