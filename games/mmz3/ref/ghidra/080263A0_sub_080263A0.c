// sub_080263A0 at 0x080263A0 (thumb)

undefined8 sub_080263A0(int param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_2c [4];
  
  uVar5 = 0;
  iVar3 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_2c[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_2c[0] = (*(int *)(param_1 + 0x54) + (int)*param_2) - local_2c[1];
    local_2c[1] = *(int *)(param_1 + 0x54) + (int)*param_2 + local_2c[1];
  }
  else {
    local_2c[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_2c[0] = (*(int *)(param_1 + 0x54) - (int)*param_2) + local_2c[1];
    local_2c[1] = (*(int *)(param_1 + 0x54) - (int)*param_2) - local_2c[1];
  }
  if (*(char *)(param_1 + 0x18c) != '\0') {
    uVar4 = 0;
    do {
      uVar1 = sub_08028370(param_1,local_2c[uVar4],iVar3);
      if ((((uVar1 & 0x8000) == 0) || ((uVar1 & 0xf) == 0)) || (0xe < (uVar1 & 0xf))) {
        uVar1 = sub_08028094(param_1,local_2c[uVar4],iVar3,local_2c + 2);
        if ((uVar1 & 0xffff) != 0) {
          local_2c[0] = local_2c[0] + local_2c[2];
          local_2c[1] = local_2c[1] + local_2c[2];
          iVar3 = iVar3 + local_2c[3];
          uVar5 = uVar1 & 0xffff;
        }
      }
      uVar4 = uVar4 + 1 & 0xffff;
    } while (uVar4 < 2);
  }
  uVar4 = 0;
  do {
    uVar1 = sub_08008FEC(local_2c[uVar4],iVar3);
    if ((((uVar1 & 0x400) == 0) && ((uVar1 & 0xf) == 1)) && ((uVar1 & 0x8000) == 0)) {
      iVar2 = sub_08009D5C(local_2c[uVar4],iVar3);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
      iVar3 = iVar3 + iVar2;
      uVar5 = uVar1 & 0xffff;
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 2);
  return CONCAT44(in_lr,uVar5);
}

