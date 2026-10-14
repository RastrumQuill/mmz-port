// sub_080220D8 at 0x080220D8 (thumb)

undefined4 sub_080220D8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  ushort *puVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (((param_5 & 0xffffff7f) == 0xf) || ((param_5 & 0xffffff7f) == 0xe)) {
    if ((param_5 & 0xffffff7f) == 0xf) {
      sub_080223B0(param_1,param_2,param_3,param_4,0xf);
    }
    iVar4 = param_2 << 1;
    if ((param_5 & 0xffffff7f) == 0xe) {
      sub_080223D4(param_1,param_2,param_3,param_4,0xe);
    }
  }
  else {
    iVar4 = param_2 * 2;
    puVar1 = (ushort *)(param_1 + 0x10 + iVar4);
    *puVar1 = *puVar1 | 2;
    if ((param_5 & 0xfe40) == 0) {
      sub_080223A0(param_1,param_2,param_3,param_4,param_5 & 0xffffff7f);
    }
  }
  uVar3 = param_5 & 0xffffff7f;
  if ((param_5 & 0x8000) == 0) {
    puVar1 = (ushort *)(param_1 + 0x10 + iVar4);
    *puVar1 = *puVar1 & 0x7fff;
  }
  else {
    sub_080223F8(param_1,param_2,param_3,param_4,uVar3);
  }
  if ((param_5 & 0x6000) != 0) {
    if ((*(ushort *)(param_1 + 0x10 + iVar4) & 0x6000) == 0) {
      *(undefined4 *)(param_1 + 0x18) = param_3;
      *(undefined4 *)(param_1 + 0x1c) = param_4;
    }
    sub_08022420(param_1,param_2,param_3,param_4,uVar3);
  }
  if ((param_5 & 0x1000) != 0) {
    sub_08022464(param_1,param_2,param_3,param_4,uVar3);
  }
  psVar2 = (short *)(param_1 + 8 + iVar4);
  if (*psVar2 == 0) {
    *psVar2 = (short)uVar3;
    *(undefined4 *)(param_1 + 0x30) = param_3;
    *(undefined4 *)(param_1 + 0x34) = param_4;
  }
  return in_lr;
}

