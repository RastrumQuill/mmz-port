// sub_08003B84 at 0x08003B84 (thumb)

undefined8 sub_08003B84(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_02002180;
  if (DAT_02002180 < 0x10) {
    iVar3 = DAT_02002180 * 0xc;
    (&DAT_02002184)[iVar3] = (&DAT_02002184)[iVar3] & 0xfc | 2;
    *(uint *)(&DAT_02002184 + iVar3) = *(uint *)(&DAT_02002184 + iVar3) & 3 | param_3 << 2;
    (&DAT_02002188)[iVar1 * 3] = param_2;
    (&DAT_0200218c)[iVar1 * 3] = param_1;
    DAT_02002180 = DAT_02002180 + 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}

