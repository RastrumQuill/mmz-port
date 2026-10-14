// sub_08125720 at 0x08125720 (thumb)

undefined8 sub_08125720(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (((*(uint *)(*(int *)(param_1 + 0xdcc) + 0x8c) & 1) != 0) &&
     (iVar2 = *(int *)(param_1 + 0xde0) + -0xb4, *(int *)(param_1 + 0xde0) = iVar2, iVar2 < 0)) {
    *(undefined4 *)(param_1 + 0xde0) = 0;
  }
  uVar3 = sub_08128884(param_1,*(undefined4 *)(&DAT_088865dc + (uint)*(byte *)(param_1 + 0xde4) * 4)
                      );
  *(undefined2 *)(*(int *)(param_1 + 0xdcc) + 0xa4) = 0x10;
  iVar2 = *(int *)(param_1 + 0xdd8);
  iVar5 = *(int *)(param_1 + 0xdd4);
  if (iVar2 < iVar5) {
    if (iVar5 - iVar2 < 10) {
      *(int *)(param_1 + 0xdd8) = iVar2 + 1;
    }
    else {
      *(int *)(param_1 + 0xdd8) = iVar2 + 2;
      if (iVar5 < iVar2 + 2) {
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
  sub_0810D3E4(&DAT_08136484,9,0x12);
  uVar4 = FUN_081288bc(*(undefined4 *)(param_1 + 0xde0),0x3c);
  sub_0810D498(uVar4,0xf,0x12);
  sub_0810D3E4(&DAT_0813648c,0x10,0x12);
  iVar2 = sub_08128954(*(undefined4 *)(param_1 + 0xde0),0x3c);
  bVar1 = FUN_081288bc(iVar2 * 0xa6,100);
  sub_0810D498(bVar1,0x12,0x12);
  if (bVar1 < 10) {
    sub_0810D498(0,0x11,0x12);
  }
  if (*(int *)(param_1 + 0xdf8) == 1) {
    if (*(int *)(param_1 + 0xdfc) == 0) {
      *(undefined4 *)(param_1 + 0xdf8) = 0;
    }
    else {
      sub_0810D3E4(&DAT_08136490,0x10,8);
      sub_0810D498(5 - *(int *)(param_1 + 0xdf4),0x11,8);
      *(int *)(param_1 + 0xdfc) = *(int *)(param_1 + 0xdfc) + -1;
    }
  }
  return CONCAT44(in_lr,uVar3);
}

