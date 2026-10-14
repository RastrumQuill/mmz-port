// sub_0802177C at 0x0802177C (thumb)

undefined8 sub_0802177C(undefined4 *param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  
  local_28 = param_1[1];
  local_2c = *param_1;
  local_24 = local_2c;
  local_20 = local_28;
  uVar1 = sub_080219CC(&local_2c,param_2);
  uVar1 = uVar1 & 0xffff;
  uVar2 = sub_08021AD0(&local_24,param_2,param_3);
  uVar2 = uVar2 & 0xff;
  if ((uVar2 != 0xff) &&
     ((((uVar1 == 0 || (param_3 == 0)) || (local_20 == local_28)) || (local_28 < local_20)))) {
    uVar1 = (ushort)(&DAT_020011d6)[uVar2 * 0xc] | 0x80;
  }
  if (param_3 != 0) {
    if (uVar1 != 0) {
      if ((uVar1 & 0x80) != 0) {
        *param_1 = local_24;
        param_1[1] = local_20;
        goto LAB_0802181a;
      }
      *param_1 = local_2c;
      param_1[1] = local_28;
    }
    uVar2 = 0xff;
  }
LAB_0802181a:
  *param_4 = (char)uVar2;
  return CONCAT44(in_lr,uVar1);
}

