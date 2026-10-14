// sub_0801EC9C at 0x0801EC9C (thumb)

undefined4 sub_0801EC9C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xbe);
  if (bVar1 == 0) {
    bVar1 = sub_08017D70(param_1);
  }
  uVar2 = 0x200;
  if (((*(byte *)(param_1 + 0x17a) & 1) != 0) && ((DAT_02022b62 & 0x8000) == 0)) {
    uVar2 = 0x280;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (bVar1 < 3) {
    if ((*(char *)(param_1 + 0xbc) == '\0') && (*(char *)(param_1 + 0xbd) == '\0')) {
      *(undefined *)(param_1 + 0xf) = 1;
      sub_08018BE8(param_1,2);
      sub_0801ED28(param_1);
      return in_lr;
    }
    sub_08018C20(param_1,2,0,1);
  }
  *(undefined *)(param_1 + 0xf) = 2;
  sub_0801EE3C(param_1);
  return in_lr;
}

