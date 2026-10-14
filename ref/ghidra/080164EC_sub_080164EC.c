// sub_080164EC at 0x080164EC (thumb)

undefined4 sub_080164EC(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 0x201;
  uVar6 = ~(uint)(*(byte *)(param_1 + 10) >> 4) & 1;
  if ((*(ushort *)(param_1 + 0x110) & 0xff00) != 0) {
    uVar6 = (uint)(uVar6 == 0);
  }
  *(char *)(param_1 + 0x117) = (char)uVar6;
  cVar1 = sub_08016DF4(param_1);
  if (cVar1 == '\0') {
    uVar5 = 0x200;
    if (((*(byte *)(param_1 + 0x17a) & 1) != 0) && ((DAT_02022b62 & 0x8000) == 0)) {
      uVar5 = 0x280;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0x380;
  }
  if (*(byte *)(param_1 + 0x11e) < 100) {
    iVar3 = sub_080C8AD0((uint)*(byte *)(param_1 + 0x11e) * 0x4c0,100);
    iVar3 = 0x4c0 - iVar3;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x58) = -iVar3;
  *(undefined4 *)(param_1 + 0x60) = 0x40;
  *(undefined *)(param_1 + 0x118) = 8;
  if (2 < *(byte *)(param_1 + 0xbe)) goto LAB_0801660a;
  if (*(int *)(param_1 + 0x54) < 0x380) {
    sub_08018BE8(param_1,9);
    *(bool *)(param_1 + 0x44) = uVar6 == 0;
    if (uVar6 != 0) goto LAB_08016602;
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    sub_08018BE8(param_1,0xc);
    *(byte *)(param_1 + 0x44) = (byte)(-uVar6 >> 0x1f);
    if ((int)-uVar6 < 0) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
LAB_08016602:
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_0801660a:
  uVar5 = 0;
  if (((DAT_02022adf & 0x40) == 0) &&
     (((*(char *)(param_1 + 0x94) == '\0' || ((*(byte *)(param_1 + 0x90) & 1) != 0)) &&
      ((*(byte *)(param_1 + 0x128) & 0x43) == 0)))) {
    uVar5 = 1;
  }
  sub_0801BFE8(param_1,uVar6 == 0,1,uVar5);
  if (*(byte *)(param_1 + 0x11e) < 100) {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = sub_080C8AD0(iVar3 * (uint)*(byte *)(param_1 + 0x11e),100);
    iVar3 = iVar3 - iVar4;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  sub_08001EAC(0x5a);
  return in_lr;
}

