// sub_0803E46C at 0x0803E46C (thumb)

undefined4 sub_0803E46C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0xe);
  if (cVar1 == '\0') {
    sub_08004230(0xb);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    DAT_0202f4a5 = cVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (cVar1 != '\x01') {
    return in_lr;
  }
  DAT_020301b2 = DAT_020301b2 | 2;
  return in_lr;
}

