// sub_0805EF84 at 0x0805EF84 (thumb)

undefined4 sub_0805EF84(int param_1)

{
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
  *(undefined2 *)(param_1 + 0xe) = 1;
  sub_08060768(param_1,0);
  DAT_0202f608 = DAT_0202f608 * 0x343fd + 0x269ec3 & 0x7fffffff;
  *(undefined *)(param_1 + 0x12) = 1;
  sub_0805EFCC(param_1);
  return in_lr;
}

