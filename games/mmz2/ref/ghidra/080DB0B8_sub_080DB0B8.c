// sub_080DB0B8 at 0x080DB0B8 (thumb)

undefined4 sub_080DB0B8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x4309);
  }
  else {
    sub_080127E4(param_1,0x4209);
  }
  sub_080DB0F8(param_1);
  return in_lr;
}

