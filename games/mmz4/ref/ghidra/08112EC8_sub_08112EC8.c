// sub_08112EC8 at 0x08112EC8 (thumb)

undefined4 sub_08112EC8(int param_1)

{
  undefined uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  if (*(char *)(param_1 + 3) == '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x63a8);
    if ((DAT_0202e8c5 & 1) != 0) {
      sub_0811225C();
    }
    sub_081124AC(param_1);
    sub_08002464();
    *(undefined2 *)(param_1 + 4) = 0;
    uVar1 = sub_08038928(uVar4);
    sub_0802B524(uVar4,uVar1);
    if ((DAT_0202e918 & 0x20) != 0) {
      DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x100;
      sub_08112080(param_1,0x800);
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  iVar3 = param_1 + 0x9a0;
  sub_08003470(iVar3);
  sub_0800560C();
  DAT_0202dc04 = 0;
  local_18[0] = 0;
  sub_081284E4(local_18,&DAT_0202dc10,0x1000008);
  sub_0801F2E0(1);
  sub_0801CA0C(DAT_0202eda0,iVar3);
  sub_0801CA0C(DAT_0202ed8c,iVar3);
  sub_0801CA0C(DAT_0202ed90,iVar3);
  sub_0801CA0C(DAT_0202ed84,iVar3);
  sub_0801C924(DAT_0202edb0,iVar3);
  sub_0803A7E8(iVar3);
  sub_0801C924(DAT_0202ed94,iVar3);
  sub_0801C924(DAT_0202ed9c,iVar3);
  sub_0801CA0C(DAT_0202eda4,iVar3);
  sub_0801F460(1);
  sub_081145DC(param_1);
  sub_0810DE84();
  sVar2 = *(short *)(param_1 + 4) + 2;
  *(short *)(param_1 + 4) = sVar2;
  DAT_03002ec0 = (undefined)sVar2;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (sVar2 == 0x20) {
    *(undefined2 *)(param_1 + 0x1edc) = 0;
    if ((DAT_0202e8b8 & 0x80) == 0) {
      sub_08002A50();
    }
    else {
      sub_08002BCC(0x25);
      sub_08002BCC(0x26);
    }
    sub_08112080(param_1,0x400);
  }
  return in_lr;
}

