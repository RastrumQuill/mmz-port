// sub_0803EC14 at 0x0803EC14 (thumb)

undefined4 sub_0803EC14(int param_1,int param_2)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x11) = (char)param_2;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08339dfc + param_2 * 2));
  return in_lr;
}

