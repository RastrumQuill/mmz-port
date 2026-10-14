// sub_080EE91C at 0x080EE91C (thumb)

undefined4 sub_080EE91C(int param_1)

{
  int iVar1;
  undefined uVar2;
  undefined4 in_lr;
  undefined4 local_1c [2];
  
  if (*(char *)(param_1 + 3) == '\0') {
    uVar2 = *(undefined *)(*(int *)(param_1 + 0x64ac) + 0xc4);
    if ((DAT_02030104 & 0x10) != 0) {
      sub_080EDCEC();
    }
    sub_080EDF3C(param_1);
    sub_08004070();
    *(undefined2 *)(param_1 + 4) = 0;
    if (*(short *)(param_1 + 0x625e) == 1) {
      uVar2 = 6;
    }
    else if (*(short *)(param_1 + 0x625e) == 2) {
      uVar2 = 7;
    }
    iVar1 = *(int *)(param_1 + 0x64ac);
    if (*(char *)(iVar1 + 0x147) == '\x03') {
      sub_080258F0(iVar1,uVar2);
      sub_0802595C(*(int *)(param_1 + 0x64ac),uVar2);
    }
    else {
      sub_080258F0(iVar1,uVar2);
    }
    if ((DAT_020301a8 & 0x20) != 0) {
      DAT_020023c0 = DAT_020023c0 & 0xf0ff | 0x100;
      sub_080EDB10(param_1,0x800);
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  iVar1 = param_1 + 0x9a0;
  sub_0800507C(iVar1);
  sub_08007218();
  DAT_0202f5d4 = 0;
  local_1c[0] = 0;
  sub_080FE110(local_1c,&DAT_0202f5e0,0x1000008);
  sub_0801A200(1);
  sub_08017224(DAT_02030630,iVar1);
  sub_08017224(DAT_020305e4,iVar1);
  sub_08017224(DAT_020305e8,iVar1);
  sub_08017224(DAT_020305dc,iVar1);
  sub_0801713C(DAT_02030638,iVar1);
  sub_08036F08(iVar1);
  sub_0801713C(DAT_020305f8,iVar1);
  sub_0801713C(DAT_0203062c,iVar1);
  sub_08017224(DAT_02030634,iVar1);
  sub_0801A380(1);
  sub_080F013C(param_1);
  sub_080EA16C();
  iVar1 = *(ushort *)(param_1 + 4) + 2;
  *(short *)(param_1 + 4) = (short)iVar1;
  DAT_03002ec0 = (undefined)iVar1;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (iVar1 * 0x10000 >> 0x10 == 0x20) {
    *(undefined2 *)(param_1 + 0x1edc) = 0;
    if ((DAT_02030108 & 8) == 0) {
      sub_0800465C();
    }
    else {
      sub_080047D8(0x25);
      sub_080047D8(0x26);
    }
    sub_080EDB10(param_1,0x400);
  }
  return in_lr;
}

