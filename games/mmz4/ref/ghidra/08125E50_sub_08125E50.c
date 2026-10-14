// sub_08125E50 at 0x08125E50 (thumb)

undefined8 sub_08125E50(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar2 = sub_08128884(param_1,*(undefined4 *)(&DAT_088865e8 + (uint)*(byte *)(param_1 + 0xde4) * 4)
                      );
  iVar4 = *(int *)(param_1 + 0xdd8);
  iVar5 = *(int *)(param_1 + 0xdd4);
  if (iVar4 < iVar5) {
    if (iVar5 - iVar4 < 10) {
      *(int *)(param_1 + 0xdd8) = iVar4 + 1;
    }
    else {
      *(int *)(param_1 + 0xdd8) = iVar4 + 2;
      if (iVar5 < iVar4 + 2) {
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
  sub_0810D3E4(&DAT_081364a8,9,0x12);
  uVar3 = FUN_081288bc(*(undefined4 *)(param_1 + 0xde0),0x3c);
  sub_0810D498(uVar3,0xf,0x12);
  sub_0810D3E4(&DAT_081364b0,0x10,0x12);
  iVar4 = sub_08128954(*(undefined4 *)(param_1 + 0xde0),0x3c);
  bVar1 = FUN_081288bc(iVar4 * 0xa6,100);
  sub_0810D498(bVar1,0x12,0x12);
  if (bVar1 < 10) {
    sub_0810D498(0,0x11,0x12);
  }
  if ((1 < *(uint *)(param_1 + 0xe38)) && ((*(uint *)(param_1 + 0xde0) & 1) != 0)) {
    sub_0810D3E4("COMBO",1,7);
    sub_0810D498(*(undefined4 *)(param_1 + 0xe38),3,8);
  }
  if ((1 < *(uint *)(param_1 + 0xe3c)) && ((*(uint *)(param_1 + 0xde0) & 1) != 0)) {
    sub_0810D3E4("COMBO",0x18,7);
    sub_0810D498(*(undefined4 *)(param_1 + 0xe3c),0x1a,8);
  }
  if (*(int *)(param_1 + 0xe28) == 0) {
    if (*(int *)(param_1 + 0xe20) != 1) goto LAB_08125fac;
    if (*(int *)(param_1 + 0xe24) == 0) {
      sub_080D0610(param_1 + 0xdc4,0,0);
    }
    iVar4 = 0x1e;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xe28) + -1;
  }
  *(int *)(param_1 + 0xe28) = iVar4;
LAB_08125fac:
  *(undefined2 *)(*(int *)(param_1 + 0xdcc) + 0xa4) = 0x10;
  *(undefined4 *)(param_1 + 0xe20) = 0;
  *(undefined4 *)(param_1 + 0xe24) = 0;
  sub_08126000(param_1);
  return CONCAT44(in_lr,uVar2);
}

