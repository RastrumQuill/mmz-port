// sub_080DADCC at 0x080DADCC (thumb)

undefined4 sub_080DADCC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x4302);
  }
  else {
    sub_080127E4(param_1,0x4202);
  }
  sub_080DAE0C(param_1);
  return in_lr;
}

