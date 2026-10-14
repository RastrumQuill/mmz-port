// sub_080F9328 at 0x080F9328 (thumb)

undefined8 sub_080F9328(int param_1)

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
LAB_080f9398:
      *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
    }
    break;
  case 2:
    uVar2 = sub_080B5144(4);
    *(undefined4 *)(param_1 + 0xddc) = uVar2;
    sub_080046A4(0xad);
    *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0xddc) + 0xc)) goto LAB_080f9398;
    break;
  case 4:
    DAT_02030ea4 = 0x40;
    *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
  case 5:
    if (DAT_02030ea4 == 0x20) {
      uVar2 = 0;
      *psVar4 = 0;
      *(undefined2 *)(param_1 + 0xdd2) = 0;
      goto LAB_080f9410;
    }
  default:
    break;
  }
  sub_080FE598(auStack_20,"SCORE",6);
  sub_080E97D4(auStack_20,1,0);
  uVar3 = (uint)*(ushort *)(param_1 + 0xe04);
  sub_080E9824(uVar3,10,0);
  if (*(uint *)(param_1 + 0xe08) < uVar3) {
    *(uint *)(param_1 + 0xe08) = uVar3;
  }
  sub_080FE598(auStack_18,"HI-SCORE",9);
  sub_080E97D4(auStack_18,0xf,0);
  sub_080E9824(*(undefined4 *)(param_1 + 0xe08),0x1b,0);
  uVar2 = 1;
LAB_080f9410:
  return CONCAT44(in_lr,uVar2);
}

