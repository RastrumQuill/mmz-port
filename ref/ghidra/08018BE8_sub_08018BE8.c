// sub_08018BE8 at 0x08018BE8 (thumb)

undefined4 sub_08018BE8(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x115) = (char)param_2;
  sub_08015EEC(param_1,*(undefined2 *)(&DAT_082a8288 + param_2 * 2));
  sub_08018D18(param_1,param_2 & 0xff,0);
  return in_lr;
}

