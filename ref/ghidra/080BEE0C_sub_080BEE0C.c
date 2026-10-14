// sub_080BEE0C at 0x080BEE0C (thumb)

undefined4
sub_080BEE0C(undefined4 param_1,int param_2,int param_3,int param_4,char param_5,char param_6)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar4 = (param_3 << 0x10) >> 0x13 & 0xffff;
  uVar1 = (param_4 << 0x10) >> 0x13 & 0xffff;
  if (uVar4 != uVar1) {
    if ((param_3 << 0x10) >> 0x10 < (param_4 << 0x10) >> 0x10) {
      uVar2 = uVar1 - uVar4;
      uVar4 = uVar4 + (int)param_5;
    }
    else {
      uVar2 = uVar4 - uVar1;
      uVar4 = uVar1 + (int)param_6;
    }
    uVar4 = uVar4 & 0xffff;
    uVar1 = sub_080C8CB0(uVar4,0x1e);
    uVar1 = uVar1 & 0xffff;
    iVar7 = 0;
    if ((uVar2 & 0xffff) != 0) {
      do {
        puVar3 = (undefined2 *)((DAT_02004f36 & 0x1f00) * 8 + 0x6000000);
        if ((uVar4 & 0x20) != 0) {
          puVar3 = &DAT_06000800 + (DAT_02004f36 & 0x1f00) * 4;
        }
        puVar3 = puVar3 + (uVar4 & 0x1f);
        uVar4 = (uVar4 & 0x3f) + 1;
        uVar6 = uVar1 + 1;
        iVar7 = iVar7 + 1;
        iVar5 = 0x13;
        do {
          *puVar3 = *(undefined2 *)(uVar1 * 2 + param_2);
          puVar3 = puVar3 + 0x20;
          uVar1 = uVar1 + 0x20 & 0xffff;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        uVar6 = uVar6 & 0xffff;
        uVar1 = 0;
        if (uVar6 < 0x1e) {
          uVar1 = uVar6;
        }
      } while (iVar7 < (int)(uVar2 & 0xffff));
    }
  }
  return in_lr;
}

