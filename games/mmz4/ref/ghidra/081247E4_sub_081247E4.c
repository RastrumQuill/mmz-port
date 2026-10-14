// sub_081247E4 at 0x081247E4 (thumb)

undefined8 sub_081247E4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar2 = sub_08128884(param_1,*(undefined4 *)(&DAT_088865c4 + (uint)*(byte *)(param_1 + 0xde4) * 4)
                      );
  if (((*(uint *)(*(int *)(param_1 + 0xdcc) + 0x8c) & 1) != 0) &&
     (iVar3 = *(int *)(param_1 + 0xde0) + -0xb4, *(int *)(param_1 + 0xde0) = iVar3, iVar3 < 0)) {
    *(undefined4 *)(param_1 + 0xde0) = 0;
  }
  *(undefined2 *)(*(int *)(param_1 + 0xdcc) + 0xa4) = 0x10;
  iVar3 = *(int *)(param_1 + 0xdd8);
  iVar5 = *(int *)(param_1 + 0xdd4);
  if (iVar3 < iVar5) {
    if (iVar5 - iVar3 < 10) {
      *(int *)(param_1 + 0xdd8) = iVar3 + 1;
    }
    else {
      *(int *)(param_1 + 0xdd8) = iVar3 + 2;
      if (iVar5 < iVar3 + 2) {
        *(int *)(param_1 + 0xdd8) = iVar5;
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
  sub_0810D3E4(&DAT_08136444,9,0x12);
  uVar4 = FUN_081288bc(*(undefined4 *)(param_1 + 0xde0),0x3c);
  sub_0810D498(uVar4,0xf,0x12);
  sub_0810D3E4(&DAT_0813644c,0x10,0x12);
  iVar3 = sub_08128954(*(undefined4 *)(param_1 + 0xde0),0x3c);
  bVar1 = FUN_081288bc(iVar3 * 0xa6,100);
  sub_0810D498(bVar1,0x12,0x12);
  if (bVar1 < 10) {
    sub_0810D498(0,0x11,0x12);
  }
  if (0x28 < *(uint *)(param_1 + 0xdfc)) {
    local_18 = *(int *)(param_1 + 0xdc8) + -0x3000;
    local_1c = *(int *)(param_1 + 0xdc4);
    if (local_1c < *(int *)(*(int *)(param_1 + 0xdcc) + 0x54)) {
      local_1c = local_1c + -0x8c00;
      sub_080BCCD8(&local_1c,0x100,param_1);
    }
    else {
      local_1c = local_1c + 0x8c00;
      sub_080BCCD8(&local_1c,0,param_1);
    }
    *(undefined4 *)(param_1 + 0xdfc) = 0;
  }
  if (*(int *)(param_1 + 0xdf8) == 0) {
    *(undefined4 *)(param_1 + 0xdf4) = 0;
    if (*(int *)(param_1 + 0xde0) < 0x4b1) {
      iVar3 = 2;
    }
    else {
      iVar3 = FUN_081288bc(*(int *)(param_1 + 0xde0),600);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdf4) = 1;
    iVar3 = *(int *)(param_1 + 0xdf8) + -1;
  }
  *(int *)(param_1 + 0xdf8) = iVar3;
  return CONCAT44(in_lr,uVar2);
}

