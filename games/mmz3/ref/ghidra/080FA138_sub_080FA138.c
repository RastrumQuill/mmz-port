// sub_080FA138 at 0x080FA138 (thumb)

undefined8 sub_080FA138(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  short *psVar4;
  undefined4 in_lr;
  undefined auStack_20 [8];
  undefined auStack_18 [12];
  
  psVar4 = (short *)(param_1 + 0xdcc);
  sVar1 = *(short *)(param_1 + 0xdd2);
  if (sVar1 != 1) {
    if (1 < sVar1) {
      if (sVar1 == 2) {
        uVar2 = sub_080B5144(0);
        *(undefined4 *)(param_1 + 0xddc) = uVar2;
        sub_0800471C(0x1d);
        *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
      }
      else if (sVar1 != 3) goto LAB_080fa1a6;
      if (1 < *(byte *)(*(int *)(param_1 + 0xddc) + 0xc)) {
        *(short *)(param_1 + 0xdd0) = *(short *)(param_1 + 0xdd0) + 1;
        *(undefined2 *)(param_1 + 0xdd2) = 0;
      }
      goto LAB_080fa1a6;
    }
    if (sVar1 != 0) goto LAB_080fa1a6;
    *psVar4 = 0x3c;
    *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
  }
  sVar1 = *psVar4;
  *psVar4 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
  }
LAB_080fa1a6:
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
  return CONCAT44(in_lr,1);
}

