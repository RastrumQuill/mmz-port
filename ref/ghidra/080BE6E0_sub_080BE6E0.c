// sub_080BE6E0 at 0x080BE6E0 (thumb)

undefined4 sub_080BE6E0(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02023680 & 2) != 0) {
    sub_080BEFBC(param_1);
    *(undefined *)(param_1 + 5) = 3;
    *(undefined *)(param_1 + 7) = 0;
    *(undefined *)(param_1 + 6) = 0;
  }
  return in_lr;
}

