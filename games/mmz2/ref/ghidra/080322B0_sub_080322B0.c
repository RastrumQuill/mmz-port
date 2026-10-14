// sub_080322B0 at 0x080322B0 (thumb)

undefined8 sub_080322B0(int param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x60) < 0) {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    uVar6 = 1;
  }
  else {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    uVar6 = 2;
  }
  sub_08037E20(param_1);
  uVar3 = (uint)*(byte *)(param_1 + 0x182);
  if (99 < uVar3) {
    iVar5 = 0;
    goto LAB_0803238a;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08032334:
    iVar5 = 0x200;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_08032334;
    iVar5 = 0x280;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_0803237c:
    iVar4 = uVar3 << 9;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_0803237c;
    iVar4 = uVar3 * 0x280;
  }
  iVar4 = sub_080EF150(iVar4,100);
  iVar5 = iVar5 - iVar4;
LAB_0803238a:
  *(int *)(param_1 + 0xc4) = iVar5;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  cVar2 = sub_0801E9C4(param_1);
  if (cVar2 == '\0') {
    sub_0803543C(param_1);
  }
  return CONCAT44(in_lr,uVar6);
}

