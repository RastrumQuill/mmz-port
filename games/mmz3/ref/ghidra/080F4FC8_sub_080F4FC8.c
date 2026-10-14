// sub_080F4FC8 at 0x080F4FC8 (thumb)

undefined4 sub_080F4FC8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0xe17);
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe17) = '\x01';
  }
  else if (cVar1 == '\x01') {
    if ((DAT_02002134 & 1) == 0) {
      if ((DAT_02002134 & 2) != 0) {
        *(undefined *)(param_1 + 3) = 0;
        sub_0800471C(3);
      }
    }
    else {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x20;
      *(undefined *)(param_1 + 1) = 3;
      *(undefined *)(param_1 + 2) = 3;
      sub_0800471C(2);
    }
  }
  return in_lr;
}

