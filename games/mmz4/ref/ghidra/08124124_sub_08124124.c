// sub_08124124 at 0x08124124 (thumb)

undefined8 sub_08124124(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  uVar2 = sub_08128884(param_1,*(undefined4 *)(&DAT_088865ac + (uint)*(byte *)(param_1 + 0xde4) * 4)
                      );
  iVar4 = *(int *)(param_1 + 0xdd8);
  iVar6 = *(int *)(param_1 + 0xdd4);
  if (iVar4 < iVar6) {
    if (iVar6 - iVar4 < 10) {
      *(int *)(param_1 + 0xdd8) = iVar4 + 1;
    }
    else {
      *(int *)(param_1 + 0xdd8) = iVar4 + 2;
      if (iVar6 < iVar4 + 2) {
        *(int *)(param_1 + 0xdd8) = iVar6;
      }
    }
  }
  if (*(int *)(param_1 + 0xddc) < *(int *)(param_1 + 0xdd4)) {
    *(int *)(param_1 + 0xddc) = *(int *)(param_1 + 0xdd4);
  }
  sub_0810D3E4("SCORE",1,0);
  sub_0810D498(*(undefined4 *)(param_1 + 0xdd8),0xb,0);
  sub_0810D3E4("HI-SCORE",0xf,0);
  sub_0810D498(*(undefined4 *)(param_1 + 0xddc),0x1c,0);
  sub_0810D3E4(&DAT_0813641c,9,0x12);
  uVar3 = FUN_081288bc(*(undefined4 *)(param_1 + 0xde0),0x3c);
  sub_0810D498(uVar3,0xf,0x12);
  sub_0810D3E4(&DAT_08136424,0x10,0x12);
  iVar4 = sub_08128954(*(undefined4 *)(param_1 + 0xde0),0x3c);
  bVar1 = FUN_081288bc(iVar4 * 0xa6,100);
  sub_0810D498(bVar1,0x12,0x12);
  if (bVar1 < 10) {
    sub_0810D498(0,0x11,0x12);
  }
  if ((1 < *(uint *)(param_1 + 0xe00)) && ((*(uint *)(param_1 + 0xde0) & 1) != 0)) {
    sub_0810D3E4("COMBO",0xc,5);
    sub_0810D498(*(undefined4 *)(param_1 + 0xe00),0xe,7);
  }
  if ((*(uint *)(*(int *)(param_1 + 0xdcc) + 0x8c) & 1) != 0) {
    if (*(int *)(param_1 + 0xdfc) == 0) {
      *(int *)(param_1 + 0xde0) = *(int *)(param_1 + 0xde0) + -0xb4;
      *(undefined4 *)(param_1 + 0xdfc) = 1;
    }
    if (*(int *)(param_1 + 0xde0) < 0) {
      *(undefined4 *)(param_1 + 0xde0) = 0;
    }
    *(undefined4 *)(param_1 + 0xe00) = 0;
  }
  if ((*(int *)(param_1 + 0xdf8) == 1) && (uVar5 = *(uint *)(param_1 + 0xdf0) >> 8, uVar5 != 0)) {
    if (uVar5 != 0x80) {
      iVar4 = *(int *)(param_1 + 0xdd4);
      *(uint *)(param_1 + 0xdd4) = iVar4 + uVar5;
      if (uVar5 == 5) {
        uVar5 = *(int *)(param_1 + 0xe00) + 1;
        *(uint *)(param_1 + 0xe00) = uVar5;
        if (uVar5 < 6) {
          *(uint *)(param_1 + 0xdd4) = iVar4 + 4 + uVar5;
        }
        else {
          *(int *)(param_1 + 0xdd4) = iVar4 + 10;
        }
        goto LAB_08124298;
      }
    }
    *(undefined4 *)(param_1 + 0xe00) = 0;
  }
LAB_08124298:
  piVar7 = (int *)(param_1 + 0xdcc);
  uVar5 = *(uint *)(param_1 + 0xdf0) & 0xff;
  *(uint *)(param_1 + 0xdf0) = uVar5;
  if (uVar5 == 0) {
    *(undefined4 *)(param_1 + 0xdfc) = 0;
  }
  *(undefined2 *)(*piVar7 + 0xa4) = 0x10;
  if (*(char *)(*piVar7 + 0x155) == '\x01') {
    *(undefined4 *)(param_1 + 0xe04) = 0;
  }
  if ((*(char *)(*piVar7 + 0x155) == '\x03') && (*(int *)(param_1 + 0xe04) == 0)) {
    *(undefined4 *)(param_1 + 0xe00) = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

