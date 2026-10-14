// sub_0800113C at 0x0800113C (thumb)

undefined4 sub_0800113C(int param_1)

{
  undefined4 in_lr;
  
  if ((&DAT_03002a68)[param_1 * 0x18] != '\x01') {
    (&DAT_03002a68)[param_1 * 0x18] = '\x01';
  }
  return in_lr;
}

