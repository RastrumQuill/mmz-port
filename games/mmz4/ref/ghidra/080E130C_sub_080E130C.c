// sub_080E130C at 0x080E130C (thumb)

undefined4 sub_080E130C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088654ec + (uint)*(byte *)(param_1 + 0x11) * 4));
  sub_0801CFF0(param_1);
  return in_lr;
}

