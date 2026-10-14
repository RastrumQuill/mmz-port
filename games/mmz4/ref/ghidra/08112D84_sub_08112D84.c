// sub_08112D84 at 0x08112D84 (thumb)

undefined4 sub_08112D84(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  if (*(char *)(param_1 + 3) == '\0') {
    sub_08002A1C();
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  sVar1 = *(short *)(param_1 + 4) + -2;
  *(short *)(param_1 + 4) = sVar1;
  DAT_03002ec0 = (undefined)sVar1;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (sVar1 == 0) {
    sub_081123F8(param_1);
    DAT_03002ac0 = 0;
    DAT_02000a00 = DAT_02000a00 & 0xc1ff;
    DAT_02000a60 = 0;
    sub_0800243C();
    sub_08112294();
    sub_08112080(param_1,1);
  }
  else {
    iVar2 = param_1 + 0x9a0;
    sub_08003470(iVar2);
    sub_0800560C();
    DAT_0202dc04 = 0;
    local_18[0] = 0;
    sub_081284E4(local_18,&DAT_0202dc10,0x1000008);
    sub_0801F2E0(1);
    sub_0801CA0C(DAT_0202eda0,iVar2);
    sub_0801CA0C(DAT_0202ed8c,iVar2);
    sub_0801CA0C(DAT_0202ed90,iVar2);
    sub_0801CA0C(DAT_0202ed84,iVar2);
    sub_0801C924(DAT_0202edb0,iVar2);
    sub_0803A7E8(iVar2);
    sub_0801C924(DAT_0202ed94,iVar2);
    sub_0801C924(DAT_0202ed9c,iVar2);
    sub_0801CA0C(DAT_0202eda4,iVar2);
    sub_0801F460(1);
    sub_081145DC(param_1);
    sub_0810DE84();
  }
  return in_lr;
}

