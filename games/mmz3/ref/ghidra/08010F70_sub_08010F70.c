// sub_08010F70 at 0x08010F70 (thumb)

undefined4 sub_08010F70(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sVar1 = sub_08010F08();
  if (sVar1 != 0) {
    iVar4 = param_1 >> 0xc;
    iVar2 = param_2 >> 0xc;
    if (param_1 < 0x1d1000) {
      if (0x1b2fff < param_1) {
        iVar4 = FUN_080fe2f8(iVar4 + -2,3);
        param_1 = iVar4 * 3 + 2;
        iVar4 = FUN_080fe2f8(iVar2 + -1,3);
        param_2 = iVar4 * 3 + 1;
        sub_08009348(param_1,param_2,&DAT_0833ca50);
      }
    }
    else {
      if (param_2 < 0x10001) {
        iVar3 = FUN_080fe2f8(iVar4 + -1,3);
        iVar4 = FUN_080fe2f8(iVar2 + 1,3);
        param_2 = iVar4 * 3 + -1;
      }
      else {
        iVar3 = FUN_080fe2f8(iVar4 + -1,3);
        iVar4 = FUN_080fe2f8(iVar2 + 2,3);
        param_2 = iVar4 * 3 + -2;
      }
      param_1 = iVar3 * 3 + 1;
      sub_08009348(param_1,param_2,&DAT_0833ca50);
    }
    iVar4 = sub_080047C0(0x41);
    if (iVar4 == 0) {
      sub_0800471C(0x41);
    }
    sub_080CE8C8(0,param_1 << 0xc,param_2 << 0xc);
  }
  return in_lr;
}

