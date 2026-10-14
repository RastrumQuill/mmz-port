// sub_080EE7D8 at 0x080EE7D8 (thumb)

undefined4 sub_080EE7D8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  if (*(char *)(param_1 + 3) == '\0') {
    sub_08004628();
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  sVar1 = *(short *)(param_1 + 4) + -2;
  *(short *)(param_1 + 4) = sVar1;
  DAT_03002ec0 = (undefined)sVar1;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (sVar1 == 0) {
    sub_080EDE88(param_1);
    DAT_03002ac0 = 0;
    DAT_020023c0 = DAT_020023c0 & 0xc1ff;
    DAT_02002420 = 0;
    sub_08004048();
    sub_080EDD24();
    sub_080EDB10(param_1,1);
  }
  else {
    iVar2 = param_1 + 0x9a0;
    sub_0800507C(iVar2);
    sub_08007218();
    DAT_0202f5d4 = 0;
    local_18[0] = 0;
    sub_080FE110(local_18,&DAT_0202f5e0,0x1000008);
    sub_0801A200(1);
    sub_08017224(DAT_02030630,iVar2);
    sub_08017224(DAT_020305e4,iVar2);
    sub_08017224(DAT_020305e8,iVar2);
    sub_08017224(DAT_020305dc,iVar2);
    sub_0801713C(DAT_02030638,iVar2);
    sub_08036F08(iVar2);
    sub_0801713C(DAT_020305f8,iVar2);
    sub_0801713C(DAT_0203062c,iVar2);
    sub_08017224(DAT_02030634,iVar2);
    sub_0801A380(1);
    sub_080F013C(param_1);
    sub_080EA16C();
  }
  return in_lr;
}

