// sub_08084ADC at 0x08084ADC (thumb)

undefined4 sub_08084ADC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08084978();
  if (cVar1 == '\0') {
    sub_080849C8(param_1);
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885b580 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885b59c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

