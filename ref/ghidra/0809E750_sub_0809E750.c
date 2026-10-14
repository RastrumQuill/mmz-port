// sub_0809E750 at 0x0809E750 (thumb)

undefined4 sub_0809E750(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xc4) == 0) {
    cVar1 = *(char *)(param_1 + 0x11);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x11) + '\x03';
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
  sub_0808B6B4(param_1,cVar1);
  *(undefined *)(param_1 + 0xd) = 4;
  return in_lr;
}

