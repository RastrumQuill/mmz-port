// sub_08122A04 at 0x08122A04 (thumb)

undefined4 sub_08122A04(int param_1)

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
    if (*(short *)(param_1 + 4) < 0x21) goto LAB_08122a5c;
    *(short *)(param_1 + 4) = sVar2 + -1;
    bVar1 = (char)sVar2 - 0x21;
    sVar2 = 0xff;
    DAT_03002ec2 = bVar1;
  }
  DAT_03002ec0 = bVar1 & (byte)sVar2;
  DAT_03002ec1 = DAT_03002ec0;
LAB_08122a5c:
  *(int *)(param_1 + 0x1ed8) = *(int *)(param_1 + 0x1ed8) + 1;
  sub_08003470(param_1 + 0x9a0);
  DAT_0202dc04 = 0;
  local_28[0] = 0;
  sub_081284E4(local_28,&DAT_0202dc10,0x1000008);
  iVar3 = sub_08128884(param_1,*(undefined4 *)(&DAT_0888651c + (uint)*(byte *)(param_1 + 1) * 4));
  if (iVar3 == 0) {
    *(undefined *)(param_1 + 2) = 2;
  }
  else if ((*(char *)(param_1 + 0xde4) == '\x01') && ((DAT_02000764 & 8) != 0)) {
    sub_0810DF3C(0xe6);
    *(undefined2 *)(param_1 + 6) = 1;
    *(undefined *)(param_1 + 2) = 3;
    *(undefined *)(param_1 + 3) = 0;
  }
  uVar4 = (uint)DAT_02000c82;
  uVar5 = uVar4 * 0x18 & 0xffffffe0;
  sub_081284E4(&DAT_02000c84,&DAT_02000f84,uVar5 >> 2);
  uVar4 = uVar4 * 0x18 & 0x1f;
  if (uVar4 != 0) {
    sub_081284E8((int)&DAT_02000c84 + uVar5,(int)&DAT_02000f84 + uVar5,uVar4 >> 2 | 0x4000000);
  }
  DAT_02000c83 = DAT_02000c82;
  DAT_02000c82 = 0;
  sub_0801C7CC(DAT_0202eda0);
  sub_0801C7CC(DAT_0202ed90);
  sub_0801C79C(DAT_0202ed84);
  sub_080BCF88();
  sub_0801C79C(DAT_0202ed88);
  sub_0801C79C(DAT_0202eda4);
  sub_080D07EC();
  sub_0800560C();
  sub_0801C80C(DAT_0202eda0);
  sub_0801C80C(DAT_0202ed90);
  sub_0801C80C(DAT_0202ed84);
  sub_0801C80C(DAT_0202ed94);
  sub_0801C80C(DAT_0202ed88);
  sub_0801C80C(DAT_0202eda4);
  sub_08006C58(param_1 + 0xdc4);
  if (*(char *)(param_1 + 0xde4) == '\x01') {
    sub_08005650();
  }
  sub_0801C874(DAT_0202eda0);
  sub_0801C874(DAT_0202ed90);
  sub_0801C874(DAT_0202ed84);
  sub_0801C874(DAT_0202eda4);
  param_1 = param_1 + 0x9a0;
  sub_0801CA0C(DAT_0202eda0,param_1);
  sub_0801CA0C(DAT_0202ed90,param_1);
  sub_0801CA0C(DAT_0202ed84,param_1);
  sub_0803A7E8(param_1);
  sub_0801C924(DAT_0202ed94,param_1);
  sub_0801C924(DAT_0202ed9c,param_1);
  sub_0801CA0C(DAT_0202eda4,param_1);
  sub_0810DE84();
  sub_08006D2C(param_1);
  sub_08003420(param_1);
  if ((DAT_0202dbe0 != '\0') && ((DAT_030032e1 & 2) == 0)) {
    sub_08002B10(0x29);
  }
  DAT_0202dbe0 = 0;
  return in_lr;
}

