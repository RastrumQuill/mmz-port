// sub_080F74AC at 0x080F74AC (thumb)

undefined4 sub_080F74AC(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  default:
    goto switchD_080f74be_caseD_0;
  case 1:
    iVar4 = *(int *)(param_1 + 0x60) + 0x100;
    break;
  case 2:
    iVar4 = 0x300;
    break;
  case 3:
    iVar4 = *(int *)(param_1 + 0x60) + -0x100;
    break;
  case 4:
    iVar4 = -0x1000;
  }
  *(int *)(param_1 + 0x60) = iVar4;
switchD_080f74be_caseD_0:
  sVar3 = *(short *)(DAT_0202dbf0 + 0x27e);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    uVar2 = sub_08128A24(sVar3,100);
    uVar5 = sub_08128A9C(uVar2,10);
    uVar5 = uVar5 & 0xff;
    if (uVar5 != 0) goto LAB_080f75a0;
    if (sVar3 != 1000) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080f75b4;
    }
    uVar5 = 0x6700;
LAB_080f75a8:
    sub_0801CF00(param_1,uVar5);
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sVar3 = sub_08128A24(sVar3,10);
      }
      else if (bVar1 != 4) goto LAB_080f75b6;
      uVar5 = sub_08128A9C(sVar3,10);
      uVar5 = uVar5 & 0xff;
LAB_080f75a0:
      uVar5 = uVar5 | 0x6700;
      goto LAB_080f75a8;
    }
    if (bVar1 != 0) goto LAB_080f75b6;
    if (sVar3 == 1000) {
      uVar5 = 0x6701;
      goto LAB_080f75a8;
    }
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
LAB_080f75b4:
  *(byte *)(param_1 + 10) = bVar1;
LAB_080f75b6:
  *(int *)(param_1 + 0x54) = DAT_0202ea30 + *(int *)(param_1 + 0x5c) + -0x7800;
  *(int *)(param_1 + 0x58) = DAT_0202ea34 + *(int *)(param_1 + 0x60) + -0x5000;
  sub_0801CFF0(param_1);
  return in_lr;
}

