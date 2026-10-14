// sub_080264E0 at 0x080264E0 (thumb)

undefined8 sub_080264E0(int param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c [2];
  
  iVar4 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_1c[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_1c[0] = (*(int *)(param_1 + 0x54) + (int)*param_2) - local_1c[1];
    local_1c[1] = *(int *)(param_1 + 0x54) + (int)*param_2 + local_1c[1];
  }
  else {
    local_1c[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_1c[0] = (*(int *)(param_1 + 0x54) - (int)*param_2) + local_1c[1];
    local_1c[1] = (*(int *)(param_1 + 0x54) - (int)*param_2) - local_1c[1];
  }
  if (*(char *)(param_1 + 0x18c) != '\0') {
    uVar3 = 0;
    do {
      uVar1 = sub_08028370(param_1,local_1c[uVar3],iVar4);
      uVar2 = uVar1 & 0xffff;
      if (((((uVar1 & 0x8000) == 0) || ((uVar1 & 0xf) == 0)) || (0xe < (uVar1 & 0xf))) &&
         (uVar2 != 0)) goto LAB_080265d2;
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < 2);
  }
  uVar3 = 0;
  while( true ) {
    uVar1 = sub_08008FEC(local_1c[uVar3],iVar4);
    uVar2 = uVar1 & 0xffff;
    if ((((uVar1 & 0x400) == 0) && ((uVar1 & 0xf) == 1)) && ((uVar1 & 0x8000) == 0)) break;
    uVar3 = uVar3 + 1 & 0xffff;
    if (1 < uVar3) {
      uVar2 = 0;
LAB_080265d2:
      return CONCAT44(in_lr,uVar2);
    }
  }
  sub_08009D5C(local_1c[uVar3],iVar4);
  goto LAB_080265d2;
}

