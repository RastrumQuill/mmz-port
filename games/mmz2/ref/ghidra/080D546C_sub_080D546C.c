// sub_080D546C at 0x080D546C (thumb)

undefined8
sub_080D546C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined param_5,
            undefined4 param_6,undefined4 param_7)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080D62C4(iVar4,param_2,&local_24,param_5,param_6,param_7);
  if (((0xc800 < local_24 + 0x6400U) || (0xc800 < local_20 + 0x6400U)) ||
     (iVar5 = local_24 * local_24 + local_20 * local_20, 0x27100000 < iVar5)) {
    uVar2 = 2;
    goto LAB_080d5584;
  }
  iVar3 = *(int *)(iVar4 + 0x54) - *(int *)(iVar4 + 0xb4);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (((local_24 + 0x13ffU < 0x27ff) && (local_20 + 0x13ffU < 0x27ff)) &&
     ((iVar5 < 0x1900001 && (iVar3 < 1)))) {
    uVar2 = 0;
    goto LAB_080d5584;
  }
  local_24 = local_24 + *param_2;
  local_20 = local_20 + param_2[1];
  if (((*(byte *)(iVar4 + 0x202) & 4) == 0) && (*(char *)(iVar4 + 0x1fc) != '\x05')) {
LAB_080d5558:
    uVar2 = 0x200;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(iVar4 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_080d5558;
    uVar2 = 0x280;
  }
  sub_080D52B4(param_2,&local_24,param_3,param_4,iVar3,uVar2,0x800,0x380,0x70,0xe0,4);
  uVar2 = 1;
LAB_080d5584:
  return CONCAT44(in_lr,uVar2);
}

