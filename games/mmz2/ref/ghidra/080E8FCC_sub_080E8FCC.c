// sub_080E8FCC at 0x080E8FCC (thumb)

undefined8 sub_080E8FCC(int param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x10);
  uVar3 = sub_08037A60(iVar6);
  uVar3 = uVar3 & 0xff;
  iVar7 = 0;
  do {
    uVar4 = sub_08037AAC(iVar6,uVar3);
    uVar3 = uVar3 - 1;
    iVar7 = iVar7 + (uint)*(byte *)(iVar6 + 0x206 + (uVar4 & 0xff));
  } while (uVar3 != 0);
  sVar1 = *(short *)(iVar6 + 0xa4);
  uVar2 = sub_08022AF0(iVar6);
  if ((sVar1 < (short)(uVar2 & 0xff)) && (iVar7 != 0)) {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 5) = 0;
    sub_080DA938(param_1,4);
    sub_080032EC(1);
    uVar5 = 1;
  }
  else {
    *(undefined *)(param_1 + 1) = 0;
    sub_080032EC(4);
    uVar5 = 0;
  }
  return CONCAT44(in_lr,uVar5);
}

