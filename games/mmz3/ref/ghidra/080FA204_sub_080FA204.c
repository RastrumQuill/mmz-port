// sub_080FA204 at 0x080FA204 (thumb)

undefined8 sub_080FA204(int param_1)

{
  undefined uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 in_lr;
  undefined auStack_28 [8];
  undefined auStack_20 [12];
  undefined4 local_14;
  undefined4 local_10;
  
  psVar5 = (short *)(param_1 + 0xdcc);
  *(int *)(param_1 + 0xde4) = *(int *)(param_1 + 0xde4) + 1;
  *psVar5 = *psVar5 + 1;
  iVar3 = sub_080FE390((int)*psVar5,(int)*(short *)(param_1 + 0xdce));
  if (iVar3 == 0) {
    DAT_0203710c = (DAT_0203710c * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039;
    uVar1 = sub_080FE4D8(DAT_0203710c >> 0x10,3);
    local_14 = 0x1b800;
    local_10 = 0xc000;
    sub_080B13B4(psVar5,&local_14,uVar1);
    uVar4 = *(int *)(param_1 + 0xdec) + 1;
    *(uint *)(param_1 + 0xdec) = uVar4;
    *psVar5 = 0;
    if (uVar4 < 4) {
      uVar2 = 0x78;
    }
    else if (uVar4 < 0xc) {
      uVar2 = 0x70;
    }
    else if (uVar4 < 0x18) {
      uVar2 = 0x68;
    }
    else if (uVar4 < 0x20) {
      uVar2 = 0x60;
    }
    else if (uVar4 < 0x30) {
      uVar2 = 0x58;
    }
    else {
      uVar2 = 0x46;
    }
    *(undefined2 *)(param_1 + 0xdce) = uVar2;
  }
  sub_080FE598(auStack_28,"SCORE",6);
  sub_080E97D4(auStack_28,0x12,0);
  uVar4 = *(uint *)(param_1 + 0xde8);
  sub_080E9824(uVar4,0x1b,0);
  if ((*(uint *)(param_1 + 0xdf0) < uVar4) &&
     (*(uint *)(param_1 + 0xdf0) = uVar4, *(short *)(param_1 + 0xdda) == 0)) {
    *(undefined2 *)(param_1 + 0xdda) = 1;
    sub_0800471C(0x138);
  }
  sub_080FE598(auStack_20,"HI-SCORE",9);
  sub_080E97D4(auStack_20,0xf,1);
  sub_080E9824(*(undefined4 *)(param_1 + 0xdf0),0x1b,1);
  if (*(char *)(param_1 + 0xdd8) == '\0') {
    *(short *)(param_1 + 0xdd0) = *(short *)(param_1 + 0xdd0) + 1;
    *(undefined2 *)(param_1 + 0xdd2) = 0;
  }
  return CONCAT44(in_lr,1);
}

