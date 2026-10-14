// sub_080F8B34 at 0x080F8B34 (thumb)

undefined4 sub_080F8B34(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_28 [2];
  
  sVar2 = *(short *)(param_1 + 4);
  if (*(short *)(param_1 + 4) < 0x20) {
    sVar2 = sVar2 + 1;
    *(short *)(param_1 + 4) = sVar2;
    bVar1 = 0xff;
    DAT_03002ec2 = (byte)sVar2;
  }
  else {
    if (*(short *)(param_1 + 4) < 0x21) goto LAB_080f8b8c;
    *(short *)(param_1 + 4) = sVar2 + -1;
    bVar1 = (char)sVar2 - 0x21;
    sVar2 = 0xff;
    DAT_03002ec2 = bVar1;
  }
  DAT_03002ec0 = bVar1 & (byte)sVar2;
  DAT_03002ec1 = DAT_03002ec0;
LAB_080f8b8c:
  *(int *)(param_1 + 0x1ed8) = *(int *)(param_1 + 0x1ed8) + 1;
  sub_0800507C(param_1 + 0x9a0);
  DAT_0202f5d4 = 0;
  local_28[0] = 0;
  sub_080FE110(local_28,&DAT_0202f5e0,0x1000008);
  iVar3 = sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838c1b8 + (uint)*(byte *)(param_1 + 1) * 4));
  if (iVar3 == 0) {
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar4 = (uint)DAT_02002652;
    uVar5 = uVar4 * 0x18 & 0xffffffe0;
    sub_080FE110(&DAT_02002654,&DAT_02002954,uVar5 >> 2);
    uVar4 = uVar4 * 0x18 & 0x1f;
    if (uVar4 != 0) {
      FUN_080fe114((int)&DAT_02002654 + uVar5,(int)&DAT_02002954 + uVar5,uVar4 >> 2 | 0x4000000);
    }
    DAT_02002653 = DAT_02002652;
    DAT_02002652 = 0;
  }
  sub_08016FE4(DAT_02030630);
  sub_08016FE4(DAT_020305e8);
  sub_08016FB4(DAT_020305dc);
  sub_0809C34C();
  sub_08016FB4(DAT_020305e0);
  sub_08016FB4(DAT_02030634);
  sub_080B2414();
  sub_08007218();
  sub_08017024(DAT_02030630);
  sub_08017024(DAT_020305e8);
  sub_08017024(DAT_020305dc);
  sub_08017024(DAT_020305f8);
  sub_08017024(DAT_020305e0);
  sub_08017024(DAT_02030634);
  if (*(char *)(param_1 + 1) != '\x01') {
    sub_08008D50(param_1 + 0xdc4);
  }
  sub_0800725C();
  sub_0801708C(DAT_02030630);
  sub_0801708C(DAT_020305e8);
  sub_0801708C(DAT_020305dc);
  sub_0801708C(DAT_02030634);
  iVar3 = param_1 + 0x9a0;
  sub_08017224(DAT_02030630,iVar3);
  sub_08017224(DAT_020305e8,iVar3);
  sub_08017224(DAT_020305dc,iVar3);
  sub_08036F08(iVar3);
  sub_0801713C(DAT_020305f8,iVar3);
  sub_0801713C(DAT_0203062c,iVar3);
  sub_08017224(DAT_02030634,iVar3);
  if (*(char *)(param_1 + 1) != '\x01') {
    sub_08008DCC(iVar3);
  }
  sub_0800502C(iVar3);
  if ((DAT_0202f5b0 != '\0') && ((DAT_030032e1 & 2) == 0)) {
    sub_0800471C(0x29);
  }
  DAT_0202f5b0 = 0;
  return in_lr;
}

