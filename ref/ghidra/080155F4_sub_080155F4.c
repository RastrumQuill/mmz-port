// sub_080155F4 at 0x080155F4 (thumb)

undefined4 sub_080155F4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  if (cVar1 == '\0') {
    DAT_02022aae = DAT_02022aae | 1;
  }
  else if (cVar1 == '\x01') {
    DAT_02022aae = DAT_02022aae & 0xfffe;
  }
  return 0;
}

