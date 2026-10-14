// sub_080DB328 at 0x080DB328 (thumb)

undefined4 sub_080DB328(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x4301);
  }
  else {
    sub_080127E4(param_1,0x4201);
  }
  sub_080DB368(param_1);
  return in_lr;
}

