// sub_08018C20 at 0x08018C20 (thumb)

undefined4 sub_08018C20(int param_1,uint param_2,ushort param_3,undefined2 param_4)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x115) = (char)param_2;
  sub_08015F2C(param_1,*(undefined2 *)(&DAT_082a8288 + param_2 * 2),param_3,param_4);
  sub_08018D18(param_1,param_2 & 0xff,param_3 & 0xff);
  return in_lr;
}

