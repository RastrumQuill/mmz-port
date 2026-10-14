// sub_080ACEC4 at 0x080ACEC4 (thumb)

undefined4 sub_080ACEC4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(iVar8 + 0xc) & 0xffff00) == 0x20700) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080ACFFC(param_1);
  }
  else {
    uVar3 = sub_080378D8(iVar8,0);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    uVar3 = sub_0803792C(iVar8,0);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    bVar1 = *(byte *)(param_1 + 0xd);
    uVar7 = (uint)*(byte *)(param_1 + 0x10);
    uVar4 = (uint)*(byte *)(iVar8 + 0x188 + uVar7);
    uVar2 = *(undefined *)(iVar8 + 0x212 + uVar7);
    uVar5 = sub_080355BC(iVar8,uVar2);
    uVar5 = (uint)(uVar5 <= uVar4);
    uVar6 = sub_080355A4(iVar8,uVar2);
    if (uVar6 <= uVar4) {
      uVar5 = uVar5 + 1;
    }
    *(char *)(param_1 + 0xd) = (char)uVar5;
    if (uVar5 != bVar1) {
      if (uVar5 == 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        if (bVar1 == 0) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
          sub_080127E4(param_1,*(undefined2 *)(&DAT_08345b28 + uVar7 * 2));
          *(byte *)(param_1 + 0x12) = bVar1;
        }
        if (uVar5 == 1) {
          sub_08012CA4(param_1,0xe);
        }
        else {
          sub_08012CA4(param_1,0xf);
        }
      }
    }
    sub_080128D4(param_1);
    if (uVar7 != 0) {
      uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x2c) + 0xd);
      if (uVar5 < uVar4) {
        uVar5 = uVar4;
      }
      if (uVar5 == 0) {
        *(undefined *)(param_1 + 0x12) = 0;
      }
      else if ((*(byte *)(param_1 + 0x12) == 0) ||
              (iVar8 = *(byte *)(param_1 + 0x12) - 1, *(char *)(param_1 + 0x12) = (char)iVar8,
              iVar8 == 0)) {
        sub_080032EC(*(undefined2 *)(&DAT_08345b2c + (uVar5 - 1) * 2));
        *(undefined *)(param_1 + 0x12) = 0x18;
      }
    }
  }
  return in_lr;
}

