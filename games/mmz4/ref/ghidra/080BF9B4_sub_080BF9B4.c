// sub_080BF9B4 at 0x080BF9B4 (thumb)

undefined4 sub_080BF9B4(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  byte abStack_40 [4];
  short asStack_3c [4];
  undefined auStack_34 [4];
  int local_30 [4];
  
  sub_08128B5C(abStack_40,&DAT_081299c8,2);
  sub_08128B5C(asStack_3c,&DAT_081299ca,8);
  local_30[0] = -0xcc00;
  local_30[1] = 0xcbff;
  sub_08128B5C(auStack_34,&DAT_081299dc,2);
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar7 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined *)(param_1 + 0x25) = 8;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08861ac0,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_0801CF00(param_1,0x2d03);
    iVar6 = *(int *)(param_1 + 0xb8);
    iVar3 = local_30[uVar7];
    iVar4 = FUN_081288bc(0x19800,auStack_34[uVar7]);
    *(uint *)(param_1 + 0x54) = iVar6 + iVar3 + iVar4 * (uint)bVar1 * (uVar7 * -2 + 1);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb4);
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_08128c10 + ((abStack_40[uVar7] + 0x40) * 0x1000000 >> 0x17)) * 3;
    *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[abStack_40[uVar7]] * 3;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(iVar5 + 0xc) < 2) {
    sub_0801CFF0(param_1);
    local_30[2] = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = local_30[2];
    local_30[3] = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = local_30[3];
    if ((local_30[3] < *(int *)(param_1 + 0xb4)) ||
       (((sVar2 = sub_08007C7C(local_30[2] + -0x600,local_30[3]), sVar2 == 0 &&
         (sVar2 = sub_08007C7C(local_30[2] + 0x600,local_30[3]), sVar2 == 0)) &&
        ((*(uint *)(param_1 + 0x8c) & 4) == 0)))) {
      bVar1 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 3) != 0) {
        return in_lr;
      }
      local_30[2] = *(int *)(param_1 + 0x54) + (int)asStack_3c[uVar7 * 2];
      local_30[3] = *(int *)(param_1 + 0x58) + (int)asStack_3c[uVar7 * 2 + 1];
      sub_080D0894(3,local_30 + 2);
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  sub_080BFB9C(param_1);
  return in_lr;
}

