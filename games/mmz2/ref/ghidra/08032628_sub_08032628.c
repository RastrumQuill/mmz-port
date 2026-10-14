// sub_08032628 at 0x08032628 (thumb)

undefined8 sub_08032628(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 2;
  sub_08037E20(param_1);
  uVar2 = (uint)*(byte *)(param_1 + 0x182);
  if (99 < uVar2) {
    iVar4 = 0;
    goto LAB_080326e6;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08032690:
    iVar4 = 0x200;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_08032690;
    iVar4 = 0x280;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_080326d8:
    iVar3 = uVar2 << 9;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_080326d8;
    iVar3 = uVar2 * 0x280;
  }
  iVar3 = sub_080EF150(iVar3,100);
  iVar4 = iVar4 - iVar3;
LAB_080326e6:
  *(int *)(param_1 + 0xc4) = iVar4;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  return CONCAT44(in_lr,2);
}

