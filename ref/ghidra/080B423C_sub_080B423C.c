// sub_080B423C at 0x080B423C (thumb)

undefined8
sub_080B423C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_080B5120(iVar3,param_2,&local_24,param_5,param_6,param_7);
  if (((local_24 + 0x6400U < 0xc801) && (local_20 + 0x6400U < 0xc801)) &&
     (iVar4 = local_24 * local_24 + local_20 * local_20, iVar4 < 0x27100001)) {
    iVar2 = *(int *)(iVar3 + 0x4c) - *(int *)(iVar3 + 0xc4);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (((local_24 + 0x13ffU < 0x27ff) && (local_20 + 0x13ffU < 0x27ff)) &&
       ((iVar4 < 0x1900001 && (iVar2 < 1)))) {
      uVar1 = 0;
    }
    else {
      local_24 = local_24 + *param_2;
      local_20 = local_20 + param_2[1];
      if (((*(byte *)(iVar3 + 0x17a) & 1) == 0) || ((DAT_02022b62 & 0x8000) != 0)) {
        uVar1 = 0x200;
      }
      else {
        uVar1 = 0x280;
      }
      sub_080B4040(param_2,&local_24,param_3,param_4,iVar2,uVar1,0x800,0x380,0x70,0xe0,4);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

