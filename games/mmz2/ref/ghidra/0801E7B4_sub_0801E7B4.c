// sub_0801E7B4 at 0x0801E7B4 (thumb)

undefined8 sub_0801E7B4(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = DAT_0202ec34 & 0x8000;
  }
  else {
    uVar1 = DAT_0202ec36 & 0x8000;
  }
  iVar5 = param_3;
  if (uVar1 != 0) goto LAB_0801e90c;
  if (param_5 == 0) {
    puVar2 = (undefined4 *)sub_08022A84(param_1);
    param_5 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,puVar2,*puVar2,puVar2[1],
                           *(byte *)(param_1 + 10) >> 4 & 1,1,0,0,0);
    param_5 = param_5 & 0xffff;
  }
  if ((param_5 & 0x1000) == 0) goto LAB_0801e90c;
  iVar4 = param_3 - param_2;
  if ((param_3 == 0) && (iVar4 < 0)) {
    param_4 = -param_4;
  }
  iVar3 = (int)*(short *)(&DAT_08333a1c + (param_5 & 0xf) * 2 + (uint)*(byte *)(param_1 + 9) * 0x20)
  ;
  if ((iVar4 == 0) && (iVar5 = param_2, iVar3 == 0)) goto LAB_0801e90c;
  if ((param_3 != 0) || ((iVar3 == 0 || (-1 < iVar3 * param_4)))) {
    if (((iVar4 == 0) || (iVar4 * param_4 < 1)) &&
       ((iVar3 != 0 && ((iVar4 == 0 || (iVar4 * iVar3 < 1)))))) {
      if ((iVar3 == 0) || ((iVar3 * param_4 < 1 && (iVar4 * iVar3 < 1)))) {
        iVar3 = 0;
      }
      else if (iVar3 * param_4 < 0) goto LAB_0801e8cc;
    }
    else {
      if ((iVar4 != 0) && (iVar4 * param_4 < 0)) {
        param_4 = -param_4;
      }
      iVar3 = param_4 + iVar3;
LAB_0801e8cc:
      if (iVar3 * iVar3 - iVar4 * iVar4 != 0 && iVar4 * iVar4 <= iVar3 * iVar3) {
        iVar3 = iVar4;
      }
    }
  }
  iVar5 = param_2 + iVar3;
  if (0xffe < iVar5 + 0x7ffU) {
    if (iVar5 < 1) {
      iVar5 = -0x7ff;
    }
    else {
      iVar5 = 0x7ff;
    }
  }
LAB_0801e90c:
  return CONCAT44(in_lr,iVar5);
}

