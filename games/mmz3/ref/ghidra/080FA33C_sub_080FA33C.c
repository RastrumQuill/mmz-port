// sub_080FA33C at 0x080FA33C (thumb)

undefined8 sub_080FA33C(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  short *psVar4;
  undefined4 in_lr;
  undefined auStack_20 [8];
  undefined auStack_18 [12];
  
  psVar4 = (short *)(param_1 + 0xdcc);
  switch(*(undefined2 *)(param_1 + 0xdd2)) {
  case 0:
    *psVar4 = 0x3c;
    *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
  case 1:
    sVar1 = *psVar4;
    *psVar4 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
LAB_080fa3ac:
      *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
    }
    break;
  case 2:
    uVar2 = sub_080B5144(4);
    *(undefined4 *)(param_1 + 0xddc) = uVar2;
    sub_080046A4(0xb3);
    *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0xddc) + 0xc)) goto LAB_080fa3ac;
    break;
  case 4:
    DAT_02030ea4 = 0x40;
    *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
  case 5:
    if (DAT_02030ea4 == 0x20) {
      uVar2 = 0;
      *psVar4 = 0;
      *(undefined2 *)(param_1 + 0xdd2) = 0;
      goto LAB_080fa424;
    }
  default:
    break;
  }
  sub_080FE598(auStack_20,"SCORE",6);
  sub_080E97D4(auStack_20,0x12,0);
  uVar3 = *(uint *)(param_1 + 0xde8);
  sub_080E9824(uVar3,0x1b,0);
  if (*(uint *)(param_1 + 0xdf0) < uVar3) {
    *(uint *)(param_1 + 0xdf0) = uVar3;
  }
  sub_080FE598(auStack_18,"HI-SCORE",9);
  sub_080E97D4(auStack_18,0xf,1);
  sub_080E9824(*(undefined4 *)(param_1 + 0xdf0),0x1b,1);
  uVar2 = 1;
LAB_080fa424:
  return CONCAT44(in_lr,uVar2);
}

