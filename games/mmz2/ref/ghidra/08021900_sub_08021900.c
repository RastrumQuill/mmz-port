// sub_08021900 at 0x08021900 (thumb)

undefined8 sub_08021900(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  uVar5 = *param_1;
  iVar2 = param_1[1];
  iVar3 = sub_08008EA4(uVar5,iVar2);
  if (iVar3 < 0) {
    uVar1 = sub_08008D80(uVar5,iVar2);
    iVar3 = sub_080226A8(param_1,param_2,uVar5,iVar2,0,0,1,param_3,iVar3,uVar1,0,0);
    if (iVar3 == 0) {
      iVar3 = sub_08022934(param_1,param_2,uVar5,iVar2,0,param_3,uVar1);
      if (iVar3 < 0) {
        uVar6 = sub_08008D80(uVar5,iVar2 + iVar3 + 1);
        uVar6 = uVar6 & 0xffff;
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      iVar4 = iVar2 + iVar3 + 1;
      uVar1 = sub_08008D80(uVar5,iVar4);
      uVar6 = sub_080201C0(uVar5,iVar4,uVar1);
      uVar6 = uVar6 & 0xffff;
      if (param_3 != 0) {
        param_1[1] = iVar2 + iVar3;
      }
    }
  }
  return CONCAT44(in_lr,uVar6);
}

