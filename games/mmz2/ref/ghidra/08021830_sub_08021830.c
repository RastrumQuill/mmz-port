// sub_08021830 at 0x08021830 (thumb)

undefined8 sub_08021830(int *param_1,int *param_2,int param_3,int param_4,undefined *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_24 = param_1[1];
  local_28 = *param_1;
  if (param_4 == 0) {
    param_4 = *param_1 - *param_2;
  }
  iVar1 = -1;
  if (0 < param_4) {
    iVar1 = 1;
  }
  local_20 = local_28;
  local_1c = local_24;
  uVar2 = sub_08021A18(&local_28,param_2,param_3,iVar1);
  uVar2 = uVar2 & 0xffff;
  uVar3 = sub_08021B14(&local_20,param_2,param_3,iVar1);
  uVar3 = uVar3 & 0xff;
  if ((uVar3 != 0xff) &&
     ((((uVar2 == 0 || (param_3 == 0)) || (local_20 == local_28)) ||
      (iVar1 * (local_20 - local_28) < 0)))) {
    uVar2 = (ushort)(&DAT_020011d6)[uVar3 * 0xc] | 0x80;
  }
  if (param_3 != 0) {
    if (uVar2 != 0) {
      if ((uVar2 & 0x80) != 0) {
        *param_1 = local_20;
        param_1[1] = local_1c;
        goto LAB_080218ea;
      }
      *param_1 = local_28;
      param_1[1] = local_24;
    }
    uVar3 = 0xff;
  }
LAB_080218ea:
  *param_5 = (char)uVar3;
  return CONCAT44(in_lr,uVar2);
}

