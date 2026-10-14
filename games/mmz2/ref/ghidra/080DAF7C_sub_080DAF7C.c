// sub_080DAF7C at 0x080DAF7C (thumb)

undefined4 sub_080DAF7C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x4307);
  }
  else {
    sub_080127E4(param_1,0x4207);
  }
  sub_080DAFBC(param_1);
  return in_lr;
}

