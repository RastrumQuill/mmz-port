// sub_080401E8 at 0x080401E8 (thumb)

undefined4 sub_080401E8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202ec38 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080402C8(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08040254:
    if (*(int *)(param_1 + 0x68) == 0) goto LAB_08040266;
  }
  else if (*(int *)(param_1 + 0x68) == 0) {
    uVar1 = sub_0801E11C(8,param_1,&DAT_0833a508);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    goto LAB_08040254;
  }
  iVar2 = sub_0801E4D8();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
LAB_08040266:
  if (*(char *)(param_1 + 0xc1) == '\0') {
    iVar2 = 0;
    uVar4 = 0;
    piVar3 = (int *)(param_1 + 0xc4);
    if (*(char *)(*piVar3 + 0xd) == '\0') {
      iVar2 = 1;
      while( true ) {
        piVar3 = piVar3 + 1;
        uVar4 = uVar4 + 1;
        if ((7 < uVar4) || (*(char *)(*piVar3 + 0xd) != '\0')) break;
        iVar2 = iVar2 + 1;
      }
    }
    if (iVar2 == 8) {
      *(char *)(param_1 + 0xc1) = '\x01';
      *(undefined *)(param_1 + 0xc0) = 0;
    }
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833a214 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

