// sub_0801F134 at 0x0801F134 (thumb)

undefined4 sub_0801F134(uint param_1,undefined param_2)

{
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  DAT_0202e910 = (undefined2)param_1;
  DAT_0202e913 = 0xff;
  DAT_0202e91a = 0;
  DAT_0202e912 = param_2;
  sub_08038360(&DAT_02035958);
  sub_0801E9AC(param_1,&DAT_02035910);
  if ((*(uint *)(DAT_0202e8e0 + 0x10) & 1 << (&DAT_0883f698)[param_1]) == 0) {
    DAT_02035880 = DAT_02035880 & 0xdf;
  }
  else {
    DAT_02035880 = DAT_02035880 | 0x20;
  }
  sub_0801E878(param_1,&DAT_02035880);
  sub_081284E4(&DAT_02035958,&DAT_0203599c,0);
  sub_081284E8(&DAT_02035958,&DAT_0203599c,&DAT_04000003);
  DAT_02035872 = (ushort)*(byte *)(DAT_0202e8e0 + 1);
  sub_0801E918(&DAT_020358a4);
  sub_081284E4(&DAT_020358c8,&DAT_020358e4,0);
  sub_081284E8(&DAT_020358c8,&DAT_020358e4,0x4000007);
  sub_081284E4(&DAT_02035900,&DAT_02035908,0);
  sub_081284E8(&DAT_02035900,&DAT_02035908,&DAT_04000002);
  return in_lr;
}

