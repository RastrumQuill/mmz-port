// sub_080221F0 at 0x080221F0 (thumb)

undefined4 sub_080221F0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  ushort *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((param_5 & 0xffffff7f) == 0xf) || ((param_5 & 0xffffff7f) == 0xe)) {
    if ((param_5 & 0xffffff7f) == 0xf) {
      sub_080223B0(param_1,param_2,param_3,param_4,0xf);
    }
    iVar2 = param_2 << 1;
    if ((param_5 & 0xffffff7f) == 0xe) {
      sub_080223D4(param_1,param_2,param_3,param_4,0xe);
    }
  }
  else {
    iVar2 = param_2 * 2;
    puVar1 = (ushort *)(param_1 + 0x10 + iVar2);
    *puVar1 = *puVar1 | 2;
  }
  puVar1 = (ushort *)(param_1 + 8 + iVar2);
  if (*puVar1 == 0) {
    *puVar1 = (ushort)param_5 & 0xff7f;
    *(undefined4 *)(param_1 + 0x38) = param_3;
    *(undefined4 *)(param_1 + 0x3c) = param_4;
  }
  return in_lr;
}

