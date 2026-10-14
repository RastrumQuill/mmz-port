// sub_080C6248 at 0x080C6248 (thumb)

undefined4 sub_080C6248(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  puVar3 = (undefined *)(param_1 + 0x9e5);
  sVar2 = sub_080B4A14(&DAT_0202b5a0,*puVar3);
  if (sVar2 < 0) {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 0x9e6) = (char)sVar2;
    sub_080B9920(param_1,1,*puVar3);
    sub_080BB4D0(1,param_1,*puVar3);
    sub_080BB978(1,param_1,*puVar3);
    sub_080014E8(&DAT_085323ac,0x10000);
    sub_0800179C(&DAT_085323b8,0x200);
    uVar1 = sub_080B4DA4(&DAT_0202b5a0,*puVar3,*(undefined *)(param_1 + 0x9e6));
    sub_080C673C(&DAT_0202b5a0,uVar1);
    sub_08001EAC(0x29);
  }
  return in_lr;
}

