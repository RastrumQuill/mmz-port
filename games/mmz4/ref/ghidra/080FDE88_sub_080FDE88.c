// sub_080FDE88 at 0x080FDE88 (thumb)

undefined4 sub_080FDE88(int *param_1,char param_2)

{
  uint uVar1;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (param_2 == '\0') {
    local_28 = *param_1 + 0x800;
    local_24 = param_1[1] + -0x880;
    sub_080E38B8(&local_28,&DAT_08867c20,0,0);
    local_28 = *param_1 + -0x800;
    local_24 = param_1[1] + -0x880;
    sub_080E38B8(&local_28,&DAT_08867c04,0,0);
  }
  else {
    uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_28 = *param_1 + 0x200 + (uVar1 * 2 >> 0x11 & 0x3ff);
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    local_24 = param_1[1] + (uVar1 * 2 >> 0x11 & 0x7ff) + -0xc00;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar1 & 0x7fffffff;
    sub_080E38B8(&local_28,&UNK_08867cac + (uVar1 * 2 >> 0x11 & 3) * 0x1c,0,0);
    uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_28 = (*param_1 + -0x200) - (uVar1 * 2 >> 0x11 & 0x3ff);
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    local_24 = param_1[1] + (uVar1 * 2 >> 0x11 & 0x7ff) + -0xc00;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar1 & 0x7fffffff;
    sub_080E38B8(&local_28,&UNK_08867c3c + (uVar1 * 2 >> 0x11 & 3) * 0x1c,0,0);
  }
  return in_lr;
}

