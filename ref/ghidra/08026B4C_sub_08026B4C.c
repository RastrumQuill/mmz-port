// sub_08026B4C at 0x08026B4C (thumb)

undefined4 sub_08026B4C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((((*(char *)(iVar1 + 0xd) != '\x01') || (*(char *)(iVar1 + 0xbe) != '\x03')) ||
      (*(char *)(iVar1 + 0xbf) != '\x01')) || (*(char *)(iVar1 + 0xc0) != '\x03')) {
    *(undefined *)(param_1 + 0xd) = 2;
    sub_08025C54(param_1,0x201);
  }
  return in_lr;
}

