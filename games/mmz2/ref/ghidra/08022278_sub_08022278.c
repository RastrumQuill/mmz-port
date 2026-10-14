// sub_08022278 at 0x08022278 (thumb)

undefined4 sub_08022278(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  int local_24;
  
  if (((param_5 & 0xffffff7f) == 0xf) || (uVar2 = param_5 & 0xffffff7f, uVar2 == 0xe)) {
    puVar3 = (ushort *)(param_1 + 0x10 + param_2 * 2);
    if ((*puVar3 & 0xc) == 0) {
      *(undefined4 *)(param_1 + 0x50 + param_2 * 8) = param_3;
      *(undefined4 *)(param_1 + 0x54 + param_2 * 8) = param_4;
    }
    if ((param_5 & 0xffffff7f) == 0xf) {
      sub_080223B0(param_1,param_2,param_3,param_4,0xf);
    }
    if ((param_5 & 0xffffff7f) == 0xe) {
      sub_080223D4(param_1,param_2,param_3,param_4,0xe);
    }
    *puVar3 = *puVar3 & 0xf7ff;
  }
  else {
    puVar3 = (ushort *)(param_1 + 0x10 + param_2 * 2);
    uVar1 = *puVar3;
    *puVar3 = uVar1 | 2;
    if ((param_5 & 0x800) == 0) {
      *puVar3 = uVar1 & 0xf7ff | 2;
      if ((uVar1 & 1) == 0) {
        sub_080223A0(param_1,param_2,param_3,param_4,uVar2);
        *(undefined4 *)(param_1 + 0x40 + param_2 * 8) = param_3;
        *(undefined4 *)(param_1 + 0x44 + param_2 * 8) = param_4;
      }
    }
    else {
      sub_0802248C(param_1,param_2,param_3,param_4,uVar2);
    }
  }
  local_24 = param_2 * 2;
  puVar3 = (ushort *)(param_1 + 8 + local_24);
  if (*puVar3 == 0) {
    *puVar3 = (ushort)param_5 & 0xff7f;
    *(undefined4 *)(param_1 + 0x20 + param_2 * 8) = param_3;
    *(undefined4 *)(param_1 + 0x24 + param_2 * 8) = param_4;
  }
  return in_lr;
}

