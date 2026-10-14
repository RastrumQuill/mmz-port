// sub_080C38A4 at 0x080C38A4 (thumb)

undefined8 sub_080C38A4(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x10);
  uVar5 = (uint)*(byte *)(iVar4 + 0x17b);
  iVar6 = 0;
  do {
    uVar5 = uVar5 - 1;
    iVar6 = (uint)*(byte *)(iVar4 + 0x17c + uVar5) + iVar6;
  } while (uVar5 != 0);
  sVar1 = *(short *)(iVar4 + 0x8c);
  uVar2 = sub_0801C5CC(iVar4);
  if ((sVar1 < (short)(uVar2 & 0xff)) && (iVar6 != 0)) {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 5) = 0;
    sub_080B98D0(param_1,4);
    sub_08001EAC(0x29);
    uVar3 = 1;
  }
  else {
    *(undefined *)(param_1 + 1) = 0;
    sub_08001EAC(0xc1);
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}

