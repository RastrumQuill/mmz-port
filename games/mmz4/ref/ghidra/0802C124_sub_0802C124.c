// sub_0802C124 at 0x0802C124 (thumb)

undefined8 sub_0802C124(int param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_20 [2];
  
  iVar2 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_20[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_20[0] = (*(int *)(param_1 + 0x54) + (int)*param_2) - local_20[1];
    local_20[1] = *(int *)(param_1 + 0x54) + (int)*param_2 + local_20[1];
  }
  else {
    local_20[1] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_20[0] = (*(int *)(param_1 + 0x54) - (int)*param_2) + local_20[1];
    local_20[1] = (*(int *)(param_1 + 0x54) - (int)*param_2) - local_20[1];
  }
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    uVar3 = 0;
    do {
      uVar1 = sub_0802E040(param_1,local_20[uVar3],iVar2);
      if (((((uVar1 & 0x8000) == 0) || ((uVar1 & 0xf) == 0)) || (0xe < (uVar1 & 0xf))) &&
         (((uVar1 & 0xf) != 0xf && ((uVar1 & 0xf) != 0)))) goto LAB_0802c170;
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < 2);
  }
  uVar3 = 0;
  while( true ) {
    uVar1 = sub_08007020(local_20[uVar3],iVar2);
    if ((((uVar1 & 0x400) == 0) && ((uVar1 & 0xf) == 1)) && ((uVar1 & 0x8000) == 0)) break;
    uVar3 = uVar3 + 1 & 0xffff;
    if (1 < uVar3) {
      uVar1 = 0;
LAB_0802c226:
      return CONCAT44(in_lr,uVar1);
    }
  }
  sub_08008080(local_20[uVar3],iVar2);
LAB_0802c170:
  uVar1 = uVar1 & 0xffff;
  goto LAB_0802c226;
}

